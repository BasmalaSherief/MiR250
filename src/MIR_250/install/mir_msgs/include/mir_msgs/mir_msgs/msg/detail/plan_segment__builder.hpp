// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/PlanSegment.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PLAN_SEGMENT__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__PLAN_SEGMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/plan_segment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanSegment_path
{
public:
  explicit Init_PlanSegment_path(::mir_msgs::msg::PlanSegment & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::PlanSegment path(::mir_msgs::msg::PlanSegment::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::PlanSegment msg_;
};

class Init_PlanSegment_remaining_length
{
public:
  explicit Init_PlanSegment_remaining_length(::mir_msgs::msg::PlanSegment & msg)
  : msg_(msg)
  {}
  Init_PlanSegment_path remaining_length(::mir_msgs::msg::PlanSegment::_remaining_length_type arg)
  {
    msg_.remaining_length = std::move(arg);
    return Init_PlanSegment_path(msg_);
  }

private:
  ::mir_msgs::msg::PlanSegment msg_;
};

class Init_PlanSegment_length
{
public:
  explicit Init_PlanSegment_length(::mir_msgs::msg::PlanSegment & msg)
  : msg_(msg)
  {}
  Init_PlanSegment_remaining_length length(::mir_msgs::msg::PlanSegment::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_PlanSegment_remaining_length(msg_);
  }

private:
  ::mir_msgs::msg::PlanSegment msg_;
};

class Init_PlanSegment_start_idx
{
public:
  explicit Init_PlanSegment_start_idx(::mir_msgs::msg::PlanSegment & msg)
  : msg_(msg)
  {}
  Init_PlanSegment_length start_idx(::mir_msgs::msg::PlanSegment::_start_idx_type arg)
  {
    msg_.start_idx = std::move(arg);
    return Init_PlanSegment_length(msg_);
  }

private:
  ::mir_msgs::msg::PlanSegment msg_;
};

class Init_PlanSegment_forward_motion
{
public:
  Init_PlanSegment_forward_motion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanSegment_start_idx forward_motion(::mir_msgs::msg::PlanSegment::_forward_motion_type arg)
  {
    msg_.forward_motion = std::move(arg);
    return Init_PlanSegment_start_idx(msg_);
  }

private:
  ::mir_msgs::msg::PlanSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::PlanSegment>()
{
  return mir_msgs::msg::builder::Init_PlanSegment_forward_motion();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__PLAN_SEGMENT__BUILDER_HPP_
