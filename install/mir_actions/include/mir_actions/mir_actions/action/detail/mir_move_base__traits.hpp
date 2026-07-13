// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_actions:action/MirMoveBase.idl
// generated code does not contain a copyright notice

#ifndef MIR_ACTIONS__ACTION__DETAIL__MIR_MOVE_BASE__TRAITS_HPP_
#define MIR_ACTIONS__ACTION__DETAIL__MIR_MOVE_BASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_actions/action/detail/mir_move_base__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'path'
#include "nav_msgs/msg/detail/path__traits.hpp"
// Member 'pose'
// Member 'offset'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace mir_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const MirMoveBase_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: move_task
  {
    out << "move_task: ";
    rosidl_generator_traits::value_to_yaml(msg.move_task, out);
    out << ", ";
  }

  // member: target_pose
  {
    out << "target_pose: ";
    to_flow_style_yaml(msg.target_pose, out);
    out << ", ";
  }

  // member: goal_dist_threshold
  {
    out << "goal_dist_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_dist_threshold, out);
    out << ", ";
  }

  // member: goal_orientation_threshold
  {
    out << "goal_orientation_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_orientation_threshold, out);
    out << ", ";
  }

  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
    out << ", ";
  }

  // member: max_plan_time
  {
    out << "max_plan_time: ";
    rosidl_generator_traits::value_to_yaml(msg.max_plan_time, out);
    out << ", ";
  }

  // member: clear_costmaps
  {
    out << "clear_costmaps: ";
    rosidl_generator_traits::value_to_yaml(msg.clear_costmaps, out);
    out << ", ";
  }

  // member: pause_command
  {
    out << "pause_command: ";
    rosidl_generator_traits::value_to_yaml(msg.pause_command, out);
    out << ", ";
  }

  // member: continue_command
  {
    out << "continue_command: ";
    rosidl_generator_traits::value_to_yaml(msg.continue_command, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: collision_detection
  {
    out << "collision_detection: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_detection, out);
    out << ", ";
  }

  // member: collision_avoidance
  {
    out << "collision_avoidance: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_avoidance, out);
    out << ", ";
  }

  // member: disable_collision_check_dist
  {
    out << "disable_collision_check_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_collision_check_dist, out);
    out << ", ";
  }

  // member: max_linear_speed
  {
    out << "max_linear_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_speed, out);
    out << ", ";
  }

  // member: max_rotational_speed
  {
    out << "max_rotational_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rotational_speed, out);
    out << ", ";
  }

  // member: pid_dist_offset
  {
    out << "pid_dist_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.pid_dist_offset, out);
    out << ", ";
  }

  // member: target_offset
  {
    out << "target_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.target_offset, out);
    out << ", ";
  }

  // member: only_collision_detection
  {
    out << "only_collision_detection: ";
    rosidl_generator_traits::value_to_yaml(msg.only_collision_detection, out);
    out << ", ";
  }

  // member: timeout
  {
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << ", ";
  }

  // member: pattern_type
  {
    out << "pattern_type: ";
    rosidl_generator_traits::value_to_yaml(msg.pattern_type, out);
    out << ", ";
  }

  // member: pattern_value
  {
    out << "pattern_value: ";
    rosidl_generator_traits::value_to_yaml(msg.pattern_value, out);
    out << ", ";
  }

  // member: only_track
  {
    out << "only_track: ";
    rosidl_generator_traits::value_to_yaml(msg.only_track, out);
    out << ", ";
  }

  // member: same_goal
  {
    out << "same_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.same_goal, out);
    out << ", ";
  }

  // member: pose_frame
  {
    out << "pose_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_frame, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: offset
  {
    out << "offset: ";
    to_flow_style_yaml(msg.offset, out);
    out << ", ";
  }

  // member: bar_length
  {
    out << "bar_length: ";
    rosidl_generator_traits::value_to_yaml(msg.bar_length, out);
    out << ", ";
  }

  // member: bar_distance
  {
    out << "bar_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.bar_distance, out);
    out << ", ";
  }

  // member: shelf_leg_asymmetry_x
  {
    out << "shelf_leg_asymmetry_x: ";
    rosidl_generator_traits::value_to_yaml(msg.shelf_leg_asymmetry_x, out);
    out << ", ";
  }

  // member: tolerance
  {
    out << "tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MirMoveBase_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: move_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_task: ";
    rosidl_generator_traits::value_to_yaml(msg.move_task, out);
    out << "\n";
  }

  // member: target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pose:\n";
    to_block_style_yaml(msg.target_pose, out, indentation + 2);
  }

  // member: goal_dist_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_dist_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_dist_threshold, out);
    out << "\n";
  }

  // member: goal_orientation_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_orientation_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_orientation_threshold, out);
    out << "\n";
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }

  // member: max_plan_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_plan_time: ";
    rosidl_generator_traits::value_to_yaml(msg.max_plan_time, out);
    out << "\n";
  }

  // member: clear_costmaps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clear_costmaps: ";
    rosidl_generator_traits::value_to_yaml(msg.clear_costmaps, out);
    out << "\n";
  }

  // member: pause_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pause_command: ";
    rosidl_generator_traits::value_to_yaml(msg.pause_command, out);
    out << "\n";
  }

  // member: continue_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "continue_command: ";
    rosidl_generator_traits::value_to_yaml(msg.continue_command, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: collision_detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_detection: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_detection, out);
    out << "\n";
  }

  // member: collision_avoidance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_avoidance: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_avoidance, out);
    out << "\n";
  }

  // member: disable_collision_check_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_collision_check_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_collision_check_dist, out);
    out << "\n";
  }

  // member: max_linear_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_linear_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_speed, out);
    out << "\n";
  }

  // member: max_rotational_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_rotational_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rotational_speed, out);
    out << "\n";
  }

  // member: pid_dist_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_dist_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.pid_dist_offset, out);
    out << "\n";
  }

  // member: target_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.target_offset, out);
    out << "\n";
  }

  // member: only_collision_detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "only_collision_detection: ";
    rosidl_generator_traits::value_to_yaml(msg.only_collision_detection, out);
    out << "\n";
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << "\n";
  }

  // member: pattern_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pattern_type: ";
    rosidl_generator_traits::value_to_yaml(msg.pattern_type, out);
    out << "\n";
  }

  // member: pattern_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pattern_value: ";
    rosidl_generator_traits::value_to_yaml(msg.pattern_value, out);
    out << "\n";
  }

  // member: only_track
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "only_track: ";
    rosidl_generator_traits::value_to_yaml(msg.only_track, out);
    out << "\n";
  }

  // member: same_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "same_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.same_goal, out);
    out << "\n";
  }

  // member: pose_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_frame, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset:\n";
    to_block_style_yaml(msg.offset, out, indentation + 2);
  }

  // member: bar_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bar_length: ";
    rosidl_generator_traits::value_to_yaml(msg.bar_length, out);
    out << "\n";
  }

  // member: bar_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bar_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.bar_distance, out);
    out << "\n";
  }

  // member: shelf_leg_asymmetry_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shelf_leg_asymmetry_x: ";
    rosidl_generator_traits::value_to_yaml(msg.shelf_leg_asymmetry_x, out);
    out << "\n";
  }

  // member: tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MirMoveBase_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mir_actions

