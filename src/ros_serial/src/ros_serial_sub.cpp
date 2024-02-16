#include "ros/ros.h"                          // ROS Default Header File
#include "ros_serial/semes.h"
void msgCallback(const ros_serial::semes::ConstPtr& msg)
{
  ROS_INFO("recieve msg = %f", msg->temp);        // Prints the 'data' message
}

int main(int argc, char **argv)                         // Node Main Function
{
  ros::init(argc, argv, "serial_subscriber");            // Initializes Node Name

  ros::NodeHandle nh;                                   // Node handle declaration for communication with ROS system

  // Declares subscriber. Create subscriber 'serial_subscriber' using the 'semes'
  // message file from the 'ros_serial' package. The topic name is
  // 'ros_serial_msg' and the size of the publisher queue is set to 100.
  ros::Subscriber ros_serial_sub = nh.subscribe("ros_serial_msg", 100, msgCallback);

  // A function for calling a callback function, waiting for a message to be
  // received, and executing a callback function when it is received.
  ros::spin();

  return 0;
}
