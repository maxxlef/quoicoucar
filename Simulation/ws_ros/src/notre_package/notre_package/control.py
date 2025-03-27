import rclpy
import numpy as np
from rclpy.node import Node
from geometry_msgs.msg import Twist, PoseStamped, PoseArray
from std_msgs.msg import Float32MultiArray

# Faire un suivi de ligne comme en guidage 

class WaypointFollower(Node):
    def __init__(self):
        super().__init__('control_node')
        
        # Publishers
        self.cmd_vel_pub = self.create_publisher(Twist, 'cmd_vel', 10)
        
        # Subscribers
        self.create_subscription(Float32MultiArray, 'position', self.position_callback, 10)
        self.create_subscription(Float32MultiArray, 'current_waypoints', self.waypoints_callback, 10)
        
        self.current_pose = None
        self.waypoints = []
        
        self.timer = self.create_timer(1, self.control_loop)

    def position_callback(self, msg):
        if len(msg.data) >= 3:
            self.current_pose = {
                'x': msg.data[0],
                'y': msg.data[1],
                'yaw': msg.data[2]
            }
    
    def waypoints_callback(self, msg):
        point_A = [msg.data[0], msg.data[1]]
        point_B = [msg.data[2], msg.data[3]]
        self.waypoints = [point_A, point_B]
        

    def control_loop(self):
        if self.current_pose is None or not self.waypoints:
            return

        # Récupérer les points A et B
        A = self.waypoints[0]  # [Ax, Ay]
        B = self.waypoints[1]  # [Bx, By]

        # Etat du robot
        x = self.current_pose['x']
        y = self.current_pose['y']
        yaw = self.current_pose['yaw']

        # Calcul du vecteur de la droite AB et de son angle (phi)
        AB = np.array([B[0] - A[0], B[1] - A[1]])
        phi = -np.arctan2(AB[1], AB[0])
        # Vecteur unitaire de la droite
        n = AB / np.linalg.norm(AB)

        # Calcul de l'erreur latérale (distance signée) du robot par rapport à la droite passant par A
        e = n[0]*(y - A[1]) - n[1]*(x - A[0])
        
        # Correction du cap désiré en fonction de l'erreur latérale (selon la méthode initiale)
        Kp_line = 1 # Gain de correction sur l'erreur latérale
        Kp_steering = 5 # Gain de correction sur l'erreur d'orientation
        heading_desired = phi - Kp_line * np.tanh(e/Kp_steering)  # Cap désiré

        # Fonction pour ramener un angle dans [-pi, pi]
        def sawtooth(angle):
            return (angle + np.pi) % (2 * np.pi) - np.pi

        # Calcul de l'erreur d'orientation (entre le cap désiré et le yaw actuel)
        error_heading = sawtooth(heading_desired - yaw)

        # Pour le contrôle en position, on convertit cette erreur en consigne angulaire pour le servo
        # On utilise un correcteur proportionnel
        servo_angle = -error_heading
        # On limite la consigne aux limites physiques du servo (ici, par exemple, ±30°)
        servo_angle = np.clip(servo_angle, -np.radians(60), np.radians(60))

        # On définit une vitesse linéaire constante (ou adaptable)
        linear_x = 0.2

        # Publication de la vitesse linéaire (commande de déplacement)
        cmd = Twist()
        cmd.angular.z = servo_angle
        cmd.linear.x = linear_x
        self.cmd_vel_pub.publish(cmd)

        self.get_logger().info(f"Waypoint A: {A}, Waypoint B: {B}")
        self.get_logger().info(f"Position actuelle x: {x}, y: {y}, yaw: {yaw}")
        self.get_logger().info(f"Erreur latérale: {e}")
        self.get_logger().info(f"Cap de la droite: {phi}")
        self.get_logger().info(f"Heading desired: {heading_desired}, Erreur: {error_heading}")
        self.get_logger().info(f"Consigne servo (position): {servo_angle}rad")


def main(args=None):
    rclpy.init(args=args)
    node = WaypointFollower()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
