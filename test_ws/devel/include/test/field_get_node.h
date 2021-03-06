// Generated by gencpp from file test/field_get_node.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_FIELD_GET_NODE_H
#define TEST_MESSAGE_FIELD_GET_NODE_H

#include <ros/service_traits.h>


#include <test/field_get_nodeRequest.h>
#include <test/field_get_nodeResponse.h>


namespace test
{

struct field_get_node
{

typedef field_get_nodeRequest Request;
typedef field_get_nodeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_get_node
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::field_get_node > {
  static const char* value()
  {
    return "c17cafc0118b2cdcc4a632463f436156";
  }

  static const char* value(const ::test::field_get_node&) { return value(); }
};

template<>
struct DataType< ::test::field_get_node > {
  static const char* value()
  {
    return "test/field_get_node";
  }

  static const char* value(const ::test::field_get_node&) { return value(); }
};


// service_traits::MD5Sum< ::test::field_get_nodeRequest> should match 
// service_traits::MD5Sum< ::test::field_get_node > 
template<>
struct MD5Sum< ::test::field_get_nodeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_get_node >::value();
  }
  static const char* value(const ::test::field_get_nodeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_get_nodeRequest> should match 
// service_traits::DataType< ::test::field_get_node > 
template<>
struct DataType< ::test::field_get_nodeRequest>
{
  static const char* value()
  {
    return DataType< ::test::field_get_node >::value();
  }
  static const char* value(const ::test::field_get_nodeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::field_get_nodeResponse> should match 
// service_traits::MD5Sum< ::test::field_get_node > 
template<>
struct MD5Sum< ::test::field_get_nodeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_get_node >::value();
  }
  static const char* value(const ::test::field_get_nodeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_get_nodeResponse> should match 
// service_traits::DataType< ::test::field_get_node > 
template<>
struct DataType< ::test::field_get_nodeResponse>
{
  static const char* value()
  {
    return DataType< ::test::field_get_node >::value();
  }
  static const char* value(const ::test::field_get_nodeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_FIELD_GET_NODE_H
