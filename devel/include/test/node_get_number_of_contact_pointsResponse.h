// Generated by gencpp from file test/node_get_number_of_contact_pointsResponse.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_NODE_GET_NUMBER_OF_CONTACT_POINTSRESPONSE_H
#define TEST_MESSAGE_NODE_GET_NUMBER_OF_CONTACT_POINTSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test
{
template <class ContainerAllocator>
struct node_get_number_of_contact_pointsResponse_
{
  typedef node_get_number_of_contact_pointsResponse_<ContainerAllocator> Type;

  node_get_number_of_contact_pointsResponse_()
    : numberOfContactPoints(0)  {
    }
  node_get_number_of_contact_pointsResponse_(const ContainerAllocator& _alloc)
    : numberOfContactPoints(0)  {
  (void)_alloc;
    }



   typedef int32_t _numberOfContactPoints_type;
  _numberOfContactPoints_type numberOfContactPoints;





  typedef boost::shared_ptr< ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct node_get_number_of_contact_pointsResponse_

typedef ::test::node_get_number_of_contact_pointsResponse_<std::allocator<void> > node_get_number_of_contact_pointsResponse;

typedef boost::shared_ptr< ::test::node_get_number_of_contact_pointsResponse > node_get_number_of_contact_pointsResponsePtr;
typedef boost::shared_ptr< ::test::node_get_number_of_contact_pointsResponse const> node_get_number_of_contact_pointsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2614f5acd0e58fdc4bc77a1795306071";
  }

  static const char* value(const ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2614f5acd0e58fdcULL;
  static const uint64_t static_value2 = 0x4bc77a1795306071ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/node_get_number_of_contact_pointsResponse";
  }

  static const char* value(const ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 numberOfContactPoints\n\
\n\
";
  }

  static const char* value(const ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.numberOfContactPoints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_get_number_of_contact_pointsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::node_get_number_of_contact_pointsResponse_<ContainerAllocator>& v)
  {
    s << indent << "numberOfContactPoints: ";
    Printer<int32_t>::stream(s, indent + "  ", v.numberOfContactPoints);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_NODE_GET_NUMBER_OF_CONTACT_POINTSRESPONSE_H
