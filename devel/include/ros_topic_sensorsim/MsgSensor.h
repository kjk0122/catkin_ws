// Generated by gencpp from file ros_topic_sensorsim/MsgSensor.msg
// DO NOT EDIT!


#ifndef ROS_TOPIC_SENSORSIM_MESSAGE_MSGSENSOR_H
#define ROS_TOPIC_SENSORSIM_MESSAGE_MSGSENSOR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_topic_sensorsim
{
template <class ContainerAllocator>
struct MsgSensor_
{
  typedef MsgSensor_<ContainerAllocator> Type;

  MsgSensor_()
    : temp(0.0)  {
    }
  MsgSensor_(const ContainerAllocator& _alloc)
    : temp(0.0)  {
  (void)_alloc;
    }



   typedef float _temp_type;
  _temp_type temp;





  typedef boost::shared_ptr< ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> const> ConstPtr;

}; // struct MsgSensor_

typedef ::ros_topic_sensorsim::MsgSensor_<std::allocator<void> > MsgSensor;

typedef boost::shared_ptr< ::ros_topic_sensorsim::MsgSensor > MsgSensorPtr;
typedef boost::shared_ptr< ::ros_topic_sensorsim::MsgSensor const> MsgSensorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator1> & lhs, const ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator2> & rhs)
{
  return lhs.temp == rhs.temp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator1> & lhs, const ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_topic_sensorsim

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b8b64af59df1604df7e647a04e645a45";
  }

  static const char* value(const ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb8b64af59df1604dULL;
  static const uint64_t static_value2 = 0xf7e647a04e645a45ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_topic_sensorsim/MsgSensor";
  }

  static const char* value(const ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 temp\n"
;
  }

  static const char* value(const ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.temp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MsgSensor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_topic_sensorsim::MsgSensor_<ContainerAllocator>& v)
  {
    s << indent << "temp: ";
    Printer<float>::stream(s, indent + "  ", v.temp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_TOPIC_SENSORSIM_MESSAGE_MSGSENSOR_H