// Generated by gencpp from file test/display_image_new.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_DISPLAY_IMAGE_NEW_H
#define TEST_MESSAGE_DISPLAY_IMAGE_NEW_H

#include <ros/service_traits.h>


#include <test/display_image_newRequest.h>
#include <test/display_image_newResponse.h>


namespace test
{

struct display_image_new
{

typedef display_image_newRequest Request;
typedef display_image_newResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct display_image_new
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::display_image_new > {
  static const char* value()
  {
    return "80a036f354960d09033ab0f8d6dffcf7";
  }

  static const char* value(const ::test::display_image_new&) { return value(); }
};

template<>
struct DataType< ::test::display_image_new > {
  static const char* value()
  {
    return "test/display_image_new";
  }

  static const char* value(const ::test::display_image_new&) { return value(); }
};


// service_traits::MD5Sum< ::test::display_image_newRequest> should match 
// service_traits::MD5Sum< ::test::display_image_new > 
template<>
struct MD5Sum< ::test::display_image_newRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::display_image_new >::value();
  }
  static const char* value(const ::test::display_image_newRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::display_image_newRequest> should match 
// service_traits::DataType< ::test::display_image_new > 
template<>
struct DataType< ::test::display_image_newRequest>
{
  static const char* value()
  {
    return DataType< ::test::display_image_new >::value();
  }
  static const char* value(const ::test::display_image_newRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::display_image_newResponse> should match 
// service_traits::MD5Sum< ::test::display_image_new > 
template<>
struct MD5Sum< ::test::display_image_newResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::display_image_new >::value();
  }
  static const char* value(const ::test::display_image_newResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::display_image_newResponse> should match 
// service_traits::DataType< ::test::display_image_new > 
template<>
struct DataType< ::test::display_image_newResponse>
{
  static const char* value()
  {
    return DataType< ::test::display_image_new >::value();
  }
  static const char* value(const ::test::display_image_newResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_DISPLAY_IMAGE_NEW_H
