// Generated by gencpp from file test/node_get_parent_nodeResponse.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_NODE_GET_PARENT_NODERESPONSE_H
#define TEST_MESSAGE_NODE_GET_PARENT_NODERESPONSE_H


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
struct node_get_parent_nodeResponse_
{
  typedef node_get_parent_nodeResponse_<ContainerAllocator> Type;

  node_get_parent_nodeResponse_()
    : node(0)  {
    }
  node_get_parent_nodeResponse_(const ContainerAllocator& _alloc)
    : node(0)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;





  typedef boost::shared_ptr< ::test::node_get_parent_nodeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::node_get_parent_nodeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct node_get_parent_nodeResponse_

typedef ::test::node_get_parent_nodeResponse_<std::allocator<void> > node_get_parent_nodeResponse;

typedef boost::shared_ptr< ::test::node_get_parent_nodeResponse > node_get_parent_nodeResponsePtr;
typedef boost::shared_ptr< ::test::node_get_parent_nodeResponse const> node_get_parent_nodeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::node_get_parent_nodeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::node_get_parent_nodeResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::node_get_parent_nodeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::node_get_parent_nodeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::node_get_parent_nodeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::node_get_parent_nodeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::node_get_parent_nodeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::node_get_parent_nodeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::node_get_parent_nodeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "364f76d0680a5475664d98abd705f036";
  }

  static const char* value(const ::test::node_get_parent_nodeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x364f76d0680a5475ULL;
  static const uint64_t static_value2 = 0x664d98abd705f036ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::node_get_parent_nodeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/node_get_parent_nodeResponse";
  }

  static const char* value(const ::test::node_get_parent_nodeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::node_get_parent_nodeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n\
\n\
";
  }

  static const char* value(const ::test::node_get_parent_nodeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::node_get_parent_nodeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_get_parent_nodeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::node_get_parent_nodeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::node_get_parent_nodeResponse_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_NODE_GET_PARENT_NODERESPONSE_H
