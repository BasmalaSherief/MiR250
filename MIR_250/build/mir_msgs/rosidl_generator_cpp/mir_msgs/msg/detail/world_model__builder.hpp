// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/WorldModel.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__WORLD_MODEL__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__WORLD_MODEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/world_model__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_WorldModel_world_map
{
public:
  explicit Init_WorldModel_world_map(::mir_msgs::msg::WorldModel & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::WorldModel world_map(::mir_msgs::msg::WorldModel::_world_map_type arg)
  {
    msg_.world_map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::WorldModel msg_;
};

class Init_WorldModel_header
{
public:
  Init_WorldModel_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorldModel_world_map header(::mir_msgs::msg::WorldModel::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WorldModel_world_map(msg_);
  }

private:
  ::mir_msgs::msg::WorldModel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::WorldModel>()
{
  return mir_msgs::msg::builder::Init_WorldModel_header();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__WORLD_MODEL__BUILDER_HPP_
