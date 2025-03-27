import math
import numpy as np
def sysCall_init():
    sim = require('sim')
    simROS2 = require('simROS2')
    global publisher_rpy, ref, last_pub_time

    # Récupérer le handle de l'objet de référence (exemple avec le gyroscope)
    ref = sim.getObject('/IMU')  # Adapte le nom de l'objet si nécessaire

    # Création du publisher ROS2 pour publier sur le topic /rpy
    publisher_rpy = simROS2.createPublisher('/rpy', 'geometry_msgs/msg/Vector3')

    # Initialisation du temps de la dernière publication
    last_pub_time = sim.getSimulationTime()

def sysCall_actuation():
    sim = require('sim')
    simROS2 = require('simROS2')
    global publisher_rpy, ref, last_pub_time

    simTime = sim.getSimulationTime()
    
    # Publication toutes les 1 seconde
    if simTime - last_pub_time >= 1.0:
        last_pub_time = simTime

        # Récupérer l'orientation actuelle (angles d'Euler) du gyroscope ou de l'objet
        rpy = sim.getObjectOrientation(ref, -1)  # Donne [roll, pitch, yaw]

        # Inverser yaw (si tu souhaites le cap au lieu du yaw)
        cap = -rpy[2] + np.pi/2 # Le cap correspond au yaw inverse dans un cadre de robot

        # Construction du header avec le timestamp
        secs = int(simTime)
        nanosecs = int((simTime - secs) * 1e9)
        header = {
            'stamp': {
                'sec': secs,
                'nanosec': nanosecs
            },
            'frame_id': 'gyro_frame'
        }

        # Construction du message pour /rpy
        rpy_msg = {
            'x': rpy[0],  # Roulis
            'y': rpy[1],  # Tangage
            'z': cap      # Cap (ou yaw inversé)
        }

        # Publication du message ROS2
        simROS2.publish(publisher_rpy, rpy_msg)

        # Journalisation de la publication
        sim.addLog(sim.verbosity_scriptinfos,
                   "RPY publié: roll = {:.4f}, pitch = {:.4f}, cap = {:.4f}".format(rpy[0], rpy[1], cap))

def sysCall_cleanup():
    simROS2 = require('simROS2')
    global publisher_rpy
    simROS2.shutdownPublisher(publisher_rpy)
