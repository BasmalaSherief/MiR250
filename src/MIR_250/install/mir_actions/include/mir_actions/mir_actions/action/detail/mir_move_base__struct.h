// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_actions:action/MirMoveBase.idl
// generated code does not contain a copyright notice

#ifndef MIR_ACTIONS__ACTION__DETAIL__MIR_MOVE_BASE__STRUCT_H_
#define MIR_ACTIONS__ACTION__DETAIL__MIR_MOVE_BASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BASE_MOVE'.
enum
{
  mir_actions__action__MirMoveBase_Goal__BASE_MOVE = 0
};

/// Constant 'GLOBAL_MOVE'.
enum
{
  mir_actions__action__MirMoveBase_Goal__GLOBAL_MOVE = 1
};

/// Constant 'RELATIVE_MOVE'.
enum
{
  mir_actions__action__MirMoveBase_Goal__RELATIVE_MOVE = 2
};

/// Constant 'RELATIVE_MARKER_MOVE'.
enum
{
  mir_actions__action__MirMoveBase_Goal__RELATIVE_MARKER_MOVE = 3
};

/// Constant 'DOCKING_MOVE'.
enum
{
  mir_actions__action__MirMoveBase_Goal__DOCKING_MOVE = 4
};

/// Constant 'DOCKING_GLOBAL_MOVE'.
enum
{
  mir_actions__action__MirMoveBase_Goal__DOCKING_GLOBAL_MOVE = 5
};

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'pose_frame'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
// Member 'offset'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in action/MirMoveBase in the package mir_actions.
typedef struct mir_actions__action__MirMoveBase_Goal
{
  int16_t move_task;
  /// shared parameters
  geometry_msgs__msg__PoseStamped target_pose;
  /// global move parameters
  double goal_dist_threshold;
  double goal_orientation_threshold;
  nav_msgs__msg__Path path;
  float max_plan_time;
  bool clear_costmaps;
  bool pause_command;
  bool continue_command;
  /// relative move parameters
  double yaw;
  bool collision_detection;
  bool collision_avoidance;
  double disable_collision_check_dist;
  double max_linear_speed;
  double max_rotational_speed;
  double pid_dist_offset;
  double target_offset;
  bool only_collision_detection;
  double timeout;
  /// docking move parameters
  int32_t pattern_type;
  int32_t pattern_value;
  bool only_track;
  bool same_goal;
  rosidl_runtime_c__String pose_frame;
  geometry_msgs__msg__Pose2D pose;
  geometry_msgs__msg__Pose2D offset;
  double bar_length;
  double bar_distance;
  double shelf_leg_asymmetry_x;
  double tolerance;
} mir_actions__action__MirMoveBase_Goal;

// Struct for a sequence of mir_actions__action__MirMoveBase_Goal.
typedef struct mir_actions__action__MirMoveBase_Goal__Sequence
{
  mir_actions__action__MirMoveBase_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_actions__action__MirMoveBase_Goal__Sequence;


// Constants defined in the message

/// Constant 'UNDEFINED'.
/**
  * shared states
 */
enum
{
  mir_actions__action__MirMoveBase_Result__UNDEFINED = 0
};

/// Constant 'GOAL_REACHED'.
enum
{
  mir_actions__action__MirMoveBase_Result__GOAL_REACHED = 1
};

/// Constant 'FAILED'.
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED = -1
};

/// Constant 'MARKER_VISIBLE'.
/**
  * global move states
 */
enum
{
  mir_actions__action__MirMoveBase_Result__MARKER_VISIBLE = 2
};

/// Constant 'FAILED_NO_PATH'.
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_NO_PATH = -2
};

/// Constant 'FAILED_GOAL_IN_STATIC_OBSTACLE'.
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_GOAL_IN_STATIC_OBSTACLE = -3
};

/// Constant 'FAILED_GOAL_IN_FORBIDDEN_AREA'.
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_GOAL_IN_FORBIDDEN_AREA = -4
};

/// Constant 'FAILED_GOAL_IN_DYNAMIC_OBSTACLE'.
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_GOAL_IN_DYNAMIC_OBSTACLE = -5
};

/// Constant 'FAILED_ROBOT_IN_COLLISION'.
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_ROBOT_IN_COLLISION = -6
};

/// Constant 'FAILED_ROBOT_IN_FORBIDDEN_AREA'.
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_ROBOT_IN_FORBIDDEN_AREA = -7
};

/// Constant 'FAILED_UNKNOWN_TRAILER'.
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_UNKNOWN_TRAILER = -8
};

/// Constant 'FAILED_TO_PASS_GLOBAL_PLAN'.
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_TO_PASS_GLOBAL_PLAN = -9
};

/// Constant 'FAILED_NO_VALID_RECOVERY_CONTROL'.
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_NO_VALID_RECOVERY_CONTROL = -10
};

/// Constant 'FAILED_UNKNOWN_PLANNER_ERROR'.
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_UNKNOWN_PLANNER_ERROR = -11
};

/// Constant 'FAILED_ROBOT_OSCILLATING'.
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_ROBOT_OSCILLATING = -12
};

/// Constant 'FAILED_SOFTWARE_ERROR'.
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_SOFTWARE_ERROR = -13
};

/// Constant 'FAILED_TIMEOUT'.
/**
  * relative move states
 */
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_TIMEOUT = -14
};

/// Constant 'FAILED_COLLISION'.
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_COLLISION = -15
};

/// Constant 'INVALID_GOAL'.
enum
{
  mir_actions__action__MirMoveBase_Result__INVALID_GOAL = -16
};

