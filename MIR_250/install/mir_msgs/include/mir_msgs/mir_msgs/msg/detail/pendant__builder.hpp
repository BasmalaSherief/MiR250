// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/Pendant.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PENDANT__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__PENDANT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/pendant__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_Pendant_gpio_bits
{
public:
  explicit Init_Pendant_gpio_bits(::mir_msgs::msg::Pendant & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::Pendant gpio_bits(::mir_msgs::msg::Pendant::_gpio_bits_type arg)
  {
    msg_.gpio_bits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::Pendant msg_;
};

class Init_Pendant_y
{
public:
  explicit Init_Pendant_y(::mir_msgs::msg::Pendant & msg)
  : msg_(msg)
  {}
  Init_Pendant_gpio_bits y(::mir_msgs::msg::Pendant::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Pendant_gpio_bits(msg_);
  }

private:
  ::mir_msgs::msg::Pendant msg_;
};

class Init_Pendant_x
{
public:
  Init_Pendant_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pendant_y x(::mir_msgs::msg::Pendant::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Pendant_y(msg_);
  }

private:
  ::mir_msgs::msg::Pendant msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::Pendant>()
{
  return mir_msgs::msg::builder::Init_Pendant_x();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__PENDANT__BUILDER_HPP_
