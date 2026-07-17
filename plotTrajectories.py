import sqlite3
from pathlib import Path

import matplotlib.pyplot as plt
from rosbags.typesys import Stores, get_typestore


def extract_odom_from_bag(bag_path, topic_name='/odom'):
    bag_dir = Path(bag_path)
    if bag_dir.is_dir():
        db_files = sorted(bag_dir.glob('*.db3'))
        if not db_files:
            raise FileNotFoundError(f'No .db3 bag files found in {bag_path}')
        db_path = db_files[0]
    else:
        db_path = Path(bag_path)

    typestore = get_typestore(Stores.ROS2_KILTED)

    with sqlite3.connect(db_path) as conn:
        cur = conn.cursor()
        topic_row = cur.execute(
            'SELECT id, type FROM topics WHERE name = ?', (topic_name,)
        ).fetchone()
        if topic_row is None:
            raise ValueError(f'Topic {topic_name} not found in bag {db_path}')

        topic_id, topic_type = topic_row
        rows = cur.execute(
            'SELECT data FROM messages WHERE topic_id = ? ORDER BY id',
            (topic_id,),
        ).fetchall()

    x_coords = []
    y_coords = []
    for (rawdata,) in rows:
        msg = typestore.deserialize_cdr(rawdata, topic_type)
        x_coords.append(msg.pose.pose.position.x)
        y_coords.append(msg.pose.pose.position.y)

    return x_coords, y_coords


# --- 1. Extract Data ---
sim_bag_path = '/home/basmala/mir250_ws/rosbag2_2026_07_15-15_11_22_sim'
sim_x, sim_y = extract_odom_from_bag(sim_bag_path)

# --- 2. Plotting ---
plt.figure(figsize=(10, 6))
plt.plot(sim_x, sim_y, label='Isaac Sim Trajectory', linestyle='--', color='blue')
plt.title('Simulation Trajectory Visualization')
plt.xlabel('X Position (m)')
plt.ylabel('Y Position (m)')
plt.axis('equal')
plt.legend()
plt.grid(True)
plt.show()