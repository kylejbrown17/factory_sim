// Generated by gencpp from file test/display_image_save.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_DISPLAY_IMAGE_SAVE_H
#define TEST_MESSAGE_DISPLAY_IMAGE_SAVE_H

#include <ros/service_traits.h>


#include <test/display_image_saveRequest.h>
#include <test/display_image_saveResponse.h>


namespace test
{

struct display_image_save
{

typedef display_image_saveRequest Request;
typedef display_image_saveResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct display_image_save
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::display_image_save > {
  static const char* value()
  {
    return "e0d9a6b0c2c4d70d173cf3baf8d7df7c";
  }

  static const char* value(const ::test::display_image_save&) { return value(); }
};

template<>
struct DataType< ::test::display_image_save > {
  static const char* value()
  {
    return "test/display_image_save";
  }

  static const char* value(const ::test::display_image_save&) { return value(); }
};


// service_traits::MD5Sum< ::test::display_image_saveRequest> should match 
// service_traits::MD5Sum< ::test::display_image_save > 
template<>
struct MD5Sum< ::test::display_image_saveRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::display_image_save >::value();
  }
  static const char* value(const ::test::display_image_saveRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::display_image_saveRequest> should match 
// service_traits::DataType< ::test::display_image_save > 
template<>
struct DataType< ::test::display_image_saveRequest>
{
  static const char* value()
  {
    return DataType< ::test::display_image_save >::value();
  }
  static const char* value(const ::test::display_image_saveRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::display_image_saveResponse> should match 
// service_traits::MD5Sum< ::test::display_image_save > 
template<>
struct MD5Sum< ::test::display_image_saveResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::display_image_save >::value();
  }
  static const char* value(const ::test::display_image_saveResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::display_image_saveResponse> should match 
// service_traits::DataType< ::test::display_image_save > 
template<>
struct DataType< ::test::display_image_saveResponse>
{
  static const char* value()
  {
    return DataType< ::test::display_image_save >::value();
  }
  static const char* value(const ::test::display_image_saveResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_DISPLAY_IMAGE_SAVE_H
