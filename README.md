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
on a lancé le sh ca a créé le arm64
on a scp le fichier ./arm64/install
on a voulu ros2 run voiture.. motors_node
mais il fallait apt update + upgrade ( a faire).
