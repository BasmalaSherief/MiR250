#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "sdc21x0__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sdc21x0__srv__Flags_Request() -> *const std::ffi::c_void;
}

#[link(name = "sdc21x0__rosidl_generator_c")]
extern "C" {
    fn sdc21x0__srv__Flags_Request__init(msg: *mut Flags_Request) -> bool;
    fn sdc21x0__srv__Flags_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Flags_Request>, size: usize) -> bool;
    fn sdc21x0__srv__Flags_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Flags_Request>);
    fn sdc21x0__srv__Flags_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Flags_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Flags_Request>) -> bool;
}

// Corresponds to sdc21x0__srv__Flags_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Flags_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub digital_port: i32,

}



impl Default for Flags_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sdc21x0__srv__Flags_Request__init(&mut msg as *mut _) {
        panic!("Call to sdc21x0__srv__Flags_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Flags_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__srv__Flags_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__srv__Flags_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__srv__Flags_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Flags_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Flags_Request where Self: Sized {
  const TYPE_NAME: &'static str = "sdc21x0/srv/Flags_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sdc21x0__srv__Flags_Request() }
  }
}


#[link(name = "sdc21x0__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sdc21x0__srv__Flags_Response() -> *const std::ffi::c_void;
}

#[link(name = "sdc21x0__rosidl_generator_c")]
extern "C" {
    fn sdc21x0__srv__Flags_Response__init(msg: *mut Flags_Response) -> bool;
    fn sdc21x0__srv__Flags_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Flags_Response>, size: usize) -> bool;
    fn sdc21x0__srv__Flags_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Flags_Response>);
    fn sdc21x0__srv__Flags_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Flags_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Flags_Response>) -> bool;
}

// Corresponds to sdc21x0__srv__Flags_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Flags_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: bool,

}



impl Default for Flags_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sdc21x0__srv__Flags_Response__init(&mut msg as *mut _) {
        panic!("Call to sdc21x0__srv__Flags_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Flags_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__srv__Flags_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__srv__Flags_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sdc21x0__srv__Flags_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Flags_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Flags_Response where Self: Sized {
  const TYPE_NAME: &'static str = "sdc21x0/srv/Flags_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sdc21x0__srv__Flags_Response() }
  }
}






#[link(name = "sdc21x0__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__sdc21x0__srv__Flags() -> *const std::ffi::c_void;
}

// Corresponds to sdc21x0__srv__Flags
#[allow(missing_docs, non_camel_case_types)]
pub struct Flags;

impl rosidl_runtime_rs::Service for Flags {
    type Request = Flags_Request;
    type Response = Flags_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__sdc21x0__srv__Flags() }
    }
}


