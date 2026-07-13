// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/Trolley.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__TROLLEY__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__TROLLEY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/trolley__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_Trolley_offset_locked_wheels
{
public:
  explicit Init_Trolley_offset_locked_wheels(::mir_msgs::msg::Trolley & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::Trolley offset_locked_wheels(::mir_msgs::msg::Trolley::_offset_locked_wheels_type arg)
  {
    msg_.offset_locked_wheels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::Trolley msg_;
};

class Init_Trolley_height
{
public:
  explicit Init_Trolley_height(::mir_msgs::msg::Trolley & msg)
  : msg_(msg)
  {}
  Init_Trolley_offset_locked_wheels height(::mir_msgs::msg::Trolley::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Trolley_offset_locked_wheels(msg_);
  }

private:
  ::mir_msgs::msg::Trolley msg_;
};

class Init_Trolley_width
{
public:
  explicit Init_Trolley_width(::mir_msgs::msg::Trolley & msg)
  : msg_(msg)
  {}
  Init_Trolley_height width(::mir_msgs::msg::Trolley::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Trolley_height(msg_);
  }

private:
  ::mir_msgs::msg::Trolley msg_;
};

class Init_Trolley_length
{
public:
  explicit Init_Trolley_length(::mir_msgs::msg::Trolley & msg)
  : msg_(msg)
  {}
  Init_Trolley_width length(::mir_msgs::msg::Trolley::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_Trolley_width(msg_);
  }

private:
  ::mir_msgs::msg::Trolley msg_;
};

class Init_Trolley_id
{
public:
  Init_Trolley_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trolley_length id(::mir_msgs::msg::Trolley::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Trolley_length(msg_);
  }

private:
  ::mir_msgs::msg::Trolley msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::Trolley>()
{
  return mir_msgs::msg::builder::Init_Trolley_id();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__TROLLEY__BUILDER_HPP_
