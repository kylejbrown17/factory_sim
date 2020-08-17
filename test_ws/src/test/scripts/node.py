#!/usr/bin/env python

import rospy
from test.msg import *
from std_msgs.msg import String

def callback(data):
    global pub
    rospy.loginfo(rospy.get_caller_id() + '\nReceived notification: %s', data.message)
    
    # Construct message to send to bot
    messageToBot = MsgToBot()
    messageToBot.message = "New plan from centre"
    pub.publish(messageToBot)
    
rospy.init_node('commandcentre', anonymous=True)
pub = rospy.Publisher("centretobot", MsgToBot, queue_size=10)
rospy.Subscriber("bottocentre", MsgToCentre, callback)
rospy.spin()
