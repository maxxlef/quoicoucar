from setuptools import find_packages, setup

package_name = 'notre_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/multi_launch.py']),  # Ajoutez cette ligne pour le fichier multi_launch.py


    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='maxime',
    maintainer_email='maxime.lefevre@ensta-bretagne.org',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            #'gnss_to_xy = notre_package.gnss_to_xy:main',
            'localization_node = notre_package.localization:main',
            'mission_node = notre_package.waypoint:main',
            'control_node = notre_package.control:main',
        ],
    },
)
