from icm20948_driver.msg import RPY
import rclpy
from rclpy.node import Node
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

        # Événement pour indiquer que l'étape est terminée
        self.step_done_event = threading.Event()

        # Temps pour chaque étape en secondes (par exemple 10 secondes)
        self.step_duration = 10.0
        self.step_timer = None

        # Démarrer la calibration après 1 seconde
        self.calibration_timer = self.create_timer(1.0, self.start_calibration)

    def start_step_timer(self, prompt):
        """ Démarre un timer pour chaque étape avec un compte à rebours. """
        self.get_logger().info(f"Début de l'étape : {prompt}")
        self.get_logger().info(f"Temps restant : {self.step_duration} secondes")

        # Démarrer le compte à rebours pour l'étape
        self.step_timer = self.create_timer(1.0, self.update_step_timer)

    def update_step_timer(self):
        """ Met à jour le compte à rebours de l'étape en cours. """
        self.step_duration -= 1.0
        if self.step_duration <= 0:
            self.get_logger().info("Étape terminée !")
            self.step_done_event.set()  # Signale la fin de l'étape
            self.step_timer.cancel()  # Annule le timer

    def wait_for_next_step(self, prompt):
        """
        Affiche une consigne et attend la fin du compte à rebours pour passer à l'étape suivante.
        """
        self.get_logger().info(prompt)
        self.step_done_event.clear()  # Réinitialise l'événement
        self.start_step_timer(prompt)  # Démarre le timer de l'étape

        # Attente jusqu'à la fin du compte à rebours
        while not self.step_done_event.wait(timeout=0.1):
            rclpy.spin_once(self, timeout_sec=0.1)
        self.get_logger().info("Étape terminée, passage à l'étape suivante.")

    def imu_callback(self, msg):
        """ Callback pour récupérer les messages IMU de type RPY. """
        self.rpy = np.array([msg.roll, msg.pitch, msg.yaw])

    def collect_average(self, n=10):
        """ Collecte n mesures RPY et renvoie leur moyenne. """
        samples = []
        for _ in range(n):
            while self.rpy is None:
                time.sleep(0.01)
            samples.append(self.rpy.copy())
            time.sleep(0.1)
        avg = np.mean(samples, axis=0)
        self.get_logger().info(f"Moyenne calculée sur {n} mesures: {avg}")
        return avg

    def calib_mag(self):
        """ Réalise la calibration magnétique via 4 orientations différentes. """
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
        """ Démarre la procédure de calibration. """
        self.destroy_timer(self.calibration_timer)  # Arrête le timer initial
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
