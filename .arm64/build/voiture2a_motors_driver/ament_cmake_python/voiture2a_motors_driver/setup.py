from setuptools import find_packages
from setuptools import setup

setup(
    name='voiture2a_motors_driver',
    version='1.0.0',
    packages=find_packages(
        include=('voiture2a_motors_driver', 'voiture2a_motors_driver.*')),
)
