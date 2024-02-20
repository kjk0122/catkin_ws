cmake_minimum_required(VERSION 3.0.2)
project(kjk_urdf)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  joint_state_publisher_gui
  roscpp
  rviz
  tf
  urdf
)

catkin_package(
CATKIN_DEPENDS geometry_msgs joint_state_publisher_gui roscpp rviz tf urdf
)

include_directories(
include
  ${catkin_INCLUDE_DIRS}
)
