import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/robot/ros2-learning/chapt3/topic_ws/install/demo_pyhton_topic'
