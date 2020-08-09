// Generated by gencpp from file test/skin_get_bone_positionRequest.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_SKIN_GET_BONE_POSITIONREQUEST_H
#define TEST_MESSAGE_SKIN_GET_BONE_POSITIONREQUEST_H


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
struct skin_get_bone_positionRequest_
{
  typedef skin_get_bone_positionRequest_<ContainerAllocator> Type;

  skin_get_bone_positionRequest_()
    : index(0)
    , absolute(false)  {
    }
  skin_get_bone_positionRequest_(const ContainerAllocator& _alloc)
    : index(0)
    , absolute(false)  {
  (void)_alloc;
    }



   typedef int32_t _index_type;
  _index_type index;

   typedef uint8_t _absolute_type;
  _absolute_type absolute;





  typedef boost::shared_ptr< ::test::skin_get_bone_positionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::skin_get_bone_positionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct skin_get_bone_positionRequest_

typedef ::test::skin_get_bone_positionRequest_<std::allocator<void> > skin_get_bone_positionRequest;

typedef boost::shared_ptr< ::test::skin_get_bone_positionRequest > skin_get_bone_positionRequestPtr;
typedef boost::shared_ptr< ::test::skin_get_bone_positionRequest const> skin_get_bone_positionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::skin_get_bone_positionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::skin_get_bone_positionRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::skin_get_bone_positionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::skin_get_bone_positionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::skin_get_bone_positionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::skin_get_bone_positionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::skin_get_bone_positionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::skin_get_bone_positionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::skin_get_bone_positionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8b80fdb520b22500446f343c69464386";
  }

  static const char* value(const ::test::skin_get_bone_positionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8b80fdb520b22500ULL;
  static const uint64_t static_value2 = 0x446f343c69464386ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::skin_get_bone_positionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/skin_get_bone_positionRequest";
  }

  static const char* value(const ::test::skin_get_bone_positionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::skin_get_bone_positionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 index\n\
bool absolute\n\
";
  }

  static const char* value(const ::test::skin_get_bone_positionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::skin_get_bone_positionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.index);
      stream.next(m.absolute);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct skin_get_bone_positionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::skin_get_bone_positionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::skin_get_bone_positionRequest_<ContainerAllocator>& v)
  {
    s << indent << "index: ";
    Printer<int32_t>::stream(s, indent + "  ", v.index);
    s << indent << "absolute: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.absolute);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_SKIN_GET_BONE_POSITIONREQUEST_H
