from icm20948_driver.msg import RPY
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix
from geometry_msgs.msg import Vector3
from std_msgs.msg import Float32MultiArray
from pyproj import Proj
import numpy as np

class LocalizationNode(Node):

    def projection(self,lat,long, lat_m = 48.41849, long_m = -4.47391):# Format degrés decimaux
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
    
    def __init__(self):
        super().__init__('localization_node')

        self.get_logger().info('Initialisation du noeud de localisation')
        
        # Initialisation des abonnements
        self.create_subscription(NavSatFix, '/fix', self.gnss_callback, 10)
        self.create_subscription(RPY, '/rpy', self.imu_callback, 10)

        # Publication périodique
        self.timer = self.create_timer(0.01, self.publish_position) 
        self.publisher_ = self.create_publisher(Float32MultiArray, '/position', 10)
        
        # Coordonnées de référence pour le centre de la scène (degrès décimaux) ###### A adapter !//
        self.lat_ref = 48.41849
        self.lon_ref = -4.47391
        self.alt_ref = 20.0
        self.ref_x, self.ref_y = self.projection(self.lat_ref, self.lon_ref)

        # Initialisation du filtre de Kalman
        self.x = np.array([[0.0], [0.0], [0.0]])  # [x, y, cap]
        self.Gamma = np.eye(3) * 1.0
        self.u = np.zeros((3, 1))  # Commande
        self.A = np.eye(3)  # Modèle de transition
        self.C = np.eye(3)  # Observation directe
        self.Gamma_alpha = np.eye(3) * 0.1  # Bruit de processus
        self.Gamma_beta = np.eye(3) * 0.5  # Bruit de mesure
        
    def gnss_callback(self, msg: NavSatFix):
        x_m, y_m = self.projection(msg.latitude, msg.longitude)
        x = x_m - self.ref_x
        y = y_m - self.ref_y
        self.x[0, 0] = x
        self.x[1, 0] = y
        # Mise à jour avec Kalman (on corrige avec GNSS)
        #y_mesure = np.array([[x], [y], [self.x[2, 0]]])  # On garde l'ancien cap
        #self.x, self.Gamma = self.kalman(self.x, self.Gamma, self.u, y_mesure, self.Gamma_alpha, self.Gamma_beta, self.A, self.C)
        self.publish_position()
    
    def imu_callback(self, msg: RPY):
        yaw = msg.yaw
        def sawtooth(angle):
            return (angle + np.pi) % (2 * np.pi) - np.pi
        yaw = sawtooth(yaw)
        self.x[2, 0] = yaw
        # Mise à jour avec Kalman (on corrige uniquement le cap)
        #y_mesure = np.array([[self.x[0, 0]], [self.x[1, 0]], [yaw]])  # On garde la position précédente
        #self.x, self.Gamma = self.kalman(self.x, self.Gamma, self.u , y_mesure, self.Gamma_alpha, self.Gamma_beta, self.A, self.C)
        self.publish_position()
    
    def publish_position(self):
        msg = Float32MultiArray()
        msg.data = [self.x[0, 0], self.x[1, 0], self.x[2, 0]]  # [x, y, cap]
        self.publisher_.publish(msg)
        #self.get_logger().info(f'Position publiée: x = {self.x[0, 0]}, y = {self.x[1, 0]}, cap = {self.x[2, 0]}')

    def kalman_predict(self, xup,Gup,u,Γα,A):
        Γ1 = A @ Gup @ A.T + Γα
        x1 = A @ xup + u    
        return(x1,Γ1)    

    def kalman_correc(self, x0,Γ0,y,Γβ,C):
        S = C @ Γ0 @ C.T + Γβ        
        K = Γ0 @ C.T @ np.linalg.inv(S)           
        ytilde = y - C @ x0        
        Gup = (np.eye(len(x0))-K @ C) @ Γ0 
        xup = x0 + K@ytilde
        return(xup,Gup) 
        
    def kalman(self, x0,Γ0,u,y,Γα,Γβ,A,C):
        x1,Γ1= self.kalman_predict(xup,Gup,u,Γα,A)
        xup,Gup = self.kalman_correc(x0,Γ0,y,Γβ,C)
        return(x1,Γ1)     



def main(args=None):
    rclpy.init(args=args)
    node = LocalizationNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
