// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/IOs.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__I_OS__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__I_OS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/i_os__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_IOs_error
{
public:
  explicit Init_IOs_error(::mir_msgs::msg::IOs & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::IOs error(::mir_msgs::msg::IOs::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::IOs msg_;
};

class Init_IOs_ip
{
public:
  explicit Init_IOs_ip(::mir_msgs::msg::IOs & msg)
  : msg_(msg)
  {}
  Init_IOs_error ip(::mir_msgs::msg::IOs::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_IOs_error(msg_);
  }

private:
  ::mir_msgs::msg::IOs msg_;
};

class Init_IOs_output_state
{
public:
  explicit Init_IOs_output_state(::mir_msgs::msg::IOs & msg)
  : msg_(msg)
  {}
  Init_IOs_ip output_state(::mir_msgs::msg::IOs::_output_state_type arg)
  {
    msg_.output_state = std::move(arg);
    return Init_IOs_ip(msg_);
  }

private:
  ::mir_msgs::msg::IOs msg_;
};

class Init_IOs_num_outputs
{
public:
  explicit Init_IOs_num_outputs(::mir_msgs::msg::IOs & msg)
  : msg_(msg)
  {}
  Init_IOs_output_state num_outputs(::mir_msgs::msg::IOs::_num_outputs_type arg)
  {
    msg_.num_outputs = std::move(arg);
    return Init_IOs_output_state(msg_);
  }

private:
  ::mir_msgs::msg::IOs msg_;
};

class Init_IOs_input_state
{
public:
  explicit Init_IOs_input_state(::mir_msgs::msg::IOs & msg)
  : msg_(msg)
  {}
  Init_IOs_num_outputs input_state(::mir_msgs::msg::IOs::_input_state_type arg)
  {
    msg_.input_state = std::move(arg);
    return Init_IOs_num_outputs(msg_);
  }

private:
  ::mir_msgs::msg::IOs msg_;
};

class Init_IOs_num_inputs
{
public:
  explicit Init_IOs_num_inputs(::mir_msgs::msg::IOs & msg)
  : msg_(msg)
  {}
  Init_IOs_input_state num_inputs(::mir_msgs::msg::IOs::_num_inputs_type arg)
  {
    msg_.num_inputs = std::move(arg);
    return Init_IOs_input_state(msg_);
  }

private:
  ::mir_msgs::msg::IOs msg_;
};

class Init_IOs_status
{
public:
  explicit Init_IOs_status(::mir_msgs::msg::IOs & msg)
  : msg_(msg)
  {}
  Init_IOs_num_inputs status(::mir_msgs::msg::IOs::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_IOs_num_inputs(msg_);
  }

private:
  ::mir_msgs::msg::IOs msg_;
};

class Init_IOs_connected
{
public:
  explicit Init_IOs_connected(::mir_msgs::msg::IOs & msg)
  : msg_(msg)
  {}
  Init_IOs_status connected(::mir_msgs::msg::IOs::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return Init_IOs_status(msg_);
  }

private:
  ::mir_msgs::msg::IOs msg_;
};

class Init_IOs_module_guid
{
public:
  Init_IOs_module_guid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IOs_connected module_guid(::mir_msgs::msg::IOs::_module_guid_type arg)
  {
    msg_.module_guid = std::move(arg);
    return Init_IOs_connected(msg_);
  }

private:
  ::mir_msgs::msg::IOs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::IOs>()
{
  return mir_msgs::msg::builder::Init_IOs_module_guid();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__I_OS__BUILDER_HPP_
