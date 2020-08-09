// Generated by gencpp from file test/mouse_get_state.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_MOUSE_GET_STATE_H
#define TEST_MESSAGE_MOUSE_GET_STATE_H

#include <ros/service_traits.h>


#include <test/mouse_get_stateRequest.h>
#include <test/mouse_get_stateResponse.h>


namespace test
{

struct mouse_get_state
{

typedef mouse_get_stateRequest Request;
typedef mouse_get_stateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct mouse_get_state
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::mouse_get_state > {
  static const char* value()
  {
    return "f4314fc92ab9c1f74ef71e42c0634a99";
  }

  static const char* value(const ::test::mouse_get_state&) { return value(); }
};

template<>
struct DataType< ::test::mouse_get_state > {
  static const char* value()
  {
    return "test/mouse_get_state";
  }

  static const char* value(const ::test::mouse_get_state&) { return value(); }
};


// service_traits::MD5Sum< ::test::mouse_get_stateRequest> should match 
// service_traits::MD5Sum< ::test::mouse_get_state > 
template<>
struct MD5Sum< ::test::mouse_get_stateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::mouse_get_state >::value();
  }
  static const char* value(const ::test::mouse_get_stateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::mouse_get_stateRequest> should match 
// service_traits::DataType< ::test::mouse_get_state > 
template<>
struct DataType< ::test::mouse_get_stateRequest>
{
  static const char* value()
  {
    return DataType< ::test::mouse_get_state >::value();
  }
  static const char* value(const ::test::mouse_get_stateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::mouse_get_stateResponse> should match 
// service_traits::MD5Sum< ::test::mouse_get_state > 
template<>
struct MD5Sum< ::test::mouse_get_stateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::mouse_get_state >::value();
  }
  static const char* value(const ::test::mouse_get_stateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::mouse_get_stateResponse> should match 
// service_traits::DataType< ::test::mouse_get_state > 
template<>
struct DataType< ::test::mouse_get_stateResponse>
{
  static const char* value()
  {
    return DataType< ::test::mouse_get_state >::value();
  }
  static const char* value(const ::test::mouse_get_stateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_MOUSE_GET_STATE_H
