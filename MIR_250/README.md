# MIR250 Development Environment & Isaac Sim Controller

This repository contains the hybrid development environment for the MiR250 mobile manipulator, consisting of NVIDIA Isaac Sim 5.1.0 on the host and ROS 2 Humble in a Docker container. It includes a verified Python controller that resolves deep-seated USD physics issues, handles differential-drive kinematics, and supports the UR5e payload.

## Prerequisites (Host: Ubuntu 24.04)

- **GPU**: NVIDIA RTX 3050 (4 GB VRAM)
- **NVIDIA Driver**: v580.126.09+
- **CUDA Version**: 13.0
- **Software**: NVIDIA Container Toolkit (required for GPU passthrough to Docker)

## Quick Start

The provided `run_mir250.sh` script handles the Python environment and bypasses standard ROS 2 sourcing conflicts. You can place these files next to your cloned repository.

### 1. Launch the simulation (host)

Run the headless check first to ensure the environment passes the self-test:

```bash
./run_mir250.sh --headless-check
```

This takes a couple of minutes and prints `PASS` if successful. It requires internet on the first run to pull the UR5e and grid assets.

To run the interactive simulation:

```bash
./run_mir250.sh --demo
```

This opens the GUI and drives autonomously.

To run the normal mode:

```bash
./run_mir250.sh
```

This waits for teleop commands.

> If the script cannot find your USD automatically, specify the path explicitly:

```bash
MIR250_USD=/path/to/robot_ros_bridge.usd ./run_mir250.sh
```

### 2. Teleoperate the robot ( ROS 2)

Open a second terminal and launch the teleop node:

```bash
source /opt/ros/humble/setup.bash
ros2 run teleop_twist_keyboard teleop_twist_keyboard
```

Use `i` to move forward, `,` to move backward, `j` and `l` to turn, and `k` to stop. The script publishes to `/odom`, while the internal USD Action Graphs publish the joint states and RealSense camera feeds.

## Kinematics and Mathematical Model

To map velocity commands $(V, \omega)$ to the individual wheel velocities $(\omega_R, \omega_L)$, the controller uses a standard differential-drive kinematic model.

### Inverse kinematics (wheel speeds)

Given a target linear velocity $V$ and angular velocity $\omega$, the required wheel rotational speeds are:

$$
\omega_R = \frac{1}{2r}(2V + \omega L)
$$

$$
\omega_L = \frac{1}{2r}(2V - \omega L)
$$

Where $r$ is the wheel radius and $L$ is the track width (distance between the wheels).

### Forward kinematics (odometry)

To calculate the robot state in the world frame:

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

The robot pose is continuously integrated over time:

$$
x = x_0 + \int \dot{x}\,dt
$$

$$
y = y_0 + \int \dot{y}\,dt
$$

$$
\theta = \theta_0 + \int \dot{\theta}\,dt
$$

## Technical Troubleshooting and Physics Fixes

The original USD configurations contained structural issues that prevented movement. The `isaac_diff_controller.py` dynamically patches these issues at runtime without modifying the source files on disk.

### 1. Caster wheel friction paradox

**Problem**: The robot would slip uncontrollably, and the caster wheel assets would collapse.

**Theory**: According to the Coulomb friction model:

$$
F_{c,\text{tangential}} \le \mu_c F_{c,\text{normal}}
$$

The robot relies on normal force $F_{c,\text{normal}}$ to generate the tangential limit. If the normal force is insufficient relative to the weight distribution, the tangential limit drops, the object slips, and stability is lost.

**Solution**: The script models real-world hardware by explicitly setting the caster wheel friction coefficient $\mu_c$ to 0.05 while giving the drive wheels a much higher friction value, so the drive wheels carry the traction load.

