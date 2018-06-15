// Generated by gencpp from file lama_msgs/SetLamaObject.msg
// DO NOT EDIT!


#ifndef LAMA_MSGS_MESSAGE_SETLAMAOBJECT_H
#define LAMA_MSGS_MESSAGE_SETLAMAOBJECT_H

#include <ros/service_traits.h>


#include <lama_msgs/SetLamaObjectRequest.h>
#include <lama_msgs/SetLamaObjectResponse.h>


namespace lama_msgs
{

struct SetLamaObject
{

typedef SetLamaObjectRequest Request;
typedef SetLamaObjectResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetLamaObject
} // namespace lama_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::lama_msgs::SetLamaObject > {
  static const char* value()
  {
    return "f191a122fd81f40804a5436e7a94b04c";
  }

  static const char* value(const ::lama_msgs::SetLamaObject&) { return value(); }
};

template<>
struct DataType< ::lama_msgs::SetLamaObject > {
  static const char* value()
  {
    return "lama_msgs/SetLamaObject";
  }

  static const char* value(const ::lama_msgs::SetLamaObject&) { return value(); }
};


// service_traits::MD5Sum< ::lama_msgs::SetLamaObjectRequest> should match 
// service_traits::MD5Sum< ::lama_msgs::SetLamaObject > 
template<>
struct MD5Sum< ::lama_msgs::SetLamaObjectRequest>
{
  static const char* value()
  {
    return MD5Sum< ::lama_msgs::SetLamaObject >::value();
  }
  static const char* value(const ::lama_msgs::SetLamaObjectRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::lama_msgs::SetLamaObjectRequest> should match 
// service_traits::DataType< ::lama_msgs::SetLamaObject > 
template<>
struct DataType< ::lama_msgs::SetLamaObjectRequest>
{
  static const char* value()
  {
    return DataType< ::lama_msgs::SetLamaObject >::value();
  }
  static const char* value(const ::lama_msgs::SetLamaObjectRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::lama_msgs::SetLamaObjectResponse> should match 
// service_traits::MD5Sum< ::lama_msgs::SetLamaObject > 
template<>
struct MD5Sum< ::lama_msgs::SetLamaObjectResponse>
{
  static const char* value()
  {
    return MD5Sum< ::lama_msgs::SetLamaObject >::value();
  }
  static const char* value(const ::lama_msgs::SetLamaObjectResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::lama_msgs::SetLamaObjectResponse> should match 
// service_traits::DataType< ::lama_msgs::SetLamaObject > 
template<>
struct DataType< ::lama_msgs::SetLamaObjectResponse>
{
  static const char* value()
  {
    return DataType< ::lama_msgs::SetLamaObject >::value();
  }
  static const char* value(const ::lama_msgs::SetLamaObjectResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // LAMA_MSGS_MESSAGE_SETLAMAOBJECT_H