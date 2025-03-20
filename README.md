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