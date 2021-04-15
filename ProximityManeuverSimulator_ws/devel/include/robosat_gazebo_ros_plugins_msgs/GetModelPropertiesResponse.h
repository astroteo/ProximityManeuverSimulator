// Generated by gencpp from file robosat_gazebo_ros_plugins_msgs/GetModelPropertiesResponse.msg
// DO NOT EDIT!


#ifndef ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETMODELPROPERTIESRESPONSE_H
#define ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETMODELPROPERTIESRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robosat_gazebo_ros_plugins_msgs
{
template <class ContainerAllocator>
struct GetModelPropertiesResponse_
{
  typedef GetModelPropertiesResponse_<ContainerAllocator> Type;

  GetModelPropertiesResponse_()
    : link_names()  {
    }
  GetModelPropertiesResponse_(const ContainerAllocator& _alloc)
    : link_names(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _link_names_type;
  _link_names_type link_names;





  typedef boost::shared_ptr< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetModelPropertiesResponse_

typedef ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<std::allocator<void> > GetModelPropertiesResponse;

typedef boost::shared_ptr< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse > GetModelPropertiesResponsePtr;
typedef boost::shared_ptr< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse const> GetModelPropertiesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator1> & lhs, const ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator2> & rhs)
{
  return lhs.link_names == rhs.link_names;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator1> & lhs, const ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robosat_gazebo_ros_plugins_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8f2ac94008b559adc87f7d99565ba995";
  }

  static const char* value(const ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8f2ac94008b559adULL;
  static const uint64_t static_value2 = 0xc87f7d99565ba995ULL;
};

template<class ContainerAllocator>
struct DataType< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robosat_gazebo_ros_plugins_msgs/GetModelPropertiesResponse";
  }

  static const char* value(const ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[]  link_names\n"
"#robos_gazebo_ros_plugins_msgs/UnderwaterObjectModel[] models\n"
"\n"
;
  }

  static const char* value(const ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.link_names);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetModelPropertiesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse_<ContainerAllocator>& v)
  {
    s << indent << "link_names[]" << std::endl;
    for (size_t i = 0; i < v.link_names.size(); ++i)
    {
      s << indent << "  link_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.link_names[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETMODELPROPERTIESRESPONSE_H
