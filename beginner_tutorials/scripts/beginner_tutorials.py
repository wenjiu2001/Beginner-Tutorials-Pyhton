#!/usr/bin/env python

import rospy
from std_msgs.msg import String

def callback(data):
    rospy.loginfo(rospy.get_caller_id() + "I heard %s", data.data)

if __name__ == '__main__':
    rospy.init_node('beginner_tutorials', anonymous=False)
    pub = rospy.Publisher('chatter', String, queue_size=10)
    rospy.Subscriber("chatter", String, callback)
    rate = rospy.Rate(10)

    while not rospy.is_shutdown():
        hello_str = "hello world! %s" % rospy.get_time()
        pub.publish(hello_str)
        rospy.loginfo(hello_str)
        rate.sleep()
