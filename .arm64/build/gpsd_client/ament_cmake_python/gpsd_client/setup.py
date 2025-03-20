from setuptools import find_packages
from setuptools import setup

setup(
    name='gpsd_client',
    version='1.0.0',
    packages=find_packages(
        include=('gpsd_client', 'gpsd_client.*')),
)