/// Constant 'FAILED_MARKER_TRACKING_ERROR'.
/**
  * docking move states
 */
enum
{
  mir_actions__action__MirMoveBase_Result__FAILED_MARKER_TRACKING_ERROR = -17
};

// Include directives for member types
// Member 'end_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'pose'
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__struct.h"
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MirMoveBase in the package mir_actions.
typedef struct mir_actions__action__MirMoveBase_Result
{
  /// shared results
  int16_t end_state;
  geometry_msgs__msg__PoseStamped end_pose;
  /// docking results
  geometry_msgs__msg__Pose2D pose;
  /// feedback for UI
  rosidl_runtime_c__String message;
} mir_actions__action__MirMoveBase_Result;

// Struct for a sequence of mir_actions__action__MirMoveBase_Result.
typedef struct mir_actions__action__MirMoveBase_Result__Sequence
{
  mir_actions__action__MirMoveBase_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_actions__action__MirMoveBase_Result__Sequence;


// Constants defined in the message

/// Constant 'NOT_READY'.
enum
{
  mir_actions__action__MirMoveBase_Feedback__NOT_READY = -1
};

/// Constant 'PLANNING'.
/**
  * global move states
 */
enum
{
  mir_actions__action__MirMoveBase_Feedback__PLANNING = 0
};

/// Constant 'CONTROLLING'.
enum
{
  mir_actions__action__MirMoveBase_Feedback__CONTROLLING = 1
};

/// Constant 'CLEARING'.
enum
{
  mir_actions__action__MirMoveBase_Feedback__CLEARING = 2
};

/// Constant 'DOCKING'.
/**
  * relative move states
 */
enum
{
  mir_actions__action__MirMoveBase_Feedback__DOCKING = 3
};

/// Constant 'COLLISION'.
enum
{
  mir_actions__action__MirMoveBase_Feedback__COLLISION = 4
};

// Include directives for member types
// Member 'base_position'
// Member 'current_goal'
// Member 'dist_to_goal'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'pose'
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in action/MirMoveBase in the package mir_actions.
typedef struct mir_actions__action__MirMoveBase_Feedback
{
  /// shared feedback
  int8_t state;
  /// global move feedback
  geometry_msgs__msg__PoseStamped base_position;
  /// relative move feedback
  geometry_msgs__msg__PoseStamped current_goal;
  geometry_msgs__msg__PoseStamped dist_to_goal;
  /// docking move feedback
  /// int8 DOCKING = 0
  /// int8 COLLISION = 1
  /// int8 state
  geometry_msgs__msg__Pose2D pose;
  bool marker_inversion;
} mir_actions__action__MirMoveBase_Feedback;

// Struct for a sequence of mir_actions__action__MirMoveBase_Feedback.
typedef struct mir_actions__action__MirMoveBase_Feedback__Sequence
{
  mir_actions__action__MirMoveBase_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_actions__action__MirMoveBase_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mir_actions/action/detail/mir_move_base__struct.h"

/// Struct defined in action/MirMoveBase in the package mir_actions.
typedef struct mir_actions__action__MirMoveBase_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mir_actions__action__MirMoveBase_Goal goal;
} mir_actions__action__MirMoveBase_SendGoal_Request;

// Struct for a sequence of mir_actions__action__MirMoveBase_SendGoal_Request.
typedef struct mir_actions__action__MirMoveBase_SendGoal_Request__Sequence
{
  mir_actions__action__MirMoveBase_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_actions__action__MirMoveBase_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MirMoveBase in the package mir_actions.
typedef struct mir_actions__action__MirMoveBase_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mir_actions__action__MirMoveBase_SendGoal_Response;

// Struct for a sequence of mir_actions__action__MirMoveBase_SendGoal_Response.
typedef struct mir_actions__action__MirMoveBase_SendGoal_Response__Sequence
{
  mir_actions__action__MirMoveBase_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_actions__action__MirMoveBase_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MirMoveBase in the package mir_actions.
typedef struct mir_actions__action__MirMoveBase_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mir_actions__action__MirMoveBase_GetResult_Request;

// Struct for a sequence of mir_actions__action__MirMoveBase_GetResult_Request.
typedef struct mir_actions__action__MirMoveBase_GetResult_Request__Sequence
{
  mir_actions__action__MirMoveBase_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_actions__action__MirMoveBase_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mir_actions/action/detail/mir_move_base__struct.h"

/// Struct defined in action/MirMoveBase in the package mir_actions.
typedef struct mir_actions__action__MirMoveBase_GetResult_Response
{
  int8_t status;
  mir_actions__action__MirMoveBase_Result result;
} mir_actions__action__MirMoveBase_GetResult_Response;

// Struct for a sequence of mir_actions__action__MirMoveBase_GetResult_Response.
typedef struct mir_actions__action__MirMoveBase_GetResult_Response__Sequence
{
  mir_actions__action__MirMoveBase_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_actions__action__MirMoveBase_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mir_actions/action/detail/mir_move_base__struct.h"

/// Struct defined in action/MirMoveBase in the package mir_actions.
typedef struct mir_actions__action__MirMoveBase_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mir_actions__action__MirMoveBase_Feedback feedback;
} mir_actions__action__MirMoveBase_FeedbackMessage;

// Struct for a sequence of mir_actions__action__MirMoveBase_FeedbackMessage.
typedef struct mir_actions__action__MirMoveBase_FeedbackMessage__Sequence
{
  mir_actions__action__MirMoveBase_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_actions__action__MirMoveBase_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_ACTIONS__ACTION__DETAIL__MIR_MOVE_BASE__STRUCT_H_
