// Generated by gencpp from file rescue_bot/drive_motor.msg
// DO NOT EDIT!


#ifndef RESCUE_BOT_MESSAGE_DRIVE_MOTOR_H
#define RESCUE_BOT_MESSAGE_DRIVE_MOTOR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rescue_bot
{
template <class ContainerAllocator>
struct drive_motor_
{
  typedef drive_motor_<ContainerAllocator> Type;

  drive_motor_()
    : m_1(0)
    , m_2(0)  {
    }
  drive_motor_(const ContainerAllocator& _alloc)
    : m_1(0)
    , m_2(0)  {
  (void)_alloc;
    }



   typedef int16_t _m_1_type;
  _m_1_type m_1;

   typedef int16_t _m_2_type;
  _m_2_type m_2;





  typedef boost::shared_ptr< ::rescue_bot::drive_motor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rescue_bot::drive_motor_<ContainerAllocator> const> ConstPtr;

}; // struct drive_motor_

typedef ::rescue_bot::drive_motor_<std::allocator<void> > drive_motor;

typedef boost::shared_ptr< ::rescue_bot::drive_motor > drive_motorPtr;
typedef boost::shared_ptr< ::rescue_bot::drive_motor const> drive_motorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rescue_bot::drive_motor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rescue_bot::drive_motor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rescue_bot::drive_motor_<ContainerAllocator1> & lhs, const ::rescue_bot::drive_motor_<ContainerAllocator2> & rhs)
{
  return lhs.m_1 == rhs.m_1 &&
    lhs.m_2 == rhs.m_2;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rescue_bot::drive_motor_<ContainerAllocator1> & lhs, const ::rescue_bot::drive_motor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rescue_bot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rescue_bot::drive_motor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rescue_bot::drive_motor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rescue_bot::drive_motor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rescue_bot::drive_motor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rescue_bot::drive_motor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rescue_bot::drive_motor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rescue_bot::drive_motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0a3cf26992116e8869f3387fe00a35d8";
  }

  static const char* value(const ::rescue_bot::drive_motor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0a3cf26992116e88ULL;
  static const uint64_t static_value2 = 0x69f3387fe00a35d8ULL;
};

template<class ContainerAllocator>
struct DataType< ::rescue_bot::drive_motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rescue_bot/drive_motor";
  }

  static const char* value(const ::rescue_bot::drive_motor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rescue_bot::drive_motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 m_1\n"
"int16 m_2\n"
;
  }

  static const char* value(const ::rescue_bot::drive_motor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rescue_bot::drive_motor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.m_1);
      stream.next(m.m_2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct drive_motor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rescue_bot::drive_motor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rescue_bot::drive_motor_<ContainerAllocator>& v)
  {
    s << indent << "m_1: ";
    Printer<int16_t>::stream(s, indent + "  ", v.m_1);
    s << indent << "m_2: ";
    Printer<int16_t>::stream(s, indent + "  ", v.m_2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RESCUE_BOT_MESSAGE_DRIVE_MOTOR_H
