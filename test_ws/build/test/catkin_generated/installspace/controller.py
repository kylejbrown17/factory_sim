#!/usr/bin/env python2

# Webots controller

import rospy
from std_msgs.msg import String
from controller import Robot
import os

MAX_SPEED = 6.28
TIME_STEP = 64

def callback(data):
    global message
    message = 'Received message: ' + data.data

robot = Robot()
left = robot.getMotor('left wheel motor')
right = robot.getMotor('right wheel motor')
leftMotor.setPosition(float('inf'))
rightMotor.setPosition(float('inf'))
leftMotor.setVelocity(0.1 * MAX_SPEED)
rightMotor.setVelocity(0.1 * MAX_SPEED)

message = ''
print(os.environ['ROS_MASTER_URI'])
robot.step(TIME_STEP)
rospy.init_node('robot', anonymous=True)
print('Bot connecting')
rospy.Subscriber('centretobot', String, callback)
pub = rospy.Publisher('bottocentre', String, callback)

print('Running the control loop')
while not rospy.is_shutdown():
    pub.publish('Notification')
    if message:
        print(message)
        message = ''



