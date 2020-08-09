// Generated by gencpp from file test/field_import_node.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_FIELD_IMPORT_NODE_H
#define TEST_MESSAGE_FIELD_IMPORT_NODE_H

#include <ros/service_traits.h>


#include <test/field_import_nodeRequest.h>
#include <test/field_import_nodeResponse.h>


namespace test
{

struct field_import_node
{

typedef field_import_nodeRequest Request;
typedef field_import_nodeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_import_node
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::field_import_node > {
  static const char* value()
  {
    return "7ae35e4ee41afc3355320c40a4ed6624";
  }

  static const char* value(const ::test::field_import_node&) { return value(); }
};

template<>
struct DataType< ::test::field_import_node > {
  static const char* value()
  {
    return "test/field_import_node";
  }

  static const char* value(const ::test::field_import_node&) { return value(); }
};


// service_traits::MD5Sum< ::test::field_import_nodeRequest> should match 
// service_traits::MD5Sum< ::test::field_import_node > 
template<>
struct MD5Sum< ::test::field_import_nodeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_import_node >::value();
  }
  static const char* value(const ::test::field_import_nodeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_import_nodeRequest> should match 
// service_traits::DataType< ::test::field_import_node > 
template<>
struct DataType< ::test::field_import_nodeRequest>
{
  static const char* value()
  {
    return DataType< ::test::field_import_node >::value();
  }
  static const char* value(const ::test::field_import_nodeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::field_import_nodeResponse> should match 
// service_traits::MD5Sum< ::test::field_import_node > 
template<>
struct MD5Sum< ::test::field_import_nodeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_import_node >::value();
  }
  static const char* value(const ::test::field_import_nodeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_import_nodeResponse> should match 
// service_traits::DataType< ::test::field_import_node > 
template<>
struct DataType< ::test::field_import_nodeResponse>
{
  static const char* value()
  {
    return DataType< ::test::field_import_node >::value();
  }
  static const char* value(const ::test::field_import_nodeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_FIELD_IMPORT_NODE_H
