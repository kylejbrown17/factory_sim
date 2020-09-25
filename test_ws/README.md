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
 
 Note 1: Make sure your ROS_PACKAGE_PATH env variable is set properly to the current active ros package\
 Note 2: In case of wanting to use the github file, make sure to change to change the ROS_PACKAGE_PATH after sourcing setup.bash\
 You can do so by changing the ROS_PACKAGE_PATH = Path to package: path to ros.\
 Example (Terminal Command): export ROS_PACKAGE_PATH=/home/$USER/Desktop/test/src:${ROS_PACKAGE_PATH} where the $(ROS_PACKAGE_PATH) env variable is set to /opt/ros/kinetic/share previously
