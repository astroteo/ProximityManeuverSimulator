#include <cmath>
#include<gazebo/gazebo.hh>
#include<robosat_gazebo_plugins/ProximityDynamicModel.hh>
#include <Eigen/Core>

namespace gazebo
{

  ////////////////////////////////////////
  ProximityDynamicModel::ProximityDynamicModel(physics::LinkPtr _link)
  {
    GZ_ASSERT(_link != NULL, "invalid link to pointer");

    this->link = _link;

  }
  ////////////////////////////////////////
  ProximityDynamicModel::~ProximityDynamicModel()
  {}

  ////////////////////////////////////////
  void
  ProximityDynamicModel::GetRelativeOrbitalForce(const ignition::math::Pose3d _pose,
                                                 const ignition::math::Vector3d _vel,
                                                       ignition::math::Vector3d &relativeOrbitalForce,
                                                 double n)
  {

    double mass;
    #if GAZEBO_MAJOR_VERSION >= 8
      mass = this->link->GetInertial()->Mass();
    #else
      mass = this->link->GetInertial()->GetMass();
    #endif

     Eigen::MatrixXd A(3,6);

     A << 3 * pow(n,2),  0,          0,     0,   2*n,    0,
          0,             0,          0,  -2*n,     0,    0,
          0,             0,  -pow(n,2),     0,     0,    0;


    Eigen::VectorXd x(6);
    x << _pose.Pos().X(),_pose.Pos().Y(),_pose.Pos().Z(),
         _vel.X(),_vel.Y(),_vel.Z();

    Eigen::Vector3d acc = A * x;
    /*
    relativeOrbitalForce.X(mass*acc(0));
    relativeOrbitalForce.Y(mass*acc(1));
    relativeOrbitalForce.Z(mass*acc(2));
    */
    printf("Fx: %d",acc(0));
    printf("Fy: %d",acc(1));
    printf("Fz: %d",acc(2));
    
    relativeOrbitalForce.Set(mass * acc(0), mass*acc(1), mass*acc(2));

  }

  ////////////////////////////////////////
  void ProximityDynamicModel::ApplyRelativeOrbitalForce()
  {

    // 1. get link's Pose & velocity
    ignition::math::Pose3d pose;
    ignition::math::Vector3d vel,relativeOrbitalForce;

    pose = this->link->WorldPose();
    vel = this->link->WorldLinearVel();//WorldCoGLinearVel()

    this->GetRelativeOrbitalForce(pose,vel,relativeOrbitalForce);

    this->link->AddForce(relativeOrbitalForce);
                //AddForceAtRelativePosition(relativeOrbitalForce,
                //this->GetCoB());
    }

/*
  /////////////////////////////////////////////////
  ProximityDynamicModelFactory& ProximityDynamicModelFactory::GetInstance()
  {
    static ProximityDynamicModelFactory instance;
    return instance;
  }

  /////////////////////////////////////////////////
  bool ProximityDynamicModelFactory::RegisterCreator(const std::string& _identifier,
                                 HydrodynamicModelCreator _creator)
  {
    if (creators_.find(_identifier) != creators_.end())
    {
      std::cerr << "Warning: Registering HydrodynamicModel with identifier: "
                << _identifier << " twice" << std::endl;
    }
    creators_[_identifier] = _creator;

    std::cout << "Registered HydrodynamicModel type " << _identifier << std::endl;
    return true;
  }////////////////////////////////////////////////////////////////////////////////

  /*
  HydrodynamicModel * HydrodynamicModelFactory::CreateHydrodynamicModel(
    sdf::ElementPtr _sdf, physics::LinkPtr _link)
{
  GZ_ASSERT(_sdf->HasElement("hydrodynamic_model"),
            "Hydrodynamic model is missing");
  sdf::ElementPtr sdfModel = _sdf->GetElement("hydrodynamic_model");
  if (!sdfModel->HasElement("type"))
  {
    std::cerr << "Model has no type" << std::endl;
    return NULL;
  }

  std::string identifier = sdfModel->Get<std::string>("type");

  if (creators_.find(identifier) == creators_.end())
  {
    std::cerr << "Cannot create HydrodynamicModel with unknown identifier: "
              << identifier << std::endl;
    return NULL;
  }

  return creators_[identifier](_sdf, _link);
}
  */
}
