from setuptools import find_packages
from setuptools import setup

setup(
    name='chat4_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('chat4_interfaces', 'chat4_interfaces.*')),
)
