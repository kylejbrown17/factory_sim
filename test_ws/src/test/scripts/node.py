#!/usr/bin/env python

import rospy
from test.msg import *
from std_msgs.msg import String

NUM_BOTS = 2
if (rospy.has_param('/num_bots')):
    print("\n" + str(NUM_BOTS) + "\n")
    NUM_BOTS = int(rospy.get_param("/num_bots"))

def publishMessage(botIDs):
    global pub
    message = "New plan from centre using data from "
    # Add bot IDs to message
    for i in range(len(botIDs)):
        message += botIDs[i]
      	if i < len(botIDs) - 1:
            message += ', '
        else:
            message += '\n'
    # Construct message
    messageToBot = MsgToBot()
    messageToBot.message = message
    pub.publish(messageToBot)

def callback(data, numBots):
    # Received notification from bot
    rospy.loginfo(rospy.get_caller_id() + '\nReceived notification: '
                  + data.message + '\nNode name: ' + data.node_name + '\n')
    global received
    # Notification already received from bot
    if len(received) and data.node_name in received:
        return
    received.append(data.node_name)
    # Notifications received from both bots
    if len(received) == numBots:
        publishMessage(received)
        received = []

received = []
rospy.init_node('commandcentre', anonymous=True)
pub = rospy.Publisher("centretobot", MsgToBot, queue_size=10)
rospy.Subscriber("bottocentre", MsgToCentre, callback, NUM_BOTS)
rospy.spin()


