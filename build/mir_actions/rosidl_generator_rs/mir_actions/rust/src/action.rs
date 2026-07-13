
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to mir_actions__action__MirMoveBase_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub move_task: i16,

    /// shared parameters
    pub target_pose: geometry_msgs::msg::PoseStamped,

    /// global move parameters
    pub goal_dist_threshold: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_orientation_threshold: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path: nav_msgs::msg::Path,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_plan_time: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub clear_costmaps: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pause_command: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub continue_command: bool,

    /// relative move parameters
    pub yaw: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub collision_detection: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub collision_avoidance: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub disable_collision_check_dist: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_linear_speed: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_rotational_speed: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pid_dist_offset: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_offset: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub only_collision_detection: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout: f64,

    /// docking move parameters
    pub pattern_type: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pattern_value: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub only_track: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub same_goal: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_frame: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose2D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub offset: geometry_msgs::msg::Pose2D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bar_length: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bar_distance: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub shelf_leg_asymmetry_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tolerance: f64,

}

impl MirMoveBase_Goal {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BASE_MOVE: i16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GLOBAL_MOVE: i16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RELATIVE_MOVE: i16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RELATIVE_MARKER_MOVE: i16 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOCKING_MOVE: i16 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOCKING_GLOBAL_MOVE: i16 = 5;

}


impl Default for MirMoveBase_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MirMoveBase_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_Goal {
  type RmwMsg = super::action::rmw::MirMoveBase_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        move_task: msg.move_task,
        target_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.target_pose)).into_owned(),
        goal_dist_threshold: msg.goal_dist_threshold,
        goal_orientation_threshold: msg.goal_orientation_threshold,
        path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Owned(msg.path)).into_owned(),
        max_plan_time: msg.max_plan_time,
        clear_costmaps: msg.clear_costmaps,
        pause_command: msg.pause_command,
        continue_command: msg.continue_command,
        yaw: msg.yaw,
        collision_detection: msg.collision_detection,
        collision_avoidance: msg.collision_avoidance,
        disable_collision_check_dist: msg.disable_collision_check_dist,
        max_linear_speed: msg.max_linear_speed,
        max_rotational_speed: msg.max_rotational_speed,
        pid_dist_offset: msg.pid_dist_offset,
        target_offset: msg.target_offset,
        only_collision_detection: msg.only_collision_detection,
        timeout: msg.timeout,
        pattern_type: msg.pattern_type,
        pattern_value: msg.pattern_value,
        only_track: msg.only_track,
        same_goal: msg.same_goal,
        pose_frame: msg.pose_frame.as_str().into(),
        pose: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        offset: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Owned(msg.offset)).into_owned(),
        bar_length: msg.bar_length,
        bar_distance: msg.bar_distance,
        shelf_leg_asymmetry_x: msg.shelf_leg_asymmetry_x,
        tolerance: msg.tolerance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      move_task: msg.move_task,
        target_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.target_pose)).into_owned(),
      goal_dist_threshold: msg.goal_dist_threshold,
      goal_orientation_threshold: msg.goal_orientation_threshold,
        path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Borrowed(&msg.path)).into_owned(),
      max_plan_time: msg.max_plan_time,
      clear_costmaps: msg.clear_costmaps,
      pause_command: msg.pause_command,
      continue_command: msg.continue_command,
      yaw: msg.yaw,
      collision_detection: msg.collision_detection,
      collision_avoidance: msg.collision_avoidance,
      disable_collision_check_dist: msg.disable_collision_check_dist,
      max_linear_speed: msg.max_linear_speed,
      max_rotational_speed: msg.max_rotational_speed,
      pid_dist_offset: msg.pid_dist_offset,
      target_offset: msg.target_offset,
      only_collision_detection: msg.only_collision_detection,
      timeout: msg.timeout,
      pattern_type: msg.pattern_type,
      pattern_value: msg.pattern_value,
      only_track: msg.only_track,
      same_goal: msg.same_goal,
        pose_frame: msg.pose_frame.as_str().into(),
        pose: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        offset: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.offset)).into_owned(),
      bar_length: msg.bar_length,
      bar_distance: msg.bar_distance,
      shelf_leg_asymmetry_x: msg.shelf_leg_asymmetry_x,
      tolerance: msg.tolerance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      move_task: msg.move_task,
      target_pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.target_pose),
      goal_dist_threshold: msg.goal_dist_threshold,
      goal_orientation_threshold: msg.goal_orientation_threshold,
      path: nav_msgs::msg::Path::from_rmw_message(msg.path),
      max_plan_time: msg.max_plan_time,
      clear_costmaps: msg.clear_costmaps,
      pause_command: msg.pause_command,
      continue_command: msg.continue_command,
      yaw: msg.yaw,
      collision_detection: msg.collision_detection,
      collision_avoidance: msg.collision_avoidance,
      disable_collision_check_dist: msg.disable_collision_check_dist,
      max_linear_speed: msg.max_linear_speed,
      max_rotational_speed: msg.max_rotational_speed,
      pid_dist_offset: msg.pid_dist_offset,
      target_offset: msg.target_offset,
      only_collision_detection: msg.only_collision_detection,
      timeout: msg.timeout,
      pattern_type: msg.pattern_type,
      pattern_value: msg.pattern_value,
      only_track: msg.only_track,
      same_goal: msg.same_goal,
      pose_frame: msg.pose_frame.to_string(),
      pose: geometry_msgs::msg::Pose2D::from_rmw_message(msg.pose),
      offset: geometry_msgs::msg::Pose2D::from_rmw_message(msg.offset),
      bar_length: msg.bar_length,
      bar_distance: msg.bar_distance,
      shelf_leg_asymmetry_x: msg.shelf_leg_asymmetry_x,
      tolerance: msg.tolerance,
    }
  }
}


