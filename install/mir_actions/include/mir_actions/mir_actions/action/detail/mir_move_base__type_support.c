// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_actions:action/MirMoveBase.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_actions/action/detail/mir_move_base__rosidl_typesupport_introspection_c.h"
#include "mir_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_actions/action/detail/mir_move_base__functions.h"
#include "mir_actions/action/detail/mir_move_base__struct.h"


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `path`
#include "nav_msgs/msg/path.h"
// Member `path`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
// Member `pose_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
// Member `offset`
#include "geometry_msgs/msg/pose2_d.h"
// Member `pose`
// Member `offset`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_actions__action__MirMoveBase_Goal__init(message_memory);
}

void mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_fini_function(void * message_memory)
{
  mir_actions__action__MirMoveBase_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_message_member_array[30] = {
  {
    "move_task",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, move_task),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, target_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_dist_threshold",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, goal_dist_threshold),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_orientation_threshold",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, goal_orientation_threshold),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_plan_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, max_plan_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clear_costmaps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, clear_costmaps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pause_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, pause_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "continue_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, continue_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision_detection",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, collision_detection),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision_avoidance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, collision_avoidance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disable_collision_check_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, disable_collision_check_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_linear_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, max_linear_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_rotational_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, max_rotational_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid_dist_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, pid_dist_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, target_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "only_collision_detection",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, only_collision_detection),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pattern_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, pattern_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pattern_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, pattern_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "only_track",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, only_track),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "same_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, same_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, pose_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bar_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, bar_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bar_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, bar_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shelf_leg_asymmetry_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, shelf_leg_asymmetry_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Goal, tolerance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_message_members = {
  "mir_actions__action",  // message namespace
  "MirMoveBase_Goal",  // message name
  30,  // number of fields
  sizeof(mir_actions__action__MirMoveBase_Goal),
  mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_message_member_array,  // message members
  mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_message_type_support_handle = {
  0,
  &mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_Goal)() {
  mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_message_member_array[24].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_message_member_array[25].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_message_type_support_handle.typesupport_identifier) {
    mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_actions__action__MirMoveBase_Goal__rosidl_typesupport_introspection_c__MirMoveBase_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mir_actions/action/detail/mir_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mir_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__functions.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__struct.h"


// Include directives for member types
// Member `end_pose`
// already included above
// #include "geometry_msgs/msg/pose_stamped.h"
// Member `end_pose`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `pose`
// already included above
// #include "geometry_msgs/msg/pose2_d.h"
// Member `pose`
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_actions__action__MirMoveBase_Result__rosidl_typesupport_introspection_c__MirMoveBase_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_actions__action__MirMoveBase_Result__init(message_memory);
}

