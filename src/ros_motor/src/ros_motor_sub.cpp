#include "ros/ros.h"
#include "ros_motor/angle.h"

void msgCallback(const ros_motor::angle::ConstPtr& msg)
{
  ROS_INFO("Received message: %d", msg->angle);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "serial_subscriber");
  ros::NodeHandle nh;

  ros::Subscriber ros_motor_sub = nh.subscribe("ros_motor_msg", 100, msgCallback);

  ros::spin();

  return 0;
}