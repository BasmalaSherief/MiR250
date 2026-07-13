// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/StampedEncoders.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__STAMPED_ENCODERS__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__STAMPED_ENCODERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/stamped_encoders__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_StampedEncoders_encoders
{
public:
  explicit Init_StampedEncoders_encoders(::mir_msgs::msg::StampedEncoders & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::StampedEncoders encoders(::mir_msgs::msg::StampedEncoders::_encoders_type arg)
  {
    msg_.encoders = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::StampedEncoders msg_;
};

class Init_StampedEncoders_header
{
public:
  Init_StampedEncoders_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StampedEncoders_encoders header(::mir_msgs::msg::StampedEncoders::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StampedEncoders_encoders(msg_);
  }

private:
  ::mir_msgs::msg::StampedEncoders msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::StampedEncoders>()
{
  return mir_msgs::msg::builder::Init_StampedEncoders_header();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__STAMPED_ENCODERS__BUILDER_HPP_
