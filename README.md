#!/usr/bin/env markdown
# MIR250 Development Environment & Isaac Sim Controller

This repository contains the hybrid development environment for the MiR250 mobile manipulator (NVIDIA Isaac Sim host + ROS 2 Humble). The project includes `isaac_diff_controller.py` which dynamically patches USD physics issues at runtime and a convenience script `run_mir250.sh` to launch the simulation.


## Quick Makefile-style Guide

Use the project's top-level `Makefile` to run common workflows. Example commands:

```bash
make help           # Show available targets and descriptions
make headless-check # Run environment self-test (takes ~2 minutes)
make demo           # Launch GUI simulation (autonomous drive)
make start          # Launch interactive simulation (awaits teleop)
make teleop         # Launch teleop_twist_keyboard (ROS 2)
```

## Prerequisites (Host: Ubuntu 24.04)

- GPU: NVIDIA RTX 3050 (4GB VRAM)
- NVIDIA Driver: v580.126.09+
- CUDA: 13.0
- NVIDIA Container Toolkit (required for GPU passthrough to Docker)

If you're missing `run_mir250.sh`, ensure it exists in the repository root. The Makefile checks for this script before running simulation targets.

## How to Launch

1. Run the headless self-test (first run will download assets):

```bash
make headless-check
```

2. To open the GUI and run the demo autonomous drive:

```bash
make demo
```

3. For a normal interactive run (waits for teleop input):

```bash
make start
```

If the script cannot auto-detect your USD, specify it:

```bash
make start UDP_PATH=/path/to/robot_ros_bridge.usd
```

## Teleoperation (ROS 2)

Open a second terminal and run:

```bash
source /opt/ros/humble/setup.bash
ros2 run teleop_twist_keyboard teleop_twist_keyboard
```

Controls:
- Base movement: `i` (forward), `,` (backward), `j`/`l` (turn left/right), `k` (stop)
- Diagonal motion: `u`/`o` (forward-left/forward-right), `m`/`.` (backward-left/backward-right)
- Holonomic/strafe mode: hold `Shift` and use `U`/`I`/`O` (strafe left/forward/strafe right), `J`/`K`/`L` (turn left/stop/turn right), and `M`/`<`/`>` (backward-left/backward/backward-right)

The simulation publishes odometry on `/odom` and USD Action Graphs publish joint states and camera feeds.

## Kinematics (Differential Drive)

Inverse kinematics (wheel speeds from linear $V$ and angular $\omega$):

$$
\omega_R = \frac{1}{2r}(2V + \omega L)
$$

$$
\omega_L = \frac{1}{2r}(2V - \omega L)
$$

Where $r$ is wheel radius and $L$ is the track width.

Forward kinematics (odometry matrix form):

$$
\begin{bmatrix}\dot{x} & \dot{y} & \dot{\theta}\end{bmatrix}^T =
\begin{bmatrix}
\tfrac{r\cos\theta}{2} & \tfrac{r\cos\theta}{2} \\
\tfrac{r\sin\theta}{2} & \tfrac{r\sin\theta}{2} \\
\tfrac{r}{L} & -\tfrac{r}{L}
\end{bmatrix}
\begin{bmatrix}\omega_R & \omega_L\end{bmatrix}^T
$$

Pose integration (over time):

$$
x = x_0 + \int \dot{x} \, dt,
y = y_0 + \int \dot{y} \, dt,
\theta = \theta_0 + \int \dot{\theta} \, dt
$$

## Technical Troubleshooting & Physics Fixes

`isaac_diff_controller.py` applies runtime fixes for common USD physics issues. Common problems addressed:

- Caster wheel friction and slipping (adjust caster friction coefficient)
- Geometry offsets causing bouncing (zero stale translation offsets)
- Missing structural joints (attach loose parts at runtime)
- Drive configuration defaults (strip position drives, assign velocity drives)

For more details and exact tuning values, run:

```bash
make troubleshoot
```

## Maintenance

- Clean build artifacts:

```bash
make clean
```

## Files of interest

- `run_mir250.sh` - launch script used by Makefile targets
- `isaac_diff_controller.py` - runtime USD physics patches

---

If you'd like, I can also update the top-level `Makefile` to add or adjust targets, or create a `make help`-style formatted section inside this README. What would you like next?
