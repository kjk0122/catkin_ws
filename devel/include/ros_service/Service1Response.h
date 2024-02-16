// Generated by gencpp from file ros_service/Service1Response.msg
// DO NOT EDIT!


#ifndef ROS_SERVICE_MESSAGE_SERVICE1RESPONSE_H
#define ROS_SERVICE_MESSAGE_SERVICE1RESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_service
{
template <class ContainerAllocator>
struct Service1Response_
{
  typedef Service1Response_<ContainerAllocator> Type;

  Service1Response_()
    : result(0)  {
    }
  Service1Response_(const ContainerAllocator& _alloc)
    : result(0)  {
  (void)_alloc;
    }



   typedef int64_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::ros_service::Service1Response_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_service::Service1Response_<ContainerAllocator> const> ConstPtr;

}; // struct Service1Response_

typedef ::ros_service::Service1Response_<std::allocator<void> > Service1Response;

typedef boost::shared_ptr< ::ros_service::Service1Response > Service1ResponsePtr;
typedef boost::shared_ptr< ::ros_service::Service1Response const> Service1ResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_service::Service1Response_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_service::Service1Response_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_service::Service1Response_<ContainerAllocator1> & lhs, const ::ros_service::Service1Response_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_service::Service1Response_<ContainerAllocator1> & lhs, const ::ros_service::Service1Response_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_service

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_service::Service1Response_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_service::Service1Response_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_service::Service1Response_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_service::Service1Response_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_service::Service1Response_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_service::Service1Response_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_service::Service1Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9b05623554ab950ed237d43d45f0b4dd";
  }

  static const char* value(const ::ros_service::Service1Response_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9b05623554ab950eULL;
  static const uint64_t static_value2 = 0xd237d43d45f0b4ddULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_service::Service1Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_service/Service1Response";
  }

  static const char* value(const ::ros_service::Service1Response_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_service::Service1Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 result\n"
"\n"
;
  }

  static const char* value(const ::ros_service::Service1Response_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_service::Service1Response_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Service1Response_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_service::Service1Response_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_service::Service1Response_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int64_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_SERVICE_MESSAGE_SERVICE1RESPONSE_H