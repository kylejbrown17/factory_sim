// Generated by gencpp from file test/field_get_count.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_FIELD_GET_COUNT_H
#define TEST_MESSAGE_FIELD_GET_COUNT_H

#include <ros/service_traits.h>


#include <test/field_get_countRequest.h>
#include <test/field_get_countResponse.h>


namespace test
{

struct field_get_count
{

typedef field_get_countRequest Request;
typedef field_get_countResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_get_count
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::field_get_count > {
  static const char* value()
  {
    return "3e2de6f1a76fa011e87122941131671e";
  }

  static const char* value(const ::test::field_get_count&) { return value(); }
};

template<>
struct DataType< ::test::field_get_count > {
  static const char* value()
  {
    return "test/field_get_count";
  }

  static const char* value(const ::test::field_get_count&) { return value(); }
};


// service_traits::MD5Sum< ::test::field_get_countRequest> should match 
// service_traits::MD5Sum< ::test::field_get_count > 
template<>
struct MD5Sum< ::test::field_get_countRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_get_count >::value();
  }
  static const char* value(const ::test::field_get_countRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_get_countRequest> should match 
// service_traits::DataType< ::test::field_get_count > 
template<>
struct DataType< ::test::field_get_countRequest>
{
  static const char* value()
  {
    return DataType< ::test::field_get_count >::value();
  }
  static const char* value(const ::test::field_get_countRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::field_get_countResponse> should match 
// service_traits::MD5Sum< ::test::field_get_count > 
template<>
struct MD5Sum< ::test::field_get_countResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_get_count >::value();
  }
  static const char* value(const ::test::field_get_countResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_get_countResponse> should match 
// service_traits::DataType< ::test::field_get_count > 
template<>
struct DataType< ::test::field_get_countResponse>
{
  static const char* value()
  {
    return DataType< ::test::field_get_count >::value();
  }
  static const char* value(const ::test::field_get_countResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_FIELD_GET_COUNT_H
