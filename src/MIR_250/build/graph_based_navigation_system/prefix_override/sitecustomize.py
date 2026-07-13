import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/basmala/mir250_ws/src/MiR250/MIR_250/install/graph_based_navigation_system'
