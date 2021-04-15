# Install script for directory: /home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/src/robosat_gazebo_plugins/robosat_gazebo_ros_plugins_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robosat_gazebo_ros_plugins_msgs/msg" TYPE FILE FILES "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/src/robosat_gazebo_plugins/robosat_gazebo_ros_plugins_msgs/msg/ProximityDynamicObjectModel.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robosat_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/src/robosat_gazebo_plugins/robosat_gazebo_ros_plugins_msgs/srv/GetModelProperties.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robosat_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/build/robosat_gazebo_plugins/robosat_gazebo_ros_plugins_msgs/catkin_generated/installspace/robosat_gazebo_ros_plugins_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/devel/include/robosat_gazebo_ros_plugins_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/devel/share/roseus/ros/robosat_gazebo_ros_plugins_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/devel/share/common-lisp/ros/robosat_gazebo_ros_plugins_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/devel/share/gennodejs/ros/robosat_gazebo_ros_plugins_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/devel/lib/python2.7/dist-packages/robosat_gazebo_ros_plugins_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/devel/lib/python2.7/dist-packages/robosat_gazebo_ros_plugins_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/build/robosat_gazebo_plugins/robosat_gazebo_ros_plugins_msgs/catkin_generated/installspace/robosat_gazebo_ros_plugins_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robosat_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/build/robosat_gazebo_plugins/robosat_gazebo_ros_plugins_msgs/catkin_generated/installspace/robosat_gazebo_ros_plugins_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robosat_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES
    "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/build/robosat_gazebo_plugins/robosat_gazebo_ros_plugins_msgs/catkin_generated/installspace/robosat_gazebo_ros_plugins_msgsConfig.cmake"
    "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/build/robosat_gazebo_plugins/robosat_gazebo_ros_plugins_msgs/catkin_generated/installspace/robosat_gazebo_ros_plugins_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robosat_gazebo_ros_plugins_msgs" TYPE FILE FILES "/home/teobaiguera/Documents/ProximityManeuverSimulator/ProximityManeuverSimulator_ws/src/robosat_gazebo_plugins/robosat_gazebo_ros_plugins_msgs/package.xml")
endif()

