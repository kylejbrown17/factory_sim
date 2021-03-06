// Generated by gencpp from file test/supervisor_set_labelResponse.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_SUPERVISOR_SET_LABELRESPONSE_H
#define TEST_MESSAGE_SUPERVISOR_SET_LABELRESPONSE_H


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
struct supervisor_set_labelResponse_
{
  typedef supervisor_set_labelResponse_<ContainerAllocator> Type;

  supervisor_set_labelResponse_()
    : success(0)  {
    }
  supervisor_set_labelResponse_(const ContainerAllocator& _alloc)
    : success(0)  {
  (void)_alloc;
    }



   typedef int8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::test::supervisor_set_labelResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::supervisor_set_labelResponse_<ContainerAllocator> const> ConstPtr;

}; // struct supervisor_set_labelResponse_

typedef ::test::supervisor_set_labelResponse_<std::allocator<void> > supervisor_set_labelResponse;

typedef boost::shared_ptr< ::test::supervisor_set_labelResponse > supervisor_set_labelResponsePtr;
typedef boost::shared_ptr< ::test::supervisor_set_labelResponse const> supervisor_set_labelResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::supervisor_set_labelResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::supervisor_set_labelResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::supervisor_set_labelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::supervisor_set_labelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::supervisor_set_labelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::supervisor_set_labelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::supervisor_set_labelResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::supervisor_set_labelResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::supervisor_set_labelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b13460cb14006d3852674b4c614f25f";
  }

  static const char* value(const ::test::supervisor_set_labelResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b13460cb14006d3ULL;
  static const uint64_t static_value2 = 0x852674b4c614f25fULL;
};

template<class ContainerAllocator>
struct DataType< ::test::supervisor_set_labelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/supervisor_set_labelResponse";
  }

  static const char* value(const ::test::supervisor_set_labelResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::supervisor_set_labelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 success\n\
\n\
";
  }

  static const char* value(const ::test::supervisor_set_labelResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::supervisor_set_labelResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct supervisor_set_labelResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::supervisor_set_labelResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::supervisor_set_labelResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<int8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_SUPERVISOR_SET_LABELRESPONSE_H
