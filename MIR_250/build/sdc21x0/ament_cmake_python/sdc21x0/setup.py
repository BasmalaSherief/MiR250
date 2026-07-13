from setuptools import find_packages
from setuptools import setup

setup(
    name='sdc21x0',
    version='1.1.3',
    packages=find_packages(
        include=('sdc21x0', 'sdc21x0.*')),
)
