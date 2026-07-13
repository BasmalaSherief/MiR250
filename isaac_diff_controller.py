#!/usr/bin/env python3
import os
import sys
import runpy

THIS_DIR = os.path.dirname(os.path.abspath(__file__))


def build_candidates():
    candidates = []
    roots = [THIS_DIR]
    parent = os.path.dirname(THIS_DIR)
    if parent and parent != THIS_DIR:
        roots.append(parent)

    for root in roots:
        candidates.extend([
            os.path.join(root, "MIR_250", "mir_manual_navigation", "mir_manual_navigation", "isaac_diff_controller.py"),
            os.path.join(root, "mir_manual_navigation", "mir_manual_navigation", "isaac_diff_controller.py"),
            os.path.join(root, "MIR_250", "isaac_diff_controller.py"),
            os.path.join(root, "isaac_diff_controller.py"),
        ])

    # Also cover the older src/ layout if the repository is mounted there.
    for root in roots:
        candidates.extend([
            os.path.join(root, "src", "MIR_250", "mir_manual_navigation", "mir_manual_navigation", "isaac_diff_controller.py"),
            os.path.join(root, "src", "mir_manual_navigation", "mir_manual_navigation", "isaac_diff_controller.py"),
            os.path.join(root, "src", "MIR_250", "isaac_diff_controller.py"),
        ])

    # Deduplicate while preserving order.
    seen = set()
    unique = []
    for candidate in candidates:
        if candidate not in seen:
            seen.add(candidate)
            unique.append(candidate)
    return unique


targets = build_candidates()

for t in targets:
    if os.path.exists(t):
        runpy.run_path(t, run_name="__main__")
        sys.exit(0)

sys.stderr.write("ERROR: could not find isaac_diff_controller.py in expected locations.\n")
sys.stderr.write("Looked for:\n")
for t in targets:
    sys.stderr.write(f"  {t}\n")
sys.exit(2)
