// Generated by gencpp from file test/node_reset_functions.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_NODE_RESET_FUNCTIONS_H
#define TEST_MESSAGE_NODE_RESET_FUNCTIONS_H

#include <ros/service_traits.h>


#include <test/node_reset_functionsRequest.h>
#include <test/node_reset_functionsResponse.h>


namespace test
{

struct node_reset_functions
{

typedef node_reset_functionsRequest Request;
typedef node_reset_functionsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_reset_functions
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::node_reset_functions > {
  static const char* value()
  {
    return "594d3b785623c78d3382c6628faa0f8c";
  }

  static const char* value(const ::test::node_reset_functions&) { return value(); }
};

template<>
struct DataType< ::test::node_reset_functions > {
  static const char* value()
  {
    return "test/node_reset_functions";
  }

  static const char* value(const ::test::node_reset_functions&) { return value(); }
};


// service_traits::MD5Sum< ::test::node_reset_functionsRequest> should match 
// service_traits::MD5Sum< ::test::node_reset_functions > 
template<>
struct MD5Sum< ::test::node_reset_functionsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::node_reset_functions >::value();
  }
  static const char* value(const ::test::node_reset_functionsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::node_reset_functionsRequest> should match 
// service_traits::DataType< ::test::node_reset_functions > 
template<>
struct DataType< ::test::node_reset_functionsRequest>
{
  static const char* value()
  {
    return DataType< ::test::node_reset_functions >::value();
  }
  static const char* value(const ::test::node_reset_functionsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::node_reset_functionsResponse> should match 
// service_traits::MD5Sum< ::test::node_reset_functions > 
template<>
struct MD5Sum< ::test::node_reset_functionsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::node_reset_functions >::value();
  }
  static const char* value(const ::test::node_reset_functionsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::node_reset_functionsResponse> should match 
// service_traits::DataType< ::test::node_reset_functions > 
template<>
struct DataType< ::test::node_reset_functionsResponse>
{
  static const char* value()
  {
    return DataType< ::test::node_reset_functions >::value();
  }
  static const char* value(const ::test::node_reset_functionsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_NODE_RESET_FUNCTIONS_H
