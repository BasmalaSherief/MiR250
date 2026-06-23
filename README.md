# MIR250 Development Environment Setup

This document outlines the steps to replicate the hybrid development environment consisting of NVIDIA Isaac Sim 5.1.0 (Host) and ROS2 Humble (Docker Container).

## Prerequisites (Host: Ubuntu 24.04)

- **GPU**: NVIDIA RTX 3050 (4GB VRAM)
- **NVIDIA Driver**: v580.126.09+
- **CUDA Version**: 13.0
- **Software**: NVIDIA Container Toolkit (required for GPU passthrough to Docker)

## Isaac Sim Configuration

To run Isaac Sim on hardware with 4GB VRAM, the following stability settings are applied:

- **Launch Settings**: Set "Use Internal ROS2 Libraries" to humble.
- **Renderer**: Set to RTX - Real-Time.
- **Optimizations**: Disable DLSS, Reflections, and Indirect Lighting in Render Settings to save VRAM.
- **Extensions**: Enable `isaacsim.ros2.bridge` and `isaacsim.ros2.urdf` with Autoload checked.

## ROS2 Humble Environment (Docker)

Since the host OS is Ubuntu 24.04 (Jazzy), a Docker container is used to provide a native ROS2 Humble environment.

### Start the Container

Run this from the host terminal to launch the environment with GPU support and host networking:

```bash
xhost +local:docker
sudo docker run -it --rm \
    --runtime=nvidia \
    --gpus all \
    --net=host \
    -e DISPLAY=$DISPLAY \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    -v "$HOME/path/to/your/project":/home/mir250_ws \
    osrf/ros:humble-desktop
```

### Build the Workspace

Inside the container terminal, initialize and compile the project:

```bash
source /opt/ros/humble/setup.bash
cd /home/mir250_ws/MIR_250
colcon build
source install/setup.bash
```

## How to Run
1) Open Isaac Sim
2) File -> Open -> usd -> robots -> mir_250_cabinet2.0.usd

## Kinematic Wheels Calibration (Sim2Real)

To ensure the digital twin's odometry matches the physics engine without drifting, the `WHEEL_RADIUS` and `WHEEL_BASE` must be calibrated. 

**⚠️ CRITICAL:** Ensure the main Isaac Sim GUI is completely closed before starting. The controller script will launch its own dedicated, optimized rendering instance.

### Step 1: Launch the Controller (Host Machine)
Open a terminal on the host machine. Set the middleware to match the Docker container, and run the Python controller using Isaac Sim's bundled Python. 

*Note: The `taskset` command and the appended flags are required to prevent the 4GB VRAM GPU from crashing during material compilation.*

```bash
# 1. Hide host ROS 2 installations (if applicable)
unset PYTHONPATH
unset AMENT_PREFIX_PATH

# 2. Set networking to FastDDS
export ROS_DISTRO=humble
export RMW_IMPLEMENTATION=rmw_fastrtps_cpp

# 3. Launch the controller with Low-VRAM optimizations
taskset -c 0,1 <path-to-isaac-sim>/python.sh \
"<path-to-mir250-workspace>/MIR_250/mir_manual_navigation/mir_manual_navigation/isaac_diff_controller.py" \
--/rtx/ecoMode/enabled=True \
--/rtx/sceneDb/enabled=False \
--/renderer/resolution/width=1280 \
--/renderer/resolution/height=720
```