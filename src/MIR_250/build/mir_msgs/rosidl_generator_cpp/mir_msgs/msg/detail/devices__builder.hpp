// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/Devices.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__DEVICES__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__DEVICES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/devices__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_Devices_devices
{
public:
  Init_Devices_devices()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mir_msgs::msg::Devices devices(::mir_msgs::msg::Devices::_devices_type arg)
  {
    msg_.devices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::Devices msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::Devices>()
{
  return mir_msgs::msg::builder::Init_Devices_devices();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__DEVICES__BUILDER_HPP_
