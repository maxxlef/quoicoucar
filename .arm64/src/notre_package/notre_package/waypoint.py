import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
import numpy as np

class MissionNode(Node):
    def __init__(self):
        super().__init__('mission_node')

        # Liste des waypoints (exemple : 10 points sur une piste)
        self.waypoints = np.array([
            [0, 0], [10, 0], [20, 5], [30, 10], [40, 20], 
            [30, 30], [20, 35], [10, 40], [0, 30], [-5, 15]
        ])
        self.previous_wp_idx = 0
        self.current_wp_idx = 1  # Index du waypoint actuel
        self.threshold_distance = 2.0  # Distance pour changer de waypoint

        # Souscription à la position du robot
        self.create_subscription(Float32MultiArray, '/position', self.position_callback, 10)

        # Publication du waypoint actuel
        self.wp_publisher = self.create_publisher(Float32MultiArray, '/current_waypoint', 10)

        self.publish_waypoint()

    def position_callback(self, msg):
        # Récupération de la position actuelle
        x, y, _ = msg.data

        # Récupération du waypoint actuel
        wp_x, wp_y = self.waypoints[self.current_wp_idx]
        distance = np.sqrt((wp_x - x) ** 2 + (wp_y - y) ** 2)


        # Vérification si on doit passer au waypoint suivant
        if distance < self.threshold_distance:
            self.previous_wp_idx = self.current_wp_idx
            self.current_wp_idx += 1
            if self.current_wp_idx >= len(self.waypoints):
                self.current_wp_idx = 0  # Boucle sur les waypoints
            self.publish_waypoint()

    def publish_waypoint(self):
        msg = Float32MultiArray()
        msg.data = [self.waypoints[self.current_wp_idx][0], self.waypoints[self.current_wp_idx][1],self.waypoints[self.previous_wp_idx][0], self.waypoints[self.previous_wp_idx][1]]
        self.wp_publisher.publish(msg)
        self.get_logger().info(f'Waypoint actuel: Index {self.current_wp_idx}, Position {msg.data}')


def main(args=None):
    rclpy.init(args=args)
    node = MissionNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
