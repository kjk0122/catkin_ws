cmake_minimum_required(VERSION 3.0.2)
project(ros_motor)

find_package(catkin REQUIRED COMPONENTS
  message_generation
  roscpp
  serial
  std_msgs
)

 add_message_files(
   FILES
   angle.msg
 )

 generate_messages(
   DEPENDENCIES
   std_msgs
 )

 catkin_package(
  INCLUDE_DIRS include
  LIBRARIES ros_motor
  CATKIN_DEPENDS roscpp std_msgs
  DEPENDS system_lib
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

# 토픽 퍼블리셔
add_executable(ros_motor_pub src/ros_motor_pub.cpp)
add_dependencies(ros_motor_pub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(ros_motor_pub
  ${catkin_LIBRARIES}
)

# 토픽 서브스크라이버
add_executable(ros_motor_sub src/ros_motor_sub.cpp)
add_dependencies(ros_motor_sub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(ros_motor_sub
  ${catkin_LIBRARIES}
)