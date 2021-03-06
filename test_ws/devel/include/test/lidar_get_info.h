// Generated by gencpp from file test/lidar_get_info.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_LIDAR_GET_INFO_H
#define TEST_MESSAGE_LIDAR_GET_INFO_H

#include <ros/service_traits.h>


#include <test/lidar_get_infoRequest.h>
#include <test/lidar_get_infoResponse.h>


namespace test
{

struct lidar_get_info
{

typedef lidar_get_infoRequest Request;
typedef lidar_get_infoResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct lidar_get_info
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::lidar_get_info > {
  static const char* value()
  {
    return "d69a9b3d17121f1bdd796764ea53059a";
  }

  static const char* value(const ::test::lidar_get_info&) { return value(); }
};

template<>
struct DataType< ::test::lidar_get_info > {
  static const char* value()
  {
    return "test/lidar_get_info";
  }

  static const char* value(const ::test::lidar_get_info&) { return value(); }
};


// service_traits::MD5Sum< ::test::lidar_get_infoRequest> should match 
// service_traits::MD5Sum< ::test::lidar_get_info > 
template<>
struct MD5Sum< ::test::lidar_get_infoRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::lidar_get_info >::value();
  }
  static const char* value(const ::test::lidar_get_infoRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::lidar_get_infoRequest> should match 
// service_traits::DataType< ::test::lidar_get_info > 
template<>
struct DataType< ::test::lidar_get_infoRequest>
{
  static const char* value()
  {
    return DataType< ::test::lidar_get_info >::value();
  }
  static const char* value(const ::test::lidar_get_infoRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::lidar_get_infoResponse> should match 
// service_traits::MD5Sum< ::test::lidar_get_info > 
template<>
struct MD5Sum< ::test::lidar_get_infoResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::lidar_get_info >::value();
  }
  static const char* value(const ::test::lidar_get_infoResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::lidar_get_infoResponse> should match 
// service_traits::DataType< ::test::lidar_get_info > 
template<>
struct DataType< ::test::lidar_get_infoResponse>
{
  static const char* value()
  {
    return DataType< ::test::lidar_get_info >::value();
  }
  static const char* value(const ::test::lidar_get_infoResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_LIDAR_GET_INFO_H
