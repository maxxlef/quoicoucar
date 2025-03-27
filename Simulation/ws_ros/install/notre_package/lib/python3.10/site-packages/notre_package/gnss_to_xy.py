import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix
from std_msgs.msg import Float32MultiArray
import numpy as np
from pyproj import Proj 

class GNSSConverter(Node):
    def __init__(self):
        super().__init__('gnss_to_xy')

        # Point de référence (latitude, longitude) - à modifier selon le lieu
        self.lat_ref = 48.199014999999996
        self.lon_ref = -3.0147983333333336

        # Définition de la projection UTM
        self.proj_dd_to_meters = Proj("+proj=utm +zone=30 +north +ellps=WGS84 +datum=WGS84 +units=m +no_defs")

        # Convertir le point de référence en mètres
        self.x_ref, self.y_ref = self.proj_dd_to_meters(self.lon_ref, self.lat_ref)

        # Subscriber aux données GNSS
        self.subscription = self.create_subscription(
            NavSatFix,
            'fix',
            self.gnss_callback,
            10
        )

        # Publisher des coordonnées (x, y)
        self.publisher = self.create_publisher(Float32MultiArray, 'position_xy', 10)

        self.get_logger().info("Node GNSS → XY lancé.")

    def gnss_callback(self, msg):
        if msg.status.status < 0:
            self.get_logger().warn("Signal GPS invalide, aucune mise à jour de position.")
            return

        lat, lon = msg.latitude, msg.longitude

        # Convertir en mètres par rapport au point de référence
        x, y = self.proj_dd_to_meters(lon, lat)
        x -= self.x_ref
        y -= self.y_ref

        # Publier les coordonnées (x, y)
        pos_msg = Float32MultiArray()
        pos_msg.data = [x, y]
        self.publisher.publish(pos_msg)

        self.get_logger().info(f"Position transformée : x={x:.2f}, y={y:.2f}")

def main(args=None):
    rclpy.init(args=args)
    node = GNSSConverter()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
