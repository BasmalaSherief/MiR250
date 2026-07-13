// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/Device.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__DEVICE__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__DEVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/device__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_Device_serial
{
public:
  explicit Init_Device_serial(::mir_msgs::msg::Device & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::Device serial(::mir_msgs::msg::Device::_serial_type arg)
  {
    msg_.serial = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::Device msg_;
};

class Init_Device_name
{
public:
  Init_Device_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Device_serial name(::mir_msgs::msg::Device::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Device_serial(msg_);
  }

private:
  ::mir_msgs::msg::Device msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::Device>()
{
  return mir_msgs::msg::builder::Init_Device_name();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__DEVICE__BUILDER_HPP_
