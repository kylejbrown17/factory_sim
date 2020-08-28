#!/usr/bin/env python2

# Webots controller
import rospy
# From package_name import message_type
from test.msg import *
from std_msgs.msg import String
from controller import Robot
import os

MAX_SPEED = 6.28

# Receive via subscriber
def callback(data):
    global msgFromCentre
    msgFromCentre = data
    msgFromCentre.message = 'Received message: ' + data.message

robot = Robot()
timeStep = int(robot.getBasicTimeStep())
left = robot.getMotor('motor.left')
right = robot.getMotor('motor.right')
left.setPosition(float('inf'))
right.setPosition(float('inf'))
left.setVelocity(0.1 * MAX_SPEED)
right.setVelocity(0.1 * MAX_SPEED)

# Custom message to be received by bot and printed
msgFromCentre = None

print(os.environ['ROS_MASTER_URI'])
robot.step(timeStep)
rospy.init_node('robot', anonymous=True)
print('Bot connecting')
rospy.Subscriber('centretobot', MsgToBot, callback)
pub = rospy.Publisher('bottocentre', MsgToCentre, queue_size=10)

print('Running the control loop')
while robot.step(timeStep) != -1 and not rospy.is_shutdown():
    # Construct message to centre
    messageToCentre = MsgToCentre()
    messageToCentre.node_name = rospy.get_name()
    messageToCentre.message = "Notification from bot"
    
    # Publish message to centre
    pub.publish(messageToCentre)
    
    # If message has been received by bot
    if msgFromCentre:
        # Print message
        print(msgFromCentre.message)
        # Set to null object
        msgFromCentre = None



