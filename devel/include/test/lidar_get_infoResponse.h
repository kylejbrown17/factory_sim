// Generated by gencpp from file test/lidar_get_infoResponse.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_LIDAR_GET_INFORESPONSE_H
#define TEST_MESSAGE_LIDAR_GET_INFORESPONSE_H


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
struct lidar_get_infoResponse_
{
  typedef lidar_get_infoResponse_<ContainerAllocator> Type;

  lidar_get_infoResponse_()
    : horizontalResolution(0)
    , numberOfLayers(0)
    , fov(0.0)
    , verticalFov(0.0)
    , minRange(0.0)
    , maxRange(0.0)  {
    }
  lidar_get_infoResponse_(const ContainerAllocator& _alloc)
    : horizontalResolution(0)
    , numberOfLayers(0)
    , fov(0.0)
    , verticalFov(0.0)
    , minRange(0.0)
    , maxRange(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _horizontalResolution_type;
  _horizontalResolution_type horizontalResolution;

   typedef uint32_t _numberOfLayers_type;
  _numberOfLayers_type numberOfLayers;

   typedef double _fov_type;
  _fov_type fov;

   typedef double _verticalFov_type;
  _verticalFov_type verticalFov;

   typedef double _minRange_type;
  _minRange_type minRange;

   typedef double _maxRange_type;
  _maxRange_type maxRange;





  typedef boost::shared_ptr< ::test::lidar_get_infoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::lidar_get_infoResponse_<ContainerAllocator> const> ConstPtr;

}; // struct lidar_get_infoResponse_

typedef ::test::lidar_get_infoResponse_<std::allocator<void> > lidar_get_infoResponse;

typedef boost::shared_ptr< ::test::lidar_get_infoResponse > lidar_get_infoResponsePtr;
typedef boost::shared_ptr< ::test::lidar_get_infoResponse const> lidar_get_infoResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::lidar_get_infoResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::lidar_get_infoResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::lidar_get_infoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::lidar_get_infoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::lidar_get_infoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::lidar_get_infoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::lidar_get_infoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::lidar_get_infoResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::lidar_get_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e3ce26475d0d5fee0e59e3479a798bf0";
  }

  static const char* value(const ::test::lidar_get_infoResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe3ce26475d0d5feeULL;
  static const uint64_t static_value2 = 0x0e59e3479a798bf0ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::lidar_get_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/lidar_get_infoResponse";
  }

  static const char* value(const ::test::lidar_get_infoResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::lidar_get_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 horizontalResolution\n\
uint32 numberOfLayers\n\
float64 fov\n\
float64 verticalFov\n\
float64 minRange\n\
float64 maxRange\n\
\n\
";
  }

  static const char* value(const ::test::lidar_get_infoResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::lidar_get_infoResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.horizontalResolution);
      stream.next(m.numberOfLayers);
      stream.next(m.fov);
      stream.next(m.verticalFov);
      stream.next(m.minRange);
      stream.next(m.maxRange);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct lidar_get_infoResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::lidar_get_infoResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::lidar_get_infoResponse_<ContainerAllocator>& v)
  {
    s << indent << "horizontalResolution: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.horizontalResolution);
    s << indent << "numberOfLayers: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.numberOfLayers);
    s << indent << "fov: ";
    Printer<double>::stream(s, indent + "  ", v.fov);
    s << indent << "verticalFov: ";
    Printer<double>::stream(s, indent + "  ", v.verticalFov);
    s << indent << "minRange: ";
    Printer<double>::stream(s, indent + "  ", v.minRange);
    s << indent << "maxRange: ";
    Printer<double>::stream(s, indent + "  ", v.maxRange);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_LIDAR_GET_INFORESPONSE_H
