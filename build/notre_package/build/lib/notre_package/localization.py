import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix
from icm20948_driver.msg import RPY
from std_msgs.msg import Float32MultiArray
from pyproj import Proj
import numpy as np

class LocalizationNode(Node):
    def __init__(self):
        super().__init__('localization_node')
        
        # Initialisation des abonnements
        self.create_subscription(NavSatFix, '/fix', self.gnss_callback, 10)
        self.create_subscription(RPY, '/rpy', self.imu_callback, 10)
        
        # Publication de la position fusionnée
        self.publisher_ = self.create_publisher(Float32MultiArray, '/position', 10)
        
        # Transformation des coordonnées
        self.proj_dd_to_meters = Proj("+proj=utm +zone=30, +north +ellps=WGS84 +datum=WGS84 +units=m +no_defs")
        self.ref_lat, self.ref_lon = 48.199015, -3.014798
        self.ref_x, self.ref_y = self.proj_dd_to_meters(self.ref_lon, self.ref_lat)
        
        # Initialisation du filtre de Kalman
        self.x = np.array([[0.0], [0.0], [0.0]])  # [x, y, cap]
        self.Gamma = np.eye(3) * 1.0
        self.u = np.zeros((3, 1))  # Commande
        self.A = np.eye(3)  # Modèle de transition
        self.C = np.eye(3)  # Observation directe
        self.Gamma_alpha = np.eye(3) * 0.1  # Bruit de processus
        self.Gamma_beta = np.eye(3) * 0.5  # Bruit de mesure
        
    def gnss_callback(self, msg: NavSatFix):
        x_m, y_m = self.proj_dd_to_meters(msg.longitude, msg.latitude)
        x = x_m - self.ref_x
        y = y_m - self.ref_y
        self.x[0, 0] = x
        self.x[1, 0] = y
        # Mise à jour avec Kalman (on corrige avec GNSS)
        #y_mesure = np.array([[x], [y], [self.x[2, 0]]])  # On garde l'ancien cap
        #self.x, self.Gamma = self.kalman(self.x, self.Gamma, self.u, y_mesure, self.Gamma_alpha, self.Gamma_beta, self.A, self.C)
        self.publish_position()
    
    def imu_callback(self, msg: RPY):
        yaw = msg.yaw  # Le cap est donné par l'IMU
        self.x[2, 0] = yaw
        # Mise à jour avec Kalman (on corrige uniquement le cap)
        #y_mesure = np.array([[self.x[0, 0]], [self.x[1, 0]], [yaw]])  # On garde la position précédente
        #self.x, self.Gamma = self.kalman(self.x, self.Gamma, self.u , y_mesure, self.Gamma_alpha, self.Gamma_beta, self.A, self.C)
        self.publish_position()
    
    def publish_position(self):
        msg = Float32MultiArray()
        msg.data = [self.x[0, 0], self.x[1, 0], self.x[2, 0]]  # [x, y, cap]
        self.publisher_.publish(msg)

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
