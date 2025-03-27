import math


def sysCall_init():
    sim = require('sim')
    simROS2 = require('simROS2')
    global front_wheel, handlebar

    # Prepare the float32 publisher and subscriber (we subscribe to the topic we publish):
    self.publisher = simROS2.createPublisher('/simulationTime', 'std_msgs/msg/Float32')
    self.subscriber = simROS2.createSubscription('/cmd_vel', 'geometry_msgs/msg/Twist', "cmd_vel_callback")

    # Récupérer les handles des roues et du guidon
    front_wheel = sim.getObject('/RevoluteFrontWheel')
    handlebar = sim.getObject('/RevoluteFork')
    sim.setJointTargetPosition(handlebar, 0)  # Initialiser la position du guidon

def cmd_vel_callback(msg):
    vx = msg['linear']['x']  # Vitesse linéaire
    rz = msg['angular']['z'] # Rotation

    vx *= 10 
    
    # Appliquer les commandes au tricycle
    sim.setJointTargetVelocity(front_wheel, vx)
    sim.setJointTargetPosition(handlebar, rz)
