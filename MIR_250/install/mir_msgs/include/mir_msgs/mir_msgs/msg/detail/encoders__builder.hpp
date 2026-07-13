// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/Encoders.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__ENCODERS__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__ENCODERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/encoders__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_Encoders_right_wheel
{
public:
  explicit Init_Encoders_right_wheel(::mir_msgs::msg::Encoders & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::Encoders right_wheel(::mir_msgs::msg::Encoders::_right_wheel_type arg)
  {
    msg_.right_wheel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::Encoders msg_;
};

class Init_Encoders_left_wheel
{
public:
  explicit Init_Encoders_left_wheel(::mir_msgs::msg::Encoders & msg)
  : msg_(msg)
  {}
  Init_Encoders_right_wheel left_wheel(::mir_msgs::msg::Encoders::_left_wheel_type arg)
  {
    msg_.left_wheel = std::move(arg);
    return Init_Encoders_right_wheel(msg_);
  }

private:
  ::mir_msgs::msg::Encoders msg_;
};

class Init_Encoders_time_delta
{
public:
  Init_Encoders_time_delta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Encoders_left_wheel time_delta(::mir_msgs::msg::Encoders::_time_delta_type arg)
  {
    msg_.time_delta = std::move(arg);
    return Init_Encoders_left_wheel(msg_);
  }

private:
  ::mir_msgs::msg::Encoders msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::Encoders>()
{
  return mir_msgs::msg::builder::Init_Encoders_time_delta();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__ENCODERS__BUILDER_HPP_
