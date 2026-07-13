import pandas as pd
import matplotlib.pyplot as plt

# Load your datasets
sim_df = pd.read_csv('isaac_sim_odom.csv') # Your simulated odom
real_df = pd.read_csv('physical_robot_odom.csv') # Your recorded real robot odom

plt.figure(figsize=(10, 6))

# Plot the paths
plt.plot(sim_df['pose.pose.position.x'], sim_df['pose.pose.position.y'], 
         label='Isaac Sim Trajectory', linestyle='--', color='blue')
plt.plot(real_df['pose.pose.position.x'], real_df['pose.pose.position.y'], 
         label='Physical Robot Trajectory', color='red')

plt.title('Sim-to-Real Trajectory Comparison')
plt.xlabel('X Position (m)')
plt.ylabel('Y Position (m)')
plt.legend()
plt.grid(True)
plt.show()