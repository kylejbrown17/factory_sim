// Generated by gencpp from file test/pen_set_ink_colorRequest.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_PEN_SET_INK_COLORREQUEST_H
#define TEST_MESSAGE_PEN_SET_INK_COLORREQUEST_H


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
struct pen_set_ink_colorRequest_
{
  typedef pen_set_ink_colorRequest_<ContainerAllocator> Type;

  pen_set_ink_colorRequest_()
    : color(0)
    , density(0.0)  {
    }
  pen_set_ink_colorRequest_(const ContainerAllocator& _alloc)
    : color(0)
    , density(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _color_type;
  _color_type color;

   typedef double _density_type;
  _density_type density;





  typedef boost::shared_ptr< ::test::pen_set_ink_colorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::pen_set_ink_colorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct pen_set_ink_colorRequest_

typedef ::test::pen_set_ink_colorRequest_<std::allocator<void> > pen_set_ink_colorRequest;

typedef boost::shared_ptr< ::test::pen_set_ink_colorRequest > pen_set_ink_colorRequestPtr;
typedef boost::shared_ptr< ::test::pen_set_ink_colorRequest const> pen_set_ink_colorRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::pen_set_ink_colorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::pen_set_ink_colorRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::pen_set_ink_colorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::pen_set_ink_colorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::pen_set_ink_colorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::pen_set_ink_colorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::pen_set_ink_colorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::pen_set_ink_colorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::pen_set_ink_colorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "156d8b74482921c561726aaf09907de8";
  }

  static const char* value(const ::test::pen_set_ink_colorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x156d8b74482921c5ULL;
  static const uint64_t static_value2 = 0x61726aaf09907de8ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::pen_set_ink_colorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/pen_set_ink_colorRequest";
  }

  static const char* value(const ::test::pen_set_ink_colorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::pen_set_ink_colorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 color\n\
float64 density\n\
";
  }

  static const char* value(const ::test::pen_set_ink_colorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::pen_set_ink_colorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.color);
      stream.next(m.density);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct pen_set_ink_colorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::pen_set_ink_colorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::pen_set_ink_colorRequest_<ContainerAllocator>& v)
  {
    s << indent << "color: ";
    Printer<int32_t>::stream(s, indent + "  ", v.color);
    s << indent << "density: ";
    Printer<double>::stream(s, indent + "  ", v.density);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_PEN_SET_INK_COLORREQUEST_H
