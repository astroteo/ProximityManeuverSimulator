#include <gazebo/gazebo.hh>
#include <gazebo/physics/Collision.hh>
#include <gazebo/physics/Link.hh>
#include <gazebo/physics/Model.hh>
#include <gazebo/physics/PhysicsEngine.hh>
#include <gazebo/physics/Shape.hh>
#include <gazebo/physics/World.hh>
#include <gazebo/transport/TransportTypes.hh>
#include <gazebo/transport/transport.hh>
#include <stdio.h>
#include <robosat_gazebo_plugins/ProximityDynamicObjectPlugin.hh>

namespace gazebo{

GZ_REGISTER_MODEL_PLUGIN(ProximityDynamicObjectPlugin)

/////////////////////////////////////////////////
ProximityDynamicObjectPlugin::ProximityDynamicObjectPlugin()
{
}

/////////////////////////////////////////////////
ProximityDynamicObjectPlugin::~ProximityDynamicObjectPlugin()
{
#if GAZEBO_MAJOR_VERSION >= 8
  this->updateConnection.reset();
#else
  event::Events::DisconnectWorldUpdateBegin(this->updateConnection);
#endif
}

/////////////////////////////////////////////////
void
ProximityDynamicObjectPlugin::Load(physics::ModelPtr _model,
                                   sdf::ElementPtr _sdf)
{
  gzwarn << "..Loading cholessy wiltshire plugin! \n";
  printf("..Loading cholessy wiltshire plugin! \n");
  //gzwarn << "elemnts count " << _sdf->GetElementDesctiptionCount()<<std::endl;
  GZ_ASSERT(_model != NULL, "Invalid model pointer");
  GZ_ASSERT(_sdf != NULL, "Invalid SDF element pointer");

  if(_model == NULL)
      printf("WTF => Null model \n");
  if(_sdf == NULL)
      printf("WTF => NUll sdf \n");


  this->model = _model;
  this->world = _model->GetWorld();

  // Initialize the transport node
  this->node = transport::NodePtr(new transport::Node());
  printf("..transport node initialized! \n");


  std::string worldName;
  #if GAZEBO_MAJOR_VERSION >= 8
    worldName = this->world->Name();
  #else
    worldName = this->world->GetName();
  #endif
  this->node->Init(worldName);

  //printf( "==> sdf name %s" , _sdf->GetName());

  for (sdf::ElementPtr linkElem = _sdf->GetElement("link"); linkElem;
         linkElem = linkElem->GetNextElement("link"))
  {
    printf("heeeerrree ==> loop over links");
    physics::LinkPtr link;
    std::string linkName = "";

    if (linkElem->HasAttribute("name"))
    {
      linkName = linkElem->Get<std::string>("name");
      gzwarn << "linkName (Get): " <<linkName<< std::endl;
      std::size_t found = linkName.find("base_link");
        
      if (found != std::string::npos)
      {
        this->baseLinkName = linkName;
        gzmsg << "Name of the BASE_LINK: " << this->baseLinkName << std::endl;
      }

      link = this->model->GetLink(linkName);
      if (!link)
      {
        gzwarn << "Specified link [" << linkName << "] not found."
               << std::endl;
        continue;
      }

    }
    else
    {
      gzwarn << "Attribute name missing from link [" << linkName
             << "]" << std::endl;
      continue;
    }

      // Creating a new ProximityDynamicModel for this link
      ProximityDynamicModelPtr pd_pointer;
      //pd_pointer->SetGravity(0.0);

      printf("Link-model =>: %s",linkName);
      this->models[link] = pd_pointer;
      //this->models[link]->Print("all");
    }  // for each link mentioned in plugin sdf
  //}
  //else
  //{
    //printf("WTF => No link(s) ??");
  //}

  // recap models map
  for (std::map<gazebo::physics::LinkPtr,
       ProximityDynamicModelPtr>::iterator it = models.begin();
       it != models.end(); ++it)
  {
      physics::LinkPtr _link = it->first;
      _link->SetGravityMode(false);

  }
  // Connect the update event callback
  this->Connect();
  printf("..plugin loading DONE! \n");


}

/////////////////////////////////////////////////
void
ProximityDynamicObjectPlugin::Init()
{
  // Doing nothing for now
}

/////////////////////////////////////////////////
void
ProximityDynamicObjectPlugin::Update(const common::UpdateInfo &_info)
{

  //printf("into update => \n" );
  double time = _info.simTime.Double();

  for (std::map<gazebo::physics::LinkPtr,
       ProximityDynamicModelPtr>::iterator it = models.begin();
       it != models.end(); ++it)
  {
    physics::LinkPtr link = it->first;
    ProximityDynamicModelPtr pd_ptr = it->second;

    printf("updating physics for link: " );
    pd_ptr->ApplyRelativeOrbitalForce();
  }
}

/////////////////////////////////////////////////
void ProximityDynamicObjectPlugin::Connect()
{
  // Connect the update event
  this->updateConnection = event::Events::ConnectWorldUpdateBegin(
        boost::bind(&ProximityDynamicObjectPlugin::Update,
                    this, _1));
}
}
