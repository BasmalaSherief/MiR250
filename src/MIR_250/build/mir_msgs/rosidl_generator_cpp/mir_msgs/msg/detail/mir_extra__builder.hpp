// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/MirExtra.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__MIR_EXTRA__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__MIR_EXTRA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/mir_extra__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_MirExtra_ang
{
public:
  explicit Init_MirExtra_ang(::mir_msgs::msg::MirExtra & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::MirExtra ang(::mir_msgs::msg::MirExtra::_ang_type arg)
  {
    msg_.ang = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::MirExtra msg_;
};

class Init_MirExtra_vel
{
public:
  explicit Init_MirExtra_vel(::mir_msgs::msg::MirExtra & msg)
  : msg_(msg)
  {}
  Init_MirExtra_ang vel(::mir_msgs::msg::MirExtra::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_MirExtra_ang(msg_);
  }

private:
  ::mir_msgs::msg::MirExtra msg_;
};

class Init_MirExtra_l_rpm
{
public:
  explicit Init_MirExtra_l_rpm(::mir_msgs::msg::MirExtra & msg)
  : msg_(msg)
  {}
  Init_MirExtra_vel l_rpm(::mir_msgs::msg::MirExtra::_l_rpm_type arg)
  {
    msg_.l_rpm = std::move(arg);
    return Init_MirExtra_vel(msg_);
  }

private:
  ::mir_msgs::msg::MirExtra msg_;
};

class Init_MirExtra_r_rpm
{
public:
  explicit Init_MirExtra_r_rpm(::mir_msgs::msg::MirExtra & msg)
  : msg_(msg)
  {}
  Init_MirExtra_l_rpm r_rpm(::mir_msgs::msg::MirExtra::_r_rpm_type arg)
  {
    msg_.r_rpm = std::move(arg);
    return Init_MirExtra_l_rpm(msg_);
  }

private:
  ::mir_msgs::msg::MirExtra msg_;
};

class Init_MirExtra_time_delta
{
public:
  explicit Init_MirExtra_time_delta(::mir_msgs::msg::MirExtra & msg)
  : msg_(msg)
  {}
  Init_MirExtra_r_rpm time_delta(::mir_msgs::msg::MirExtra::_time_delta_type arg)
  {
    msg_.time_delta = std::move(arg);
    return Init_MirExtra_r_rpm(msg_);
  }

private:
  ::mir_msgs::msg::MirExtra msg_;
};

class Init_MirExtra_header
{
public:
  Init_MirExtra_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MirExtra_time_delta header(::mir_msgs::msg::MirExtra::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MirExtra_time_delta(msg_);
  }

private:
  ::mir_msgs::msg::MirExtra msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::MirExtra>()
{
  return mir_msgs::msg::builder::Init_MirExtra_header();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__MIR_EXTRA__BUILDER_HPP_
