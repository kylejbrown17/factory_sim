// Generated by gencpp from file test/field_set_int32.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_FIELD_SET_INT32_H
#define TEST_MESSAGE_FIELD_SET_INT32_H

#include <ros/service_traits.h>


#include <test/field_set_int32Request.h>
#include <test/field_set_int32Response.h>


namespace test
{

struct field_set_int32
{

typedef field_set_int32Request Request;
typedef field_set_int32Response Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_set_int32
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::field_set_int32 > {
  static const char* value()
  {
    return "934ca213eb591b7ceac92091bc85f1c2";
  }

  static const char* value(const ::test::field_set_int32&) { return value(); }
};

template<>
struct DataType< ::test::field_set_int32 > {
  static const char* value()
  {
    return "test/field_set_int32";
  }

  static const char* value(const ::test::field_set_int32&) { return value(); }
};


// service_traits::MD5Sum< ::test::field_set_int32Request> should match 
// service_traits::MD5Sum< ::test::field_set_int32 > 
template<>
struct MD5Sum< ::test::field_set_int32Request>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_set_int32 >::value();
  }
  static const char* value(const ::test::field_set_int32Request&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_set_int32Request> should match 
// service_traits::DataType< ::test::field_set_int32 > 
template<>
struct DataType< ::test::field_set_int32Request>
{
  static const char* value()
  {
    return DataType< ::test::field_set_int32 >::value();
  }
  static const char* value(const ::test::field_set_int32Request&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::field_set_int32Response> should match 
// service_traits::MD5Sum< ::test::field_set_int32 > 
template<>
struct MD5Sum< ::test::field_set_int32Response>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_set_int32 >::value();
  }
  static const char* value(const ::test::field_set_int32Response&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_set_int32Response> should match 
// service_traits::DataType< ::test::field_set_int32 > 
template<>
struct DataType< ::test::field_set_int32Response>
{
  static const char* value()
  {
    return DataType< ::test::field_set_int32 >::value();
  }
  static const char* value(const ::test::field_set_int32Response&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_FIELD_SET_INT32_H
