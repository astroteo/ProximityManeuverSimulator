#ifndef __ROBOSAT_GAZEBO_PLUGINS_UNDERWATER_OBJECT_HH__
#define __ROBOSAT_GAZEBO_PLUGINS_UNDERWATER_OBJECT_HH__

#include <map>
#include <string>

#include <gazebo/gazebo.hh>
#include <gazebo/msgs/msgs.hh>

#include <robosat_gazebo_plugins/ProximityDynamicModel.hh>

namespace gazebo
{
/// \brief Gazebo model plugin class for underwater objects
class ProximityDynamicObjectPlugin : public gazebo::ModelPlugin
{
  /// \brief Constructor
  public: ProximityDynamicObjectPlugin();

  /// \brief Destructor
  public: virtual ~ProximityDynamicObjectPlugin();

  // Documentation inherited.
  public: virtual void Load(gazebo::physics::ModelPtr _model,
                            sdf::ElementPtr _sdf);

  // Documentation inherited.
  public: virtual void Init();

  /// \brief Update the simulation state.
  /// \param[in] _info Information used in the update event.
  public: virtual void Update(const gazebo::common::UpdateInfo &_info);

  /// \brief Connects the update event callback
  protected: virtual void Connect();


  /// \brief Pairs of links & corresponding hydrodynamic models
  protected: std::map<gazebo::physics::LinkPtr,
                      ProximityDynamicModelPtr> models;


  /// \brief Update event
  protected: gazebo::event::ConnectionPtr updateConnection;

  /// \brief Pointer to the world plugin
  protected: gazebo::physics::WorldPtr world;

  /// \brief Pointer to the model structure
  protected: gazebo::physics::ModelPtr model;

  /// \brief Gazebo node
  protected: gazebo::transport::NodePtr node;

  /// \brief Name of vehicle's base_link
  protected: std::string baseLinkName;

  /// \brief Publishers of hydrodynamic and hydrostatic forces and torques in
  /// the case the debug flag is on
  protected: std::map<std::string, gazebo::transport::PublisherPtr> dynamicsPub;

};
}
#endif
