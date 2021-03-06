// Generated by gencpp from file test/field_get_vec3fResponse.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_FIELD_GET_VEC3FRESPONSE_H
#define TEST_MESSAGE_FIELD_GET_VEC3FRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>

namespace test
{
template <class ContainerAllocator>
struct field_get_vec3fResponse_
{
  typedef field_get_vec3fResponse_<ContainerAllocator> Type;

  field_get_vec3fResponse_()
    : value()  {
    }
  field_get_vec3fResponse_(const ContainerAllocator& _alloc)
    : value(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::test::field_get_vec3fResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::field_get_vec3fResponse_<ContainerAllocator> const> ConstPtr;

}; // struct field_get_vec3fResponse_

typedef ::test::field_get_vec3fResponse_<std::allocator<void> > field_get_vec3fResponse;

typedef boost::shared_ptr< ::test::field_get_vec3fResponse > field_get_vec3fResponsePtr;
typedef boost::shared_ptr< ::test::field_get_vec3fResponse const> field_get_vec3fResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::field_get_vec3fResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::field_get_vec3fResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::field_get_vec3fResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::field_get_vec3fResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::field_get_vec3fResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::field_get_vec3fResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::field_get_vec3fResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::field_get_vec3fResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::field_get_vec3fResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a2c51c1a0258b375bed188057dceaac2";
  }

  static const char* value(const ::test::field_get_vec3fResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa2c51c1a0258b375ULL;
  static const uint64_t static_value2 = 0xbed188057dceaac2ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::field_get_vec3fResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/field_get_vec3fResponse";
  }

  static const char* value(const ::test::field_get_vec3fResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::field_get_vec3fResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Vector3 value\n\
\n\
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

  static const char* value(const ::test::field_get_vec3fResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::field_get_vec3fResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_get_vec3fResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::field_get_vec3fResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::field_get_vec3fResponse_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_FIELD_GET_VEC3FRESPONSE_H
