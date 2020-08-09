// Generated by gencpp from file test/node_set_velocityRequest.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_NODE_SET_VELOCITYREQUEST_H
#define TEST_MESSAGE_NODE_SET_VELOCITYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Twist.h>

namespace test
{
template <class ContainerAllocator>
struct node_set_velocityRequest_
{
  typedef node_set_velocityRequest_<ContainerAllocator> Type;

  node_set_velocityRequest_()
    : node(0)
    , velocity()  {
    }
  node_set_velocityRequest_(const ContainerAllocator& _alloc)
    : node(0)
    , velocity(_alloc)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;





  typedef boost::shared_ptr< ::test::node_set_velocityRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::node_set_velocityRequest_<ContainerAllocator> const> ConstPtr;

}; // struct node_set_velocityRequest_

typedef ::test::node_set_velocityRequest_<std::allocator<void> > node_set_velocityRequest;

typedef boost::shared_ptr< ::test::node_set_velocityRequest > node_set_velocityRequestPtr;
typedef boost::shared_ptr< ::test::node_set_velocityRequest const> node_set_velocityRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::node_set_velocityRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::node_set_velocityRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'test': ['/home/nbhak/Desktop/test_ws/src/test/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test::node_set_velocityRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::node_set_velocityRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::node_set_velocityRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::node_set_velocityRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::node_set_velocityRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::node_set_velocityRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::node_set_velocityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9db90beda51aaccd9c477b9d0b062003";
  }

  static const char* value(const ::test::node_set_velocityRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9db90beda51aaccdULL;
  static const uint64_t static_value2 = 0x9c477b9d0b062003ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::node_set_velocityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/node_set_velocityRequest";
  }

  static const char* value(const ::test::node_set_velocityRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::node_set_velocityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n\
geometry_msgs/Twist velocity\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::test::node_set_velocityRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::node_set_velocityRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
      stream.next(m.velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_set_velocityRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::node_set_velocityRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::node_set_velocityRequest_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_NODE_SET_VELOCITYREQUEST_H
