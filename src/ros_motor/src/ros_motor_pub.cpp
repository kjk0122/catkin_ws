#include "ros/ros.h"
#include "ros_motor/angle.h"
#include <serial/serial.h>
#include <iostream>  // 추가
#include <sstream>   // 추가

int main(int argc, char **argv)
{
  ros::init(argc, argv, "serial_publisher");
  ros::NodeHandle nh;

  ros::Publisher ros_motor_pub = nh.advertise<ros_motor::angle>("ros_motor_msg", 100);

  ros::Rate loop_rate(10);

  ros_motor::angle msg;

  serial::Serial ser;
  ser.setPort("/dev/ttyACM0");
  ser.setBaudrate(115200);
  serial::Timeout timeout = serial::Timeout::simpleTimeout(1000);
  ser.setTimeout(timeout);

  try {
    ser.open();
    if (!ser.isOpen()) {
      ROS_ERROR("Serial port could not be opened.");
      return -1;
    }
  } catch (const serial::IOException& e) {
    ROS_ERROR_STREAM("An exception occurred while opening the serial port: " << e.what());
    return -1;
  }

  while (ros::ok())
  {
    std::cout << "Enter a value: ";  // 추가
    int user_input;  // 추가
    std::cin >> user_input;  // 추가
    
    try {
      std::string data_str = std::to_string(user_input);  // 수정
      ser.write(data_str);  // 수정

      if (!data_str.empty()) {
        float data = std::stof(data_str);
        msg.angle = static_cast<int>(data);
        ROS_INFO("Sending message: %d", msg.angle);
        ros_motor_pub.publish(msg);
      }
    } catch (const std::invalid_argument& e) {
      ROS_ERROR_STREAM("An exception occurred while converting string to float: " << e.what());
    }

    loop_rate.sleep();
    ros::spinOnce();  // 추가
  }

  ser.close();  // Close the serial port when the node exits
  return 0;
}
