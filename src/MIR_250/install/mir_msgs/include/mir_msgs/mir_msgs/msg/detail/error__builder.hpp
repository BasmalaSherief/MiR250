// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/Error.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__ERROR__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_Error_module
{
public:
  explicit Init_Error_module(::mir_msgs::msg::Error & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::Error module(::mir_msgs::msg::Error::_module_type arg)
  {
    msg_.module = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::Error msg_;
};

class Init_Error_description
{
public:
  explicit Init_Error_description(::mir_msgs::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_module description(::mir_msgs::msg::Error::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_Error_module(msg_);
  }

private:
  ::mir_msgs::msg::Error msg_;
};

class Init_Error_code
{
public:
  explicit Init_Error_code(::mir_msgs::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_description code(::mir_msgs::msg::Error::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_Error_description(msg_);
  }

private:
  ::mir_msgs::msg::Error msg_;
};

class Init_Error_timestamp
{
public:
  Init_Error_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Error_code timestamp(::mir_msgs::msg::Error::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Error_code(msg_);
  }

private:
  ::mir_msgs::msg::Error msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::Error>()
{
  return mir_msgs::msg::builder::Init_Error_timestamp();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__ERROR__BUILDER_HPP_
