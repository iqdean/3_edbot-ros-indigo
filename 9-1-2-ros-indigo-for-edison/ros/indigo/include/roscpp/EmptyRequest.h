// Generated by gencpp from file roscpp/EmptyRequest.msg
// DO NOT EDIT!


#ifndef ROSCPP_MESSAGE_EMPTYREQUEST_H
#define ROSCPP_MESSAGE_EMPTYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roscpp
{
template <class ContainerAllocator>
struct EmptyRequest_
{
  typedef EmptyRequest_<ContainerAllocator> Type;

  EmptyRequest_()
    {
    }
  EmptyRequest_(const ContainerAllocator& _alloc)
    {
    }






  typedef boost::shared_ptr< ::roscpp::EmptyRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roscpp::EmptyRequest_<ContainerAllocator> const> ConstPtr;

}; // struct EmptyRequest_

typedef ::roscpp::EmptyRequest_<std::allocator<void> > EmptyRequest;

typedef boost::shared_ptr< ::roscpp::EmptyRequest > EmptyRequestPtr;
typedef boost::shared_ptr< ::roscpp::EmptyRequest const> EmptyRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roscpp::EmptyRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roscpp::EmptyRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roscpp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'roscpp': ['/home/iqdean/ros_catkin_ws/src/ros_comm/roscpp/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roscpp::EmptyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roscpp::EmptyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roscpp::EmptyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roscpp::EmptyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roscpp::EmptyRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roscpp::EmptyRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roscpp::EmptyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::roscpp::EmptyRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::roscpp::EmptyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roscpp/EmptyRequest";
  }

  static const char* value(const ::roscpp::EmptyRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roscpp::EmptyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::roscpp::EmptyRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roscpp::EmptyRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct EmptyRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roscpp::EmptyRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::roscpp::EmptyRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ROSCPP_MESSAGE_EMPTYREQUEST_H
