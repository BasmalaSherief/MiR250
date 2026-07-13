// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/MissionCtrlCommand.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__MISSION_CTRL_COMMAND__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__MISSION_CTRL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/mission_ctrl_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionCtrlCommand_mission_id
{
public:
  explicit Init_MissionCtrlCommand_mission_id(::mir_msgs::msg::MissionCtrlCommand & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::MissionCtrlCommand mission_id(::mir_msgs::msg::MissionCtrlCommand::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::MissionCtrlCommand msg_;
};

class Init_MissionCtrlCommand_cmd
{
public:
  explicit Init_MissionCtrlCommand_cmd(::mir_msgs::msg::MissionCtrlCommand & msg)
  : msg_(msg)
  {}
  Init_MissionCtrlCommand_mission_id cmd(::mir_msgs::msg::MissionCtrlCommand::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_MissionCtrlCommand_mission_id(msg_);
  }

private:
  ::mir_msgs::msg::MissionCtrlCommand msg_;
};

class Init_MissionCtrlCommand_description
{
public:
  Init_MissionCtrlCommand_description()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionCtrlCommand_cmd description(::mir_msgs::msg::MissionCtrlCommand::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_MissionCtrlCommand_cmd(msg_);
  }

private:
  ::mir_msgs::msg::MissionCtrlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::MissionCtrlCommand>()
{
  return mir_msgs::msg::builder::Init_MissionCtrlCommand_description();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__MISSION_CTRL_COMMAND__BUILDER_HPP_
