import matplotlib.pyplot as plt
from rosbags.rosbag2 import Reader
from rosbags.serde import deserialize_cdr

def extract_odom_from_bag(bag_path, topic_name='/odom'):
    x_coords = []
    y_coords = []
    
    # Open the ROS 2 bag database
    with Reader(bag_path) as reader:
        # Find the connection for the specific topic
        connections = [x for x in reader.connections if x.topic == topic_name]
        for connection, timestamp, rawdata in reader.messages(connections=connections):
            # Deserialize the binary ROS 2 message
            msg = deserialize_cdr(rawdata, connection.msgtype)
            
            # Extract the X and Y positions
            x_coords.append(msg.pose.pose.position.x)
            y_coords.append(msg.pose.pose.position.y)
            
    return x_coords, y_coords

# --- 1. Extract Data ---
# Replace these with your actual folder paths
sim_bag_path = '/home/basmala/mir250_ws/rosbag2_2026_07_15-15_11_22_sim'
real_bag_path = 'rosbag2_2026_07_15-15_11_22' 

sim_x, sim_y = extract_odom_from_bag(sim_bag_path)
real_x, real_y = extract_odom_from_bag(real_bag_path)

# --- 2. Plotting ---
plt.figure(figsize=(10, 6))

plt.plot(sim_x, sim_y, label='Isaac Sim Trajectory', linestyle='--', color='blue')
plt.plot(real_x, real_y, label='Physical Robot Trajectory', color='red')

plt.title('Sim-to-Real Trajectory Comparison')
plt.xlabel('X Position (m)')
plt.ylabel('Y Position (m)')
plt.axis('equal') # CRITICAL: Keeps the physical scale accurate
plt.legend()
plt.grid(True)
plt.show()