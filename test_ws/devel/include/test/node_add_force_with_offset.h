// Generated by gencpp from file test/node_add_force_with_offset.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_NODE_ADD_FORCE_WITH_OFFSET_H
#define TEST_MESSAGE_NODE_ADD_FORCE_WITH_OFFSET_H

#include <ros/service_traits.h>


#include <test/node_add_force_with_offsetRequest.h>
#include <test/node_add_force_with_offsetResponse.h>


namespace test
{

struct node_add_force_with_offset
{

typedef node_add_force_with_offsetRequest Request;
typedef node_add_force_with_offsetResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_add_force_with_offset
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::node_add_force_with_offset > {
  static const char* value()
  {
    return "7bbdb8bfcc982af458fd685526128ebd";
  }

  static const char* value(const ::test::node_add_force_with_offset&) { return value(); }
};

template<>
struct DataType< ::test::node_add_force_with_offset > {
  static const char* value()
  {
    return "test/node_add_force_with_offset";
  }

  static const char* value(const ::test::node_add_force_with_offset&) { return value(); }
};


// service_traits::MD5Sum< ::test::node_add_force_with_offsetRequest> should match 
// service_traits::MD5Sum< ::test::node_add_force_with_offset > 
template<>
struct MD5Sum< ::test::node_add_force_with_offsetRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::node_add_force_with_offset >::value();
  }
  static const char* value(const ::test::node_add_force_with_offsetRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::node_add_force_with_offsetRequest> should match 
// service_traits::DataType< ::test::node_add_force_with_offset > 
template<>
struct DataType< ::test::node_add_force_with_offsetRequest>
{
  static const char* value()
  {
    return DataType< ::test::node_add_force_with_offset >::value();
  }
  static const char* value(const ::test::node_add_force_with_offsetRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::node_add_force_with_offsetResponse> should match 
// service_traits::MD5Sum< ::test::node_add_force_with_offset > 
template<>
struct MD5Sum< ::test::node_add_force_with_offsetResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::node_add_force_with_offset >::value();
  }
  static const char* value(const ::test::node_add_force_with_offsetResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::node_add_force_with_offsetResponse> should match 
// service_traits::DataType< ::test::node_add_force_with_offset > 
template<>
struct DataType< ::test::node_add_force_with_offsetResponse>
{
  static const char* value()
  {
    return DataType< ::test::node_add_force_with_offset >::value();
  }
  static const char* value(const ::test::node_add_force_with_offsetResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_NODE_ADD_FORCE_WITH_OFFSET_H