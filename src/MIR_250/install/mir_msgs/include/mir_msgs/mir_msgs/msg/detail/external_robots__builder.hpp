// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/ExternalRobots.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOTS__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/external_robots__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_ExternalRobots_robots
{
public:
  explicit Init_ExternalRobots_robots(::mir_msgs::msg::ExternalRobots & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::ExternalRobots robots(::mir_msgs::msg::ExternalRobots::_robots_type arg)
  {
    msg_.robots = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobots msg_;
};

class Init_ExternalRobots_header
{
public:
  Init_ExternalRobots_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExternalRobots_robots header(::mir_msgs::msg::ExternalRobots::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ExternalRobots_robots(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobots msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::ExternalRobots>()
{
  return mir_msgs::msg::builder::Init_ExternalRobots_header();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOTS__BUILDER_HPP_
