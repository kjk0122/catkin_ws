// Generated by gencpp from file ros_service/Service1.msg
// DO NOT EDIT!


#ifndef ROS_SERVICE_MESSAGE_SERVICE1_H
#define ROS_SERVICE_MESSAGE_SERVICE1_H

#include <ros/service_traits.h>


#include <ros_service/Service1Request.h>
#include <ros_service/Service1Response.h>


namespace ros_service
{

struct Service1
{

typedef Service1Request Request;
typedef Service1Response Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Service1
} // namespace ros_service


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_service::Service1 > {
  static const char* value()
  {
    return "d431cae597499d244ef1c576e21358c8";
  }

  static const char* value(const ::ros_service::Service1&) { return value(); }
};

template<>
struct DataType< ::ros_service::Service1 > {
  static const char* value()
  {
    return "ros_service/Service1";
  }

  static const char* value(const ::ros_service::Service1&) { return value(); }
};


// service_traits::MD5Sum< ::ros_service::Service1Request> should match
// service_traits::MD5Sum< ::ros_service::Service1 >
template<>
struct MD5Sum< ::ros_service::Service1Request>
{
  static const char* value()
  {
    return MD5Sum< ::ros_service::Service1 >::value();
  }
  static const char* value(const ::ros_service::Service1Request&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_service::Service1Request> should match
// service_traits::DataType< ::ros_service::Service1 >
template<>
struct DataType< ::ros_service::Service1Request>
{
  static const char* value()
  {
    return DataType< ::ros_service::Service1 >::value();
  }
  static const char* value(const ::ros_service::Service1Request&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_service::Service1Response> should match
// service_traits::MD5Sum< ::ros_service::Service1 >
template<>
struct MD5Sum< ::ros_service::Service1Response>
{
  static const char* value()
  {
    return MD5Sum< ::ros_service::Service1 >::value();
  }
  static const char* value(const ::ros_service::Service1Response&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_service::Service1Response> should match
// service_traits::DataType< ::ros_service::Service1 >
template<>
struct DataType< ::ros_service::Service1Response>
{
  static const char* value()
  {
    return DataType< ::ros_service::Service1 >::value();
  }
  static const char* value(const ::ros_service::Service1Response&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_SERVICE_MESSAGE_SERVICE1_H