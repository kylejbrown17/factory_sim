// Generated by gencpp from file test/field_set_rotationRequest.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_FIELD_SET_ROTATIONREQUEST_H
#define TEST_MESSAGE_FIELD_SET_ROTATIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Quaternion.h>

namespace test
{
template <class ContainerAllocator>
struct field_set_rotationRequest_
{
  typedef field_set_rotationRequest_<ContainerAllocator> Type;

  field_set_rotationRequest_()
    : field(0)
    , index(0)
    , value()  {
    }
  field_set_rotationRequest_(const ContainerAllocator& _alloc)
    : field(0)
    , index(0)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef uint64_t _field_type;
  _field_type field;

   typedef int32_t _index_type;
  _index_type index;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::test::field_set_rotationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::field_set_rotationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct field_set_rotationRequest_

typedef ::test::field_set_rotationRequest_<std::allocator<void> > field_set_rotationRequest;

typedef boost::shared_ptr< ::test::field_set_rotationRequest > field_set_rotationRequestPtr;
typedef boost::shared_ptr< ::test::field_set_rotationRequest const> field_set_rotationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::field_set_rotationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::field_set_rotationRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::field_set_rotationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::field_set_rotationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::field_set_rotationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::field_set_rotationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::field_set_rotationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::field_set_rotationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::field_set_rotationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "39307750f227656c9e82141d1e0c7416";
  }

  static const char* value(const ::test::field_set_rotationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x39307750f227656cULL;
  static const uint64_t static_value2 = 0x9e82141d1e0c7416ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::field_set_rotationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/field_set_rotationRequest";
  }

  static const char* value(const ::test::field_set_rotationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::field_set_rotationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 field\n\
int32 index\n\
geometry_msgs/Quaternion value\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::test::field_set_rotationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::field_set_rotationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.field);
      stream.next(m.index);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_set_rotationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::field_set_rotationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::field_set_rotationRequest_<ContainerAllocator>& v)
  {
    s << indent << "field: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.field);
    s << indent << "index: ";
    Printer<int32_t>::stream(s, indent + "  ", v.index);
    s << indent << "value: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_FIELD_SET_ROTATIONREQUEST_H
