from setuptools import find_packages
from setuptools import setup

setup(
    name='icm20948_driver',
    version='1.0.0',
    packages=find_packages(
        include=('icm20948_driver', 'icm20948_driver.*')),
)
