from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='gpsd_client',
            executable='gpsd_node',
            name='gpsd_node',
            output='screen'
        ),
        Node(
            package='icm20948_driver',
            executable='icm20948',
            name='icm20948',
            output='screen'
        ),
        Node(
            package='voiture2a_motors_driver',
            executable='motors_node',
            name='motors_node',
            output='screen'
        ),
        Node(
            package='notre_package',
            executable='localization_node',
            name='localization_node',
            output='screen'
        ),
        Node(
            package='notre_package',
            executable='mission_node',
            name='mission_node',
            output='screen'
        ),
        Node(
            package='notre_package',
            executable='control_node',
            name='control_node',
            output='screen'
        )
        
    ])
