import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
import numpy as np

class MissionNode(Node):
    def __init__(self):
        super().__init__('mission_node')
        self.get_logger().info('Initialisation du noeud de mission')
        # Liste des waypoints (exemple : 10 points sur une piste)
        def projection(lat,long, lat_m = 48.41849, long_m = -4.47391):# Format degrés decimaux
            """
            Convertit les coordonnées GPS (latitude, longitude en format degrés décimaux) 
            en coordonnées cartésiennes locales par rapport à un point M défini par
            lat_m et long_m (en degrés décimaux), en ne retournant que x et y.

            Input: lat (float), long (float), lat_m (float), long_m (float)

            Output: p (np.array)
            """
            rho = 6371009.7714
            # Conversion des latitudes et longitudes en radians
            lat_m_rad = np.radians(lat_m)
            long_m_rad = np.radians(long_m)
            lat_rad = np.radians(lat)
            long_rad = np.radians(long)
            # Conversion des coordonnées du point M (centre) en cartésiennes 2D (x_m, y_m)
            x_m = rho * np.cos(lat_m_rad) * np.cos(long_m_rad)
            y_m = rho * np.cos(lat_m_rad) * np.sin(long_m_rad)
            # Conversion des coordonnées du point P en cartésiennes 2D (x_p, y_p)
            x_p = rho * np.cos(lat_rad) * np.cos(long_rad)
            y_p = rho * np.cos(lat_rad) * np.sin(long_rad)
            # Calcul des coordonnées relatives par rapport au point M
            x = x_p - x_m
            y = y_p - y_m
            p = np.array([x,y])
            return p
        self.waypoints_gps = np.array([[48.418302,-4.473309],[48.418666, -4.473308],[48.418733, -4.473367],[48.418784,-4.473528],[48.418746,-4.473695],[48.418660, -4.473761],[48.418316,-4.473759],[ 48.418228, -4.473696],[48.418182,-4.473556],[48.418226,-4.473373]])
        self.waypoints = np.array([projection(self.waypoints_gps[i][0],self.waypoints_gps[i][1]) for i in range(len(self.waypoints_gps))])
        self.get_logger().info(f'Waypoints: {self.waypoints}')

        self.previous_wp_idx = 0
        self.current_wp_idx = 1  # Index du waypoint actuel
        self.threshold_distance = 2.0  # Distance pour changer de waypoint

        # Souscription à la position du robot
        self.create_subscription(Float32MultiArray, '/position', self.position_callback, 10)

        # Publication du waypoint actuel
        self.wp_publisher = self.create_publisher(Float32MultiArray, '/current_waypoints', 10)

        self.publish_waypoint()

    def position_callback(self, msg):
        # Récupération de la position actuelle
        x, y, _ = msg.data
        P = np.array([x, y])
        
        # Définition du waypoint actuel (B) et du waypoint précédent (A)
        A = np.array(self.waypoints[self.previous_wp_idx])
        B = np.array(self.waypoints[self.current_wp_idx])
        
        # Calcul de la distance actuelle au waypoint (pour info)
        distance = np.linalg.norm(B - P)
        self.get_logger().info(f'Distance au waypoint: {distance}')
        
        # Vérification de la condition : si le produit scalaire (B-A)ᵀ(B-P) est négatif,
        # cela signifie que le robot a dépassé le waypoint B
        if np.dot(B - A, B - P) < 0:
            self.previous_wp_idx = self.current_wp_idx
            self.current_wp_idx += 1
            if self.current_wp_idx >= len(self.waypoints):
                self.current_wp_idx = 0  # Boucle sur les waypoints
        
        self.publish_waypoint()


    def publish_waypoint(self):
        msg = Float32MultiArray()
        msg.data = [self.waypoints[self.current_wp_idx][0], self.waypoints[self.current_wp_idx][1],self.waypoints[self.previous_wp_idx][0], self.waypoints[self.previous_wp_idx][1]]
        self.wp_publisher.publish(msg)
        self.get_logger().info(f'Waypoint précédent: Index {self.previous_wp_idx}, Position {msg.data[2:]}')
        self.get_logger().info(f'Waypoint actuel: Index {self.current_wp_idx}, Position {msg.data[:2]}')


def main(args=None):
    rclpy.init(args=args)
    node = MissionNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
