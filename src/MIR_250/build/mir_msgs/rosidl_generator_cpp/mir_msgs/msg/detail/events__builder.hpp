// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/Events.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__EVENTS__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__EVENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/events__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_Events_events
{
public:
  explicit Init_Events_events(::mir_msgs::msg::Events & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::Events events(::mir_msgs::msg::Events::_events_type arg)
  {
    msg_.events = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::Events msg_;
};

class Init_Events_header
{
public:
  Init_Events_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Events_events header(::mir_msgs::msg::Events::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Events_events(msg_);
  }

private:
  ::mir_msgs::msg::Events msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::Events>()
{
  return mir_msgs::msg::builder::Init_Events_header();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__EVENTS__BUILDER_HPP_
