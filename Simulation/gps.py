import math
import random

def sysCall_init():
    sim = require('sim')
    simROS2 = require('simROS2')
    global publisher_navsatfix, publisher_navsatstatus, gps_handle
    global lat_ref, lon_ref, alt_ref, last_pub_time

    # Coordonnées de référence pour le centre de la scène
    lat_ref = 48.41849  # Latitude (°)
    lon_ref = -4.47391   # Longitude (°)
    alt_ref = 20.0       # Altitude (m)

    # Initialisation du temps de dernière publication
    last_pub_time = 0  # Temps initialisé à 0

    # Création des publishers pour les topics ROS2
    publisher_navsatfix = simROS2.createPublisher('/fix', 'sensor_msgs/msg/NavSatFix')
    publisher_navsatstatus = simROS2.createPublisher('/NavSatStatus', 'sensor_msgs/msg/NavSatStatus')

    # Récupérer le handle de l'objet GPS dans la scène
    gps_handle = sim.getObject('/GPS')  # Adapte le nom de l'objet si nécessaire

def ned_to_lla(north, east, down):
    """
    Conversion approximative des coordonnées NED (North, East, Down) en LLA (Latitude, Longitude, Altitude)
    en utilisant une approximation plane autour du point de référence.
    """
    EARTH_RADIUS = 6378137.0  # en mètres
    DEG_TO_RAD = math.pi / 180.0
    RAD_TO_DEG = 180.0 / math.pi

    # Calcul des différences en degrés
    dlat = (north / EARTH_RADIUS) * RAD_TO_DEG
    dlon = (east / (EARTH_RADIUS * math.cos(lat_ref * DEG_TO_RAD))) * RAD_TO_DEG

    latitude = lat_ref + dlat
    longitude = lon_ref + dlon
    altitude = alt_ref - down  # down positif => altitude diminue

    # Ajout optionnel de bruit aux mesures
    # noise_std_lat = 0.00001   # bruit en degrés pour la latitude
    # noise_std_lon = 0.00001   # bruit en degrés pour la longitude
    # noise_std_alt = 0.1       # bruit en mètres pour l'altitude

    # latitude += random.gauss(0, noise_std_lat)
    # longitude += random.gauss(0, noise_std_lon)
    # altitude += random.gauss(0, noise_std_alt)

    return latitude, longitude, altitude

def sysCall_actuation():
    sim = require('sim')
    simROS2 = require('simROS2')
    global gps_handle, publisher_navsatfix, publisher_navsatstatus, last_pub_time

    # Vérifier si une seconde s'est écoulée depuis la dernière publication
    simTime = sim.getSimulationTime()
    if simTime - last_pub_time >= 1.0:  # Une seconde écoulée
        last_pub_time = simTime  # Mettre à jour le dernier temps de publication

        # Récupérer la position de l'objet GPS par rapport au monde (-1 = repère absolu)
        pos = sim.getObjectPosition(gps_handle, -1)

        # Dans CoppeliaSim, pos = [x, y, z] où :
        # x correspond à l'Est, y correspond au Nord, et z est vertical (positif vers le haut)
        east = pos[0]
        north = pos[1]
        down = -pos[2]  # On suppose que down = -z

        # Conversion des coordonnées NED en LLA
        lat, lon, alt = ned_to_lla(north, east, down)

    # Récupération du temps de simulation pour le timestamp
        simTime = sim.getSimulationTime()
        secs = int(simTime)  # Partie entière (secondes)
        nanosecs = int((simTime - secs) * 1e9)  # Partie décimale convertie en nanosecondes

        # Construction du message NavSatFix (sous forme de dictionnaire)
        navsatfix_msg = {
            'header': {
                'stamp': {
                    'sec': secs,
                    'nanosec': nanosecs
                },
                'frame_id': 'gps_frame'
            },
            'status': {
                'status': 0,  # 0 = fix
                'service': 1  # 1 = service GPS
            },
            'latitude': lat,
            'longitude': lon,
            'altitude': alt,
            # Covariance optionnelle
        }
        # Construction du message NavSatStatus (sous forme de dictionnaire)
        navsatstatus_msg = {
            'status': 0,                   # 0 = fix
            'service': 1                   # 1 = GPS
        }

        # Publication des messages sur les topics ROS2 correspondants
        simROS2.publish(publisher_navsatfix, navsatfix_msg)
        simROS2.publish(publisher_navsatstatus, navsatstatus_msg)

        # Journalisation de la publication
        sim.addLog(sim.verbosity_scriptinfos,
                "GPS publié: lat = {:.6f}, lon = {:.6f}, alt = {:.2f}".format(lat, lon, alt))

def sysCall_cleanup():
    simROS2 = require('simROS2')
    global publisher_navsatfix, publisher_navsatstatus
    simROS2.shutdownPublisher(publisher_navsatfix)
    simROS2.shutdownPublisher(publisher_navsatstatus)
