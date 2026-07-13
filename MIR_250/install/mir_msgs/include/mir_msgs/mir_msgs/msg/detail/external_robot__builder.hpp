// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/ExternalRobot.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOT__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/external_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_ExternalRobot_twist
{
public:
  explicit Init_ExternalRobot_twist(::mir_msgs::msg::ExternalRobot & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::ExternalRobot twist(::mir_msgs::msg::ExternalRobot::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobot msg_;
};

class Init_ExternalRobot_extrapolated_pose
{
public:
  explicit Init_ExternalRobot_extrapolated_pose(::mir_msgs::msg::ExternalRobot & msg)
  : msg_(msg)
  {}
  Init_ExternalRobot_twist extrapolated_pose(::mir_msgs::msg::ExternalRobot::_extrapolated_pose_type arg)
  {
    msg_.extrapolated_pose = std::move(arg);
    return Init_ExternalRobot_twist(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobot msg_;
};

class Init_ExternalRobot_pose
{
public:
  explicit Init_ExternalRobot_pose(::mir_msgs::msg::ExternalRobot & msg)
  : msg_(msg)
  {}
  Init_ExternalRobot_extrapolated_pose pose(::mir_msgs::msg::ExternalRobot::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ExternalRobot_extrapolated_pose(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobot msg_;
};

class Init_ExternalRobot_priority
{
public:
  explicit Init_ExternalRobot_priority(::mir_msgs::msg::ExternalRobot & msg)
  : msg_(msg)
  {}
  Init_ExternalRobot_pose priority(::mir_msgs::msg::ExternalRobot::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_ExternalRobot_pose(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobot msg_;
};

class Init_ExternalRobot_map_id
{
public:
  explicit Init_ExternalRobot_map_id(::mir_msgs::msg::ExternalRobot & msg)
  : msg_(msg)
  {}
  Init_ExternalRobot_priority map_id(::mir_msgs::msg::ExternalRobot::_map_id_type arg)
  {
    msg_.map_id = std::move(arg);
    return Init_ExternalRobot_priority(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobot msg_;
};

class Init_ExternalRobot_ip
{
public:
  explicit Init_ExternalRobot_ip(::mir_msgs::msg::ExternalRobot & msg)
  : msg_(msg)
  {}
  Init_ExternalRobot_map_id ip(::mir_msgs::msg::ExternalRobot::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_ExternalRobot_map_id(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobot msg_;
};

class Init_ExternalRobot_footprint
{
public:
  explicit Init_ExternalRobot_footprint(::mir_msgs::msg::ExternalRobot & msg)
  : msg_(msg)
  {}
  Init_ExternalRobot_ip footprint(::mir_msgs::msg::ExternalRobot::_footprint_type arg)
  {
    msg_.footprint = std::move(arg);
    return Init_ExternalRobot_ip(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobot msg_;
};

class Init_ExternalRobot_robot_width
{
public:
  explicit Init_ExternalRobot_robot_width(::mir_msgs::msg::ExternalRobot & msg)
  : msg_(msg)
  {}
  Init_ExternalRobot_footprint robot_width(::mir_msgs::msg::ExternalRobot::_robot_width_type arg)
  {
    msg_.robot_width = std::move(arg);
    return Init_ExternalRobot_footprint(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobot msg_;
};

class Init_ExternalRobot_robot_length
{
public:
  explicit Init_ExternalRobot_robot_length(::mir_msgs::msg::ExternalRobot & msg)
  : msg_(msg)
  {}
  Init_ExternalRobot_robot_width robot_length(::mir_msgs::msg::ExternalRobot::_robot_length_type arg)
  {
    msg_.robot_length = std::move(arg);
    return Init_ExternalRobot_robot_width(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobot msg_;
};

class Init_ExternalRobot_name
{
public:
  explicit Init_ExternalRobot_name(::mir_msgs::msg::ExternalRobot & msg)
  : msg_(msg)
  {}
  Init_ExternalRobot_robot_length name(::mir_msgs::msg::ExternalRobot::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ExternalRobot_robot_length(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobot msg_;
};

class Init_ExternalRobot_type_id
{
public:
  explicit Init_ExternalRobot_type_id(::mir_msgs::msg::ExternalRobot & msg)
  : msg_(msg)
  {}
  Init_ExternalRobot_name type_id(::mir_msgs::msg::ExternalRobot::_type_id_type arg)
  {
    msg_.type_id = std::move(arg);
    return Init_ExternalRobot_name(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobot msg_;
};

class Init_ExternalRobot_id
{
public:
  explicit Init_ExternalRobot_id(::mir_msgs::msg::ExternalRobot & msg)
  : msg_(msg)
  {}
  Init_ExternalRobot_type_id id(::mir_msgs::msg::ExternalRobot::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ExternalRobot_type_id(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobot msg_;
};

class Init_ExternalRobot_header
{
public:
  Init_ExternalRobot_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExternalRobot_id header(::mir_msgs::msg::ExternalRobot::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ExternalRobot_id(msg_);
  }

private:
  ::mir_msgs::msg::ExternalRobot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::ExternalRobot>()
{
  return mir_msgs::msg::builder::Init_ExternalRobot_header();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOT__BUILDER_HPP_
