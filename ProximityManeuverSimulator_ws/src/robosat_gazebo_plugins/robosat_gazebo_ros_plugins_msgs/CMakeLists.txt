cmake_minimum_required(VERSION 2.8.3)
project(robosat_gazebo_ros_plugins_msgs)

find_package(catkin REQUIRED COMPONENTS
  std_msgs
  geometry_msgs
  message_generation)

add_message_files(
  FILES
  ProximityDynamicObjectModel.msg
)

add_service_files(
  FILES
  GetModelProperties.srv
)

generate_messages(
  DEPENDENCIES
  std_msgs
  geometry_msgs
)

catkin_package(
   CATKIN_DEPENDS
    std_msgs
    geometry_msgs
    message_runtime
)
