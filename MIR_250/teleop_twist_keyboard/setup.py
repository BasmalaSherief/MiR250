from setuptools import setup

package_name = 'teleop_twist_keyboard'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    package_dir={'': '.'},
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='basmala',
    maintainer_email='basmala@example.com',
    description='Simple keyboard teleop for ROS 2.',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'teleop_twist_keyboard=teleop_twist_keyboard.teleop_twist_keyboard:main',
        ],
    },
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
)
