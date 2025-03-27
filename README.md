# voiture2A-ros

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

