from setuptools import find_packages, setup

package_name = 'calibration'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=[
        'setuptools',
        'rclpy',         # Dépendance ROS 2
        'std_msgs',      # Messages standards ROS 2
        'numpy',         # Dépendance pour numpy
    ],

    zip_safe=True,
    maintainer='maxime',
    maintainer_email='maxime.lefevre@ensta-bretagne.org',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'calibration_node = calibration.calibration_node:main'
        ],
    },
)
