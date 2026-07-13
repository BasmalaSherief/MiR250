// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/Gpio.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__GPIO__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__GPIO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/gpio__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_Gpio_dat
{
public:
  explicit Init_Gpio_dat(::mir_msgs::msg::Gpio & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::Gpio dat(::mir_msgs::msg::Gpio::_dat_type arg)
  {
    msg_.dat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::Gpio msg_;
};

class Init_Gpio_ioport
{
public:
  Init_Gpio_ioport()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpio_dat ioport(::mir_msgs::msg::Gpio::_ioport_type arg)
  {
    msg_.ioport = std::move(arg);
    return Init_Gpio_dat(msg_);
  }

private:
  ::mir_msgs::msg::Gpio msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::Gpio>()
{
  return mir_msgs::msg::builder::Init_Gpio_ioport();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__GPIO__BUILDER_HPP_
