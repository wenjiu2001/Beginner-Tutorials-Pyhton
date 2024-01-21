#include "ros/ros.h"
#include "std_msgs/String.h"

void callback(const std_msgs::String::ConstPtr& msg)
{
  ROS_INFO("I heard: %s", msg->data.c_str());
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "beginner_tutorials");
  ros::NodeHandle nh;

  ros::Publisher pub = nh.advertise<std_msgs::String>("chatter", 10);
  ros::Subscriber sub = nh.subscribe("chatter", 10, callback);
  ros::Rate rate(10);

  while (ros::ok())
  {
    std_msgs::String msg;
    std::stringstream ss;
    ss << "hello world! " << ros::Time::now().toSec();
    msg.data = ss.str();

    pub.publish(msg);
    ROS_INFO("%s", msg.data.c_str());

    ros::spinOnce();
    rate.sleep();
  }

  return 0;
}
