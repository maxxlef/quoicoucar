import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/maxime/Documents/ENSTA/UE4.1_ROS/voiture2A-ros-main/install/notre_package'
