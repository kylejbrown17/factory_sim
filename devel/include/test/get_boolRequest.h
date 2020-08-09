// Generated by gencpp from file test/get_boolRequest.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_GET_BOOLREQUEST_H
#define TEST_MESSAGE_GET_BOOLREQUEST_H


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
struct get_boolRequest_
{
  typedef get_boolRequest_<ContainerAllocator> Type;

  get_boolRequest_()
    : ask(false)  {
    }
  get_boolRequest_(const ContainerAllocator& _alloc)
    : ask(false)  {
  (void)_alloc;
    }



   typedef uint8_t _ask_type;
  _ask_type ask;





  typedef boost::shared_ptr< ::test::get_boolRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::get_boolRequest_<ContainerAllocator> const> ConstPtr;

}; // struct get_boolRequest_

typedef ::test::get_boolRequest_<std::allocator<void> > get_boolRequest;

typedef boost::shared_ptr< ::test::get_boolRequest > get_boolRequestPtr;
typedef boost::shared_ptr< ::test::get_boolRequest const> get_boolRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::get_boolRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::get_boolRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::get_boolRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::get_boolRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::get_boolRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::get_boolRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::get_boolRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::get_boolRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::get_boolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fbe9700edfca44c5eefb040d9b60f6d6";
  }

  static const char* value(const ::test::get_boolRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfbe9700edfca44c5ULL;
  static const uint64_t static_value2 = 0xeefb040d9b60f6d6ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::get_boolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/get_boolRequest";
  }

  static const char* value(const ::test::get_boolRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::get_boolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ask\n\
";
  }

  static const char* value(const ::test::get_boolRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::get_boolRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct get_boolRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::get_boolRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::get_boolRequest_<ContainerAllocator>& v)
  {
    s << indent << "ask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_GET_BOOLREQUEST_H
