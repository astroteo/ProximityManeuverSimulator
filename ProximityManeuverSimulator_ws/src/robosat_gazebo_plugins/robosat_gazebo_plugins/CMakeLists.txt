cmake_minimum_required(VERSION 2.8.3)
project(robosat_gazebo_plugins)

add_definitions(-std=c++11)

############################################################################deps

find_package(catkin REQUIRED COMPONENTS gazebo_dev) #gazebo_dev
find_package(Boost REQUIRED COMPONENTS system) #boost
find_package(Eigen3 REQUIRED) #eigen
find_package(Protobuf REQUIRED) #protobuf

########################################################################protobuf
# add_subdirectory(msgs)
set(PROTOBUF_IMPORT_DIRS "")
foreach(ITR ${GAZEBO_INCLUDE_DIRS})
  if(ITR MATCHES ".*gazebo-[0-9.]+$")
    set(PROTOBUF_IMPORT_DIRS "${ITR}/gazebo/msgs/proto")
  endif()
endforeach()

file(MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/msgs)

################################################################set plugins list
SET(ROBOSAT_GAZEBO_PLUGINS_LIST "")

########################################################################msgs dir

file (MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/msgs)
set(PROTOBUF_IMPORT_DIRS "")
foreach(ITR ${GAZEBO_INCLUDE_DIRS})
  if (ITR MATCHES ".gazebo-[0-9.]+$")
    set(PROTOBUF_IMPORT_DIRS "${ITR}/gazebo/msgs/proto")
  endif()
  endforeach()

message(STATUS "PROTOBUF_IMPORT_DIRS = ${PROTOBUF_IMPORT_DIRS}")

file(GLOB msgs msgs/*.proto)

######################################################################catkin pkg

catkin_package(
            INCLUDE_DIRS
            ${CMAKE_CURRENT_BINARY_DIR}
            ${GAZEBO_MSG_INCLUDE_DIR}
            LIBRARIES
            robosat_gazebo_plugin)


include_directories(${PROJECT_SOURCE_DIR}/include
                    ${CMAKE_CURRENT_BINARY_DIR} #for generate pb messages
                    ${Boost_INCLUDE_DIRS}
                    ${catkin_INCLUDE_DIRS}
                    ${GAZEBO_MSGS_INCLUDE_DIRS}
                    ${EIGEN3_INCLUDE_DIRS})

link_directories(
    ${catkin_LIBRARY_DIRS}
    ${EIGEN3_LIBRARY_DIRS})

#list(APPEND ROBOSAT_GAZEBO_PLUGINS_LIST robosat_gazebo_plugin)
###########################################################################build

# compile [shared pb msg]
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${msgs})
add_library(robosat_gazebo_plugins_msgs SHARED ${PROTO_SRCS})
target_link_libraries(robosat_gazebo_plugins_msgs ${PROTOBUF_LIBRARY})


# compile robosat plugin
add_library(robosat_gazebo_plugin
            src/ProximityDynamicModel.cc
            src/ProximityDynamicObjectPlugin.cc)
            
target_link_libraries(robosat_gazebo_plugin
                      ${catkin_LIBRARIES}
                      ${EIGEN3_LIBRARIES})

list(APPEND ROBOSAT_GAZEBO_PLUGINS_LIST robosat_gazebo_plugin)

# compile world plugin with "neutral" physics for master S/c
add_library(world_physics
            src/WorldBasePhysics.cc
            )
target_link_libraries(world_physics ${GAZEBO_LIBRARIES})
list(APPEND ROBOSAT_GAZEBO_PLUGINS_LIST world_physics)


############################################################## install
install(TARGETS ${ROBOSAT_GAZEBO_PLUGINS_LIST}
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING PATTERN "*.hh"
  PATTERN "*~" EXCLUDE
)

install(DIRECTORY include/
   DESTINATION ${CATKIN_GLOBAL_INCLUDE_DESTINATION}
   FILES_MATCHING PATTERN ".hh"
)

install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING PATTERN "*.pb.*"
  PATTERN "*~" EXCLUDE
)