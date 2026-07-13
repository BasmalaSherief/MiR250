// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/ChargingState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__CHARGING_STATE__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__CHARGING_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/charging_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_ChargingState_last_time_voltage
{
public:
  explicit Init_ChargingState_last_time_voltage(::mir_msgs::msg::ChargingState & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::ChargingState last_time_voltage(::mir_msgs::msg::ChargingState::_last_time_voltage_type arg)
  {
    msg_.last_time_voltage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::ChargingState msg_;
};

class Init_ChargingState_is_voltage_low
{
public:
  explicit Init_ChargingState_is_voltage_low(::mir_msgs::msg::ChargingState & msg)
  : msg_(msg)
  {}
  Init_ChargingState_last_time_voltage is_voltage_low(::mir_msgs::msg::ChargingState::_is_voltage_low_type arg)
  {
    msg_.is_voltage_low = std::move(arg);
    return Init_ChargingState_last_time_voltage(msg_);
  }

private:
  ::mir_msgs::msg::ChargingState msg_;
};

class Init_ChargingState_charging_voltage_raw
{
public:
  explicit Init_ChargingState_charging_voltage_raw(::mir_msgs::msg::ChargingState & msg)
  : msg_(msg)
  {}
  Init_ChargingState_is_voltage_low charging_voltage_raw(::mir_msgs::msg::ChargingState::_charging_voltage_raw_type arg)
  {
    msg_.charging_voltage_raw = std::move(arg);
    return Init_ChargingState_is_voltage_low(msg_);
  }

private:
  ::mir_msgs::msg::ChargingState msg_;
};

class Init_ChargingState_charging_voltage
{
public:
  explicit Init_ChargingState_charging_voltage(::mir_msgs::msg::ChargingState & msg)
  : msg_(msg)
  {}
  Init_ChargingState_charging_voltage_raw charging_voltage(::mir_msgs::msg::ChargingState::_charging_voltage_type arg)
  {
    msg_.charging_voltage = std::move(arg);
    return Init_ChargingState_charging_voltage_raw(msg_);
  }

private:
  ::mir_msgs::msg::ChargingState msg_;
};

class Init_ChargingState_last_time_current
{
public:
  explicit Init_ChargingState_last_time_current(::mir_msgs::msg::ChargingState & msg)
  : msg_(msg)
  {}
  Init_ChargingState_charging_voltage last_time_current(::mir_msgs::msg::ChargingState::_last_time_current_type arg)
  {
    msg_.last_time_current = std::move(arg);
    return Init_ChargingState_charging_voltage(msg_);
  }

private:
  ::mir_msgs::msg::ChargingState msg_;
};

class Init_ChargingState_charging_current_raw
{
public:
  explicit Init_ChargingState_charging_current_raw(::mir_msgs::msg::ChargingState & msg)
  : msg_(msg)
  {}
  Init_ChargingState_last_time_current charging_current_raw(::mir_msgs::msg::ChargingState::_charging_current_raw_type arg)
  {
    msg_.charging_current_raw = std::move(arg);
    return Init_ChargingState_last_time_current(msg_);
  }

private:
  ::mir_msgs::msg::ChargingState msg_;
};

class Init_ChargingState_charging_current
{
public:
  explicit Init_ChargingState_charging_current(::mir_msgs::msg::ChargingState & msg)
  : msg_(msg)
  {}
  Init_ChargingState_charging_current_raw charging_current(::mir_msgs::msg::ChargingState::_charging_current_type arg)
  {
    msg_.charging_current = std::move(arg);
    return Init_ChargingState_charging_current_raw(msg_);
  }

private:
  ::mir_msgs::msg::ChargingState msg_;
};

class Init_ChargingState_charging_relay
{
public:
  Init_ChargingState_charging_relay()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargingState_charging_current charging_relay(::mir_msgs::msg::ChargingState::_charging_relay_type arg)
  {
    msg_.charging_relay = std::move(arg);
    return Init_ChargingState_charging_current(msg_);
  }

private:
  ::mir_msgs::msg::ChargingState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::ChargingState>()
{
  return mir_msgs::msg::builder::Init_ChargingState_charging_relay();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__CHARGING_STATE__BUILDER_HPP_
