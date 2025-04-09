## localization_node
#### But : Fusionner les données GNSS et IMU via un filtre de Kalman pour estimer :

- position (x, y)
- cap (orientation)

Souscrit :

- /fix (GPS) (sensor_msgs/NavSatFix)
- /rpy (IMU) (icm20948_driver/RPY)

Publie :

- /position (std_msgs/Float32MultiArray) → [x, y, yaw]

## mission_node
#### But : Générer les waypoints à atteindre selon une mission prédéfinie (ex: tour de piste).

Souscrit :

- /position

Publie :

- /current_waypoints (std_msgs/Float32MultiArray) → Liste [x1, y1, x2, y2] de la position du point GPS précédant et le point GPS à atteindre (on peut ensuite tracer la droite entre ces deux points)

## control_node
#### But : Calculer la commande de déplacement pour atteindre le waypoint courant.

Souscrit :
- /position
- /current_waypoints

Publie :
- /cmd_vel (geometry_msgs/Twist)