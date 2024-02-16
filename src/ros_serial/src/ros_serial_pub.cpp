#include "ros/ros.h"
#include "ros_serial/semes.h"
#include <serial/serial.h>

int main(int argc, char **argv)                 // Node Main Function
{
  ros::init(argc, argv, "serial_publisher");     // Initializes Node Name
  ros::NodeHandle nh;                           // Node handle declaration for communication with ROS system

  // Declare publisher, create publisher 'serial_publisher' using the 'semes'
  // message file from the 'ros_serial' package. The topic name is
  // 'ros_serial_msg' and the size of the publisher queue is set to 100.
  ros::Publisher ros_serial_pub = nh.advertise<ros_serial::semes>("ros_serial_msg", 100);

  // Set the loop period. '10' refers to 10 Hz and the main loop repeats at 0.1 second intervals
  ros::Rate loop_rate(10);

  ros_serial::semes msg;     // Declares message 'msg' in 'semes' message file format

  serial::Serial ser;
  ser.setPort("/dev/ttyACM0");  // Replace with your serial port name
  ser.setBaudrate(115200);
  serial::Timeout timeout = serial::Timeout::simpleTimeout(1000);
  ser.setTimeout(timeout);
  ser.open();

  if (!ser.isOpen()) {
    ROS_ERROR("Serial port could not be opened.");
    return -1;
  }

  while (ros::ok())
  { 
    if (ser.available()>0){
      std::string data_str = ser.readline();
      //ROS_INFO("arduini send %s",data_str.c_str());
      
      if(data_str != ""){ // Sometiems data_str is NULL, then it triggers segment fault 
        int data = std::stof(data_str);  // Convert string to integer
        msg.temp = (float)data;
        ROS_INFO("send msg = %f", msg.temp);        // Prints the 'data' message
        ros_serial_pub.publish(msg);          // Publishes 'msg' message
      }
      
    }
    loop_rate.sleep();                      // Goes to sleep according to the loop rate defined above.

  }

  return 0;
}