void mir_actions__action__MirMoveBase_Result__rosidl_typesupport_introspection_c__MirMoveBase_Result_fini_function(void * message_memory)
{
  mir_actions__action__MirMoveBase_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mir_actions__action__MirMoveBase_Result__rosidl_typesupport_introspection_c__MirMoveBase_Result_message_member_array[4] = {
  {
    "end_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Result, end_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Result, end_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Result, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Result, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_actions__action__MirMoveBase_Result__rosidl_typesupport_introspection_c__MirMoveBase_Result_message_members = {
  "mir_actions__action",  // message namespace
  "MirMoveBase_Result",  // message name
  4,  // number of fields
  sizeof(mir_actions__action__MirMoveBase_Result),
  mir_actions__action__MirMoveBase_Result__rosidl_typesupport_introspection_c__MirMoveBase_Result_message_member_array,  // message members
  mir_actions__action__MirMoveBase_Result__rosidl_typesupport_introspection_c__MirMoveBase_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_actions__action__MirMoveBase_Result__rosidl_typesupport_introspection_c__MirMoveBase_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_actions__action__MirMoveBase_Result__rosidl_typesupport_introspection_c__MirMoveBase_Result_message_type_support_handle = {
  0,
  &mir_actions__action__MirMoveBase_Result__rosidl_typesupport_introspection_c__MirMoveBase_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_Result)() {
  mir_actions__action__MirMoveBase_Result__rosidl_typesupport_introspection_c__MirMoveBase_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  mir_actions__action__MirMoveBase_Result__rosidl_typesupport_introspection_c__MirMoveBase_Result_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!mir_actions__action__MirMoveBase_Result__rosidl_typesupport_introspection_c__MirMoveBase_Result_message_type_support_handle.typesupport_identifier) {
    mir_actions__action__MirMoveBase_Result__rosidl_typesupport_introspection_c__MirMoveBase_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_actions__action__MirMoveBase_Result__rosidl_typesupport_introspection_c__MirMoveBase_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mir_actions/action/detail/mir_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mir_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__functions.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__struct.h"


// Include directives for member types
// Member `base_position`
// Member `current_goal`
// Member `dist_to_goal`
// already included above
// #include "geometry_msgs/msg/pose_stamped.h"
// Member `base_position`
// Member `current_goal`
// Member `dist_to_goal`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `pose`
// already included above
// #include "geometry_msgs/msg/pose2_d.h"
// Member `pose`
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_actions__action__MirMoveBase_Feedback__init(message_memory);
}

void mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_fini_function(void * message_memory)
{
  mir_actions__action__MirMoveBase_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_message_member_array[6] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Feedback, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "base_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Feedback, base_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Feedback, current_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dist_to_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Feedback, dist_to_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Feedback, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "marker_inversion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_Feedback, marker_inversion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_message_members = {
  "mir_actions__action",  // message namespace
  "MirMoveBase_Feedback",  // message name
  6,  // number of fields
  sizeof(mir_actions__action__MirMoveBase_Feedback),
  mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_message_member_array,  // message members
  mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_message_type_support_handle = {
  0,
  &mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_Feedback)() {
  mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_message_type_support_handle.typesupport_identifier) {
    mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_actions__action__MirMoveBase_Feedback__rosidl_typesupport_introspection_c__MirMoveBase_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mir_actions/action/detail/mir_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mir_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__functions.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "mir_actions/action/mir_move_base.h"
// Member `goal`
// already included above
// #include "mir_actions/action/detail/mir_move_base__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_actions__action__MirMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_actions__action__MirMoveBase_SendGoal_Request__init(message_memory);
}

void mir_actions__action__MirMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_fini_function(void * message_memory)
{
  mir_actions__action__MirMoveBase_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mir_actions__action__MirMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_actions__action__MirMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_message_members = {
  "mir_actions__action",  // message namespace
  "MirMoveBase_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(mir_actions__action__MirMoveBase_SendGoal_Request),
  mir_actions__action__MirMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_message_member_array,  // message members
  mir_actions__action__MirMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_actions__action__MirMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_actions__action__MirMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_message_type_support_handle = {
  0,
  &mir_actions__action__MirMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_SendGoal_Request)() {
  mir_actions__action__MirMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  mir_actions__action__MirMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_Goal)();
  if (!mir_actions__action__MirMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    mir_actions__action__MirMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_actions__action__MirMoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mir_actions/action/detail/mir_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mir_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__functions.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_actions__action__MirMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_actions__action__MirMoveBase_SendGoal_Response__init(message_memory);
}

void mir_actions__action__MirMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Response_fini_function(void * message_memory)
{
  mir_actions__action__MirMoveBase_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mir_actions__action__MirMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_actions__action__MirMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Response_message_members = {
  "mir_actions__action",  // message namespace
  "MirMoveBase_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(mir_actions__action__MirMoveBase_SendGoal_Response),
  mir_actions__action__MirMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Response_message_member_array,  // message members
  mir_actions__action__MirMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_actions__action__MirMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_actions__action__MirMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Response_message_type_support_handle = {
  0,
  &mir_actions__action__MirMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_SendGoal_Response)() {
  mir_actions__action__MirMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!mir_actions__action__MirMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    mir_actions__action__MirMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_actions__action__MirMoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mir_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_service_members = {
  "mir_actions__action",  // service namespace
  "MirMoveBase_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_service_type_support_handle = {
  0,
  &mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_actions
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_SendGoal)() {
  if (!mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_service_type_support_handle.typesupport_identifier) {
    mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_SendGoal_Response)()->data;
  }

  return &mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "mir_actions/action/detail/mir_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mir_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__functions.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_actions__action__MirMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_actions__action__MirMoveBase_GetResult_Request__init(message_memory);
}

void mir_actions__action__MirMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Request_fini_function(void * message_memory)
{
  mir_actions__action__MirMoveBase_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mir_actions__action__MirMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_actions__action__MirMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Request_message_members = {
  "mir_actions__action",  // message namespace
  "MirMoveBase_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(mir_actions__action__MirMoveBase_GetResult_Request),
  mir_actions__action__MirMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Request_message_member_array,  // message members
  mir_actions__action__MirMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_actions__action__MirMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_actions__action__MirMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Request_message_type_support_handle = {
  0,
  &mir_actions__action__MirMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_GetResult_Request)() {
  mir_actions__action__MirMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!mir_actions__action__MirMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    mir_actions__action__MirMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_actions__action__MirMoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mir_actions/action/detail/mir_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mir_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__functions.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "mir_actions/action/mir_move_base.h"
// Member `result`
// already included above
// #include "mir_actions/action/detail/mir_move_base__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_actions__action__MirMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_actions__action__MirMoveBase_GetResult_Response__init(message_memory);
}

void mir_actions__action__MirMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Response_fini_function(void * message_memory)
{
  mir_actions__action__MirMoveBase_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mir_actions__action__MirMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_actions__action__MirMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Response_message_members = {
  "mir_actions__action",  // message namespace
  "MirMoveBase_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(mir_actions__action__MirMoveBase_GetResult_Response),
  mir_actions__action__MirMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Response_message_member_array,  // message members
  mir_actions__action__MirMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_actions__action__MirMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_actions__action__MirMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Response_message_type_support_handle = {
  0,
  &mir_actions__action__MirMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_GetResult_Response)() {
  mir_actions__action__MirMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_Result)();
  if (!mir_actions__action__MirMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    mir_actions__action__MirMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_actions__action__MirMoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mir_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_service_members = {
  "mir_actions__action",  // service namespace
  "MirMoveBase_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_service_type_support_handle = {
  0,
  &mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_actions
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_GetResult)() {
  if (!mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_service_type_support_handle.typesupport_identifier) {
    mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_GetResult_Response)()->data;
  }

  return &mir_actions__action__detail__mir_move_base__rosidl_typesupport_introspection_c__MirMoveBase_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "mir_actions/action/detail/mir_move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mir_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__functions.h"
// already included above
// #include "mir_actions/action/detail/mir_move_base__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "mir_actions/action/mir_move_base.h"
// Member `feedback`
// already included above
// #include "mir_actions/action/detail/mir_move_base__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_actions__action__MirMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MirMoveBase_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_actions__action__MirMoveBase_FeedbackMessage__init(message_memory);
}

void mir_actions__action__MirMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MirMoveBase_FeedbackMessage_fini_function(void * message_memory)
{
  mir_actions__action__MirMoveBase_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mir_actions__action__MirMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MirMoveBase_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_actions__action__MirMoveBase_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_actions__action__MirMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MirMoveBase_FeedbackMessage_message_members = {
  "mir_actions__action",  // message namespace
  "MirMoveBase_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(mir_actions__action__MirMoveBase_FeedbackMessage),
  mir_actions__action__MirMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MirMoveBase_FeedbackMessage_message_member_array,  // message members
  mir_actions__action__MirMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MirMoveBase_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_actions__action__MirMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MirMoveBase_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_actions__action__MirMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MirMoveBase_FeedbackMessage_message_type_support_handle = {
  0,
  &mir_actions__action__MirMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MirMoveBase_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_FeedbackMessage)() {
  mir_actions__action__MirMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MirMoveBase_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  mir_actions__action__MirMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MirMoveBase_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_actions, action, MirMoveBase_Feedback)();
  if (!mir_actions__action__MirMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MirMoveBase_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    mir_actions__action__MirMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MirMoveBase_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_actions__action__MirMoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MirMoveBase_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
