# MIR250 Development Environment & Isaac Sim Controller

This repository contains the hybrid development environment for the MiR250 mobile manipulator, combining NVIDIA Isaac Sim on the host with ROS 2 Humble inside Docker. It includes a verified Python controller for differential drive kinematics and runtime USD physics fixes, plus a helper script for launching the simulation.

## Quick Start

Use the top-level Makefile for the common workflow:

```bash
make help
make headless-check
make demo
make start
make teleop
```

## Prerequisites

### Host system (Ubuntu 24.04)

- GPU: NVIDIA RTX 3050 (4 GB VRAM)
- NVIDIA driver: v580.126.09+
- CUDA: 13.0
- NVIDIA Container Toolkit for Docker GPU passthrough

### Software

- Docker Engine
- ROS 2 Humble inside the container
- The script `run_mir250.sh` in the repository root

## Launching the Simulation

1. Run the headless self-test first:

   ```bash
   make headless-check
   ```

   This may take a couple of minutes and requires internet on the first run to download assets.

2. Launch the GUI demo:

   ```bash
   make demo
   ```

3. Launch the interactive simulation:

   ```bash
   make start
   ```

   If the USD file is not detected automatically, use:

   ```bash
   make start UDP_PATH=/path/to/robot_ros_bridge.usd
   ```

## Teleoperation

Open a second terminal and run:

```bash
source /opt/ros/humble/setup.bash
ros2 run teleop_twist_keyboard teleop_twist_keyboard
```

Controls:

- `i` — forward
- `,` — backward
- `j` / `l` — turn left / right
- `k` — stop

The simulation publishes odometry on `/odom`, while the USD Action Graphs publish joint states and camera feeds.

## Kinematics

### Inverse kinematics

For a target linear velocity $V$ and angular velocity $\omega$, the required wheel speeds are:

$$
\omega_R = \frac{1}{2r}(2V + \omega L)
$$

$$
\omega_L = \frac{1}{2r}(2V - \omega L)
$$

Where $r$ is the wheel radius and $L$ is the track width.

### Forward kinematics

The robot state in the world frame is computed as:

$$
\begin{bmatrix}
\dot{x} \\
\dot{y} \\
\dot{\theta}
\end{bmatrix}
=
\begin{bmatrix}
\frac{r\cos\theta}{2} & \frac{r\cos\theta}{2} \\
\frac{r\sin\theta}{2} & \frac{r\sin\theta}{2} \\
\frac{r}{L} & -\frac{r}{L}
\end{bmatrix}
\begin{bmatrix}
\omega_R \\
\omega_L
\end{bmatrix}
$$

### Pose integration

$$
x = x_0 + \int \dot{x}\,dt
$$

$$
y = y_0 + \int \dot{y}\,dt
$$

$$
\theta = \theta_0 + \int \dot{\theta}\,dt
$$

## Troubleshooting & Physics Fixes

The controller patches common USD physics issues at runtime. The main fixes include:

- Caster wheel friction and slipping
- Geometry offset issues that cause bouncing
- Missing structural joints for attached payloads
- Drive configuration defaults that need velocity-based control

For details, run:

```bash
make troubleshoot
```

## Real Robot Integration Testing (Sim-to-Real)

This section summarizes the procedure for moving from simulation to physical MiR250 hardware.

### 1. Safety validation

Before any movement test:

- Turn the physical key to Autonomous control.
- Observe the RESUME button and press it once it begins blinking blue.
- Confirm the LED strip changes from red to yellow.
- Keep a team member near the emergency stop button during initial tests.

### 2. Basic movement testing

1. Start the hardware driver:

   ```bash
   ros2 launch mir_driver mir_launch.py
   ```

2. Launch the manual control stack in a second terminal:

   ```bash
   ros2 launch mir_manual_navigation manual_control_launch.py
   ```

3. Use the teleop window to test forward motion, rotation, and emergency stops.

### 3. Trajectory comparison analysis

To validate the digital twin's calibration, compare the physical `/odom` feedback with the simulated trajectories.

- Data logging: In a third terminal, record the robot's progress during testing:

  ```bash
  ros2 bag record /cmd_vel /odom
  ```

- Pose alignment: If the robot drifts, use the MiR web interface under Service → Command view → Set start position to manually reset the pose.

- Validation: Export the recorded `/odom` data to CSV for analysis. Calculate the trajectory error with:


    $$
    \text{Drift} = \sqrt{(x_{\text{real}} - x_{\text{sim}})^2 + (y_{\text{real}} - y_{\text{sim}}^2}
    $$


- Visualization: Use Matplotlib to overlay the physical trajectory plot with the simulation baseline and quantify the accuracy of the wheel calibration.

## Maintenance

Clean generated artifacts with:

```bash
make clean
```

## Files of Interest

- `run_mir250.sh` — launch script used by the Makefile targets
- `isaac_diff_controller.py` — runtime USD physics patch controller
