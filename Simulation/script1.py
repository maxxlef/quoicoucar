def subscriber_callback(msg):
    # This is the subscriber callback function
    log_message = f'subscriber receiver following Float32: {msg["data"]}'
    sim.addLog(sim.verbosity_scriptinfos, log_message)

def getTransformStamped(objHandle, name, relTo, relToName):
    # This function retrieves the stamped transform for a specific object
    t = simROS2.getSystemTime()
    p = sim.getObjectPosition(objHandle, relTo)
    o = sim.getObjectQuaternion(objHandle, relTo)
    return {
        'header': {
            'stamp': t,
            'frame_id': relToName
        },
        'child_frame_id': name,
        'transform': {
            'translation': {'x': p[0], 'y': p[1], 'z': p[2]},
            'rotation': {'x': o[0], 'y': o[1], 'z': o[2], 'w': o[3]}
        }
    }

def sysCall_init():
    sim = require('sim')
    simROS2 = require('simROS2')

    # The child script initialization
    self.objectHandle = sim.getObject('/Ball')
    self.objectAlias = sim.getObjectAlias(self.objectHandle, 3)
    
    # Prepare the float32 publisher and subscriber (we subscribe to the topic we publish):
    self.publisher = simROS2.createPublisher('/simulationTime', 'std_msgs/msg/Float32')
    self.subscriber = simROS2.createSubscription('/simulationTime', 'std_msgs/msg/Float32', subscriber_callback)

def sysCall_actuation():
    # Send an updated simulation time message, and send the transform of the object attached to this script:
    simROS2.publish(self.publisher, {'data': sim.getSimulationTime()})
    simROS2.sendTransform(getTransformStamped(self.objectHandle, self.objectAlias, -1, 'world'))
    # To send several transforms at once, use simROS2.sendTransforms instead

def sysCall_cleanup():
    # Following not really needed in a simulation script (i.e. automatically shut down at simulation end):
    simROS2.shutdownPublisher(self.publisher)
    simROS2.shutdownSubscription(self.subscriber)