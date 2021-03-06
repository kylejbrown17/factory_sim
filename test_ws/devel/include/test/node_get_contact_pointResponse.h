// Generated by gencpp from file test/node_get_contact_pointResponse.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_NODE_GET_CONTACT_POINTRESPONSE_H
#define TEST_MESSAGE_NODE_GET_CONTACT_POINTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace test
{
template <class ContainerAllocator>
struct node_get_contact_pointResponse_
{
  typedef node_get_contact_pointResponse_<ContainerAllocator> Type;

  node_get_contact_pointResponse_()
    : point()  {
    }
  node_get_contact_pointResponse_(const ContainerAllocator& _alloc)
    : point(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _point_type;
  _point_type point;





  typedef boost::shared_ptr< ::test::node_get_contact_pointResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::node_get_contact_pointResponse_<ContainerAllocator> const> ConstPtr;

}; // struct node_get_contact_pointResponse_

typedef ::test::node_get_contact_pointResponse_<std::allocator<void> > node_get_contact_pointResponse;

typedef boost::shared_ptr< ::test::node_get_contact_pointResponse > node_get_contact_pointResponsePtr;
typedef boost::shared_ptr< ::test::node_get_contact_pointResponse const> node_get_contact_pointResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::node_get_contact_pointResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::node_get_contact_pointResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::node_get_contact_pointResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::node_get_contact_pointResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::node_get_contact_pointResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::node_get_contact_pointResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::node_get_contact_pointResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::node_get_contact_pointResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::node_get_contact_pointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a7c84ff13976aa04656e56e300124444";
  }

  static const char* value(const ::test::node_get_contact_pointResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa7c84ff13976aa04ULL;
  static const uint64_t static_value2 = 0x656e56e300124444ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::node_get_contact_pointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/node_get_contact_pointResponse";
  }

  static const char* value(const ::test::node_get_contact_pointResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::node_get_contact_pointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point point\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::test::node_get_contact_pointResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::node_get_contact_pointResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_get_contact_pointResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::node_get_contact_pointResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::node_get_contact_pointResponse_<ContainerAllocator>& v)
  {
    s << indent << "point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_NODE_GET_CONTACT_POINTRESPONSE_H
