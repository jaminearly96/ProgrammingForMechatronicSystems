// Generated by gencpp from file lama_msgs/GetCrossingRequest.msg
// DO NOT EDIT!


#ifndef LAMA_MSGS_MESSAGE_GETCROSSINGREQUEST_H
#define LAMA_MSGS_MESSAGE_GETCROSSINGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lama_msgs
{
template <class ContainerAllocator>
struct GetCrossingRequest_
{
  typedef GetCrossingRequest_<ContainerAllocator> Type;

  GetCrossingRequest_()
    : id(0)  {
    }
  GetCrossingRequest_(const ContainerAllocator& _alloc)
    : id(0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;





  typedef boost::shared_ptr< ::lama_msgs::GetCrossingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lama_msgs::GetCrossingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetCrossingRequest_

typedef ::lama_msgs::GetCrossingRequest_<std::allocator<void> > GetCrossingRequest;

typedef boost::shared_ptr< ::lama_msgs::GetCrossingRequest > GetCrossingRequestPtr;
typedef boost::shared_ptr< ::lama_msgs::GetCrossingRequest const> GetCrossingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lama_msgs::GetCrossingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lama_msgs::GetCrossingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace lama_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'lama_msgs': ['/home/yoda/Desktop/ProgrammingForMechatronicSystems/assignments/assignment5/catkin_ws/src/a5_support/lama_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::lama_msgs::GetCrossingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lama_msgs::GetCrossingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lama_msgs::GetCrossingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lama_msgs::GetCrossingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lama_msgs::GetCrossingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lama_msgs::GetCrossingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lama_msgs::GetCrossingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c5e4a7d59c68f74eabcec876a00216aa";
  }

  static const char* value(const ::lama_msgs::GetCrossingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc5e4a7d59c68f74eULL;
  static const uint64_t static_value2 = 0xabcec876a00216aaULL;
};

template<class ContainerAllocator>
struct DataType< ::lama_msgs::GetCrossingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lama_msgs/GetCrossingRequest";
  }

  static const char* value(const ::lama_msgs::GetCrossingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lama_msgs::GetCrossingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n\
";
  }

  static const char* value(const ::lama_msgs::GetCrossingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lama_msgs::GetCrossingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetCrossingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lama_msgs::GetCrossingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lama_msgs::GetCrossingRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LAMA_MSGS_MESSAGE_GETCROSSINGREQUEST_H
