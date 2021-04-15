#ifndef __ROBOSAT_GAZEBO_PLUGINS_PROXIMITY_DYNAMIC_MODEL_HH__
#define __ROBOSAT_GAZEBO_PLUGINS_PROXIMITY_DYNAMIC_MODEL_HH__

#include<string>
#include<map>

#include<gazebo/gazebo.hh>
#include<gazebo/physics/Link.hh>
#include<gazebo/physics/Collision.hh>
#include<gazebo/physics/Shape.hh>

namespace gazebo
{

  class ProximityDynamicModel
  {

    /// constructor
    public: ProximityDynamicModel(physics::LinkPtr _link);

    /// destructor
    public: ~ProximityDynamicModel();

    ///
    public: void GetRelativeOrbitalForce(const ignition::math::Pose3d _pose,
                                         const ignition::math::Vector3d _vel,
                                               ignition::math::Vector3d &relativeOrbitalForce,
                                         double n = 0.00113 );

    /// Apply force on a Link (not a model => a Link!)
    public: void ApplyRelativeOrbitalForce();



    /// Pointer to coresponding robot link
    protected: physics::LinkPtr link;

    /// Storage for forces and torques <--> hydroWrench=> debugging purposes
    //protected: std::map<std::string, ignition::math::Vector3d>  orbitalWrench;;

   };

  /// \brief Pointer to model
  typedef boost::shared_ptr<ProximityDynamicModel> ProximityDynamicModelPtr;
  /// \brief Function pointer to create a certain a model
  typedef ProximityDynamicModel* (*ProximityDynamicModelCreator)(sdf::ElementPtr, \
                                                                  physics::LinkPtr);

   /*
  class ProximityDynamicModelFactory
  {

    public: ProximityDynamicModel* CreateProximityDynamicModels(sdf::ElementPtr _sdf,
                                                     physics::LinkPtr _link);

    /// \brief Returns the singleton instance of this factory.
    public: static ProximityDynamicModelFactory& GetInstance();

    /// \brief Register a class with its creator.
    public: bool RegisterCreator(const std::string& _identifier,
                                 ProximityDynamicModelCreator _creator);

    /// \brief Constructor is private since this is a singleton.
    private: ProximityDynamicModelFactory() {}

    /// \brief Map of each registered identifier to its corresponding creator.
    private: std::map<std::string, ProximityDynamicModelCreator> creators_;

  }
};
*/
}

/////

#endif
