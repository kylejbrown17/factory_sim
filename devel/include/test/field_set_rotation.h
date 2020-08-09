// Generated by gencpp from file test/field_set_rotation.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_FIELD_SET_ROTATION_H
#define TEST_MESSAGE_FIELD_SET_ROTATION_H

#include <ros/service_traits.h>


#include <test/field_set_rotationRequest.h>
#include <test/field_set_rotationResponse.h>


namespace test
{

struct field_set_rotation
{

typedef field_set_rotationRequest Request;
typedef field_set_rotationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_set_rotation
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::field_set_rotation > {
  static const char* value()
  {
    return "f7b9003dace87295f2b9eb1dc57c4294";
  }

  static const char* value(const ::test::field_set_rotation&) { return value(); }
};

template<>
struct DataType< ::test::field_set_rotation > {
  static const char* value()
  {
    return "test/field_set_rotation";
  }

  static const char* value(const ::test::field_set_rotation&) { return value(); }
};


// service_traits::MD5Sum< ::test::field_set_rotationRequest> should match 
// service_traits::MD5Sum< ::test::field_set_rotation > 
template<>
struct MD5Sum< ::test::field_set_rotationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_set_rotation >::value();
  }
  static const char* value(const ::test::field_set_rotationRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_set_rotationRequest> should match 
// service_traits::DataType< ::test::field_set_rotation > 
template<>
struct DataType< ::test::field_set_rotationRequest>
{
  static const char* value()
  {
    return DataType< ::test::field_set_rotation >::value();
  }
  static const char* value(const ::test::field_set_rotationRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::field_set_rotationResponse> should match 
// service_traits::MD5Sum< ::test::field_set_rotation > 
template<>
struct MD5Sum< ::test::field_set_rotationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_set_rotation >::value();
  }
  static const char* value(const ::test::field_set_rotationResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_set_rotationResponse> should match 
// service_traits::DataType< ::test::field_set_rotation > 
template<>
struct DataType< ::test::field_set_rotationResponse>
{
  static const char* value()
  {
    return DataType< ::test::field_set_rotation >::value();
  }
  static const char* value(const ::test::field_set_rotationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_FIELD_SET_ROTATION_H
