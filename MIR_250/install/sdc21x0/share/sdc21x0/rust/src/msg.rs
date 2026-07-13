#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to sdc21x0__msg__Encoders

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Encoders::default())
  }
}

impl rosidl_runtime_rs::Message for Encoders {
  type RmwMsg = super::msg::rmw::Encoders;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time_delta: msg.time_delta,
        left_wheel: msg.left_wheel,
        right_wheel: msg.right_wheel,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      time_delta: msg.time_delta,
      left_wheel: msg.left_wheel,
      right_wheel: msg.right_wheel,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      time_delta: msg.time_delta,
      left_wheel: msg.left_wheel,
      right_wheel: msg.right_wheel,
    }
  }
}


// Corresponds to sdc21x0__msg__MotorCurrents

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorCurrents::default())
  }
}

impl rosidl_runtime_rs::Message for MotorCurrents {
  type RmwMsg = super::msg::rmw::MotorCurrents;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_motor: msg.left_motor,
        right_motor: msg.right_motor,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      left_motor: msg.left_motor,
      right_motor: msg.right_motor,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_motor: msg.left_motor,
      right_motor: msg.right_motor,
    }
  }
}


// Corresponds to sdc21x0__msg__StampedEncoders

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StampedEncoders {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub encoders: super::msg::Encoders,

}



impl Default for StampedEncoders {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::StampedEncoders::default())
  }
}

impl rosidl_runtime_rs::Message for StampedEncoders {
  type RmwMsg = super::msg::rmw::StampedEncoders;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        encoders: super::msg::Encoders::into_rmw_message(std::borrow::Cow::Owned(msg.encoders)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        encoders: super::msg::Encoders::into_rmw_message(std::borrow::Cow::Borrowed(&msg.encoders)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      encoders: super::msg::Encoders::from_rmw_message(msg.encoders),
    }
  }
}