// Corresponds to mir_actions__action__MirMoveBase_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_Result {
    /// shared results
    pub end_state: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub end_pose: geometry_msgs::msg::PoseStamped,

    /// docking results
    pub pose: geometry_msgs::msg::Pose2D,

    /// feedback for UI
    pub message: std::string::String,

}

impl MirMoveBase_Result {
    /// shared states
    pub const UNDEFINED: i16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GOAL_REACHED: i16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED: i16 = -1;

    /// global move states
    pub const MARKER_VISIBLE: i16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_NO_PATH: i16 = -2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_GOAL_IN_STATIC_OBSTACLE: i16 = -3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_GOAL_IN_FORBIDDEN_AREA: i16 = -4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_GOAL_IN_DYNAMIC_OBSTACLE: i16 = -5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_ROBOT_IN_COLLISION: i16 = -6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_ROBOT_IN_FORBIDDEN_AREA: i16 = -7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_UNKNOWN_TRAILER: i16 = -8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_TO_PASS_GLOBAL_PLAN: i16 = -9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_NO_VALID_RECOVERY_CONTROL: i16 = -10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_UNKNOWN_PLANNER_ERROR: i16 = -11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_ROBOT_OSCILLATING: i16 = -12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_SOFTWARE_ERROR: i16 = -13;

    /// relative move states
    pub const FAILED_TIMEOUT: i16 = -14;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_COLLISION: i16 = -15;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_GOAL: i16 = -16;

    /// docking move states
    pub const FAILED_MARKER_TRACKING_ERROR: i16 = -17;

}


impl Default for MirMoveBase_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MirMoveBase_Result::default())
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_Result {
  type RmwMsg = super::action::rmw::MirMoveBase_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        end_state: msg.end_state,
        end_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.end_pose)).into_owned(),
        pose: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      end_state: msg.end_state,
        end_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.end_pose)).into_owned(),
        pose: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      end_state: msg.end_state,
      end_pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.end_pose),
      pose: geometry_msgs::msg::Pose2D::from_rmw_message(msg.pose),
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to mir_actions__action__MirMoveBase_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_Feedback {
    /// shared feedback
    pub state: i8,

    /// global move feedback
    pub base_position: geometry_msgs::msg::PoseStamped,

    /// relative move feedback
    pub current_goal: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dist_to_goal: geometry_msgs::msg::PoseStamped,

    /// docking move feedback
    /// int8 DOCKING = 0
    /// int8 COLLISION = 1
    /// int8 state
    pub pose: geometry_msgs::msg::Pose2D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub marker_inversion: bool,

}

impl MirMoveBase_Feedback {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NOT_READY: i8 = -1;

    /// global move states
    pub const PLANNING: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTROLLING: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CLEARING: i8 = 2;

    /// relative move states
    pub const DOCKING: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COLLISION: i8 = 4;

}


