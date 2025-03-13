import rclpy
import numpy as np
from rclpy.node import Node
from geometry_msgs.msg import Twist, PoseStamped, PoseArray
from std_msgs.msg import Float32MultiArray


class WaypointFollower(Node):
    def __init__(self):
        super().__init__('waypoint_follower')
        
        # Publishers
        self.cmd_vel_pub = self.create_publisher(Twist, 'cmd_vel', 10)
        
        # Subscribers
        self.create_subscription(Float32MultiArray, 'fused_pose', self.fused_pose_callback, 10)
        self.create_subscription(PoseArray, 'waypoints', self.waypoints_callback, 10)
        
        self.current_pose = None
        self.waypoints = []
        
        self.timer = self.create_timer(0.1, self.control_loop)

    def fused_pose_callback(self, msg):
         if len(msg.data) >= 3:
            self.current_pose = {
                'x': msg.data[0],
                'y': msg.data[1],
                'yaw': msg.data[2]
            }

    def waypoints_callback(self, msg):
        self.waypoints = msg.poses

    def control_loop(self):
        if self.current_pose is None or not self.waypoints:
            return
        

        # Se dirige vers le premier waypoint
        target = self.waypoints[0].position
        current_x = self.current_pose['x']
        current_y = self.current_pose['y']
        current_cap = self.current_pose['yaw']
        
        #Gestion de la vitesse d'avance
        vmax= 1
        vmin= 0.3
        coef= 1
        middle= 3

        distance = ((target.x - current_x) ** 2 + (target.y - current_y) ** 2) ** 0.5
        vitesse = (vmax - vmin) * (0.5 * (1 - np.tanh(coef * (middle - distance)))) + vmin

        cmd = Twist()
        cmd.linear.x = vitesse

        #Gestion de la gestion de l'angle
        kd= 1

        desired_yaw = np.arctan2(target.y - current_y, target.x - current_x)
        yaw_error = desired_yaw - current_cap
        yaw_error = np.arctan2(np.sin(yaw_error), np.cos(yaw_error))  # Normaliser entre -pi et pi

        vit_angul=kd*yaw_error

        cmd.angular.z = vit_angul  # À améliorer avec un contrôle proportionnel
        
        # Publier les commandes moteurs 
        self.cmd_vel_pub.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    node = WaypointFollower()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
