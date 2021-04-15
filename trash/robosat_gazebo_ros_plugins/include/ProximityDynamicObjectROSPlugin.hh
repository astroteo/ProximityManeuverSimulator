#ifndef __ROBOSAT_GAZEBO_ROS_PLUGINS_PROXIMITY_DYNAMIC_MODEL_HH__
#define __ROBOSAT_GAZEBO_ROS_PLUGINS_PROXIMITY_DYNAMIC_MODEL_HH__

#include <string>

#include <robosat_gazebo_plugins/UnderwaterObjectPlugin.hh>

#include <boost/scoped_ptr.hpp>
#include <gazebo/gazebo.hh>
#include <gazebo/common/Plugin.hh>
#include <ros/ros.h>
#include <geometry_msgs/WrenchStamped.h>
#include <geometry_msgs/Vector3.h>
#include <std_msgs/Bool.h>
/*
#include <visualization_msgs/Marker.h>
*/
/*
#include <robosat_gazebo_ros_plugins_msgs/SetUseGlobalCurrentVel.h>
*/
#include <geometry_msgs/TransformStamped.h>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2/LinearMath/Quaternion.h>

#include <map>

namespace proximity_dynamic_object_simulator_ros
{
  class ProximityDynamicObjectROSPlugin : public gazebo::ProximityDynamicObjectPlugin
  {
    /// \brief Constructor
    public: ProximityDynamicROSPlugin();

    /// \brief Destructor
    public: virtual ~ProximityDynamictROSPlugin();

    /// \brief Load module and read parameters from SDF.
    public: void Load(gazebo::physics::ModelPtr _parent, sdf::ElementPtr _sdf);

    /// \brief Update the simulation state.
    /// \param[in] _info Information used in the update event.
    public: virtual void Update(const gazebo::common::UpdateInfo &_info);

  
  };
}

#endif  // __UNDERWATER_OBJECT_ROS_PLUGIN_HH__