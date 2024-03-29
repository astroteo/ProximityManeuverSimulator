// Generated by gencpp from file robosat_gazebo_ros_plugins_msgs/ProximityDynamicObjectModel.msg
// DO NOT EDIT!


#ifndef ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_PROXIMITYDYNAMICOBJECTMODEL_H
#define ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_PROXIMITYDYNAMICOBJECTMODEL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Inertia.h>

namespace robosat_gazebo_ros_plugins_msgs
{
template <class ContainerAllocator>
struct ProximityDynamicObjectModel_
{
  typedef ProximityDynamicObjectModel_<ContainerAllocator> Type;

  ProximityDynamicObjectModel_()
    : added_mass()
    , linear_damping()
    , linear_damping_forward_speed()
    , quadratic_damping()
    , volume(0.0)
    , bbox_height(0.0)
    , bbox_length(0.0)
    , bbox_width(0.0)
    , fluid_density(0.0)
    , cob()
    , neutrally_buoyant(false)
    , inertia()  {
    }
  ProximityDynamicObjectModel_(const ContainerAllocator& _alloc)
    : added_mass(_alloc)
    , linear_damping(_alloc)
    , linear_damping_forward_speed(_alloc)
    , quadratic_damping(_alloc)
    , volume(0.0)
    , bbox_height(0.0)
    , bbox_length(0.0)
    , bbox_width(0.0)
    , fluid_density(0.0)
    , cob(_alloc)
    , neutrally_buoyant(false)
    , inertia(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _added_mass_type;
  _added_mass_type added_mass;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _linear_damping_type;
  _linear_damping_type linear_damping;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _linear_damping_forward_speed_type;
  _linear_damping_forward_speed_type linear_damping_forward_speed;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _quadratic_damping_type;
  _quadratic_damping_type quadratic_damping;

   typedef double _volume_type;
  _volume_type volume;

   typedef double _bbox_height_type;
  _bbox_height_type bbox_height;

   typedef double _bbox_length_type;
  _bbox_length_type bbox_length;

   typedef double _bbox_width_type;
  _bbox_width_type bbox_width;

   typedef double _fluid_density_type;
  _fluid_density_type fluid_density;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _cob_type;
  _cob_type cob;

   typedef uint8_t _neutrally_buoyant_type;
  _neutrally_buoyant_type neutrally_buoyant;

   typedef  ::geometry_msgs::Inertia_<ContainerAllocator>  _inertia_type;
  _inertia_type inertia;





  typedef boost::shared_ptr< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> const> ConstPtr;

}; // struct ProximityDynamicObjectModel_

typedef ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<std::allocator<void> > ProximityDynamicObjectModel;

typedef boost::shared_ptr< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel > ProximityDynamicObjectModelPtr;
typedef boost::shared_ptr< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel const> ProximityDynamicObjectModelConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator1> & lhs, const ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator2> & rhs)
{
  return lhs.added_mass == rhs.added_mass &&
    lhs.linear_damping == rhs.linear_damping &&
    lhs.linear_damping_forward_speed == rhs.linear_damping_forward_speed &&
    lhs.quadratic_damping == rhs.quadratic_damping &&
    lhs.volume == rhs.volume &&
    lhs.bbox_height == rhs.bbox_height &&
    lhs.bbox_length == rhs.bbox_length &&
    lhs.bbox_width == rhs.bbox_width &&
    lhs.fluid_density == rhs.fluid_density &&
    lhs.cob == rhs.cob &&
    lhs.neutrally_buoyant == rhs.neutrally_buoyant &&
    lhs.inertia == rhs.inertia;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator1> & lhs, const ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robosat_gazebo_ros_plugins_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "35ada57addb7202af96020ea2ddc109c";
  }

  static const char* value(const ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x35ada57addb7202aULL;
  static const uint64_t static_value2 = 0xf96020ea2ddc109cULL;
};

template<class ContainerAllocator>
struct DataType< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robosat_gazebo_ros_plugins_msgs/ProximityDynamicObjectModel";
  }

  static const char* value(const ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright (c) 2016 The UUV Simulator Authors.\n"
"# All rights reserved.\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#     http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"float64[] added_mass\n"
"float64[] linear_damping\n"
"float64[] linear_damping_forward_speed\n"
"float64[] quadratic_damping\n"
"float64 volume\n"
"float64 bbox_height\n"
"float64 bbox_length\n"
"float64 bbox_width\n"
"float64 fluid_density\n"
"geometry_msgs/Vector3 cob\n"
"bool neutrally_buoyant\n"
"geometry_msgs/Inertia inertia\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Inertia\n"
"# Mass [kg]\n"
"float64 m\n"
"\n"
"# Center of mass [m]\n"
"geometry_msgs/Vector3 com\n"
"\n"
"# Inertia Tensor [kg-m^2]\n"
"#     | ixx ixy ixz |\n"
"# I = | ixy iyy iyz |\n"
"#     | ixz iyz izz |\n"
"float64 ixx\n"
"float64 ixy\n"
"float64 ixz\n"
"float64 iyy\n"
"float64 iyz\n"
"float64 izz\n"
;
  }

  static const char* value(const ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.added_mass);
      stream.next(m.linear_damping);
      stream.next(m.linear_damping_forward_speed);
      stream.next(m.quadratic_damping);
      stream.next(m.volume);
      stream.next(m.bbox_height);
      stream.next(m.bbox_length);
      stream.next(m.bbox_width);
      stream.next(m.fluid_density);
      stream.next(m.cob);
      stream.next(m.neutrally_buoyant);
      stream.next(m.inertia);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ProximityDynamicObjectModel_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robosat_gazebo_ros_plugins_msgs::ProximityDynamicObjectModel_<ContainerAllocator>& v)
  {
    s << indent << "added_mass[]" << std::endl;
    for (size_t i = 0; i < v.added_mass.size(); ++i)
    {
      s << indent << "  added_mass[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.added_mass[i]);
    }
    s << indent << "linear_damping[]" << std::endl;
    for (size_t i = 0; i < v.linear_damping.size(); ++i)
    {
      s << indent << "  linear_damping[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.linear_damping[i]);
    }
    s << indent << "linear_damping_forward_speed[]" << std::endl;
    for (size_t i = 0; i < v.linear_damping_forward_speed.size(); ++i)
    {
      s << indent << "  linear_damping_forward_speed[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.linear_damping_forward_speed[i]);
    }
    s << indent << "quadratic_damping[]" << std::endl;
    for (size_t i = 0; i < v.quadratic_damping.size(); ++i)
    {
      s << indent << "  quadratic_damping[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.quadratic_damping[i]);
    }
    s << indent << "volume: ";
    Printer<double>::stream(s, indent + "  ", v.volume);
    s << indent << "bbox_height: ";
    Printer<double>::stream(s, indent + "  ", v.bbox_height);
    s << indent << "bbox_length: ";
    Printer<double>::stream(s, indent + "  ", v.bbox_length);
    s << indent << "bbox_width: ";
    Printer<double>::stream(s, indent + "  ", v.bbox_width);
    s << indent << "fluid_density: ";
    Printer<double>::stream(s, indent + "  ", v.fluid_density);
    s << indent << "cob: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.cob);
    s << indent << "neutrally_buoyant: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.neutrally_buoyant);
    s << indent << "inertia: ";
    s << std::endl;
    Printer< ::geometry_msgs::Inertia_<ContainerAllocator> >::stream(s, indent + "  ", v.inertia);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_PROXIMITYDYNAMICOBJECTMODEL_H
