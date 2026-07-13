// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/MissionCtrlState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__MISSION_CTRL_STATE__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__MISSION_CTRL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/mission_ctrl_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionCtrlState_pos_id
{
public:
  explicit Init_MissionCtrlState_pos_id(::mir_msgs::msg::MissionCtrlState & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::MissionCtrlState pos_id(::mir_msgs::msg::MissionCtrlState::_pos_id_type arg)
  {
    msg_.pos_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::MissionCtrlState msg_;
};

class Init_MissionCtrlState_state
{
public:
  Init_MissionCtrlState_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionCtrlState_pos_id state(::mir_msgs::msg::MissionCtrlState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MissionCtrlState_pos_id(msg_);
  }

private:
  ::mir_msgs::msg::MissionCtrlState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::MissionCtrlState>()
{
  return mir_msgs::msg::builder::Init_MissionCtrlState_state();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__MISSION_CTRL_STATE__BUILDER_HPP_
