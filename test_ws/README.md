# test_ws
Catkin workspace containing ROS package

Setting environment variables:\
export WEBOTS_HOME_PATH=/usr/local/webots\
export WEBOTS_HOME=/usr/local/webots\
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${WEBOTS_HOME}/lib/controller\
export PYTHONPATH=${PYTHONPATH}:${WEBOTS_HOME}/lib/controller/python27\
export PYTHONIOENCODING=UTF-8

Run simulation:\
source devel/setup.bash (in all terminal windows)\
roslaunch test test.launch

Run individually to display communication between nodes:\
roscore\
Open world in Webots\
python node.py\
python testcontroller.py (in two separate windows)\
