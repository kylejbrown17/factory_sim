// Generated by gencpp from file test/mouse_get_stateRequest.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_MOUSE_GET_STATEREQUEST_H
#define TEST_MESSAGE_MOUSE_GET_STATEREQUEST_H


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
struct mouse_get_stateRequest_
{
  typedef mouse_get_stateRequest_<ContainerAllocator> Type;

  mouse_get_stateRequest_()
    : ask(0)  {
    }
  mouse_get_stateRequest_(const ContainerAllocator& _alloc)
    : ask(0)  {
  (void)_alloc;
    }



   typedef uint8_t _ask_type;
  _ask_type ask;





  typedef boost::shared_ptr< ::test::mouse_get_stateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::mouse_get_stateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct mouse_get_stateRequest_

typedef ::test::mouse_get_stateRequest_<std::allocator<void> > mouse_get_stateRequest;

typedef boost::shared_ptr< ::test::mouse_get_stateRequest > mouse_get_stateRequestPtr;
typedef boost::shared_ptr< ::test::mouse_get_stateRequest const> mouse_get_stateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::mouse_get_stateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::mouse_get_stateRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::mouse_get_stateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::mouse_get_stateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::mouse_get_stateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::mouse_get_stateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::mouse_get_stateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::mouse_get_stateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::mouse_get_stateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f9df5232b65af94f73f79fe6d84301bb";
  }

  static const char* value(const ::test::mouse_get_stateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9df5232b65af94fULL;
  static const uint64_t static_value2 = 0x73f79fe6d84301bbULL;
};

template<class ContainerAllocator>
struct DataType< ::test::mouse_get_stateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/mouse_get_stateRequest";
  }

  static const char* value(const ::test::mouse_get_stateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::mouse_get_stateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 ask\n\
";
  }

  static const char* value(const ::test::mouse_get_stateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::mouse_get_stateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mouse_get_stateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::mouse_get_stateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::mouse_get_stateRequest_<ContainerAllocator>& v)
  {
    s << indent << "ask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_MOUSE_GET_STATEREQUEST_H
