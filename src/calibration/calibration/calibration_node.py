from icm20948_driver.msg import RPY
import rclpy
from rclpy.node import Node
import numpy as np
import time

class CalibrationNode(Node):
    def __init__(self):
        super().__init__('calibration_node')
        self.get_logger().info('Initialisation du noeud de calibration')
        # Abonnement pour récupérer les messages RPY
        self.create_subscription(RPY, '/rpy', self.imu_callback, 10)
        self.rpy = None  # dernière mesure reçue
        # Démarrage de la calibration après un court délai pour s'assurer de la réception
        self.create_timer(1.0, self.start_calibration)

    def imu_callback(self, msg):
        """
        Callback pour récupérer le message IMU de type RPY.
        """
        # Stockage des mesures sous forme de tableau numpy [roll, pitch, yaw]
        self.rpy = np.array([msg.roll, msg.pitch, msg.yaw])

    def collect_average(self, n=10):
        """
        Collecte n mesures RPY et renvoie la moyenne.
        """
        samples = []
        for i in range(n):
            # Attente active tant qu'une mesure est disponible
            while self.rpy is None:
                time.sleep(0.01)
            samples.append(self.rpy.copy())
            time.sleep(0.1)
        avg = np.mean(samples, axis=0)
        self.get_logger().info(f"Moyenne calculée sur {n} mesures: {avg}")
        return avg

    def calib_mag(self):
        """
        Calibration magnétique inspirée du code fourni.
        """
        self.get_logger().info("### Début de la calibration de la boussole ###")
        
        input("Placez le bateau vers le Nord, puis appuyez sur Entrée.")
        x_nord = self.collect_average()
        self.get_logger().info(f"Mesure Nord prise : {x_nord}")

        input("Placez le bateau vers le Sud, puis appuyez sur Entrée.")
        x_sud = self.collect_average()
        self.get_logger().info(f"Mesure Sud prise : {x_sud}")

        input("Placez le bateau vers l'Ouest, puis appuyez sur Entrée.")
        x_west = self.collect_average()
        self.get_logger().info(f"Mesure Ouest prise : {x_west}")

        input("Placez le bateau vers le Haut, puis appuyez sur Entrée.")
        x_up = self.collect_average()
        self.get_logger().info(f"Mesure Haut prise : {x_up}")

        # Calcul du biais (b)
        b = -0.5 * (x_nord + x_sud)
        self.get_logger().info(f"Biais calculé (b_mag) : {b}")

        # Paramètres théoriques de la boussole
        B = 46e-6  # champ magnétique en Tesla
        I = 64 * np.pi / 180  # inclinaison en radians

        # Vecteurs théoriques
        y_nord = np.array([B * np.cos(I), 0, -B * np.sin(I)])
        y_west = np.array([0, -B * np.cos(I), -B * np.sin(I)])
        y_up   = np.array([-B * np.sin(I), 0, -B * np.cos(I)])

        # Matrice Y composée des vecteurs théoriques
        Y = np.column_stack([y_nord, y_west, y_up])
        Y_inv = np.linalg.inv(Y)

        # Correction des mesures
        x_nord_corr = x_nord + b
        x_west_corr = x_west + b
        x_up_corr   = x_up + b
        X = np.column_stack([x_nord_corr, x_west_corr, x_up_corr])

        # Calcul de la matrice de calibration A pour la boussole
        A = np.dot(X, Y_inv)
        self.get_logger().info(f"Matrice A (mag) calculée :\n{A}")
        return b, A

    def start_calibration(self):
        """
        Lancement de la séquence de calibration.
        Une fois terminé, les matrices et biais sont sauvegardés dans des fichiers txt.
        """
        # On annule le timer pour ne lancer la calibration qu'une seule fois.
        self.destroy_timer(self.timers[0]) if hasattr(self, 'timers') and self.timers else None

        self.get_logger().info("Démarrage de la calibration...")
        # Calibration magnétique
        b_mag, A_mag = self.calib_mag()
        # Enregistrement des résultats de la calibration magnétique
        np.savetxt("b_mag.txt", b_mag)
        np.savetxt("A_mag.txt", A_mag)
        self.get_logger().info("Calibration magnétique sauvegardée dans b_mag.txt et A_mag.txt.")

        self.get_logger().info("Calibration terminée. Vous pouvez récupérer les fichiers de calibration.")
        # On peut ensuite arrêter le nœud si la calibration est unique
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
