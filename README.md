# voiture2A-ros

## Structure des fichiers

```
├── README.md
├── build/
├── docker/
│   ├── build_arm.sh
│   ├── build_x86_64.sh
│   └── run_docker_build.sh
├── install/
├── log/
├── Simulation/
│   ├── bike_control.py
│   ├── gps.py
│   ├── gyro.py
│   ├── imu.py
│   ├── script1.py
│   ├── tricycle-cadROS.ttt
│   └── ws_ros/
│       ├── build/
│       ├── install/
│       ├── log/
│       └── src/
│           └── notre_package/
│               ├── launch/
│               │   └── multi_launch.py
│               ├── notre_package/
│               │   ├── control.py
│               │   ├── __init__.py
│               │   ├── localization.py
│               │   └── waypoint.py
│               ├── package.xml
│               ├── resource/
│               ├── setup.cfg
│               └── setup.py
└── src/
    ├── gpsd_client/
    ├── icm20948_driver/
    ├── notre_package/
    └── voiture2a_motors_driver/
```

## Node architecture

### Camera node
https://index.ros.org/r/usb_cam/

### Motors node
See [voiture2a_motors_driver](./src/voiture2a_motors_driver/README.md) package

### GNSS node
See [gpsd client](./src/gpsd_client/README.md) package

### IMU node
Todo

robi:
sudo docker run --platform linux/arm64 -v /home/robi/Ensta_2A/ros/voiture2A-ros-main:/home -it arm64v8/ros

recompile car j'ai modifié des noms de node
on a lancé le sh ca a créé le arm64
on a scp le fichier ./arm64/install
on a voulu ros2 run voiture.. motors_node
mais il fallait apt update + upgrade ( a faire).

## Simulation avec CoppeliaSim
- Ouvrir CoppeliaSim depuis le terminal
- Ouvrir la scène Simulation/tricycle-cadROS.ttt
- Aller dans le dossier Simulation/ws_ros et faire un colcon build puis source install/setup.bash
- Lancer la simulation dans Coppelia
- Lancer le multi_launch avec :
```
ros2 launch notre_package multi_launch.py
```

# Schéma du Contrôleur de Suivi de Ligne

## 1. Entrées du système :
- Position actuelle du robot : $ (x, y, \text{yaw}) $
- Waypoints définissant la trajectoire : $ A(A_x, A_y) $, $ B(B_x, B_y) $

## 2. Calcul de la direction de la ligne :
- Vecteur directeur de la ligne :
  $$ \overrightarrow{AB} = (B_x - A_x, B_y - A_y) $$
- Cap de la ligne (orientation désirée sans correction) :
  $$ \varphi = -\arctan2(B_y - A_y, B_x - A_x) $$

## 3. Calcul de l'erreur latérale :
- Normalisation du vecteur :
  $$ \mathbf{n} = \frac{\overrightarrow{AB}}{||\overrightarrow{AB}||} $$
- Distance latérale du robot par rapport à la droite :
  $$ e = n_x (y - A_y) - n_y (x - A_x) $$

## 4. Correction de l'orientation :
- Gain de correction de l'erreur latérale : $ K_p $
- Gain de correction de l'orientation : $ K_{steering} $
- Cap désiré avec correction :
  $$ \theta_d = \varphi - K_p \tanh\left(\frac{e}{K_{steering}}\right) $$
- Erreur d'orientation :
  $$ \text{error\_heading} = \theta_d - \text{yaw} $$

## 5. Contrôle de la vitesse :
- Commande de direction avec saturation à $ \pm 60^\circ $ :
  $$ \delta = \text{clip}(-\text{error\_heading}, -\frac{\pi}{3}, \frac{\pi}{3}) $$
- Vitesse linéaire fixe :
  $$ v = 0.2 \text{ m/s} $$

## 6. Sorties :
- **Commande de position angulaire** : $ \delta $ (commande de rotation)
- **Commande de vitesse linéaire** : $ v $ (avance du robot)

---
**Résumé du fonctionnement** :  
1. Le robot calcule la ligne reliant les waypoints.  
2. Il mesure son écart par rapport à cette ligne.  
3. Il ajuste son orientation en fonction de l'erreur latérale.  
4. Il applique une commande de rotation et avance avec une vitesse constante.


