#include <robosat_gazebo_ros_plugins/UnderwaterObjectROSPlugin.hh>

#include <gazebo/physics/Base.hh>
#include <gazebo/physics/Model.hh>
#include <gazebo/physics/World.hh>
#include <gazebo/physics/Link.hh>

namespace proximity_dynamic_object_simulator_ros
{
/////////////////////////////////////////////////
ProximityDynamicObjectROSPlugin::ProximityDynamicObjectROSPlugin()
{
}

/////////////////////////////////////////////////
ProximityDynamicObjectROSPlugin::~ProximityDynamicObjectROSPlugin()
{
  this->rosNode->shutdown();
}

/////////////////////////////////////////////////
void ProximityDynamicObjectROSPlugin::Load(gazebo::physics::ModelPtr _parent,
                             sdf::ElementPtr _sdf)
{
  if (!ros::isInitialized())
  {
    gzerr << "Not loading plugin since ROS has not been "
          << "properly initialized.  Try starting gazebo with ros plugin:\n"
          << "  gazebo -s libgazebo_ros_api_plugin.so\n";
    return;
  }

  this->rosNode.reset(new ros::NodeHandle(""));

  try
  {
    ProximityDynamicObjectPlugin::Load(_parent, _sdf);
  }
  catch(gazebo::common::Exception &_e)
  {
    gzerr << "Error loading plugin."
          << "Please ensure that your model is correct."
          << '\n';
    return;
  }
  /*
  this->subLocalCurVel = this->rosNode->subscribe<geometry_msgs::Vector3>(
    _parent->GetName() + "/current_velocity", 10,
    boost::bind(&UnderwaterObjectROSPlugin::UpdateLocalCurrentVelocity,
    this, _1));

  this->services["set_use_global_current_velocity"] =
    this->rosNode->advertiseService(
      _parent->GetName() + "/set_use_global_current_velocity",
      &UnderwaterObjectROSPlugin::SetUseGlobalCurrentVel, this);
    */
}

/////////////////////////////////////////////////
void ProximityDynamicObjectROSPlugin::Update(const gazebo::common::UpdateInfo &_info)
{
  ProximityDynamicObjectPlugin::Update(_info);

  this->nedTransform.header.stamp = ros::Time::now();
}


GZ_REGISTER_MODEL_PLUGIN(ProximityDynamicObjectROSPlugin)
}