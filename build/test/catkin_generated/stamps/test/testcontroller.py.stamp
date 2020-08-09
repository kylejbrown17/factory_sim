#!/usr/bin/env python

# Webots controller

import rospy
from std_msgs.msg import String
from controller import Robot
import os

MAX_SPEED = 6.28

def callback(data):
    global message
    message = 'Received message: ' + data.data

robot = Robot()
timeStep = int(robot.getBasicTimeStep())
left = robot.getMotor('motor.left')
right = robot.getMotor('motor.right')
left.setPosition(float('inf'))
right.setPosition(float('inf'))
left.setVelocity(0.1 * MAX_SPEED)
right.setVelocity(0.1 * MAX_SPEED)

message = ''
print(os.environ['ROS_MASTER_URI'])
robot.step(timeStep)
rospy.init_node('robot', anonymous=True)
print('Bot connecting')
rospy.Subscriber('centretobot', String, callback)
pub = rospy.Publisher('bottocentre', String, queue_size=10)

print('Running the control loop')

while robot.step(timeStep) != -1 and not rospy.is_shutdown():
    pub.publish('Notification')
    if message:
        print(message)
        message = ''



