#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "sdc21x0__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sdc21x0__msg__Encoders() -> *const std::ffi::c_void;
}

#[link(name = "sdc21x0__rosidl_generator_c")]
extern "C" {
    fn sdc21x0__msg__Encoders__init(msg: *mut Encoders) -> bool;
    fn sdc21x0__msg__Encoders__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Encoders>, size: usize) -> bool;
    fn sdc21x0__msg__Encoders__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Encoders>);
    fn sdc21x0__msg__Encoders__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Encoders>, out_seq: *mut rosidl_runtime_rs::Sequence<Encoders>) -> bool;
}

// Corresponds to sdc21x0__msg__Encoders
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Encoders {
    /// Time since last encoder update.
    pub time_delta: f32,

    /// Encoder counts (absolute or relative)
    pub left_wheel: i32,

    /// Encoder counts (absolute or relative)
    pub right_wheel: i32,

}



impl Default for Encoders {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sdc21x0__msg__Encoders__init(&mut msg as *mut _) {
        panic!("Call to sdc21x0__msg__Encoders__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Encoders {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__msg__Encoders__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__msg__Encoders__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__msg__Encoders__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Encoders {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Encoders where Self: Sized {
  const TYPE_NAME: &'static str = "sdc21x0/msg/Encoders";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sdc21x0__msg__Encoders() }
  }
}


#[link(name = "sdc21x0__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sdc21x0__msg__MotorCurrents() -> *const std::ffi::c_void;
}

#[link(name = "sdc21x0__rosidl_generator_c")]
extern "C" {
    fn sdc21x0__msg__MotorCurrents__init(msg: *mut MotorCurrents) -> bool;
    fn sdc21x0__msg__MotorCurrents__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorCurrents>, size: usize) -> bool;
    fn sdc21x0__msg__MotorCurrents__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorCurrents>);
    fn sdc21x0__msg__MotorCurrents__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorCurrents>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorCurrents>) -> bool;
}

// Corresponds to sdc21x0__msg__MotorCurrents
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorCurrents {

    // This member is not documented.
    #[allow(missing_docs)]
    pub left_motor: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_motor: f32,

}



impl Default for MotorCurrents {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sdc21x0__msg__MotorCurrents__init(&mut msg as *mut _) {
        panic!("Call to sdc21x0__msg__MotorCurrents__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorCurrents {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__msg__MotorCurrents__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__msg__MotorCurrents__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__msg__MotorCurrents__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorCurrents {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorCurrents where Self: Sized {
  const TYPE_NAME: &'static str = "sdc21x0/msg/MotorCurrents";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sdc21x0__msg__MotorCurrents() }
  }
}


#[link(name = "sdc21x0__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sdc21x0__msg__StampedEncoders() -> *const std::ffi::c_void;
}

#[link(name = "sdc21x0__rosidl_generator_c")]
extern "C" {
    fn sdc21x0__msg__StampedEncoders__init(msg: *mut StampedEncoders) -> bool;
    fn sdc21x0__msg__StampedEncoders__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StampedEncoders>, size: usize) -> bool;
    fn sdc21x0__msg__StampedEncoders__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StampedEncoders>);
    fn sdc21x0__msg__StampedEncoders__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StampedEncoders>, out_seq: *mut rosidl_runtime_rs::Sequence<StampedEncoders>) -> bool;
}

// Corresponds to sdc21x0__msg__StampedEncoders
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StampedEncoders {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub encoders: super::super::msg::rmw::Encoders,

}



impl Default for StampedEncoders {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sdc21x0__msg__StampedEncoders__init(&mut msg as *mut _) {
        panic!("Call to sdc21x0__msg__StampedEncoders__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StampedEncoders {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__msg__StampedEncoders__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__msg__StampedEncoders__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__msg__StampedEncoders__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StampedEncoders {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StampedEncoders where Self: Sized {
  const TYPE_NAME: &'static str = "sdc21x0/msg/StampedEncoders";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sdc21x0__msg__StampedEncoders() }
  }
}


