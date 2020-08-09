// Generated by gencpp from file test/field_set_vec3f.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_FIELD_SET_VEC3F_H
#define TEST_MESSAGE_FIELD_SET_VEC3F_H

#include <ros/service_traits.h>


#include <test/field_set_vec3fRequest.h>
#include <test/field_set_vec3fResponse.h>


namespace test
{

struct field_set_vec3f
{

typedef field_set_vec3fRequest Request;
typedef field_set_vec3fResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_set_vec3f
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::field_set_vec3f > {
  static const char* value()
  {
    return "e0edef5860d282e4d35ef264e28feecc";
  }

  static const char* value(const ::test::field_set_vec3f&) { return value(); }
};

template<>
struct DataType< ::test::field_set_vec3f > {
  static const char* value()
  {
    return "test/field_set_vec3f";
  }

  static const char* value(const ::test::field_set_vec3f&) { return value(); }
};


// service_traits::MD5Sum< ::test::field_set_vec3fRequest> should match 
// service_traits::MD5Sum< ::test::field_set_vec3f > 
template<>
struct MD5Sum< ::test::field_set_vec3fRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_set_vec3f >::value();
  }
  static const char* value(const ::test::field_set_vec3fRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_set_vec3fRequest> should match 
// service_traits::DataType< ::test::field_set_vec3f > 
template<>
struct DataType< ::test::field_set_vec3fRequest>
{
  static const char* value()
  {
    return DataType< ::test::field_set_vec3f >::value();
  }
  static const char* value(const ::test::field_set_vec3fRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::field_set_vec3fResponse> should match 
// service_traits::MD5Sum< ::test::field_set_vec3f > 
template<>
struct MD5Sum< ::test::field_set_vec3fResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_set_vec3f >::value();
  }
  static const char* value(const ::test::field_set_vec3fResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_set_vec3fResponse> should match 
// service_traits::DataType< ::test::field_set_vec3f > 
template<>
struct DataType< ::test::field_set_vec3fResponse>
{
  static const char* value()
  {
    return DataType< ::test::field_set_vec3f >::value();
  }
  static const char* value(const ::test::field_set_vec3fResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_FIELD_SET_VEC3F_H
