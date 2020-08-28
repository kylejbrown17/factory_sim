// Generated by gencpp from file test/skin_get_bone_nameResponse.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_SKIN_GET_BONE_NAMERESPONSE_H
#define TEST_MESSAGE_SKIN_GET_BONE_NAMERESPONSE_H


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
struct skin_get_bone_nameResponse_
{
  typedef skin_get_bone_nameResponse_<ContainerAllocator> Type;

  skin_get_bone_nameResponse_()
    : name()  {
    }
  skin_get_bone_nameResponse_(const ContainerAllocator& _alloc)
    : name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;





  typedef boost::shared_ptr< ::test::skin_get_bone_nameResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::skin_get_bone_nameResponse_<ContainerAllocator> const> ConstPtr;

}; // struct skin_get_bone_nameResponse_

typedef ::test::skin_get_bone_nameResponse_<std::allocator<void> > skin_get_bone_nameResponse;

typedef boost::shared_ptr< ::test::skin_get_bone_nameResponse > skin_get_bone_nameResponsePtr;
typedef boost::shared_ptr< ::test::skin_get_bone_nameResponse const> skin_get_bone_nameResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::skin_get_bone_nameResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::skin_get_bone_nameResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'test': ['/home/nbhak/Desktop/test_ws/src/test/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test::skin_get_bone_nameResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::skin_get_bone_nameResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::skin_get_bone_nameResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::skin_get_bone_nameResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::skin_get_bone_nameResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::skin_get_bone_nameResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::skin_get_bone_nameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1f3d28f1b044c871e6eff2e9fc3c667";
  }

  static const char* value(const ::test::skin_get_bone_nameResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1f3d28f1b044c87ULL;
  static const uint64_t static_value2 = 0x1e6eff2e9fc3c667ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::skin_get_bone_nameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/skin_get_bone_nameResponse";
  }

  static const char* value(const ::test::skin_get_bone_nameResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::skin_get_bone_nameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
\n\
";
  }

  static const char* value(const ::test::skin_get_bone_nameResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::skin_get_bone_nameResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct skin_get_bone_nameResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::skin_get_bone_nameResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::skin_get_bone_nameResponse_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_SKIN_GET_BONE_NAMERESPONSE_H