impl Default for MirMoveBase_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MirMoveBase_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_Feedback {
  type RmwMsg = super::action::rmw::MirMoveBase_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state,
        base_position: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.base_position)).into_owned(),
        current_goal: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.current_goal)).into_owned(),
        dist_to_goal: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.dist_to_goal)).into_owned(),
        pose: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        marker_inversion: msg.marker_inversion,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      state: msg.state,
        base_position: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.base_position)).into_owned(),
        current_goal: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.current_goal)).into_owned(),
        dist_to_goal: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.dist_to_goal)).into_owned(),
        pose: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      marker_inversion: msg.marker_inversion,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: msg.state,
      base_position: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.base_position),
      current_goal: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.current_goal),
      dist_to_goal: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.dist_to_goal),
      pose: geometry_msgs::msg::Pose2D::from_rmw_message(msg.pose),
      marker_inversion: msg.marker_inversion,
    }
  }
}


// Corresponds to mir_actions__action__MirMoveBase_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::MirMoveBase_Feedback,

}



impl Default for MirMoveBase_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MirMoveBase_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_FeedbackMessage {
  type RmwMsg = super::action::rmw::MirMoveBase_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::MirMoveBase_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::MirMoveBase_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::MirMoveBase_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to mir_actions__action__MirMoveBase_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::MirMoveBase_Goal,

}



impl Default for MirMoveBase_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MirMoveBase_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_SendGoal_Request {
  type RmwMsg = super::action::rmw::MirMoveBase_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::MirMoveBase_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::MirMoveBase_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::MirMoveBase_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to mir_actions__action__MirMoveBase_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for MirMoveBase_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MirMoveBase_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_SendGoal_Response {
  type RmwMsg = super::action::rmw::MirMoveBase_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to mir_actions__action__MirMoveBase_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for MirMoveBase_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MirMoveBase_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_GetResult_Request {
  type RmwMsg = super::action::rmw::MirMoveBase_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to mir_actions__action__MirMoveBase_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::MirMoveBase_Result,

}



impl Default for MirMoveBase_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MirMoveBase_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_GetResult_Response {
  type RmwMsg = super::action::rmw::MirMoveBase_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::MirMoveBase_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::MirMoveBase_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::MirMoveBase_Result::from_rmw_message(msg.result),
    }
  }
}






#[link(name = "mir_actions__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mir_actions__action__MirMoveBase_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mir_actions__action__MirMoveBase_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct MirMoveBase_SendGoal;

impl rosidl_runtime_rs::Service for MirMoveBase_SendGoal {
    type Request = MirMoveBase_SendGoal_Request;
    type Response = MirMoveBase_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mir_actions__action__MirMoveBase_SendGoal() }
    }
}




#[link(name = "mir_actions__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mir_actions__action__MirMoveBase_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mir_actions__action__MirMoveBase_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct MirMoveBase_GetResult;

impl rosidl_runtime_rs::Service for MirMoveBase_GetResult {
    type Request = MirMoveBase_GetResult_Request;
    type Response = MirMoveBase_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mir_actions__action__MirMoveBase_GetResult() }
    }
}






#[link(name = "mir_actions__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__mir_actions__action__MirMoveBase() -> *const std::ffi::c_void;
}

// Corresponds to mir_actions__action__MirMoveBase
#[allow(missing_docs, non_camel_case_types)]
pub struct MirMoveBase;

impl rosidl_runtime_rs::Action for MirMoveBase {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = MirMoveBase_Goal;

  /// The result message defined in the action definition.
  type Result = MirMoveBase_Result;

  /// The feedback message defined in the action definition.
  type Feedback = MirMoveBase_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::MirMoveBase_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::MirMoveBase_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::MirMoveBase_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__mir_actions__action__MirMoveBase() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::MirMoveBase_Goal,
  ) -> super::action::rmw::MirMoveBase_SendGoal_Request {
   super::action::rmw::MirMoveBase_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::MirMoveBase_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::MirMoveBase_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::MirMoveBase_SendGoal_Response {
   super::action::rmw::MirMoveBase_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::MirMoveBase_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::MirMoveBase_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::MirMoveBase_Feedback,
  ) -> super::action::rmw::MirMoveBase_FeedbackMessage {
    let mut message = super::action::rmw::MirMoveBase_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::MirMoveBase_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::MirMoveBase_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::MirMoveBase_GetResult_Request {
   super::action::rmw::MirMoveBase_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::MirMoveBase_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::MirMoveBase_Result,
  ) -> super::action::rmw::MirMoveBase_GetResult_Response {
   super::action::rmw::MirMoveBase_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::MirMoveBase_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::MirMoveBase_Result,
  ) {
    (response.status, response.result)
  }
}


