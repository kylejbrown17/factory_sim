#!/usr/bin/env python2

# Model command centre node

import rospy
from std_msgs.msg import String

# Receives notification from robot
def callback(data):
    global pub
    rospy.loginfo(rospy.get_caller_id() + 'Received notification: %s', data.data)
    pub.publish('New plan')

rospy.init_node('commandcentre', anonymous=True)
pub = rospy.Publisher('centretobot', String, queue_size=10)
rospy.Subscriber("bottocentre", String, callback)
rospy.spin()
