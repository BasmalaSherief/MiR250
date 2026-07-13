
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "mir_actions__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mir_actions__rosidl_generator_c")]
extern "C" {
    fn mir_actions__action__MirMoveBase_Goal__init(msg: *mut MirMoveBase_Goal) -> bool;
    fn mir_actions__action__MirMoveBase_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_Goal>, size: usize) -> bool;
    fn mir_actions__action__MirMoveBase_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_Goal>);
    fn mir_actions__action__MirMoveBase_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MirMoveBase_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_Goal>) -> bool;
}

// Corresponds to mir_actions__action__MirMoveBase_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub move_task: i16,

    /// shared parameters
    pub target_pose: geometry_msgs::msg::rmw::PoseStamped,

    /// global move parameters
    pub goal_dist_threshold: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_orientation_threshold: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path: nav_msgs::msg::rmw::Path,


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
    pub pose_frame: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose2D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub offset: geometry_msgs::msg::rmw::Pose2D,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_actions__action__MirMoveBase_Goal__init(&mut msg as *mut _) {
        panic!("Call to mir_actions__action__MirMoveBase_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MirMoveBase_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MirMoveBase_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mir_actions/action/MirMoveBase_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_Goal() }
  }
}


#[link(name = "mir_actions__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_Result() -> *const std::ffi::c_void;
}

#[link(name = "mir_actions__rosidl_generator_c")]
extern "C" {
    fn mir_actions__action__MirMoveBase_Result__init(msg: *mut MirMoveBase_Result) -> bool;
    fn mir_actions__action__MirMoveBase_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_Result>, size: usize) -> bool;
    fn mir_actions__action__MirMoveBase_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_Result>);
    fn mir_actions__action__MirMoveBase_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MirMoveBase_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_Result>) -> bool;
}

// Corresponds to mir_actions__action__MirMoveBase_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_Result {
    /// shared results
    pub end_state: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub end_pose: geometry_msgs::msg::rmw::PoseStamped,

    /// docking results
    pub pose: geometry_msgs::msg::rmw::Pose2D,

    /// feedback for UI
    pub message: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_actions__action__MirMoveBase_Result__init(&mut msg as *mut _) {
        panic!("Call to mir_actions__action__MirMoveBase_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MirMoveBase_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MirMoveBase_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mir_actions/action/MirMoveBase_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_Result() }
  }
}


#[link(name = "mir_actions__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mir_actions__rosidl_generator_c")]
extern "C" {
    fn mir_actions__action__MirMoveBase_Feedback__init(msg: *mut MirMoveBase_Feedback) -> bool;
    fn mir_actions__action__MirMoveBase_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_Feedback>, size: usize) -> bool;
    fn mir_actions__action__MirMoveBase_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_Feedback>);
    fn mir_actions__action__MirMoveBase_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MirMoveBase_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_Feedback>) -> bool;
}

// Corresponds to mir_actions__action__MirMoveBase_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_Feedback {
    /// shared feedback
    pub state: i8,

    /// global move feedback
    pub base_position: geometry_msgs::msg::rmw::PoseStamped,

    /// relative move feedback
    pub current_goal: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dist_to_goal: geometry_msgs::msg::rmw::PoseStamped,

    /// docking move feedback
    /// int8 DOCKING = 0
    /// int8 COLLISION = 1
    /// int8 state
    pub pose: geometry_msgs::msg::rmw::Pose2D,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_actions__action__MirMoveBase_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mir_actions__action__MirMoveBase_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MirMoveBase_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MirMoveBase_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mir_actions/action/MirMoveBase_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_Feedback() }
  }
}


#[link(name = "mir_actions__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mir_actions__rosidl_generator_c")]
extern "C" {
    fn mir_actions__action__MirMoveBase_FeedbackMessage__init(msg: *mut MirMoveBase_FeedbackMessage) -> bool;
    fn mir_actions__action__MirMoveBase_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_FeedbackMessage>, size: usize) -> bool;
    fn mir_actions__action__MirMoveBase_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_FeedbackMessage>);
    fn mir_actions__action__MirMoveBase_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MirMoveBase_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_FeedbackMessage>) -> bool;
}

