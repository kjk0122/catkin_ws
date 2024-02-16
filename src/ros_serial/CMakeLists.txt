cmake_minimum_required(VERSION 3.0.2)
project(ros_serial)

find_package(catkin REQUIRED COMPONENTS
  message_generation
  roscpp
  serial
  std_msgs
)

 add_message_files(
   FILES
   semes.msg
 )

 generate_messages(
   DEPENDENCIES
   std_msgs
 )

 catkin_package(
  INCLUDE_DIRS include
  LIBRARIES ros_serial
  CATKIN_DEPENDS roscpp std_msgs
  DEPENDS system_lib
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

# 토픽 퍼블리셔
add_executable(ros_serial_pub src/ros_serial_pub.cpp)
add_dependencies(ros_serial_pub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(ros_serial_pub
  ${catkin_LIBRARIES}
)

# 토픽 서브스크라이버
add_executable(ros_serial_sub src/ros_serial_sub.cpp)
add_dependencies(ros_serial_sub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(ros_serial_sub
  ${catkin_LIBRARIES}
)