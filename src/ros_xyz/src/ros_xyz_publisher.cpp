#include "ros/ros.h"                            // ROS Default Header File
#include "ros_xyz/msgxyz.h"    // MsgSensor Message File Header. The header file is automatically created when building the package.
#include <time.h>

int main(int argc, char **argv)                 // Node Main Function
{
  ros::init(argc, argv, "ros_xyz_publisher");     // Initializes Node Name
  ros::NodeHandle nh;                           // Node handle declaration for communication with ROS system

  // Declare publisher, create publisher 'ros_topic_xyz_publisher' using the 'MsgSensor'
  // message file from the 'ros_topic_xyz_publisher' package. The topic name is
  // 'ros_topic_xyz_mag' and the size of the publisher queue is set to 100.
  ros::Publisher ros_xyz_pub = nh.advertise<ros_xyz::msgxyz>("ros_xyz_msg", 100);

  // Set the loop period. '10' refers to 10 Hz and the main loop repeats at 0.1 second intervals
  ros::Rate loop_rate(10);

  ros_xyz::msgxyz msg;     // Declares message 'msg' in 'MsgSensor' message file format
  
  // random number generate for sensor simulation
  srand(time(NULL));

  while (ros::ok())
  {
    msg.x  = (float)(rand() % 40);                      // Save the the 'count' value in the data of 'msg'
    msg.y  = (float)(rand() % 40);                      // Save the the 'count' value in the data of 'msg'
    msg.z  = (float)(rand() % 40);                      // Save the the 'count' value in the data of 'msg'
    ROS_INFO("x = %f", msg.x);        // Prints the 'x' message
    ROS_INFO("y = %f", msg.y);        // Prints the 'y' message
    ROS_INFO("z = %f", msg.z);        // Prints the 'z' message

    ros_xyz_pub.publish(msg);          // Publishes 'msg' message

    loop_rate.sleep();                      // Goes to sleep according to the loop rate defined above.

   }

  return 0;
}
