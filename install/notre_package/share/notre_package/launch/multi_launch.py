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
            executable='icm20948_node',
            name='icm20948_node',
            output='screen'
        ),
        Node(
            package='voiture2a_motors_driver',
            executable='motors_driver_node',
            name='motors_driver_node',
            output='screen'
        ),
        # Node(
        #     package='notre_package',
        #     executable='gnss_to_xy',
        #     name='gnss_to_xy_node',
        #     output='screen'
        # ),
        Node(
            package='notre_package',
            executable='localization',
            name='localization_node',
            output='screen'
        ),
        Node(
            package='notre_package',
            executable='waypoint',
            name='waypoint_node',
            output='screen'
        ),
        Node(
            package='notre_package',
            executable='control',
            name='control_node',
            output='screen'
        )
        
    ])
