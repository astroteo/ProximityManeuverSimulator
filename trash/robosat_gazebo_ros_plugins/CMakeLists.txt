cmake_minimum_required(VERSION 2.8.3)
project(robosat_gazebo_ros_plugins)

# Specify C++11 standard
add_definitions(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  std_msgs
  roscpp
  visualization_msgs
  tf2_ros
  tf2
  gazebo_dev
)#uuv_gazebo_ros_plugins_msgs

#find_package (catkin REQUIRED COMPONENTS robosat_gazebo_plugins)


message("PKG ok")
set(ROBOSAT_GAZEBO_ROS_PLUGINS_LIST "")

catkin_package(
 INCLUDE_DIRS include
 LIBRARIES
  robosat_object_ros_plugin
 CATKIN_DEPENDS robosat_gazebo_plugin
  sensor_msgs
  geometry_msgs
  std_msgs
  visualization_msgs
)#uuv_gazebo_ros_plugins_msgs

include_directories(
  ${PROJECT_SOURCE_DIR}/include
  ${catkin_INCLUDE_DIRS}
  ${GAZEBO_INCLUDE_DIRS}
  ${GAZEBO_MSG_INCLUDE_DIRS}
)

link_directories(
  ${GAZEBO_LIBRARY_DIRS}
)

#add_library(uuv_fin_ros_plugin src/FinROSPlugin.cc)
#target_link_libraries(uuv_fin_ros_plugin ${catkin_LIBRARIES})
#add_dependencies(uuv_fin_ros_plugin ${catkin_EXPORTED_TARGETS})
#list(APPEND UUV_GAZEBO_ROS_PLUGINS_LIST uuv_fin_ros_plugin)

######################################################################
add_library(proximity_object_ros_plugin src/ProximityDynamicObjectROSPlugin.cc)
target_link_libraries(proximity_object_ros_plugin ${catkin_LIBRARIES})
add_dependencies(proximity_object_ros_plugin ${catkin_EXPORTED_TARGETS})

list(APPEND ROBOSAT_GAZEBO_ROS_PLUGINS_LIST proximity_object_ros_plugin)

#add_library(uuv_joint_state_publisher src/JointStatePublisher.cc)
#target_link_libraries(uuv_joint_state_publisher ${catkin_LIBRARIES})
#list(APPEND UUV_GAZEBO_ROS_PLUGINS_LIST uuv_joint_state_publisher)

#install(TARGETS ${UUV_GAZEBO_ROS_PLUGINS_LIST}
  #DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  #LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  #RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
#)

#install(DIRECTORY include/${PROJECT_NAME}/
  #DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  #FILES_MATCHING PATTERN "*.hh"
  #PATTERN "*~" EXCLUDE
#)

# Install urdf files
#install(DIRECTORY urdf
        #DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
        #PATTERN "*~" EXCLUDE)
