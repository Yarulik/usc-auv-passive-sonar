/* Auto-generated by genmsg_cpp for file /home/hieu/ros_workspace/sonar_node/msg/PingerArray.msg */
#ifndef SONAR_NODE_MESSAGE_PINGERARRAY_H
#define SONAR_NODE_MESSAGE_PINGERARRAY_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "sonar_node/Pinger.h"

namespace sonar_node
{
template <class ContainerAllocator>
struct PingerArray_ : public ros::Message
{
  typedef PingerArray_<ContainerAllocator> Type;

  PingerArray_()
  : Pingers()
  {
  }

  PingerArray_(const ContainerAllocator& _alloc)
  : Pingers(_alloc)
  {
  }

  typedef std::vector< ::sonar_node::Pinger_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sonar_node::Pinger_<ContainerAllocator> >::other >  _Pingers_type;
  std::vector< ::sonar_node::Pinger_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sonar_node::Pinger_<ContainerAllocator> >::other >  Pingers;


  ROS_DEPRECATED uint32_t get_Pingers_size() const { return (uint32_t)Pingers.size(); }
  ROS_DEPRECATED void set_Pingers_size(uint32_t size) { Pingers.resize((size_t)size); }
  ROS_DEPRECATED void get_Pingers_vec(std::vector< ::sonar_node::Pinger_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sonar_node::Pinger_<ContainerAllocator> >::other > & vec) const { vec = this->Pingers; }
  ROS_DEPRECATED void set_Pingers_vec(const std::vector< ::sonar_node::Pinger_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sonar_node::Pinger_<ContainerAllocator> >::other > & vec) { this->Pingers = vec; }
private:
  static const char* __s_getDataType_() { return "sonar_node/PingerArray"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "fd64935a04f55a3dfcff9fa3975c5353"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "sonar_node/Pinger[] Pingers\n\
\n\
================================================================================\n\
MSG: sonar_node/Pinger\n\
int8 Id           # 0 is correct pinger, 1 is incorrect pinger\n\
float64 Heading\n\
float64 Magnitude\n\
float64 TimeSince\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, Pingers);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, Pingers);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(Pingers);
    return size;
  }

  typedef boost::shared_ptr< ::sonar_node::PingerArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sonar_node::PingerArray_<ContainerAllocator>  const> ConstPtr;
}; // struct PingerArray
typedef  ::sonar_node::PingerArray_<std::allocator<void> > PingerArray;

typedef boost::shared_ptr< ::sonar_node::PingerArray> PingerArrayPtr;
typedef boost::shared_ptr< ::sonar_node::PingerArray const> PingerArrayConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::sonar_node::PingerArray_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::sonar_node::PingerArray_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace sonar_node

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::sonar_node::PingerArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fd64935a04f55a3dfcff9fa3975c5353";
  }

  static const char* value(const  ::sonar_node::PingerArray_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xfd64935a04f55a3dULL;
  static const uint64_t static_value2 = 0xfcff9fa3975c5353ULL;
};

template<class ContainerAllocator>
struct DataType< ::sonar_node::PingerArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sonar_node/PingerArray";
  }

  static const char* value(const  ::sonar_node::PingerArray_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::sonar_node::PingerArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sonar_node/Pinger[] Pingers\n\
\n\
================================================================================\n\
MSG: sonar_node/Pinger\n\
int8 Id           # 0 is correct pinger, 1 is incorrect pinger\n\
float64 Heading\n\
float64 Magnitude\n\
float64 TimeSince\n\
\n\
";
  }

  static const char* value(const  ::sonar_node::PingerArray_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::sonar_node::PingerArray_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.Pingers);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PingerArray_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sonar_node::PingerArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::sonar_node::PingerArray_<ContainerAllocator> & v) 
  {
    s << indent << "Pingers[]" << std::endl;
    for (size_t i = 0; i < v.Pingers.size(); ++i)
    {
      s << indent << "  Pingers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sonar_node::Pinger_<ContainerAllocator> >::stream(s, indent + "    ", v.Pingers[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // SONAR_NODE_MESSAGE_PINGERARRAY_H

