#!/usr/bin/env python3
import os
import sys
import runpy

THIS_DIR = os.path.dirname(os.path.abspath(__file__))

# Candidate locations where the real script lives in this workspace
targets = [
    os.path.join(THIS_DIR, "src", "MIR_250", "mir_manual_navigation", "mir_manual_navigation", "isaac_diff_controller.py"),
    os.path.join(THIS_DIR, "src", "mir_manual_navigation", "mir_manual_navigation", "isaac_diff_controller.py"),
    os.path.join(THIS_DIR, "src", "MIR_250", "isaac_diff_controller.py"),
]

for t in targets:
    if os.path.exists(t):
        runpy.run_path(t, run_name="__main__")
        sys.exit(0)

sys.stderr.write("ERROR: could not find isaac_diff_controller.py in expected locations.\n")
sys.stderr.write("Looked for:\n")
for t in targets:
    sys.stderr.write(f"  {t}\n")
sys.exit(2)
