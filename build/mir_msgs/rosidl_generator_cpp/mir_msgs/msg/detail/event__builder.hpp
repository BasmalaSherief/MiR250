// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_Event_polygon
{
public:
  explicit Init_Event_polygon(::mir_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::Event polygon(::mir_msgs::msg::Event::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::Event msg_;
};

class Init_Event_area_name
{
public:
  explicit Init_Event_area_name(::mir_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_polygon area_name(::mir_msgs::msg::Event::_area_name_type arg)
  {
    msg_.area_name = std::move(arg);
    return Init_Event_polygon(msg_);
  }

private:
  ::mir_msgs::msg::Event msg_;
};

class Init_Event_area_guid
{
public:
  explicit Init_Event_area_guid(::mir_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_area_name area_guid(::mir_msgs::msg::Event::_area_guid_type arg)
  {
    msg_.area_guid = std::move(arg);
    return Init_Event_area_name(msg_);
  }

private:
  ::mir_msgs::msg::Event msg_;
};

class Init_Event_event_type
{
public:
  Init_Event_event_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Event_area_guid event_type(::mir_msgs::msg::Event::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return Init_Event_area_guid(msg_);
  }

private:
  ::mir_msgs::msg::Event msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::Event>()
{
  return mir_msgs::msg::builder::Init_Event_event_type();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_
