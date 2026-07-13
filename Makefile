.PHONY: help prereq start headless-check demo teleop kinematics troubleshoot clean

# =============================================================================
# MIR250 Development Environment & Isaac Sim Controller
# =============================================================================
# This Makefile organizes the MIR250 mobile manipulator development workflow
# consisting of NVIDIA Isaac Sim 5.1.0 (Host) and ROS 2 Humble (Docker).
# =============================================================================

SHELL := /bin/bash
SCRIPT_DIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
RUN_SCRIPT := $(SCRIPT_DIR)run_mir250.sh

# Color codes for output
GREEN := \033[0;32m
BLUE := \033[0;34m
YELLOW := \033[0;33m
NC := \033[0m # No Color

# =============================================================================
# HELP TARGET
# =============================================================================

help:
	@echo "$(BLUE)╔════════════════════════════════════════════════════════════════════╗$(NC)"
	@echo "$(BLUE)║  MIR250 Development Environment - Make Targets                     ║$(NC)"
	@echo "$(BLUE)╚════════════════════════════════════════════════════════════════════╝$(NC)"
	@echo ""
	@echo "$(GREEN)PREREQUISITES:$(NC)"
	@echo "  make prereq                - Display prerequisites (Host: Ubuntu 24.04)"
	@echo ""
	@echo "$(GREEN)SIMULATION TARGETS:$(NC)"
	@echo "  make headless-check        - Run environment self-test (takes ~2 min)"
	@echo "  make demo                  - Launch GUI simulation with autonomous drive"
	@echo "  make start                 - Launch interactive simulation (awaits teleop)"
	@echo "  make start USD_PATH=<path> - Custom USD path (if auto-detection fails)"
	@echo ""
	@echo "$(GREEN)ROBOT TELEOPERATION:$(NC)"
	@echo "  make teleop                - Launch teleop_twist_keyboard in Docker/ROS 2"
	@echo "                               Controls: i(fwd) ,(back) j/l(turn) k(stop)"
	@echo ""
	@echo "$(GREEN)DOCUMENTATION:$(NC)"
	@echo "  make kinematics            - Display kinematics & mathematical model"
	@echo "  make troubleshoot          - Display technical troubleshooting & physics fixes"
	@echo ""
	@echo "$(GREEN)MAINTENANCE:$(NC)"
	@echo "  make clean                 - Clean build artifacts"
	@echo ""

# =============================================================================
# PREREQUISITES TARGET
# =============================================================================

prereq:
	@echo "$(BLUE)═══════════════════════════════════════════════════════════════════$(NC)"
	@echo "$(GREEN)Prerequisites (Host: Ubuntu 24.04)$(NC)"
	@echo "$(BLUE)═══════════════════════════════════════════════════════════════════$(NC)"
	@echo ""
	@echo "$(YELLOW)Hardware Requirements:$(NC)"
	@echo "  • GPU: NVIDIA RTX 3050 (4GB VRAM)"
	@echo "  • NVIDIA Driver: v580.126.09+"
	@echo "  • CUDA Version: 13.0"
	@echo ""
	@echo "$(YELLOW)Software Requirements:$(NC)"
	@echo "  • NVIDIA Container Toolkit (required for GPU passthrough to Docker)"
	@echo "  • Docker Engine"
	@echo "  • ROS 2 Humble (in Docker container)"
	@echo ""

# =============================================================================
# QUICK START TARGETS
# =============================================================================

start: check-script
	@echo "$(BLUE)═══════════════════════════════════════════════════════════════════$(NC)"
	@echo "$(GREEN)Launching MIR250 Simulation (Normal Mode)$(NC)"
	@echo "$(BLUE)═══════════════════════════════════════════════════════════════════$(NC)"
	@echo ""
	@echo "Waiting for teleop commands..."
	@echo "Run 'make teleop' in another terminal to control the robot."
	@echo ""
ifdef UDP_PATH
	MIR250_USD=$(UDP_PATH) $(RUN_SCRIPT)
else
	$(RUN_SCRIPT)
endif

demo: check-script
	@echo "$(BLUE)═══════════════════════════════════════════════════════════════════$(NC)"
	@echo "$(GREEN)Launching MIR250 Simulation (Demo Mode - Autonomous Drive)$(NC)"
	@echo "$(BLUE)═══════════════════════════════════════════════════════════════════$(NC)"
	@echo ""
	$(RUN_SCRIPT) --demo

headless-check: check-script
	@echo "$(BLUE)═══════════════════════════════════════════════════════════════════$(NC)"
	@echo "$(GREEN)Running Environment Self-Test (Headless Check)$(NC)"
	@echo "$(BLUE)═══════════════════════════════════════════════════════════════════$(NC)"
	@echo ""
	@echo "This will take a couple of minutes..."
	@echo "On first run, internet is required to pull UR5e and grid assets."
	@echo ""
	$(RUN_SCRIPT) --headless-check

teleop:
	@echo "$(BLUE)═══════════════════════════════════════════════════════════════════$(NC)"
	@echo "$(GREEN)Teleoperate Robot (Docker/ROS 2 Humble)$(NC)"
	@echo "$(BLUE)═══════════════════════════════════════════════════════════════════$(NC)"
	@echo ""
	@echo "Launching teleop_twist_keyboard..."
	@echo ""
	@echo "$(YELLOW)Controls:$(NC)"
	@echo "  i     - Forward"
	@echo "  ,     - Backward"
	@echo "  j / l - Turn left / right"
	@echo "  k     - Stop"
	@echo ""
	@echo "The script publishes to /odom"
	@echo "Joint states and RealSense camera feeds published by USD Action Graphs"
	@echo ""
	@bash -c 'source /opt/ros/humble/setup.bash && ros2 run teleop_twist_keyboard teleop_twist_keyboard'

# =============================================================================
# KINEMATICS & MATHEMATICAL MODEL
# =============================================================================

kinematics:
	@echo "$(BLUE)═══════════════════════════════════════════════════════════════════$(NC)"
	@echo "$(GREEN)Kinematics & Mathematical Model$(NC)"
	@echo "$(BLUE)═══════════════════════════════════════════════════════════════════$(NC)"
	@echo ""
	@echo "$(YELLOW)Differential Drive Kinematics$(NC)"
	@echo "Maps velocity commands (V, ω) to individual wheel velocities (ωR, ωL)"
	@echo ""
	@echo "$(YELLOW)Inverse Kinematics - Calculating Wheel Speeds:$(NC)"
	@echo "  ωR = (1/2r) × (2V + ωL)"
	@echo "  ωL = (1/2r) × (2V - ωL)"
	@echo ""
	@echo "  Where:"
	@echo "    r = wheel radius"
	@echo "    L = track width (distance between wheels)"
	@echo ""
	@echo "$(YELLOW)Forward Kinematics - Odometry & Matrix Form:$(NC)"
	@echo "  State vector = [ẋ, ẏ, θ̇]"
	@echo "  Calculated from wheel velocities [ωR, ωL]"
	@echo ""
	@echo "$(YELLOW)Pose Integration (over time):$(NC)"
	@echo "  x = x₀ + ∫ ẋ dt"
	@echo "  y = y₀ + ∫ ẏ dt"
	@echo "  θ = θ₀ + ∫ θ̇ dt"
	@echo ""

# =============================================================================
# TECHNICAL TROUBLESHOOTING & PHYSICS FIXES
# =============================================================================

troubleshoot:
	@echo "$(BLUE)═══════════════════════════════════════════════════════════════════$(NC)"
	@echo "$(GREEN)Technical Troubleshooting & Physics Fixes$(NC)"
	@echo "$(BLUE)═══════════════════════════════════════════════════════════════════$(NC)"
	@echo ""
	@echo "The isaac_diff_controller.py patches USD physics issues at runtime."
	@echo ""
	@echo "$(YELLOW)1. The Caster Wheel Friction Paradox$(NC)"
	@echo "   Problem: Robot slips uncontrollably; caster wheel assets collapse"
	@echo "   Theory:  Coulomb friction requires sufficient normal force"
	@echo "   Solution: Set caster friction μc = 0.05 (nylon)"
	@echo "             Set drive wheel friction μ ≈ 1.5 (rubber)"
	@echo ""
	@echo "$(YELLOW)2. Geometry Offsets (The 'Cam' Effect)$(NC)"
	@echo "   Problem: Robot bounces instead of driving"
	@echo "   Cause:   -0.10425 m stale translation offset on collision scopes"
	@echo "   Solution: Dynamically zero fix_geometry_offsets() at runtime"
	@echo ""
	@echo "$(YELLOW)3. Missing Structural Joints$(NC)"
	@echo "   Problem: UR5e cabinet floats mid-air during base movement"
	@echo "   Cause:   base_link_cabinet lacked fixed joint"
	@echo "   Solution: Dynamically attach loose parts; bolt 97 kg payload to base"
	@echo ""
	@echo "$(YELLOW)4. Drive Configurations$(NC)"
	@echo "   Problem: 10 imported joints default to Position drives"
	@echo "   Solution: Strip position drives, assign Velocity drives (0 stiffness)"
	@echo "             Force CPU physics (device='cpu') for 4GB VRAM constraint"
	@echo ""

# =============================================================================
# MAINTENANCE TARGETS
# =============================================================================

check-script:
	@if [ ! -f "$(RUN_SCRIPT)" ]; then \
		echo "$(RED)ERROR: run_mir250.sh not found at $(RUN_SCRIPT)$(NC)"; \
		echo "Please ensure run_mir250.sh is in the workspace root."; \
		exit 1; \
	fi

clean:
	@echo "$(YELLOW)Cleaning build artifacts...$(NC)"
	rm -rf build/ install/ log/
	@echo "$(GREEN)Clean complete.$(NC)"

# =============================================================================
# DEFAULT TARGET
# =============================================================================

.DEFAULT_GOAL := help
