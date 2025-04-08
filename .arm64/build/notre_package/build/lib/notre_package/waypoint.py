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
        self.waypoints_gps = np.array([[48.4182126,-4.4733057],[48.4189047,-4.4734288],[48.4190533,-4.4735468],[48.4191365,-4.4737379],[48.4191748,-4.4740209],[48.4191250,-4.4742710],[48.4190130,-4.4745151],[48.4188840,-4.4745955],[48.4180090,-4.4744329],[48.4178827,-4.4743132],[48.4177879,-4.4740671],[48.4177832,-4.4737640],[48.4178430,-4.4735133],[48.4179852,-4.4733346],[48.4181248,-4.4732876]])
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

def main(args=None):
    rclpy.init(args=args)
    node = MissionNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
