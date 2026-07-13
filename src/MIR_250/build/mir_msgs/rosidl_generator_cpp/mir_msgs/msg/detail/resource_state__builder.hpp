// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/ResourceState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__RESOURCE_STATE__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__RESOURCE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/resource_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_ResourceState_guid
{
public:
  explicit Init_ResourceState_guid(::mir_msgs::msg::ResourceState & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::ResourceState guid(::mir_msgs::msg::ResourceState::_guid_type arg)
  {
    msg_.guid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::ResourceState msg_;
};

class Init_ResourceState_name
{
public:
  explicit Init_ResourceState_name(::mir_msgs::msg::ResourceState & msg)
  : msg_(msg)
  {}
  Init_ResourceState_guid name(::mir_msgs::msg::ResourceState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ResourceState_guid(msg_);
  }

private:
  ::mir_msgs::msg::ResourceState msg_;
};

class Init_ResourceState_queue
{
public:
  explicit Init_ResourceState_queue(::mir_msgs::msg::ResourceState & msg)
  : msg_(msg)
  {}
  Init_ResourceState_name queue(::mir_msgs::msg::ResourceState::_queue_type arg)
  {
    msg_.queue = std::move(arg);
    return Init_ResourceState_name(msg_);
  }

private:
  ::mir_msgs::msg::ResourceState msg_;
};

class Init_ResourceState_collision_point
{
public:
  explicit Init_ResourceState_collision_point(::mir_msgs::msg::ResourceState & msg)
  : msg_(msg)
  {}
  Init_ResourceState_queue collision_point(::mir_msgs::msg::ResourceState::_collision_point_type arg)
  {
    msg_.collision_point = std::move(arg);
    return Init_ResourceState_queue(msg_);
  }

private:
  ::mir_msgs::msg::ResourceState msg_;
};

class Init_ResourceState_distance
{
public:
  explicit Init_ResourceState_distance(::mir_msgs::msg::ResourceState & msg)
  : msg_(msg)
  {}
  Init_ResourceState_collision_point distance(::mir_msgs::msg::ResourceState::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_ResourceState_collision_point(msg_);
  }

private:
  ::mir_msgs::msg::ResourceState msg_;
};

class Init_ResourceState_path_idx
{
public:
  explicit Init_ResourceState_path_idx(::mir_msgs::msg::ResourceState & msg)
  : msg_(msg)
  {}
  Init_ResourceState_distance path_idx(::mir_msgs::msg::ResourceState::_path_idx_type arg)
  {
    msg_.path_idx = std::move(arg);
    return Init_ResourceState_distance(msg_);
  }

private:
  ::mir_msgs::msg::ResourceState msg_;
};

class Init_ResourceState_type
{
public:
  explicit Init_ResourceState_type(::mir_msgs::msg::ResourceState & msg)
  : msg_(msg)
  {}
  Init_ResourceState_path_idx type(::mir_msgs::msg::ResourceState::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ResourceState_path_idx(msg_);
  }

private:
  ::mir_msgs::msg::ResourceState msg_;
};

class Init_ResourceState_assigned
{
public:
  Init_ResourceState_assigned()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResourceState_type assigned(::mir_msgs::msg::ResourceState::_assigned_type arg)
  {
    msg_.assigned = std::move(arg);
    return Init_ResourceState_type(msg_);
  }

private:
  ::mir_msgs::msg::ResourceState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::ResourceState>()
{
  return mir_msgs::msg::builder::Init_ResourceState_assigned();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__RESOURCE_STATE__BUILDER_HPP_
