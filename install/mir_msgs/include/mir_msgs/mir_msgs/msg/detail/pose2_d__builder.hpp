// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__POSE2_D__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__POSE2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/pose2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_Pose2D_orientation
{
public:
  explicit Init_Pose2D_orientation(::mir_msgs::msg::Pose2D & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::Pose2D orientation(::mir_msgs::msg::Pose2D::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::Pose2D msg_;
};

class Init_Pose2D_y
{
public:
  explicit Init_Pose2D_y(::mir_msgs::msg::Pose2D & msg)
  : msg_(msg)
  {}
  Init_Pose2D_orientation y(::mir_msgs::msg::Pose2D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Pose2D_orientation(msg_);
  }

private:
  ::mir_msgs::msg::Pose2D msg_;
};

class Init_Pose2D_x
{
public:
  Init_Pose2D_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose2D_y x(::mir_msgs::msg::Pose2D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Pose2D_y(msg_);
  }

private:
  ::mir_msgs::msg::Pose2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::Pose2D>()
{
  return mir_msgs::msg::builder::Init_Pose2D_x();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__POSE2_D__BUILDER_HPP_
