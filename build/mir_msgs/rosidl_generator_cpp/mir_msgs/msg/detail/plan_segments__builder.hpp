// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/PlanSegments.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PLAN_SEGMENTS__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__PLAN_SEGMENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/plan_segments__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanSegments_p_segments
{
public:
  Init_PlanSegments_p_segments()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mir_msgs::msg::PlanSegments p_segments(::mir_msgs::msg::PlanSegments::_p_segments_type arg)
  {
    msg_.p_segments = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::PlanSegments msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::PlanSegments>()
{
  return mir_msgs::msg::builder::Init_PlanSegments_p_segments();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__PLAN_SEGMENTS__BUILDER_HPP_
