#!/bin/bash
# Launches the MiR250 sim with a clean environment so the ROS2 bridge works.
# Usage:
#   ./run_mir250.sh                  normal run, drive it with teleop
#   ./run_mir250.sh --demo           drives itself so you can watch
#   ./run_mir250.sh --headless-check no window, just prints PASS or FAIL

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

ISAAC=""
for d in "$HOME/isaac-sim" "$HOME/isaacsim5" "$HOME/isaacsim"; do
    if [ -x "$d/python.sh" ]; then ISAAC="$d"; break; fi
done
if [ -z "$ISAAC" ]; then
    echo "Couldn't find Isaac Sim (looked in ~/isaac-sim, ~/isaacsim5, ~/isaacsim)."
    echo "Edit ISAAC= at the top of this script to point at your install."
    exit 1
fi

# don't inherit a sourced ROS or CUDA environment - Isaac brings its own
unset PYTHONPATH AMENT_PREFIX_PATH CUDA_HOME CUDA_PATH
export ROS_DISTRO=humble
export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
export LD_LIBRARY_PATH="$ISAAC/exts/isaacsim.ros2.bridge/humble/lib"

case "$1" in
    --demo)           export MIR_SELFTEST=1 ;;
    --headless-check) export MIR_SELFTEST=1 MIR_HEADLESS=1 ;;
esac

echo "Isaac Sim: $ISAAC"
exec "$ISAAC/python.sh" "$SCRIPT_DIR/isaac_diff_controller.py"
