// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_actions:action/MirMoveBase.idl
// generated code does not contain a copyright notice

#ifndef MIR_ACTIONS__ACTION__DETAIL__MIR_MOVE_BASE__BUILDER_HPP_
#define MIR_ACTIONS__ACTION__DETAIL__MIR_MOVE_BASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_actions/action/detail/mir_move_base__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_actions
{

namespace action
{

namespace builder
{

class Init_MirMoveBase_Goal_tolerance
{
public:
  explicit Init_MirMoveBase_Goal_tolerance(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  ::mir_actions::action::MirMoveBase_Goal tolerance(::mir_actions::action::MirMoveBase_Goal::_tolerance_type arg)
  {
    msg_.tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_shelf_leg_asymmetry_x
{
public:
  explicit Init_MirMoveBase_Goal_shelf_leg_asymmetry_x(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_tolerance shelf_leg_asymmetry_x(::mir_actions::action::MirMoveBase_Goal::_shelf_leg_asymmetry_x_type arg)
  {
    msg_.shelf_leg_asymmetry_x = std::move(arg);
    return Init_MirMoveBase_Goal_tolerance(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_bar_distance
{
public:
  explicit Init_MirMoveBase_Goal_bar_distance(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_shelf_leg_asymmetry_x bar_distance(::mir_actions::action::MirMoveBase_Goal::_bar_distance_type arg)
  {
    msg_.bar_distance = std::move(arg);
    return Init_MirMoveBase_Goal_shelf_leg_asymmetry_x(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_bar_length
{
public:
  explicit Init_MirMoveBase_Goal_bar_length(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_bar_distance bar_length(::mir_actions::action::MirMoveBase_Goal::_bar_length_type arg)
  {
    msg_.bar_length = std::move(arg);
    return Init_MirMoveBase_Goal_bar_distance(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_offset
{
public:
  explicit Init_MirMoveBase_Goal_offset(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_bar_length offset(::mir_actions::action::MirMoveBase_Goal::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_MirMoveBase_Goal_bar_length(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_pose
{
public:
  explicit Init_MirMoveBase_Goal_pose(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_offset pose(::mir_actions::action::MirMoveBase_Goal::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_MirMoveBase_Goal_offset(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_pose_frame
{
public:
  explicit Init_MirMoveBase_Goal_pose_frame(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_pose pose_frame(::mir_actions::action::MirMoveBase_Goal::_pose_frame_type arg)
  {
    msg_.pose_frame = std::move(arg);
    return Init_MirMoveBase_Goal_pose(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_same_goal
{
public:
  explicit Init_MirMoveBase_Goal_same_goal(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_pose_frame same_goal(::mir_actions::action::MirMoveBase_Goal::_same_goal_type arg)
  {
    msg_.same_goal = std::move(arg);
    return Init_MirMoveBase_Goal_pose_frame(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_only_track
{
public:
  explicit Init_MirMoveBase_Goal_only_track(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_same_goal only_track(::mir_actions::action::MirMoveBase_Goal::_only_track_type arg)
  {
    msg_.only_track = std::move(arg);
    return Init_MirMoveBase_Goal_same_goal(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_pattern_value
{
public:
  explicit Init_MirMoveBase_Goal_pattern_value(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_only_track pattern_value(::mir_actions::action::MirMoveBase_Goal::_pattern_value_type arg)
  {
    msg_.pattern_value = std::move(arg);
    return Init_MirMoveBase_Goal_only_track(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_pattern_type
{
public:
  explicit Init_MirMoveBase_Goal_pattern_type(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_pattern_value pattern_type(::mir_actions::action::MirMoveBase_Goal::_pattern_type_type arg)
  {
    msg_.pattern_type = std::move(arg);
    return Init_MirMoveBase_Goal_pattern_value(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_timeout
{
public:
  explicit Init_MirMoveBase_Goal_timeout(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_pattern_type timeout(::mir_actions::action::MirMoveBase_Goal::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_MirMoveBase_Goal_pattern_type(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_only_collision_detection
{
public:
  explicit Init_MirMoveBase_Goal_only_collision_detection(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_timeout only_collision_detection(::mir_actions::action::MirMoveBase_Goal::_only_collision_detection_type arg)
  {
    msg_.only_collision_detection = std::move(arg);
    return Init_MirMoveBase_Goal_timeout(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_target_offset
{
public:
  explicit Init_MirMoveBase_Goal_target_offset(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_only_collision_detection target_offset(::mir_actions::action::MirMoveBase_Goal::_target_offset_type arg)
  {
    msg_.target_offset = std::move(arg);
    return Init_MirMoveBase_Goal_only_collision_detection(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_pid_dist_offset
{
public:
  explicit Init_MirMoveBase_Goal_pid_dist_offset(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_target_offset pid_dist_offset(::mir_actions::action::MirMoveBase_Goal::_pid_dist_offset_type arg)
  {
    msg_.pid_dist_offset = std::move(arg);
    return Init_MirMoveBase_Goal_target_offset(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_max_rotational_speed
{
public:
  explicit Init_MirMoveBase_Goal_max_rotational_speed(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_pid_dist_offset max_rotational_speed(::mir_actions::action::MirMoveBase_Goal::_max_rotational_speed_type arg)
  {
    msg_.max_rotational_speed = std::move(arg);
    return Init_MirMoveBase_Goal_pid_dist_offset(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_max_linear_speed
{
public:
  explicit Init_MirMoveBase_Goal_max_linear_speed(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_max_rotational_speed max_linear_speed(::mir_actions::action::MirMoveBase_Goal::_max_linear_speed_type arg)
  {
    msg_.max_linear_speed = std::move(arg);
    return Init_MirMoveBase_Goal_max_rotational_speed(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_disable_collision_check_dist
{
public:
  explicit Init_MirMoveBase_Goal_disable_collision_check_dist(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_max_linear_speed disable_collision_check_dist(::mir_actions::action::MirMoveBase_Goal::_disable_collision_check_dist_type arg)
  {
    msg_.disable_collision_check_dist = std::move(arg);
    return Init_MirMoveBase_Goal_max_linear_speed(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_collision_avoidance
{
public:
  explicit Init_MirMoveBase_Goal_collision_avoidance(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_disable_collision_check_dist collision_avoidance(::mir_actions::action::MirMoveBase_Goal::_collision_avoidance_type arg)
  {
    msg_.collision_avoidance = std::move(arg);
    return Init_MirMoveBase_Goal_disable_collision_check_dist(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_collision_detection
{
public:
  explicit Init_MirMoveBase_Goal_collision_detection(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_collision_avoidance collision_detection(::mir_actions::action::MirMoveBase_Goal::_collision_detection_type arg)
  {
    msg_.collision_detection = std::move(arg);
    return Init_MirMoveBase_Goal_collision_avoidance(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_yaw
{
public:
  explicit Init_MirMoveBase_Goal_yaw(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_collision_detection yaw(::mir_actions::action::MirMoveBase_Goal::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_MirMoveBase_Goal_collision_detection(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_continue_command
{
public:
  explicit Init_MirMoveBase_Goal_continue_command(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_yaw continue_command(::mir_actions::action::MirMoveBase_Goal::_continue_command_type arg)
  {
    msg_.continue_command = std::move(arg);
    return Init_MirMoveBase_Goal_yaw(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_pause_command
{
public:
  explicit Init_MirMoveBase_Goal_pause_command(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_continue_command pause_command(::mir_actions::action::MirMoveBase_Goal::_pause_command_type arg)
  {
    msg_.pause_command = std::move(arg);
    return Init_MirMoveBase_Goal_continue_command(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_clear_costmaps
{
public:
  explicit Init_MirMoveBase_Goal_clear_costmaps(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_pause_command clear_costmaps(::mir_actions::action::MirMoveBase_Goal::_clear_costmaps_type arg)
  {
    msg_.clear_costmaps = std::move(arg);
    return Init_MirMoveBase_Goal_pause_command(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_max_plan_time
{
public:
  explicit Init_MirMoveBase_Goal_max_plan_time(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_clear_costmaps max_plan_time(::mir_actions::action::MirMoveBase_Goal::_max_plan_time_type arg)
  {
    msg_.max_plan_time = std::move(arg);
    return Init_MirMoveBase_Goal_clear_costmaps(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_path
{
public:
  explicit Init_MirMoveBase_Goal_path(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_max_plan_time path(::mir_actions::action::MirMoveBase_Goal::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_MirMoveBase_Goal_max_plan_time(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_goal_orientation_threshold
{
public:
  explicit Init_MirMoveBase_Goal_goal_orientation_threshold(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_path goal_orientation_threshold(::mir_actions::action::MirMoveBase_Goal::_goal_orientation_threshold_type arg)
  {
    msg_.goal_orientation_threshold = std::move(arg);
    return Init_MirMoveBase_Goal_path(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_goal_dist_threshold
{
public:
  explicit Init_MirMoveBase_Goal_goal_dist_threshold(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_goal_orientation_threshold goal_dist_threshold(::mir_actions::action::MirMoveBase_Goal::_goal_dist_threshold_type arg)
  {
    msg_.goal_dist_threshold = std::move(arg);
    return Init_MirMoveBase_Goal_goal_orientation_threshold(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_target_pose
{
public:
  explicit Init_MirMoveBase_Goal_target_pose(::mir_actions::action::MirMoveBase_Goal & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Goal_goal_dist_threshold target_pose(::mir_actions::action::MirMoveBase_Goal::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return Init_MirMoveBase_Goal_goal_dist_threshold(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

class Init_MirMoveBase_Goal_move_task
{
public:
  Init_MirMoveBase_Goal_move_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MirMoveBase_Goal_target_pose move_task(::mir_actions::action::MirMoveBase_Goal::_move_task_type arg)
  {
    msg_.move_task = std::move(arg);
    return Init_MirMoveBase_Goal_target_pose(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_actions::action::MirMoveBase_Goal>()
{
  return mir_actions::action::builder::Init_MirMoveBase_Goal_move_task();
}

}  // namespace mir_actions


namespace mir_actions
{

namespace action
{

namespace builder
{

class Init_MirMoveBase_Result_message
{
public:
  explicit Init_MirMoveBase_Result_message(::mir_actions::action::MirMoveBase_Result & msg)
  : msg_(msg)
  {}
  ::mir_actions::action::MirMoveBase_Result message(::mir_actions::action::MirMoveBase_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Result msg_;
};

class Init_MirMoveBase_Result_pose
{
public:
  explicit Init_MirMoveBase_Result_pose(::mir_actions::action::MirMoveBase_Result & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Result_message pose(::mir_actions::action::MirMoveBase_Result::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_MirMoveBase_Result_message(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Result msg_;
};

class Init_MirMoveBase_Result_end_pose
{
public:
  explicit Init_MirMoveBase_Result_end_pose(::mir_actions::action::MirMoveBase_Result & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Result_pose end_pose(::mir_actions::action::MirMoveBase_Result::_end_pose_type arg)
  {
    msg_.end_pose = std::move(arg);
    return Init_MirMoveBase_Result_pose(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Result msg_;
};

class Init_MirMoveBase_Result_end_state
{
public:
  Init_MirMoveBase_Result_end_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MirMoveBase_Result_end_pose end_state(::mir_actions::action::MirMoveBase_Result::_end_state_type arg)
  {
    msg_.end_state = std::move(arg);
    return Init_MirMoveBase_Result_end_pose(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_actions::action::MirMoveBase_Result>()
{
  return mir_actions::action::builder::Init_MirMoveBase_Result_end_state();
}

}  // namespace mir_actions


namespace mir_actions
{

namespace action
{

namespace builder
{

class Init_MirMoveBase_Feedback_marker_inversion
{
public:
  explicit Init_MirMoveBase_Feedback_marker_inversion(::mir_actions::action::MirMoveBase_Feedback & msg)
  : msg_(msg)
  {}
  ::mir_actions::action::MirMoveBase_Feedback marker_inversion(::mir_actions::action::MirMoveBase_Feedback::_marker_inversion_type arg)
  {
    msg_.marker_inversion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Feedback msg_;
};

class Init_MirMoveBase_Feedback_pose
{
public:
  explicit Init_MirMoveBase_Feedback_pose(::mir_actions::action::MirMoveBase_Feedback & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Feedback_marker_inversion pose(::mir_actions::action::MirMoveBase_Feedback::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_MirMoveBase_Feedback_marker_inversion(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Feedback msg_;
};

class Init_MirMoveBase_Feedback_dist_to_goal
{
public:
  explicit Init_MirMoveBase_Feedback_dist_to_goal(::mir_actions::action::MirMoveBase_Feedback & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Feedback_pose dist_to_goal(::mir_actions::action::MirMoveBase_Feedback::_dist_to_goal_type arg)
  {
    msg_.dist_to_goal = std::move(arg);
    return Init_MirMoveBase_Feedback_pose(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Feedback msg_;
};

class Init_MirMoveBase_Feedback_current_goal
{
public:
  explicit Init_MirMoveBase_Feedback_current_goal(::mir_actions::action::MirMoveBase_Feedback & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Feedback_dist_to_goal current_goal(::mir_actions::action::MirMoveBase_Feedback::_current_goal_type arg)
  {
    msg_.current_goal = std::move(arg);
    return Init_MirMoveBase_Feedback_dist_to_goal(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Feedback msg_;
};

class Init_MirMoveBase_Feedback_base_position
{
public:
  explicit Init_MirMoveBase_Feedback_base_position(::mir_actions::action::MirMoveBase_Feedback & msg)
  : msg_(msg)
  {}
  Init_MirMoveBase_Feedback_current_goal base_position(::mir_actions::action::MirMoveBase_Feedback::_base_position_type arg)
  {
    msg_.base_position = std::move(arg);
    return Init_MirMoveBase_Feedback_current_goal(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Feedback msg_;
};

class Init_MirMoveBase_Feedback_state
{
public:
  Init_MirMoveBase_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MirMoveBase_Feedback_base_position state(::mir_actions::action::MirMoveBase_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MirMoveBase_Feedback_base_position(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_actions::action::MirMoveBase_Feedback>()
{
  return mir_actions::action::builder::Init_MirMoveBase_Feedback_state();
}

}  // namespace mir_actions


namespace mir_actions
{

namespace action
{

namespace builder
{

class Init_MirMoveBase_SendGoal_Request_goal
{
public:
  explicit Init_MirMoveBase_SendGoal_Request_goal(::mir_actions::action::MirMoveBase_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mir_actions::action::MirMoveBase_SendGoal_Request goal(::mir_actions::action::MirMoveBase_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_SendGoal_Request msg_;
};

class Init_MirMoveBase_SendGoal_Request_goal_id
{
public:
  Init_MirMoveBase_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MirMoveBase_SendGoal_Request_goal goal_id(::mir_actions::action::MirMoveBase_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MirMoveBase_SendGoal_Request_goal(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_actions::action::MirMoveBase_SendGoal_Request>()
{
  return mir_actions::action::builder::Init_MirMoveBase_SendGoal_Request_goal_id();
}

}  // namespace mir_actions


namespace mir_actions
{

namespace action
{

namespace builder
{

class Init_MirMoveBase_SendGoal_Response_stamp
{
public:
  explicit Init_MirMoveBase_SendGoal_Response_stamp(::mir_actions::action::MirMoveBase_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mir_actions::action::MirMoveBase_SendGoal_Response stamp(::mir_actions::action::MirMoveBase_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_SendGoal_Response msg_;
};

class Init_MirMoveBase_SendGoal_Response_accepted
{
public:
  Init_MirMoveBase_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MirMoveBase_SendGoal_Response_stamp accepted(::mir_actions::action::MirMoveBase_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MirMoveBase_SendGoal_Response_stamp(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_actions::action::MirMoveBase_SendGoal_Response>()
{
  return mir_actions::action::builder::Init_MirMoveBase_SendGoal_Response_accepted();
}

}  // namespace mir_actions


namespace mir_actions
{

namespace action
{

namespace builder
{

class Init_MirMoveBase_GetResult_Request_goal_id
{
public:
  Init_MirMoveBase_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mir_actions::action::MirMoveBase_GetResult_Request goal_id(::mir_actions::action::MirMoveBase_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_actions::action::MirMoveBase_GetResult_Request>()
{
  return mir_actions::action::builder::Init_MirMoveBase_GetResult_Request_goal_id();
}

}  // namespace mir_actions


namespace mir_actions
{

namespace action
{

namespace builder
{

class Init_MirMoveBase_GetResult_Response_result
{
public:
  explicit Init_MirMoveBase_GetResult_Response_result(::mir_actions::action::MirMoveBase_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mir_actions::action::MirMoveBase_GetResult_Response result(::mir_actions::action::MirMoveBase_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_GetResult_Response msg_;
};

class Init_MirMoveBase_GetResult_Response_status
{
public:
  Init_MirMoveBase_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MirMoveBase_GetResult_Response_result status(::mir_actions::action::MirMoveBase_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MirMoveBase_GetResult_Response_result(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_actions::action::MirMoveBase_GetResult_Response>()
{
  return mir_actions::action::builder::Init_MirMoveBase_GetResult_Response_status();
}

}  // namespace mir_actions


namespace mir_actions
{

namespace action
{

namespace builder
{

class Init_MirMoveBase_FeedbackMessage_feedback
{
public:
  explicit Init_MirMoveBase_FeedbackMessage_feedback(::mir_actions::action::MirMoveBase_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mir_actions::action::MirMoveBase_FeedbackMessage feedback(::mir_actions::action::MirMoveBase_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_FeedbackMessage msg_;
};

class Init_MirMoveBase_FeedbackMessage_goal_id
{
public:
  Init_MirMoveBase_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MirMoveBase_FeedbackMessage_feedback goal_id(::mir_actions::action::MirMoveBase_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MirMoveBase_FeedbackMessage_feedback(msg_);
  }

private:
  ::mir_actions::action::MirMoveBase_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_actions::action::MirMoveBase_FeedbackMessage>()
{
  return mir_actions::action::builder::Init_MirMoveBase_FeedbackMessage_goal_id();
}

}  // namespace mir_actions

#endif  // MIR_ACTIONS__ACTION__DETAIL__MIR_MOVE_BASE__BUILDER_HPP_
