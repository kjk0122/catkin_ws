#include "ros/ros.h"
#include "ros_motor/angle.h"
#include <serial/serial.h>
#include <iostream>
#include <sstream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "serial_publisher");
  ros::NodeHandle nh;

  ros::Publisher ros_motor_pub = nh.advertise<ros_motor::angle>("ros_motor_msg", 100);

  ros::Rate loop_rate(0.4);

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
    try {
        std::string data_str = ser.readline();

        // 문자열이 비어있는지 확인
        if (!data_str.empty()) {
            // 정수로 변환 시도
            int data = std::stoi(data_str);
            msg.angle = data;
            ROS_INFO("Sending message: %d", msg.angle);
            ros_motor_pub.publish(msg);

            // 시리얼 포트로 다시 보내기
            std::string data_to_send = "Received: " + data_str;
            ser.write(data_to_send);
        }
    } catch (const std::invalid_argument& e) {
        ROS_ERROR_STREAM("An exception occurred while converting string to integer: " << e.what());
    } catch (const std::out_of_range& e) {
        ROS_ERROR_STREAM("Out of range: " << e.what());
    }

    loop_rate.sleep();
    ros::spinOnce();
}


  ser.close();  // Close the serial port when the node exits
  return 0;
}
