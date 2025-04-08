from icm20948_driver.msg import RPY
import rclpy
from rclpy.node import Node
from std_srvs.srv import Trigger
import numpy as np
import time
import threading

class CalibrationNode(Node):
    def __init__(self):
        super().__init__('calibration_node')
        self.get_logger().info('Initialisation du noeud de calibration')
        self.rpy = None  # Dernière mesure reçue

        # Abonnement pour récupérer les messages RPY
        self.create_subscription(RPY, '/rpy', self.imu_callback, 10)

        # Service pour passer à l'étape suivante
        self.create_service(Trigger, 'next_step', self.next_step_callback)

        # Timer pour lancer la calibration
        self.calibration_timer = self.create_timer(1.0, self.start_calibration)

        # Paramètres pour le timer de décompte
        self.step_duration = 10  # Durée du décompte en secondes
        self.timer_event = threading.Event()

    def next_step_callback(self, request, response):
        """Callback du service pour passer à l'étape suivante."""
        self.get_logger().info("Commande de passage à l'étape suivante reçue.")
        response.success = True
        response.message = "Étape suivante validée."
        return response

    def wait_for_next_step(self, prompt):
        """
        Affiche une consigne et attend que le timer se termine avant de passer à l'étape suivante.
        """
        self.get_logger().info(prompt)
        self.get_logger().info(f"Décompte pour passer à l'étape suivante ({self.step_duration} secondes)...")

        # Décompte avec mise à jour toutes les secondes
        for t in range(self.step_duration, 0, -1):
            self.get_logger().info(f"Temps restant : {t}s")
            time.sleep(1)

        self.get_logger().info("Décompte terminé, passage à l'étape suivante.")

    def imu_callback(self, msg):
        """
        Callback pour récupérer le message IMU de type RPY.
        """
        self.rpy = np.array([msg.roll, msg.pitch, msg.yaw])

    def collect_average(self, n=10):
        """
        Collecte n mesures RPY et renvoie leur moyenne.
        """
        samples = []
        for _ in range(n):
            # On attend que la mesure soit disponible
            while self.rpy is None:
                time.sleep(0.01)
            samples.append(self.rpy.copy())
            time.sleep(0.1)
        avg = np.mean(samples, axis=0)
        self.get_logger().info(f"Moyenne calculée sur {n} mesures: {avg}")
        return avg

    def calib_mag(self):
        """
        Réalise la calibration magnétique via 4 orientations différentes.
        """
        self.get_logger().info("### Début de la calibration de la boussole ###")

        self.wait_for_next_step("Placez le bateau vers le Nord.")
        x_nord = self.collect_average()
        self.get_logger().info(f"Mesure Nord prise : {x_nord}")

        self.wait_for_next_step("Placez le bateau vers le Sud.")
        x_sud = self.collect_average()
        self.get_logger().info(f"Mesure Sud prise : {x_sud}")

        self.wait_for_next_step("Placez le bateau vers l'Ouest.")
        x_west = self.collect_average()
        self.get_logger().info(f"Mesure Ouest prise : {x_west}")

        self.wait_for_next_step("Placez le bateau vers le Haut.")
        x_up = self.collect_average()
        self.get_logger().info(f"Mesure Haut prise : {x_up}")

        # Calcul du biais de la boussole
        b = -0.5 * (x_nord + x_sud)
        self.get_logger().info(f"Biais calculé (b_mag) : {b}")

        # Paramètres théoriques de la boussole
        B = 46e-6  # Champ magnétique en Tesla
        I = 64 * np.pi / 180  # Inclinaison en radians

        # Vecteurs théoriques
        y_nord = np.array([B * np.cos(I), 0, -B * np.sin(I)])
        y_west = np.array([0, -B * np.cos(I), -B * np.sin(I)])
        y_up   = np.array([-B * np.sin(I), 0, -B * np.cos(I)])

        # Constitution de la matrice Y et calcul de son inverse
        Y = np.column_stack([y_nord, y_west, y_up])
        Y_inv = np.linalg.inv(Y)

        # Correction des mesures
        x_nord_corr = x_nord + b
        x_west_corr = x_west + b
        x_up_corr   = x_up + b

        X = np.column_stack([x_nord_corr, x_west_corr, x_up_corr])

        # Calcul de la matrice de calibration A
        A = np.dot(X, Y_inv)
        self.get_logger().info(f"Matrice A (mag) calculée :\n{A}")
        return b, A

    def start_calibration(self):
        """
        Démarre la procédure de calibration.
        Le timer est détruit pour ne lancer la calibration qu'une seule fois.
        """
        # Arrêt du timer pour ne lancer la calibration qu'une seule fois
        self.destroy_timer(self.calibration_timer)
        self.get_logger().info("Démarrage de la calibration magnétique...")

        b_mag, A_mag = self.calib_mag()
        np.savetxt("b_mag.txt", b_mag)
        np.savetxt("A_mag.txt", A_mag)
        self.get_logger().info("Calibration magnétique terminée et sauvegardée dans 'b_mag.txt' et 'A_mag.txt'.")
        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    node = CalibrationNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Interruption par l'utilisateur...")
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
