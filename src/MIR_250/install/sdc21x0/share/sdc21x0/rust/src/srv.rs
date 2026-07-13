#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to sdc21x0__srv__Flags_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Flags_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub digital_port: i32,

}



impl Default for Flags_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Flags_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Flags_Request {
  type RmwMsg = super::srv::rmw::Flags_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        digital_port: msg.digital_port,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      digital_port: msg.digital_port,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      digital_port: msg.digital_port,
    }
  }
}


// Corresponds to sdc21x0__srv__Flags_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Flags_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: bool,

}



impl Default for Flags_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Flags_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Flags_Response {
  type RmwMsg = super::srv::rmw::Flags_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: msg.response,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      response: msg.response,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: msg.response,
    }
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


