# MIR250 Development Environment & Isaac Sim Controller

This repository contains a hybrid development environment for the MiR250 mobile manipulator, bridging NVIDIA Isaac Sim on the host with ROS 2 Humble inside Docker. It includes a verified Python controller for differential-drive kinematics, runtime USD physics fixes, and a helper script for launching the simulation.

## Quick Start

Use the top-level Makefile for the common workflow:

```bash
make help
make headless-check
make demo
make start
make teleop
```

## Demo Video

Watch the MIR250 simulation in action:

<video src="assests/demo.mp4" controls width="100%" style="max-width: 800px; border-radius: 8px;"></video>

[Download demo video](assests/demo.mp4)

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

For a target linear velocity $V$ and angular velocity $\omega$, the wheel angular rates are:

$$
\omega_R = \frac{V + \frac{L}{2}\,\omega}{r}
$$

$$
\omega_L = \frac{V - \frac{L}{2}\,\omega}{r}
$$

Where $r$ is the wheel radius and $L$ is the distance between the left and right wheels (track width).

### Forward kinematics

The robot velocity in the world frame is:

$$
\dot{x} = V\cos\theta,
$$

$$
\dot{y} = V\sin\theta,
$$

$$
\dot{\theta} = \omega.
$$

In terms of left and right wheel rates $\omega_L$ and $\omega_R$:

$$
V = \frac{r}{2}\left(\omega_R + \omega_L\right)
$$

$$
\omega = \frac{r}{L}\left(\omega_R - \omega_L\right)
$$

Hence:

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
-\frac{r}{L} & \frac{r}{L}
\end{bmatrix}
\begin{bmatrix}
\omega_L \\
\omega_R
\end{bmatrix}
$$

### Pose integration

$$
x(t) = x_0 + \int_0^t \dot{x}(\tau)\,d\tau
$$

$$
y(t) = y_0 + \int_0^t \dot{y}(\tau)\,d\tau
$$

$$
\theta(t) = \theta_0 + \int_0^t \dot{\theta}(\tau)\,d\tau
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
   cd /home/basmala/mir250_ws/MIR_250
   source /opt/ros/humble/setup.bash
   source install/setup.bash
   ros2 run mir_driver mir_driver_node --ros-args -p mir_hostname:=130.251.13.90
   ```

2. Launch the manual control stack in a second terminal:

   ```bash
   cd /home/basmala/mir250_ws/MIR_250
   source /opt/ros/humble/setup.bash
   source install/setup.bash
   ros2 launch mir_manual_navigation manual_control_launch.py mir_hostname:=130.251.13.90
   ```

3. Use the teleop window to test forward motion, rotation, and emergency stops.

## Future work 
### Trajectory comparison analysis

To validate the digital twin's calibration, compare the physical `/odom` feedback with the simulated trajectories.

- Data logging: In a third terminal, record the robot's progress during testing:

  ```bash
  ros2 bag record /cmd_vel /odom
  ```

- Pose alignment: If the robot drifts, use the MiR web interface under Service → Command view → Set start position to manually reset the pose.

- Validation: Export the recorded `/odom` data to CSV for analysis. Calculate the trajectory error with:

  $$
  \text{Drift} = \sqrt{\left(x_{\text{real}} - x_{\text{sim}}\right)^2 + \left(y_{\text{real}} - y_{\text{sim}}\right)^2}
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
- 'rosbag2_2026_07_15-15_11_22_0.db3` - recording for \odom and /cmd_vel of the simulation

## References

The `references/` folder contains supporting research and design documents for the MiR250 simulation and ROS 2 integration:

- `references/Benchmarking_Full-Stack_ROS_2_Simulation_Platforms_for_Mobile_Robots.pdf`
- `references/Bridging_Sim2Real__Digital_Twin_for_Autonomous_Mobile_Robots.pdf`
- `references/Software_Framework_of_Autonomous_Mobile_Robots_on_Isaac_Sim_and_ROS.pdf`
