#include <ignition/math/Pose3.hh>
#include <sdf/sdf.hh>
#include <gazebo/physics/Link.hh>
#include <gazebo/physics/Model.hh>

#include "gazebo/common/Plugin.hh"
#include "gazebo/msgs/msgs.hh"
#include "gazebo/physics/physics.hh"
#include "gazebo/common/common.hh"
#include "gazebo/transport/transport.hh"
#include "gazebo/gazebo.hh"

#define ISS_


using namespace ignition;


namespace gazebo
{

  class  WorldBasePhysicsPlugin: public WorldPlugin
  {
    public: WorldBasePhysicsPlugin() : WorldPlugin(){}

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {

              _world->SetSimTime((const common::Time) 0);

              printf("..Loading neutral physiscs \n");
              // Create a new transport node
              transport::NodePtr node(new transport::Node());

              // Initialize the node with the world name
              node->Init(_world->Name());

              // Create a publisher on the ~/factory topic
              transport::PublisherPtr worldBasePhysicsFactoryPub =
                                      node->Advertise<msgs::Factory>("~/factory");

              // Create a publisher on the ~/factory topic
              transport::PublisherPtr physicsPub =
                                      node->Advertise<msgs::Physics>("~/physics");


              msgs::Physics physicsMsg;
              //physicsMsg.set_type(msgs::Physics::ODE);
              // Set the step time
              //physicsMsg.set_max_step_size(0.1);

              // Change gravity
              /*msgs::Set(physicsMsg.mutable_gravity(),
                        math::Vector3d(0.0, 0.0, 0.0));*/

              //Get pointer to phisic engine
              physics::PhysicsEnginePtr physicsEnginePtr = _world->Physics();

              // Get pointer to sdf element.
              sdf::ElementPtr sdfPtr = physicsEnginePtr->GetSDF();

              // Remove atmosphere,wind,gravity,etc..
              _world->SetAtmosphereEnabled(false);
              ignition::math::Vector3d _mag(0,0,0);
              _world-> SetMagneticField(_mag);
              _world->SetAtmosphereEnabled(false);
              _world->SetWindEnabled(false);

              // send physics pub
              physicsPub->Publish(physicsMsg);

              // Create the message
              msgs::Factory msg;

              // Model file to load
              //msg.set_sdf_filename("model://sphere");
              #ifdef ISS_
              msg.set_sdf_filename("model://ISS");

              // Pose to initialize the model to
              msgs::Set(msg.mutable_pose(),
                        math::Pose3d(math::Vector3d(0, 0, 0),
                                     math::Quaterniond(0, 0, 0)));

              #endif

              // Send the message
              worldBasePhysicsFactoryPub->Publish(msg);
            }
              };
  //ONLY A SINGLE PLUGIN CAN BE REGISTERED AT A SINGLE TIME!!
  GZ_REGISTER_WORLD_PLUGIN(WorldBasePhysicsPlugin)
}
