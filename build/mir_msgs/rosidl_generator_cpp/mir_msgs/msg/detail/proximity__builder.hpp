// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/Proximity.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PROXIMITY__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__PROXIMITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/proximity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_Proximity_ranges
{
public:
  explicit Init_Proximity_ranges(::mir_msgs::msg::Proximity & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::Proximity ranges(::mir_msgs::msg::Proximity::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::Proximity msg_;
};

class Init_Proximity_header
{
public:
  Init_Proximity_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Proximity_ranges header(::mir_msgs::msg::Proximity::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Proximity_ranges(msg_);
  }

private:
  ::mir_msgs::msg::Proximity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::Proximity>()
{
  return mir_msgs::msg::builder::Init_Proximity_header();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__PROXIMITY__BUILDER_HPP_
