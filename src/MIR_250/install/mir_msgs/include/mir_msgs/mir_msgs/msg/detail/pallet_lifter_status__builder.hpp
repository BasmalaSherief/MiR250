// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/PalletLifterStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PALLET_LIFTER_STATUS__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__PALLET_LIFTER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/pallet_lifter_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_PalletLifterStatus_state
{
public:
  explicit Init_PalletLifterStatus_state(::mir_msgs::msg::PalletLifterStatus & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::PalletLifterStatus state(::mir_msgs::msg::PalletLifterStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::PalletLifterStatus msg_;
};

class Init_PalletLifterStatus_is_enabled
{
public:
  Init_PalletLifterStatus_is_enabled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PalletLifterStatus_state is_enabled(::mir_msgs::msg::PalletLifterStatus::_is_enabled_type arg)
  {
    msg_.is_enabled = std::move(arg);
    return Init_PalletLifterStatus_state(msg_);
  }

private:
  ::mir_msgs::msg::PalletLifterStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::PalletLifterStatus>()
{
  return mir_msgs::msg::builder::Init_PalletLifterStatus_is_enabled();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__PALLET_LIFTER_STATUS__BUILDER_HPP_
