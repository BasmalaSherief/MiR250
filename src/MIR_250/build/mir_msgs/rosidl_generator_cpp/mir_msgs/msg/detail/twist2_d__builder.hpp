// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/Twist2D.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__TWIST2_D__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__TWIST2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/twist2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_Twist2D_angular
{
public:
  explicit Init_Twist2D_angular(::mir_msgs::msg::Twist2D & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::Twist2D angular(::mir_msgs::msg::Twist2D::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::Twist2D msg_;
};

class Init_Twist2D_linear
{
public:
  Init_Twist2D_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Twist2D_angular linear(::mir_msgs::msg::Twist2D::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_Twist2D_angular(msg_);
  }

private:
  ::mir_msgs::msg::Twist2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::Twist2D>()
{
  return mir_msgs::msg::builder::Init_Twist2D_linear();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__TWIST2_D__BUILDER_HPP_
