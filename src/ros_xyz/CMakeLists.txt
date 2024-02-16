cmake_minimum_required(VERSION 3.0.2)
project(ros_xyz)

find_package(catkin REQUIRED COMPONENTS
  message_generation
  roscpp
  std_msgs
)

add_message_files(
   FILES
   msgxyz.msg
)

generate_messages(
   DEPENDENCIES
   std_msgs
)

catkin_package(

)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(ros_xyz_publisher src/ros_xyz_publisher.cpp)
add_dependencies(ros_xyz_publisher ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(ros_xyz_publisher
   ${catkin_LIBRARIES}
)

add_executable(ros_xyz_subscriber src/ros_xyz_subscriber.cpp)
add_dependencies(ros_xyz_subscriber ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(ros_xyz_subscriber
   ${catkin_LIBRARIES}
)