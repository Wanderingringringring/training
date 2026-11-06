import sys
if sys.prefix == '/home/venom-songyixi/miniforge3/envs/rm_ros2':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/venom-songyixi/venom_cpp_basics/training/02-ros2-wheelleg/Tutorial/install/rm_tf_demo'