// Corresponds to mir_actions__action__MirMoveBase_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::MirMoveBase_Feedback,

}



impl Default for MirMoveBase_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_actions__action__MirMoveBase_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mir_actions__action__MirMoveBase_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MirMoveBase_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MirMoveBase_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mir_actions/action/MirMoveBase_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_FeedbackMessage() }
  }
}




#[link(name = "mir_actions__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mir_actions__rosidl_generator_c")]
extern "C" {
    fn mir_actions__action__MirMoveBase_SendGoal_Request__init(msg: *mut MirMoveBase_SendGoal_Request) -> bool;
    fn mir_actions__action__MirMoveBase_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_SendGoal_Request>, size: usize) -> bool;
    fn mir_actions__action__MirMoveBase_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_SendGoal_Request>);
    fn mir_actions__action__MirMoveBase_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MirMoveBase_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_SendGoal_Request>) -> bool;
}

// Corresponds to mir_actions__action__MirMoveBase_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::MirMoveBase_Goal,

}



impl Default for MirMoveBase_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_actions__action__MirMoveBase_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mir_actions__action__MirMoveBase_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MirMoveBase_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MirMoveBase_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mir_actions/action/MirMoveBase_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_SendGoal_Request() }
  }
}


#[link(name = "mir_actions__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mir_actions__rosidl_generator_c")]
extern "C" {
    fn mir_actions__action__MirMoveBase_SendGoal_Response__init(msg: *mut MirMoveBase_SendGoal_Response) -> bool;
    fn mir_actions__action__MirMoveBase_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_SendGoal_Response>, size: usize) -> bool;
    fn mir_actions__action__MirMoveBase_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_SendGoal_Response>);
    fn mir_actions__action__MirMoveBase_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MirMoveBase_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_SendGoal_Response>) -> bool;
}

// Corresponds to mir_actions__action__MirMoveBase_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for MirMoveBase_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_actions__action__MirMoveBase_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mir_actions__action__MirMoveBase_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MirMoveBase_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MirMoveBase_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mir_actions/action/MirMoveBase_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_SendGoal_Response() }
  }
}


#[link(name = "mir_actions__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mir_actions__rosidl_generator_c")]
extern "C" {
    fn mir_actions__action__MirMoveBase_GetResult_Request__init(msg: *mut MirMoveBase_GetResult_Request) -> bool;
    fn mir_actions__action__MirMoveBase_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_GetResult_Request>, size: usize) -> bool;
    fn mir_actions__action__MirMoveBase_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_GetResult_Request>);
    fn mir_actions__action__MirMoveBase_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MirMoveBase_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_GetResult_Request>) -> bool;
}

// Corresponds to mir_actions__action__MirMoveBase_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for MirMoveBase_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_actions__action__MirMoveBase_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mir_actions__action__MirMoveBase_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MirMoveBase_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MirMoveBase_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mir_actions/action/MirMoveBase_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_GetResult_Request() }
  }
}


#[link(name = "mir_actions__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mir_actions__rosidl_generator_c")]
extern "C" {
    fn mir_actions__action__MirMoveBase_GetResult_Response__init(msg: *mut MirMoveBase_GetResult_Response) -> bool;
    fn mir_actions__action__MirMoveBase_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_GetResult_Response>, size: usize) -> bool;
    fn mir_actions__action__MirMoveBase_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_GetResult_Response>);
    fn mir_actions__action__MirMoveBase_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MirMoveBase_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MirMoveBase_GetResult_Response>) -> bool;
}

// Corresponds to mir_actions__action__MirMoveBase_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirMoveBase_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::MirMoveBase_Result,

}



impl Default for MirMoveBase_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_actions__action__MirMoveBase_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mir_actions__action__MirMoveBase_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MirMoveBase_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_actions__action__MirMoveBase_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MirMoveBase_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MirMoveBase_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mir_actions/action/MirMoveBase_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_actions__action__MirMoveBase_GetResult_Response() }
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


