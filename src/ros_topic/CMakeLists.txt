cmake_minimum_required(VERSION 3.0.2)
project(ros_topic)

find_package(catkin REQUIRED COMPONENTS
  message_generation
  roscpp
  std_msgs
)

# Generate messages in the 'msg' folder
  add_message_files(
  FILES
  Message1.msg
)

generate_messages(
  DEPENDENCIES
  std_msgs
)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES ros_topic
  CATKIN_DEPENDS roscpp std_msgs
  DEPENDS system_lib
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

# 토픽 퍼블리셔
add_executable(ros_topic_publisher src/ros_topic_publisher.cpp)
add_dependencies(ros_topic_publisher ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(ros_topic_publisher
  ${catkin_LIBRARIES}
)

# 토픽 서브스크라이버
add_executable(ros_topic_subscriber src/ros_topic_subscriber.cpp)
add_dependencies(ros_topic_subscriber ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(ros_topic_subscriber
  ${catkin_LIBRARIES}
)



