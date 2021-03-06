// Generated by gencpp from file test/supervisor_get_from_defResponse.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_SUPERVISOR_GET_FROM_DEFRESPONSE_H
#define TEST_MESSAGE_SUPERVISOR_GET_FROM_DEFRESPONSE_H


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
struct supervisor_get_from_defResponse_
{
  typedef supervisor_get_from_defResponse_<ContainerAllocator> Type;

  supervisor_get_from_defResponse_()
    : node(0)  {
    }
  supervisor_get_from_defResponse_(const ContainerAllocator& _alloc)
    : node(0)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;





  typedef boost::shared_ptr< ::test::supervisor_get_from_defResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::supervisor_get_from_defResponse_<ContainerAllocator> const> ConstPtr;

}; // struct supervisor_get_from_defResponse_

typedef ::test::supervisor_get_from_defResponse_<std::allocator<void> > supervisor_get_from_defResponse;

typedef boost::shared_ptr< ::test::supervisor_get_from_defResponse > supervisor_get_from_defResponsePtr;
typedef boost::shared_ptr< ::test::supervisor_get_from_defResponse const> supervisor_get_from_defResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::supervisor_get_from_defResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::supervisor_get_from_defResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::supervisor_get_from_defResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::supervisor_get_from_defResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::supervisor_get_from_defResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::supervisor_get_from_defResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::supervisor_get_from_defResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::supervisor_get_from_defResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::supervisor_get_from_defResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "364f76d0680a5475664d98abd705f036";
  }

  static const char* value(const ::test::supervisor_get_from_defResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x364f76d0680a5475ULL;
  static const uint64_t static_value2 = 0x664d98abd705f036ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::supervisor_get_from_defResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/supervisor_get_from_defResponse";
  }

  static const char* value(const ::test::supervisor_get_from_defResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::supervisor_get_from_defResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n\
\n\
";
  }

  static const char* value(const ::test::supervisor_get_from_defResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::supervisor_get_from_defResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct supervisor_get_from_defResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::supervisor_get_from_defResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::supervisor_get_from_defResponse_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_SUPERVISOR_GET_FROM_DEFRESPONSE_H
