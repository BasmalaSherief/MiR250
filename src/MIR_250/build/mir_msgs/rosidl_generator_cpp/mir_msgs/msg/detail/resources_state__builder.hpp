// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/ResourcesState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__RESOURCES_STATE__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__RESOURCES_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/resources_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_ResourcesState_resources
{
public:
  explicit Init_ResourcesState_resources(::mir_msgs::msg::ResourcesState & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::ResourcesState resources(::mir_msgs::msg::ResourcesState::_resources_type arg)
  {
    msg_.resources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::ResourcesState msg_;
};

class Init_ResourcesState_header
{
public:
  Init_ResourcesState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResourcesState_resources header(::mir_msgs::msg::ResourcesState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ResourcesState_resources(msg_);
  }

private:
  ::mir_msgs::msg::ResourcesState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::ResourcesState>()
{
  return mir_msgs::msg::builder::Init_ResourcesState_header();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__RESOURCES_STATE__BUILDER_HPP_
