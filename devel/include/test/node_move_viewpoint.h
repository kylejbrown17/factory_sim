// Generated by gencpp from file test/node_move_viewpoint.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_NODE_MOVE_VIEWPOINT_H
#define TEST_MESSAGE_NODE_MOVE_VIEWPOINT_H

#include <ros/service_traits.h>


#include <test/node_move_viewpointRequest.h>
#include <test/node_move_viewpointResponse.h>


namespace test
{

struct node_move_viewpoint
{

typedef node_move_viewpointRequest Request;
typedef node_move_viewpointResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_move_viewpoint
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::node_move_viewpoint > {
  static const char* value()
  {
    return "594d3b785623c78d3382c6628faa0f8c";
  }

  static const char* value(const ::test::node_move_viewpoint&) { return value(); }
};

template<>
struct DataType< ::test::node_move_viewpoint > {
  static const char* value()
  {
    return "test/node_move_viewpoint";
  }

  static const char* value(const ::test::node_move_viewpoint&) { return value(); }
};


// service_traits::MD5Sum< ::test::node_move_viewpointRequest> should match 
// service_traits::MD5Sum< ::test::node_move_viewpoint > 
template<>
struct MD5Sum< ::test::node_move_viewpointRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::node_move_viewpoint >::value();
  }
  static const char* value(const ::test::node_move_viewpointRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::node_move_viewpointRequest> should match 
// service_traits::DataType< ::test::node_move_viewpoint > 
template<>
struct DataType< ::test::node_move_viewpointRequest>
{
  static const char* value()
  {
    return DataType< ::test::node_move_viewpoint >::value();
  }
  static const char* value(const ::test::node_move_viewpointRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::node_move_viewpointResponse> should match 
// service_traits::MD5Sum< ::test::node_move_viewpoint > 
template<>
struct MD5Sum< ::test::node_move_viewpointResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::node_move_viewpoint >::value();
  }
  static const char* value(const ::test::node_move_viewpointResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::node_move_viewpointResponse> should match 
// service_traits::DataType< ::test::node_move_viewpoint > 
template<>
struct DataType< ::test::node_move_viewpointResponse>
{
  static const char* value()
  {
    return DataType< ::test::node_move_viewpoint >::value();
  }
  static const char* value(const ::test::node_move_viewpointResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_NODE_MOVE_VIEWPOINT_H