namespace rosidl_generator_traits
{

[[deprecated("use mir_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mir_actions::action::MirMoveBase_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const mir_actions::action::MirMoveBase_Goal & msg)
{
  return mir_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<mir_actions::action::MirMoveBase_Goal>()
{
  return "mir_actions::action::MirMoveBase_Goal";
}

template<>
inline const char * name<mir_actions::action::MirMoveBase_Goal>()
{
  return "mir_actions/action/MirMoveBase_Goal";
}

template<>
struct has_fixed_size<mir_actions::action::MirMoveBase_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_actions::action::MirMoveBase_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_actions::action::MirMoveBase_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'end_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'pose'
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace mir_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const MirMoveBase_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: end_state
  {
    out << "end_state: ";
    rosidl_generator_traits::value_to_yaml(msg.end_state, out);
    out << ", ";
  }

  // member: end_pose
  {
    out << "end_pose: ";
    to_flow_style_yaml(msg.end_pose, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MirMoveBase_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: end_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_state: ";
    rosidl_generator_traits::value_to_yaml(msg.end_state, out);
    out << "\n";
  }

  // member: end_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_pose:\n";
    to_block_style_yaml(msg.end_pose, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MirMoveBase_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mir_actions

namespace rosidl_generator_traits
{

[[deprecated("use mir_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mir_actions::action::MirMoveBase_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const mir_actions::action::MirMoveBase_Result & msg)
{
  return mir_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<mir_actions::action::MirMoveBase_Result>()
{
  return "mir_actions::action::MirMoveBase_Result";
}

template<>
inline const char * name<mir_actions::action::MirMoveBase_Result>()
{
  return "mir_actions/action/MirMoveBase_Result";
}

template<>
struct has_fixed_size<mir_actions::action::MirMoveBase_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_actions::action::MirMoveBase_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_actions::action::MirMoveBase_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'base_position'
// Member 'current_goal'
// Member 'dist_to_goal'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'pose'
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace mir_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const MirMoveBase_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: base_position
  {
    out << "base_position: ";
    to_flow_style_yaml(msg.base_position, out);
    out << ", ";
  }

  // member: current_goal
  {
    out << "current_goal: ";
    to_flow_style_yaml(msg.current_goal, out);
    out << ", ";
  }

  // member: dist_to_goal
  {
    out << "dist_to_goal: ";
    to_flow_style_yaml(msg.dist_to_goal, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: marker_inversion
  {
    out << "marker_inversion: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_inversion, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MirMoveBase_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: base_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_position:\n";
    to_block_style_yaml(msg.base_position, out, indentation + 2);
  }

  // member: current_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_goal:\n";
    to_block_style_yaml(msg.current_goal, out, indentation + 2);
  }

  // member: dist_to_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_to_goal:\n";
    to_block_style_yaml(msg.dist_to_goal, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: marker_inversion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_inversion: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_inversion, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MirMoveBase_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mir_actions

namespace rosidl_generator_traits
{

[[deprecated("use mir_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mir_actions::action::MirMoveBase_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const mir_actions::action::MirMoveBase_Feedback & msg)
{
  return mir_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<mir_actions::action::MirMoveBase_Feedback>()
{
  return "mir_actions::action::MirMoveBase_Feedback";
}

template<>
inline const char * name<mir_actions::action::MirMoveBase_Feedback>()
{
  return "mir_actions/action/MirMoveBase_Feedback";
}

template<>
struct has_fixed_size<mir_actions::action::MirMoveBase_Feedback>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value && has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<mir_actions::action::MirMoveBase_Feedback>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value && has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<mir_actions::action::MirMoveBase_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "mir_actions/action/detail/mir_move_base__traits.hpp"

namespace mir_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const MirMoveBase_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MirMoveBase_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MirMoveBase_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mir_actions

namespace rosidl_generator_traits
{

[[deprecated("use mir_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mir_actions::action::MirMoveBase_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const mir_actions::action::MirMoveBase_SendGoal_Request & msg)
{
  return mir_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<mir_actions::action::MirMoveBase_SendGoal_Request>()
{
  return "mir_actions::action::MirMoveBase_SendGoal_Request";
}

template<>
inline const char * name<mir_actions::action::MirMoveBase_SendGoal_Request>()
{
  return "mir_actions/action/MirMoveBase_SendGoal_Request";
}

template<>
struct has_fixed_size<mir_actions::action::MirMoveBase_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<mir_actions::action::MirMoveBase_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mir_actions::action::MirMoveBase_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<mir_actions::action::MirMoveBase_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mir_actions::action::MirMoveBase_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mir_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const MirMoveBase_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MirMoveBase_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MirMoveBase_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mir_actions

namespace rosidl_generator_traits
{

[[deprecated("use mir_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mir_actions::action::MirMoveBase_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const mir_actions::action::MirMoveBase_SendGoal_Response & msg)
{
  return mir_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<mir_actions::action::MirMoveBase_SendGoal_Response>()
{
  return "mir_actions::action::MirMoveBase_SendGoal_Response";
}

template<>
inline const char * name<mir_actions::action::MirMoveBase_SendGoal_Response>()
{
  return "mir_actions/action/MirMoveBase_SendGoal_Response";
}

template<>
struct has_fixed_size<mir_actions::action::MirMoveBase_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mir_actions::action::MirMoveBase_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mir_actions::action::MirMoveBase_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mir_actions::action::MirMoveBase_SendGoal>()
{
  return "mir_actions::action::MirMoveBase_SendGoal";
}

template<>
inline const char * name<mir_actions::action::MirMoveBase_SendGoal>()
{
  return "mir_actions/action/MirMoveBase_SendGoal";
}

template<>
struct has_fixed_size<mir_actions::action::MirMoveBase_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<mir_actions::action::MirMoveBase_SendGoal_Request>::value &&
    has_fixed_size<mir_actions::action::MirMoveBase_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<mir_actions::action::MirMoveBase_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<mir_actions::action::MirMoveBase_SendGoal_Request>::value &&
    has_bounded_size<mir_actions::action::MirMoveBase_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<mir_actions::action::MirMoveBase_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<mir_actions::action::MirMoveBase_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mir_actions::action::MirMoveBase_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace mir_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const MirMoveBase_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MirMoveBase_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MirMoveBase_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mir_actions

namespace rosidl_generator_traits
{

[[deprecated("use mir_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mir_actions::action::MirMoveBase_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const mir_actions::action::MirMoveBase_GetResult_Request & msg)
{
  return mir_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<mir_actions::action::MirMoveBase_GetResult_Request>()
{
  return "mir_actions::action::MirMoveBase_GetResult_Request";
}

template<>
inline const char * name<mir_actions::action::MirMoveBase_GetResult_Request>()
{
  return "mir_actions/action/MirMoveBase_GetResult_Request";
}

template<>
struct has_fixed_size<mir_actions::action::MirMoveBase_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mir_actions::action::MirMoveBase_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mir_actions::action::MirMoveBase_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "mir_actions/action/detail/mir_move_base__traits.hpp"

namespace mir_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const MirMoveBase_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MirMoveBase_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MirMoveBase_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mir_actions

namespace rosidl_generator_traits
{

[[deprecated("use mir_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mir_actions::action::MirMoveBase_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const mir_actions::action::MirMoveBase_GetResult_Response & msg)
{
  return mir_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<mir_actions::action::MirMoveBase_GetResult_Response>()
{
  return "mir_actions::action::MirMoveBase_GetResult_Response";
}

template<>
inline const char * name<mir_actions::action::MirMoveBase_GetResult_Response>()
{
  return "mir_actions/action/MirMoveBase_GetResult_Response";
}

template<>
struct has_fixed_size<mir_actions::action::MirMoveBase_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<mir_actions::action::MirMoveBase_Result>::value> {};

template<>
struct has_bounded_size<mir_actions::action::MirMoveBase_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<mir_actions::action::MirMoveBase_Result>::value> {};

template<>
struct is_message<mir_actions::action::MirMoveBase_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mir_actions::action::MirMoveBase_GetResult>()
{
  return "mir_actions::action::MirMoveBase_GetResult";
}

template<>
inline const char * name<mir_actions::action::MirMoveBase_GetResult>()
{
  return "mir_actions/action/MirMoveBase_GetResult";
}

template<>
struct has_fixed_size<mir_actions::action::MirMoveBase_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<mir_actions::action::MirMoveBase_GetResult_Request>::value &&
    has_fixed_size<mir_actions::action::MirMoveBase_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<mir_actions::action::MirMoveBase_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<mir_actions::action::MirMoveBase_GetResult_Request>::value &&
    has_bounded_size<mir_actions::action::MirMoveBase_GetResult_Response>::value
  >
{
};

template<>
struct is_service<mir_actions::action::MirMoveBase_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<mir_actions::action::MirMoveBase_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mir_actions::action::MirMoveBase_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "mir_actions/action/detail/mir_move_base__traits.hpp"

namespace mir_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const MirMoveBase_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MirMoveBase_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MirMoveBase_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mir_actions

namespace rosidl_generator_traits
{

[[deprecated("use mir_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mir_actions::action::MirMoveBase_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const mir_actions::action::MirMoveBase_FeedbackMessage & msg)
{
  return mir_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<mir_actions::action::MirMoveBase_FeedbackMessage>()
{
  return "mir_actions::action::MirMoveBase_FeedbackMessage";
}

template<>
inline const char * name<mir_actions::action::MirMoveBase_FeedbackMessage>()
{
  return "mir_actions/action/MirMoveBase_FeedbackMessage";
}

template<>
struct has_fixed_size<mir_actions::action::MirMoveBase_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<mir_actions::action::MirMoveBase_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mir_actions::action::MirMoveBase_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<mir_actions::action::MirMoveBase_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mir_actions::action::MirMoveBase_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<mir_actions::action::MirMoveBase>
  : std::true_type
{
};

template<>
struct is_action_goal<mir_actions::action::MirMoveBase_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<mir_actions::action::MirMoveBase_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<mir_actions::action::MirMoveBase_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MIR_ACTIONS__ACTION__DETAIL__MIR_MOVE_BASE__TRAITS_HPP_
