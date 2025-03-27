import math

def sysCall_init():
    sim = require('sim')
    simROS2 = require('simROS2')
    global publisher_rpy, ref, oldTransformationMatrix, last_pub_time

    # Récupérer le handle de l'objet de référence du gyroscope
    ref = sim.getObject('/GYRO')  # Adapte le nom si nécessaire

    # Création du publisher ROS2 pour publier sur le topic /rpy
    # On utilise le message geometry_msgs/msg/Vector3Stamped pour inclure un header
    publisher_rpy = simROS2.createPublisher('/gyro', 'geometry_msgs/msg/Vector3')


    # Sauvegarder la matrice de transformation initiale
    oldTransformationMatrix = sim.getObjectMatrix(ref, -1)

    # Initialisation du temps de la dernière publication
    last_pub_time = sim.getSimulationTime()


def sysCall_actuation():
    sim = require('sim')
    simROS2 = require('simROS2')
    global publisher_rpy, ref, oldTransformationMatrix, last_pub_time

    simTime = sim.getSimulationTime()
    # Publication toutes les 1 seconde
    if simTime - last_pub_time >= 1.0:
        last_pub_time = simTime

        # Récupérer la nouvelle matrice de transformation
        transformationMatrix = sim.getObjectMatrix(ref, -1)

        # Calculer la transformation relative depuis la dernière mise à jour
        oldInverse = sim.getMatrixInverse(oldTransformationMatrix)
        m = sim.multiplyMatrices(oldInverse, transformationMatrix)
        # Obtenir les angles d'Euler (roll, pitch, yaw)
        rpy = sim.getEulerAnglesFromMatrix(m)

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
            'x': rpy[0],
            'y': rpy[1],
            'z': rpy[2]
        }

        # Publication du message
        simROS2.publish(publisher_rpy, rpy_msg)

        # Journalisation de la publication
        sim.addLog(sim.verbosity_scriptinfos,
                   "GYRO publié: roll = {:.4f}, pitch = {:.4f}, yaw = {:.4f}".format(rpy[0], rpy[1], rpy[2]))

        # Mise à jour de la matrice de transformation pour la prochaine itération
        oldTransformationMatrix = sim.copyMatrix(transformationMatrix)


def sysCall_cleanup():
    simROS2 = require('simROS2')
    global publisher_rpy
    simROS2.shutdownPublisher(publisher_rpy)
