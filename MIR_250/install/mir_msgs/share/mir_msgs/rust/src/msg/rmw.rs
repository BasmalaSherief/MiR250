#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__BatteryCurrents() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__BatteryCurrents__init(msg: *mut BatteryCurrents) -> bool;
    fn mir_msgs__msg__BatteryCurrents__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BatteryCurrents>, size: usize) -> bool;
    fn mir_msgs__msg__BatteryCurrents__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BatteryCurrents>);
    fn mir_msgs__msg__BatteryCurrents__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BatteryCurrents>, out_seq: *mut rosidl_runtime_rs::Sequence<BatteryCurrents>) -> bool;
}

// Corresponds to mir_msgs__msg__BatteryCurrents
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BatteryCurrents {

    // This member is not documented.
    #[allow(missing_docs)]
    pub battery1_current: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery2_current: f64,

}



impl Default for BatteryCurrents {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__BatteryCurrents__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__BatteryCurrents__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BatteryCurrents {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__BatteryCurrents__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__BatteryCurrents__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__BatteryCurrents__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BatteryCurrents {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BatteryCurrents where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/BatteryCurrents";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__BatteryCurrents() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__BMSData() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__BMSData__init(msg: *mut BMSData) -> bool;
    fn mir_msgs__msg__BMSData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BMSData>, size: usize) -> bool;
    fn mir_msgs__msg__BMSData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BMSData>);
    fn mir_msgs__msg__BMSData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BMSData>, out_seq: *mut rosidl_runtime_rs::Sequence<BMSData>) -> bool;
}

// Corresponds to mir_msgs__msg__BMSData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BMSData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pack_voltage: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub charge_current: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub discharge_current: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_of_charge: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_time_to_full_charge: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_capacity: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_of_health: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_flags: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: i32,

    /// In Mk2 robots and above the BMS provides data for 8 battery cells. 2Gen robots have BMS for 13 battery cells
    pub cell_voltage: rosidl_runtime_rs::Sequence<u32>,

    /// Exteded diagnosticts for BMZ battery
    /// Flag for enabling extended diagnosticts
    pub bmz_flag: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub full_voltage: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub full_capacity: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature2: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature3: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cycle_count: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dsg_overcurrent_counter: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub chg_overcurrent_counter: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hw_major: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hw_minor: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fw_major: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fw_minor: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fw_patch: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rec_fw_major: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rec_fw_minor: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bl_major: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bl_minor: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_enabled: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_current_limitation: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_switch_off_warn1: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_switch_off_warn2: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_fully_discharged: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_nearly_discharged: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_chargefet_on: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_dischargefet_on: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_discharging: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_fully_charged: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_charging: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_temp_charging_err: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_cell_over_voltage: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_cell_under_voltage: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_charge_over_current: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_shortcircuit: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_discharge_over_current: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_temp_discharging_err: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_charger_detected: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_battery_msg_time: f64,

}

impl BMSData {
    /// bit 0
    pub const DISCHARGING: i32 = 1;

    /// bit 1
    pub const CHARGING: i32 = 2;

    /// bit 2 Over voltage
    pub const OV: i32 = 4;

    /// bit 3 Under voltage
    pub const UV: i32 = 8;

    /// bit 4 Charge over current
    pub const COC: i32 = 16;

    /// bit 5 Discharge over current
    pub const DOC: i32 = 32;

    /// bit 6 Discharge over temperature
    pub const DOT: i32 = 64;

    /// bit 7 Discharge under temperature
    pub const DUT: i32 = 128;

    /// bit 9
    pub const SC: i32 = 512;

    /// bit 10 Charge over temperature
    pub const COT: i32 = 1024;

    /// bit 11 Charge under temperature
    pub const CUT: i32 = 2048;

    /// to get Battery_Firmware_Status  do the following:
    pub const FW_STATUS_MSK: i32 = 2031616;

    /// batt_fw_stat=(status_flags & FW_STATUS_MSK)>>FW_STATUS_SHIFT
    pub const FW_STATUS_SHIFT: i32 = 16;

    /// Battery firmware update finished OK.
    pub const FW_UPD_OK: i32 = 0;

    /// Battery firmware update running.
    pub const FW_UPD_RUNNING: i32 = 1;

    /// Battery firmware update failed in Bootloader (Robot must not drive)
    pub const FW_UPD_FAILED_BOOT: i32 = 2;

    /// Battery firmware update failed updating the application (Robot can drive with old FW)
    pub const FW_UPD_FAILED_APP: i32 = 3;

    /// Battery firmware update failed uploading parameters (Robot can drive with old fw and parameters.)
    pub const FW_UPD_FAILED_PARAM: i32 = 4;

    /// Battery firmware update skipped battery too low (Robot can drive with old parameters.)
    pub const FW_STATUS_LOW_BATT: i32 = 5;

    /// Battery firmware file corrupted (Robot can drive with old parameters.)
    pub const FW_STATUS_FILE_CORRUPTED: i32 = 6;

    /// Battery firmware file corrupted (Robot can drive with old parameters.)
    pub const FW_STATUS_CURRENT_TO_HIGH: i32 = 7;

    /// Battery firmware update skipped no CAN communication (Robot can drive with old fw and parameters.)
    pub const FW_STATUS_NO_CAN: i32 = 8;

    /// Battery firmware update is enforced and the battery will be shut off by the new firmware
    pub const FW_BATTERY_IMBALANCE_HIGH: i32 = 9;

}


impl Default for BMSData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__BMSData__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__BMSData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BMSData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__BMSData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__BMSData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__BMSData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BMSData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BMSData where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/BMSData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__BMSData() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__BrakeState() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__BrakeState__init(msg: *mut BrakeState) -> bool;
    fn mir_msgs__msg__BrakeState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BrakeState>, size: usize) -> bool;
    fn mir_msgs__msg__BrakeState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BrakeState>);
    fn mir_msgs__msg__BrakeState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BrakeState>, out_seq: *mut rosidl_runtime_rs::Sequence<BrakeState>) -> bool;
}

// Corresponds to mir_msgs__msg__BrakeState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BrakeState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state_string: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub braked: bool,

}



impl Default for BrakeState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__BrakeState__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__BrakeState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BrakeState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__BrakeState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__BrakeState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__BrakeState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BrakeState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BrakeState where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/BrakeState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__BrakeState() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__ChargingState() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__ChargingState__init(msg: *mut ChargingState) -> bool;
    fn mir_msgs__msg__ChargingState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChargingState>, size: usize) -> bool;
    fn mir_msgs__msg__ChargingState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChargingState>);
    fn mir_msgs__msg__ChargingState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChargingState>, out_seq: *mut rosidl_runtime_rs::Sequence<ChargingState>) -> bool;
}

// Corresponds to mir_msgs__msg__ChargingState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargingState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub charging_relay: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub charging_current: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub charging_current_raw: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_time_current: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub charging_voltage: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub charging_voltage_raw: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_voltage_low: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_time_voltage: f64,

}



impl Default for ChargingState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__ChargingState__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__ChargingState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChargingState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ChargingState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ChargingState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ChargingState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChargingState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChargingState where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/ChargingState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__ChargingState() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Device() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__Device__init(msg: *mut Device) -> bool;
    fn mir_msgs__msg__Device__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Device>, size: usize) -> bool;
    fn mir_msgs__msg__Device__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Device>);
    fn mir_msgs__msg__Device__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Device>, out_seq: *mut rosidl_runtime_rs::Sequence<Device>) -> bool;
}

// Corresponds to mir_msgs__msg__Device
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Device {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub serial: rosidl_runtime_rs::String,

}



impl Default for Device {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__Device__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__Device__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Device {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Device__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Device__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Device__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Device {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Device where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/Device";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Device() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Devices() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__Devices__init(msg: *mut Devices) -> bool;
    fn mir_msgs__msg__Devices__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Devices>, size: usize) -> bool;
    fn mir_msgs__msg__Devices__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Devices>);
    fn mir_msgs__msg__Devices__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Devices>, out_seq: *mut rosidl_runtime_rs::Sequence<Devices>) -> bool;
}

// Corresponds to mir_msgs__msg__Devices
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Devices {

    // This member is not documented.
    #[allow(missing_docs)]
    pub devices: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Device>,

}



impl Default for Devices {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__Devices__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__Devices__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Devices {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Devices__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Devices__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Devices__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Devices {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Devices where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/Devices";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Devices() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Encoders() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__Encoders__init(msg: *mut Encoders) -> bool;
    fn mir_msgs__msg__Encoders__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Encoders>, size: usize) -> bool;
    fn mir_msgs__msg__Encoders__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Encoders>);
    fn mir_msgs__msg__Encoders__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Encoders>, out_seq: *mut rosidl_runtime_rs::Sequence<Encoders>) -> bool;
}

// Corresponds to mir_msgs__msg__Encoders
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
      if !mir_msgs__msg__Encoders__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__Encoders__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Encoders {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Encoders__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Encoders__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Encoders__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Encoders {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Encoders where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/Encoders";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Encoders() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Error() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__Error__init(msg: *mut Error) -> bool;
    fn mir_msgs__msg__Error__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Error>, size: usize) -> bool;
    fn mir_msgs__msg__Error__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Error>);
    fn mir_msgs__msg__Error__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Error>, out_seq: *mut rosidl_runtime_rs::Sequence<Error>) -> bool;
}

// Corresponds to mir_msgs__msg__Error
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Definition of offsets indicating what type an error is

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Error {
    /// Timestamp for when the error occurred
    pub timestamp: builtin_interfaces::msg::rmw::Time,

    /// Error code
    pub code: i32,

    /// Error description
    pub description: rosidl_runtime_rs::String,

    /// Module in which the error occurred
    pub module: rosidl_runtime_rs::String,

}

impl Error {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HARDWARE_ERROR: i32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CPU_LOAD_ERROR: i32 = 100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MEMORY_ERROR: i32 = 200;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ETHERNET_ERROR: i32 = 300;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HDD_ERROR: i32 = 400;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BATTERY_ERROR: i32 = 500;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const IMU_ERROR: i32 = 600;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTOR_ERROR: i32 = 700;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LASER_ERROR: i32 = 800;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_ERROR: i32 = 900;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SAFETY_SYSTEM_ERROR: i32 = 1000;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWERBOARD_ERROR: i32 = 2000;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWERSUPPLY_ERROR: i32 = 2100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANBUS_ERROR: i32 = 2200;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HOOK_ERROR: i32 = 5000;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HOOK_CAMERA_ERROR: i32 = 5100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HOOK_ACTUATOR_ERROR: i32 = 5200;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HOOK_BRAKE_ERROR: i32 = 5300;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HOOK_ENCODER_ERROR: i32 = 5400;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MISSING_ERROR: i32 = 9000;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SOFTWARE_ERROR: i32 = 10000;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MISSION_ERROR: i32 = 10100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LOCALIZATION_ERROR: i32 = 10200;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAPPING_ERROR: i32 = 10300;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ODOM_FUSION_ERROR: i32 = 10400;

}


impl Default for Error {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__Error__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__Error__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Error {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Error__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Error__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Error__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Error {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Error where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/Error";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Error() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Event() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__Event__init(msg: *mut Event) -> bool;
    fn mir_msgs__msg__Event__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Event>, size: usize) -> bool;
    fn mir_msgs__msg__Event__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Event>);
    fn mir_msgs__msg__Event__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Event>, out_seq: *mut rosidl_runtime_rs::Sequence<Event>) -> bool;
}

// Corresponds to mir_msgs__msg__Event
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Event {
    /// The area event type
    pub event_type: u32,

    /// The area unique identifier
    pub area_guid: rosidl_runtime_rs::String,

    /// The name of the area
    pub area_name: rosidl_runtime_rs::String,

    /// An array of corner points that define the edges of the area
    pub polygon: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,

}

impl Event {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EV_SPEED: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EV_BLINK: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EV_SOUND: u32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EV_DOOR: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EV_AMCLOFF: u32 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EV_FWDDIST: u32 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EV_IO: u32 = 7;

    /// Fleet
    pub const EV_FLEETLCK: u32 = 8;

    /// Fleet
    pub const EV_EMERGENCY: u32 = 9;

}


impl Default for Event {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__Event__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__Event__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Event {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Event__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Event__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Event__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Event {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Event where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/Event";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Event() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Events() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__Events__init(msg: *mut Events) -> bool;
    fn mir_msgs__msg__Events__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Events>, size: usize) -> bool;
    fn mir_msgs__msg__Events__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Events>);
    fn mir_msgs__msg__Events__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Events>, out_seq: *mut rosidl_runtime_rs::Sequence<Events>) -> bool;
}

// Corresponds to mir_msgs__msg__Events
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Events {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub events: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Event>,

}



impl Default for Events {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__Events__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__Events__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Events {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Events__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Events__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Events__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Events {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Events where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/Events";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Events() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__ExternalRobot() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__ExternalRobot__init(msg: *mut ExternalRobot) -> bool;
    fn mir_msgs__msg__ExternalRobot__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExternalRobot>, size: usize) -> bool;
    fn mir_msgs__msg__ExternalRobot__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExternalRobot>);
    fn mir_msgs__msg__ExternalRobot__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExternalRobot>, out_seq: *mut rosidl_runtime_rs::Sequence<ExternalRobot>) -> bool;
}

// Corresponds to mir_msgs__msg__ExternalRobot
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExternalRobot {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_length: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_width: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub footprint: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub priority: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub extrapolated_pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub twist: geometry_msgs::msg::rmw::Twist,

}

impl ExternalRobot {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MIR100: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MIR500: u32 = 3;

}


impl Default for ExternalRobot {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__ExternalRobot__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__ExternalRobot__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExternalRobot {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ExternalRobot__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ExternalRobot__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ExternalRobot__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExternalRobot {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExternalRobot where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/ExternalRobot";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__ExternalRobot() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__ExternalRobots() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__ExternalRobots__init(msg: *mut ExternalRobots) -> bool;
    fn mir_msgs__msg__ExternalRobots__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExternalRobots>, size: usize) -> bool;
    fn mir_msgs__msg__ExternalRobots__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExternalRobots>);
    fn mir_msgs__msg__ExternalRobots__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExternalRobots>, out_seq: *mut rosidl_runtime_rs::Sequence<ExternalRobots>) -> bool;
}

// Corresponds to mir_msgs__msg__ExternalRobots
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExternalRobots {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robots: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ExternalRobot>,

}



impl Default for ExternalRobots {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__ExternalRobots__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__ExternalRobots__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExternalRobots {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ExternalRobots__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ExternalRobots__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ExternalRobots__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExternalRobots {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExternalRobots where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/ExternalRobots";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__ExternalRobots() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Gpio() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__Gpio__init(msg: *mut Gpio) -> bool;
    fn mir_msgs__msg__Gpio__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Gpio>, size: usize) -> bool;
    fn mir_msgs__msg__Gpio__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Gpio>);
    fn mir_msgs__msg__Gpio__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Gpio>, out_seq: *mut rosidl_runtime_rs::Sequence<Gpio>) -> bool;
}

// Corresponds to mir_msgs__msg__Gpio
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Gpio {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ioport: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dat: u8,

}

impl Gpio {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWERBOARD_GPIO: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWERBOARD_RESET_SWITCH_LED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PENDANT_INPUT: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AUTO_MODE_SWITCH: u8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MANUAL_MODE_SWITCH: u8 = 11;

}


impl Default for Gpio {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__Gpio__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__Gpio__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Gpio {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Gpio__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Gpio__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Gpio__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Gpio {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Gpio where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/Gpio";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Gpio() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__GripperState() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__GripperState__init(msg: *mut GripperState) -> bool;
    fn mir_msgs__msg__GripperState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperState>, size: usize) -> bool;
    fn mir_msgs__msg__GripperState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperState>);
    fn mir_msgs__msg__GripperState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperState>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperState>) -> bool;
}

// Corresponds to mir_msgs__msg__GripperState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state_string: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub closed: bool,

}



impl Default for GripperState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__GripperState__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__GripperState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__GripperState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__GripperState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__GripperState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperState where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/GripperState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__GripperState() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__HeightState() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__HeightState__init(msg: *mut HeightState) -> bool;
    fn mir_msgs__msg__HeightState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HeightState>, size: usize) -> bool;
    fn mir_msgs__msg__HeightState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HeightState>);
    fn mir_msgs__msg__HeightState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HeightState>, out_seq: *mut rosidl_runtime_rs::Sequence<HeightState>) -> bool;
}

// Corresponds to mir_msgs__msg__HeightState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HeightState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state_string: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub height: f64,

}



impl Default for HeightState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__HeightState__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__HeightState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HeightState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__HeightState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__HeightState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__HeightState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HeightState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HeightState where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/HeightState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__HeightState() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__HookExtendedStatus() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__HookExtendedStatus__init(msg: *mut HookExtendedStatus) -> bool;
    fn mir_msgs__msg__HookExtendedStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HookExtendedStatus>, size: usize) -> bool;
    fn mir_msgs__msg__HookExtendedStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HookExtendedStatus>);
    fn mir_msgs__msg__HookExtendedStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HookExtendedStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<HookExtendedStatus>) -> bool;
}

// Corresponds to mir_msgs__msg__HookExtendedStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HookExtendedStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub available: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake: super::super::msg::rmw::BrakeState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gripper: super::super::msg::rmw::GripperState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub height: super::super::msg::rmw::HeightState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angle: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub qr_marker_name: rosidl_runtime_rs::String,

}



impl Default for HookExtendedStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__HookExtendedStatus__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__HookExtendedStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HookExtendedStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__HookExtendedStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__HookExtendedStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__HookExtendedStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HookExtendedStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HookExtendedStatus where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/HookExtendedStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__HookExtendedStatus() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__HookStatus() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__HookStatus__init(msg: *mut HookStatus) -> bool;
    fn mir_msgs__msg__HookStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HookStatus>, size: usize) -> bool;
    fn mir_msgs__msg__HookStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HookStatus>);
    fn mir_msgs__msg__HookStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HookStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<HookStatus>) -> bool;
}

// Corresponds to mir_msgs__msg__HookStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HookStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub available: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub length: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub height: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angle: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub braked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trolley_attached: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trolley: super::super::msg::rmw::Trolley,

}



impl Default for HookStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__HookStatus__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__HookStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HookStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__HookStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__HookStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__HookStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HookStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HookStatus where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/HookStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__HookStatus() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__IOs() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__IOs__init(msg: *mut IOs) -> bool;
    fn mir_msgs__msg__IOs__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IOs>, size: usize) -> bool;
    fn mir_msgs__msg__IOs__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IOs>);
    fn mir_msgs__msg__IOs__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IOs>, out_seq: *mut rosidl_runtime_rs::Sequence<IOs>) -> bool;
}

// Corresponds to mir_msgs__msg__IOs
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IOs {

    // This member is not documented.
    #[allow(missing_docs)]
    pub module_guid: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub connected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_inputs: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub input_state: rosidl_runtime_rs::Sequence<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_outputs: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub output_state: rosidl_runtime_rs::Sequence<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error: rosidl_runtime_rs::String,

}

impl IOs {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STARTED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR: u8 = 3;

}


impl Default for IOs {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__IOs__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__IOs__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IOs {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__IOs__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__IOs__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__IOs__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IOs {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IOs where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/IOs";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__IOs() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__JoystickVel() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__JoystickVel__init(msg: *mut JoystickVel) -> bool;
    fn mir_msgs__msg__JoystickVel__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JoystickVel>, size: usize) -> bool;
    fn mir_msgs__msg__JoystickVel__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JoystickVel>);
    fn mir_msgs__msg__JoystickVel__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JoystickVel>, out_seq: *mut rosidl_runtime_rs::Sequence<JoystickVel>) -> bool;
}

// Corresponds to mir_msgs__msg__JoystickVel
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JoystickVel {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joystick_token: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_command: geometry_msgs::msg::rmw::Twist,

}



impl Default for JoystickVel {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__JoystickVel__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__JoystickVel__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JoystickVel {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__JoystickVel__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__JoystickVel__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__JoystickVel__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JoystickVel {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JoystickVel where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/JoystickVel";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__JoystickVel() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__LocalMapStat() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__LocalMapStat__init(msg: *mut LocalMapStat) -> bool;
    fn mir_msgs__msg__LocalMapStat__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LocalMapStat>, size: usize) -> bool;
    fn mir_msgs__msg__LocalMapStat__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LocalMapStat>);
    fn mir_msgs__msg__LocalMapStat__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LocalMapStat>, out_seq: *mut rosidl_runtime_rs::Sequence<LocalMapStat>) -> bool;
}

// Corresponds to mir_msgs__msg__LocalMapStat
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LocalMapStat {

    // This member is not documented.
    #[allow(missing_docs)]
    pub idx: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: i32,

}



impl Default for LocalMapStat {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__LocalMapStat__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__LocalMapStat__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LocalMapStat {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__LocalMapStat__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__LocalMapStat__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__LocalMapStat__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LocalMapStat {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LocalMapStat where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/LocalMapStat";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__LocalMapStat() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__MirExtra() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__MirExtra__init(msg: *mut MirExtra) -> bool;
    fn mir_msgs__msg__MirExtra__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MirExtra>, size: usize) -> bool;
    fn mir_msgs__msg__MirExtra__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MirExtra>);
    fn mir_msgs__msg__MirExtra__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MirExtra>, out_seq: *mut rosidl_runtime_rs::Sequence<MirExtra>) -> bool;
}

// Corresponds to mir_msgs__msg__MirExtra
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// MirExtra - to publish data on a topic

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirExtra {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Time since last encoder update.
    pub time_delta: f32,

    /// rmp speed from right encoder
    pub r_rpm: f32,

    /// rmp speed from left encoder
    pub l_rpm: f32,

    /// calc velocity
    pub vel: f32,

    /// calculated angle speed
    pub ang: f32,

}



impl Default for MirExtra {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__MirExtra__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__MirExtra__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MirExtra {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__MirExtra__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__MirExtra__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__MirExtra__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MirExtra {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MirExtra where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/MirExtra";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__MirExtra() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__MissionCtrlCommand() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__MissionCtrlCommand__init(msg: *mut MissionCtrlCommand) -> bool;
    fn mir_msgs__msg__MissionCtrlCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MissionCtrlCommand>, size: usize) -> bool;
    fn mir_msgs__msg__MissionCtrlCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MissionCtrlCommand>);
    fn mir_msgs__msg__MissionCtrlCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MissionCtrlCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<MissionCtrlCommand>) -> bool;
}

// Corresponds to mir_msgs__msg__MissionCtrlCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionCtrlCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub description: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cmd: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: i32,

}

impl MissionCtrlCommand {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_GET_STATUS: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_WAIT_POS_LOCK: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_WAIT_AREA_LOCK: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_CONTINUE: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_LOAD_MISSION: u8 = 4;

}


impl Default for MissionCtrlCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__MissionCtrlCommand__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__MissionCtrlCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MissionCtrlCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__MissionCtrlCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__MissionCtrlCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__MissionCtrlCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MissionCtrlCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MissionCtrlCommand where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/MissionCtrlCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__MissionCtrlCommand() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__MissionCtrlState() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__MissionCtrlState__init(msg: *mut MissionCtrlState) -> bool;
    fn mir_msgs__msg__MissionCtrlState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MissionCtrlState>, size: usize) -> bool;
    fn mir_msgs__msg__MissionCtrlState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MissionCtrlState>);
    fn mir_msgs__msg__MissionCtrlState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MissionCtrlState>, out_seq: *mut rosidl_runtime_rs::Sequence<MissionCtrlState>) -> bool;
}

// Corresponds to mir_msgs__msg__MissionCtrlState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionCtrlState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos_id: i32,

}

impl MissionCtrlState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_IDLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_WAIT_POS_LOCK: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_WAIT_AREA_LOCK: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_WAIT_MAP_TRANSITION: u8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_WAIT_LIFT_START_FLOOR: u8 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_WAIT_LIFT_END_FLOOR: u8 = 12;

}


impl Default for MissionCtrlState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__MissionCtrlState__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__MissionCtrlState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MissionCtrlState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__MissionCtrlState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__MissionCtrlState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__MissionCtrlState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MissionCtrlState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MissionCtrlState where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/MissionCtrlState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__MissionCtrlState() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__PalletLifterStatus() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__PalletLifterStatus__init(msg: *mut PalletLifterStatus) -> bool;
    fn mir_msgs__msg__PalletLifterStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PalletLifterStatus>, size: usize) -> bool;
    fn mir_msgs__msg__PalletLifterStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PalletLifterStatus>);
    fn mir_msgs__msg__PalletLifterStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PalletLifterStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<PalletLifterStatus>) -> bool;
}

// Corresponds to mir_msgs__msg__PalletLifterStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PalletLifterStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,

}

impl PalletLifterStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PALLET_LIFT_STATE_DISABLED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PALLET_LIFT_STATE_MOVING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PALLET_LIFT_STATE_DOWN: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PALLET_LIFT_STATE_UP: u8 = 3;

}


impl Default for PalletLifterStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__PalletLifterStatus__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__PalletLifterStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PalletLifterStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__PalletLifterStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__PalletLifterStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__PalletLifterStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PalletLifterStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PalletLifterStatus where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/PalletLifterStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__PalletLifterStatus() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Path() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__Path__init(msg: *mut Path) -> bool;
    fn mir_msgs__msg__Path__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Path>, size: usize) -> bool;
    fn mir_msgs__msg__Path__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Path>);
    fn mir_msgs__msg__Path__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Path>, out_seq: *mut rosidl_runtime_rs::Sequence<Path>) -> bool;
}

// Corresponds to mir_msgs__msg__Path
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Path {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub poses: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Pose2D>,

}



impl Default for Path {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__Path__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__Path__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Path {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Path__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Path__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Path__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Path {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Path where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/Path";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Path() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Pendant() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__Pendant__init(msg: *mut Pendant) -> bool;
    fn mir_msgs__msg__Pendant__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Pendant>, size: usize) -> bool;
    fn mir_msgs__msg__Pendant__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Pendant>);
    fn mir_msgs__msg__Pendant__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Pendant>, out_seq: *mut rosidl_runtime_rs::Sequence<Pendant>) -> bool;
}

// Corresponds to mir_msgs__msg__Pendant
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pendant {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gpio_bits: u8,

}



impl Default for Pendant {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__Pendant__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__Pendant__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Pendant {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Pendant__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Pendant__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Pendant__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Pendant {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Pendant where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/Pendant";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Pendant() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__PlanSegment() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__PlanSegment__init(msg: *mut PlanSegment) -> bool;
    fn mir_msgs__msg__PlanSegment__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlanSegment>, size: usize) -> bool;
    fn mir_msgs__msg__PlanSegment__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlanSegment>);
    fn mir_msgs__msg__PlanSegment__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlanSegment>, out_seq: *mut rosidl_runtime_rs::Sequence<PlanSegment>) -> bool;
}

// Corresponds to mir_msgs__msg__PlanSegment
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlanSegment {

    // This member is not documented.
    #[allow(missing_docs)]
    pub forward_motion: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_idx: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub length: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_length: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::PoseStamped>,

}



impl Default for PlanSegment {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__PlanSegment__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__PlanSegment__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlanSegment {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__PlanSegment__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__PlanSegment__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__PlanSegment__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlanSegment {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlanSegment where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/PlanSegment";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__PlanSegment() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__PlanSegments() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__PlanSegments__init(msg: *mut PlanSegments) -> bool;
    fn mir_msgs__msg__PlanSegments__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlanSegments>, size: usize) -> bool;
    fn mir_msgs__msg__PlanSegments__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlanSegments>);
    fn mir_msgs__msg__PlanSegments__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlanSegments>, out_seq: *mut rosidl_runtime_rs::Sequence<PlanSegments>) -> bool;
}

// Corresponds to mir_msgs__msg__PlanSegments
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlanSegments {

    // This member is not documented.
    #[allow(missing_docs)]
    pub p_segments: rosidl_runtime_rs::Sequence<super::super::msg::rmw::PlanSegment>,

}



impl Default for PlanSegments {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__PlanSegments__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__PlanSegments__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlanSegments {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__PlanSegments__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__PlanSegments__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__PlanSegments__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlanSegments {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlanSegments where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/PlanSegments";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__PlanSegments() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Pose2D() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__Pose2D__init(msg: *mut Pose2D) -> bool;
    fn mir_msgs__msg__Pose2D__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Pose2D>, size: usize) -> bool;
    fn mir_msgs__msg__Pose2D__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Pose2D>);
    fn mir_msgs__msg__Pose2D__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Pose2D>, out_seq: *mut rosidl_runtime_rs::Sequence<Pose2D>) -> bool;
}

// Corresponds to mir_msgs__msg__Pose2D
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pose2D {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation: f32,

}



impl Default for Pose2D {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__Pose2D__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__Pose2D__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Pose2D {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Pose2D__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Pose2D__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Pose2D__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Pose2D {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Pose2D where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/Pose2D";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Pose2D() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__PowerBoardMotorStatus() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__PowerBoardMotorStatus__init(msg: *mut PowerBoardMotorStatus) -> bool;
    fn mir_msgs__msg__PowerBoardMotorStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PowerBoardMotorStatus>, size: usize) -> bool;
    fn mir_msgs__msg__PowerBoardMotorStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PowerBoardMotorStatus>);
    fn mir_msgs__msg__PowerBoardMotorStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PowerBoardMotorStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<PowerBoardMotorStatus>) -> bool;
}

// Corresponds to mir_msgs__msg__PowerBoardMotorStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerBoardMotorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub left_motor_ctrl_word: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_motor_speed: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_motor_encoder: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_motor_status: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_motor_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_motor_error_hist1: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_motor_error_hist2: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_motor_current: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_motor_i2t_motor: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_motor_i2t_controller: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_motor_temperature: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_motor_ctrl_word: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_motor_speed: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_motor_encoder: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_motor_status: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_motor_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_motor_error_hist1: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_motor_error_hist2: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_motor_current: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_motor_i2t_motor: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_motor_i2t_controller: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_motor_temperature: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_left_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_right_status: u8,

}



impl Default for PowerBoardMotorStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__PowerBoardMotorStatus__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__PowerBoardMotorStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PowerBoardMotorStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__PowerBoardMotorStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__PowerBoardMotorStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__PowerBoardMotorStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PowerBoardMotorStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PowerBoardMotorStatus where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/PowerBoardMotorStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__PowerBoardMotorStatus() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Proximity() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__Proximity__init(msg: *mut Proximity) -> bool;
    fn mir_msgs__msg__Proximity__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Proximity>, size: usize) -> bool;
    fn mir_msgs__msg__Proximity__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Proximity>);
    fn mir_msgs__msg__Proximity__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Proximity>, out_seq: *mut rosidl_runtime_rs::Sequence<Proximity>) -> bool;
}

// Corresponds to mir_msgs__msg__Proximity
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Proximity {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ranges: rosidl_runtime_rs::Sequence<u16>,

}



impl Default for Proximity {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__Proximity__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__Proximity__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Proximity {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Proximity__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Proximity__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Proximity__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Proximity {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Proximity where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/Proximity";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Proximity() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__ResourcesState() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__ResourcesState__init(msg: *mut ResourcesState) -> bool;
    fn mir_msgs__msg__ResourcesState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResourcesState>, size: usize) -> bool;
    fn mir_msgs__msg__ResourcesState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResourcesState>);
    fn mir_msgs__msg__ResourcesState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResourcesState>, out_seq: *mut rosidl_runtime_rs::Sequence<ResourcesState>) -> bool;
}

// Corresponds to mir_msgs__msg__ResourcesState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResourcesState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub resources: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ResourceState>,

}



impl Default for ResourcesState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__ResourcesState__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__ResourcesState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResourcesState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ResourcesState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ResourcesState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ResourcesState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResourcesState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResourcesState where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/ResourcesState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__ResourcesState() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__ResourceState() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__ResourceState__init(msg: *mut ResourceState) -> bool;
    fn mir_msgs__msg__ResourceState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResourceState>, size: usize) -> bool;
    fn mir_msgs__msg__ResourceState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResourceState>);
    fn mir_msgs__msg__ResourceState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResourceState>, out_seq: *mut rosidl_runtime_rs::Sequence<ResourceState>) -> bool;
}

// Corresponds to mir_msgs__msg__ResourceState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResourceState {
    /// A token that is true whenever the resource is busy.
    pub assigned: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// The resource type
    pub type_: u32,

    /// The index from the global path in which the robot gets into the position
    pub path_idx: u32,

    /// The distance from the robot to the resource
    pub distance: f32,

    /// The collision point with the resource
    pub collision_point: geometry_msgs::msg::rmw::Point,

    /// The queue for a resource. It's a list of robots ips.
    pub queue: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// The name of the resource
    pub name: rosidl_runtime_rs::String,

    /// The guid of the resource
    pub guid: rosidl_runtime_rs::String,

}

impl ResourceState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ROBOT_POSITION: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STAGING_POSITION: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CHARGING_STATION: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AREA: u32 = 3;

}


impl Default for ResourceState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__ResourceState__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__ResourceState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResourceState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ResourceState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ResourceState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__ResourceState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResourceState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResourceState where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/ResourceState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__ResourceState() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__RobotMode() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__RobotMode__init(msg: *mut RobotMode) -> bool;
    fn mir_msgs__msg__RobotMode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotMode>, size: usize) -> bool;
    fn mir_msgs__msg__RobotMode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotMode>);
    fn mir_msgs__msg__RobotMode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotMode>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotMode>) -> bool;
}

// Corresponds to mir_msgs__msg__RobotMode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The robot operates in different mode

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_mode_string: rosidl_runtime_rs::String,

}

impl RobotMode {
    /// start mode
    pub const ROBOT_MODE_NONE: u8 = 0;

    /// Mapping # in mapping a new map is made
    pub const ROBOT_MODE_MAPPING: u8 = 3;

    /// in mapping the recorded map is being finalised
    pub const ROBOT_MODE_MAPPING_FINALIZING: u8 = 4;

    /// Mission # primary mode when executing a mission (action list)
    pub const ROBOT_MODE_MISSION: u8 = 7;

    /// a transition mode - to say that a transition is in progress
    pub const ROBOT_MODE_CHANGING: u8 = 255;

}


impl Default for RobotMode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__RobotMode__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__RobotMode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotMode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__RobotMode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__RobotMode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__RobotMode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotMode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotMode where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/RobotMode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__RobotMode() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__RobotState() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__RobotState__init(msg: *mut RobotState) -> bool;
    fn mir_msgs__msg__RobotState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotState>, size: usize) -> bool;
    fn mir_msgs__msg__RobotState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotState>);
    fn mir_msgs__msg__RobotState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotState>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotState>) -> bool;
}

// Corresponds to mir_msgs__msg__RobotState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The robot has to be in a predefined state

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_state_string: rosidl_runtime_rs::String,

}

impl RobotState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ROBOT_STATE_NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ROBOT_STATE_STARTING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ROBOT_STATE_SHUTTINGDOWN: u8 = 2;

    /// ready to execute
    pub const ROBOT_STATE_READY: u8 = 3;

    /// pause from executing
    pub const ROBOT_STATE_PAUSE: u8 = 4;

    /// when running in mission/taxa/bus
    pub const ROBOT_STATE_EXECUTING: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ROBOT_STATE_ABORTED: u8 = 6;

    /// done executing
    pub const ROBOT_STATE_COMPLETED: u8 = 7;

    /// in the dock and charging the batteries
    pub const ROBOT_STATE_DOCKED: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ROBOT_STATE_DOCKING: u8 = 9;

    /// the robot has emg-stop activated
    pub const ROBOT_STATE_EMERGENCYSTOP: u8 = 10;

    /// a pause state, where the robot can move
    pub const ROBOT_STATE_MANUALCONTROL: u8 = 11;

    /// a general error state, requires a error handle
    pub const ROBOT_STATE_ERROR: u8 = 12;

}


impl Default for RobotState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__RobotState__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__RobotState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__RobotState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__RobotState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__RobotState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotState where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/RobotState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__RobotState() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__RobotStatus() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__RobotStatus__init(msg: *mut RobotStatus) -> bool;
    fn mir_msgs__msg__RobotStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>, size: usize) -> bool;
    fn mir_msgs__msg__RobotStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>);
    fn mir_msgs__msg__RobotStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>) -> bool;
}

// Corresponds to mir_msgs__msg__RobotStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_percentage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_time_remaining: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_to_next_target: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub errors: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Error>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub footprint: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hook_status: super::super::msg::rmw::HookStatus,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unloaded_map_changes: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_queue_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_text: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_text: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub moved: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: super::super::msg::rmw::Pose2D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub session_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub software_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_text: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uptime: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: super::super::msg::rmw::Twist2D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub user_prompt: super::super::msg::rmw::UserPrompt,


    // This member is not documented.
    #[allow(missing_docs)]
    pub safety_system_muted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joystick_low_speed_mode_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joystick_web_session_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_key_state: rosidl_runtime_rs::String,

}



impl Default for RobotStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__RobotStatus__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__RobotStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__RobotStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__RobotStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__RobotStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotStatus where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/RobotStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__RobotStatus() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__SafetyStatus() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__SafetyStatus__init(msg: *mut SafetyStatus) -> bool;
    fn mir_msgs__msg__SafetyStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SafetyStatus>, size: usize) -> bool;
    fn mir_msgs__msg__SafetyStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SafetyStatus>);
    fn mir_msgs__msg__SafetyStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SafetyStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<SafetyStatus>) -> bool;
}

// Corresponds to mir_msgs__msg__SafetyStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafetyStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_connected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_firmware_ok: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub firmware_version: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub in_protective_stop: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub in_emergency_stop: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sto_feedback: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_restart_required: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_safety_muted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_lin_speed: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_rot_speed: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mute_mask: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub partial_mute_mask: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_limited_speed_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_lifter_down: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub in_sleep_mode: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub in_manual_mode: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_manual_mode_restart_required: bool,

}

impl SafetyStatus {
    /// Defines for filling out the mute_mask
    pub const MUTE_FRONT_RIGHT: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MUTE_FRONT_CENTER: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MUTE_FRONT_LEFT: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MUTE_LEFT_CENTER: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MUTE_REAR_LEFT: u8 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MUTE_REAR_CENTER: u8 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MUTE_REAR_RIGHT: u8 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MUTE_RIGHT_CENTER: u8 = 128;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MUTE_FRONT: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MUTE_LEFT: u8 = 28;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MUTE_REAR: u8 = 112;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MUTE_RIGHT: u8 = 193;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MUTE_SIDES: u8 = 221;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MUTE_ALL: u8 = 255;

}


impl Default for SafetyStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__SafetyStatus__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__SafetyStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SafetyStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__SafetyStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__SafetyStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__SafetyStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SafetyStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SafetyStatus where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/SafetyStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__SafetyStatus() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Serial() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__Serial__init(msg: *mut Serial) -> bool;
    fn mir_msgs__msg__Serial__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Serial>, size: usize) -> bool;
    fn mir_msgs__msg__Serial__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Serial>);
    fn mir_msgs__msg__Serial__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Serial>, out_seq: *mut rosidl_runtime_rs::Sequence<Serial>) -> bool;
}

// Corresponds to mir_msgs__msg__Serial
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Serial {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::String,

}



impl Default for Serial {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__Serial__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__Serial__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Serial {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Serial__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Serial__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Serial__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Serial {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Serial where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/Serial";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Serial() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__StampedEncoders() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__StampedEncoders__init(msg: *mut StampedEncoders) -> bool;
    fn mir_msgs__msg__StampedEncoders__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StampedEncoders>, size: usize) -> bool;
    fn mir_msgs__msg__StampedEncoders__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StampedEncoders>);
    fn mir_msgs__msg__StampedEncoders__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StampedEncoders>, out_seq: *mut rosidl_runtime_rs::Sequence<StampedEncoders>) -> bool;
}

// Corresponds to mir_msgs__msg__StampedEncoders
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
      if !mir_msgs__msg__StampedEncoders__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__StampedEncoders__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StampedEncoders {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__StampedEncoders__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__StampedEncoders__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__StampedEncoders__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StampedEncoders {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StampedEncoders where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/StampedEncoders";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__StampedEncoders() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Trolley() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__Trolley__init(msg: *mut Trolley) -> bool;
    fn mir_msgs__msg__Trolley__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Trolley>, size: usize) -> bool;
    fn mir_msgs__msg__Trolley__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Trolley>);
    fn mir_msgs__msg__Trolley__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Trolley>, out_seq: *mut rosidl_runtime_rs::Sequence<Trolley>) -> bool;
}

// Corresponds to mir_msgs__msg__Trolley
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Trolley {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub length: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub width: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub height: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub offset_locked_wheels: f32,

}



impl Default for Trolley {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__Trolley__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__Trolley__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Trolley {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Trolley__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Trolley__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Trolley__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Trolley {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Trolley where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/Trolley";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Trolley() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Twist2D() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__Twist2D__init(msg: *mut Twist2D) -> bool;
    fn mir_msgs__msg__Twist2D__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Twist2D>, size: usize) -> bool;
    fn mir_msgs__msg__Twist2D__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Twist2D>);
    fn mir_msgs__msg__Twist2D__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Twist2D>, out_seq: *mut rosidl_runtime_rs::Sequence<Twist2D>) -> bool;
}

// Corresponds to mir_msgs__msg__Twist2D
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Twist2D {

    // This member is not documented.
    #[allow(missing_docs)]
    pub linear: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular: f32,

}



impl Default for Twist2D {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__Twist2D__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__Twist2D__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Twist2D {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Twist2D__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Twist2D__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__Twist2D__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Twist2D {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Twist2D where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/Twist2D";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__Twist2D() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__UserPrompt() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__UserPrompt__init(msg: *mut UserPrompt) -> bool;
    fn mir_msgs__msg__UserPrompt__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UserPrompt>, size: usize) -> bool;
    fn mir_msgs__msg__UserPrompt__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UserPrompt>);
    fn mir_msgs__msg__UserPrompt__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UserPrompt>, out_seq: *mut rosidl_runtime_rs::Sequence<UserPrompt>) -> bool;
}

// Corresponds to mir_msgs__msg__UserPrompt
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UserPrompt {

    // This member is not documented.
    #[allow(missing_docs)]
    pub has_request: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub guid: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub user_group: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub question: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub options: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout: builtin_interfaces::msg::rmw::Duration,

}



impl Default for UserPrompt {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__UserPrompt__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__UserPrompt__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UserPrompt {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__UserPrompt__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__UserPrompt__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__UserPrompt__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UserPrompt {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UserPrompt where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/UserPrompt";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__UserPrompt() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__WebPath() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__WebPath__init(msg: *mut WebPath) -> bool;
    fn mir_msgs__msg__WebPath__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WebPath>, size: usize) -> bool;
    fn mir_msgs__msg__WebPath__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WebPath>);
    fn mir_msgs__msg__WebPath__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WebPath>, out_seq: *mut rosidl_runtime_rs::Sequence<WebPath>) -> bool;
}

// Corresponds to mir_msgs__msg__WebPath
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WebPath {

    // This member is not documented.
    #[allow(missing_docs)]
    pub seq: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for WebPath {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__WebPath__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__WebPath__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WebPath {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__WebPath__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__WebPath__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__WebPath__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WebPath {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WebPath where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/WebPath";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__WebPath() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__WorldMap() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__WorldMap__init(msg: *mut WorldMap) -> bool;
    fn mir_msgs__msg__WorldMap__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WorldMap>, size: usize) -> bool;
    fn mir_msgs__msg__WorldMap__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WorldMap>);
    fn mir_msgs__msg__WorldMap__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WorldMap>, out_seq: *mut rosidl_runtime_rs::Sequence<WorldMap>) -> bool;
}

// Corresponds to mir_msgs__msg__WorldMap
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WorldMap {

    // This member is not documented.
    #[allow(missing_docs)]
    pub positions: super::super::msg::rmw::ResourcesState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub areas: super::super::msg::rmw::ResourcesState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robots: super::super::msg::rmw::ExternalRobots,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_id: i32,

}



impl Default for WorldMap {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__WorldMap__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__WorldMap__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WorldMap {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__WorldMap__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__WorldMap__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__WorldMap__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WorldMap {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WorldMap where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/WorldMap";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__WorldMap() }
  }
}


#[link(name = "mir_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__WorldModel() -> *const std::ffi::c_void;
}

#[link(name = "mir_msgs__rosidl_generator_c")]
extern "C" {
    fn mir_msgs__msg__WorldModel__init(msg: *mut WorldModel) -> bool;
    fn mir_msgs__msg__WorldModel__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WorldModel>, size: usize) -> bool;
    fn mir_msgs__msg__WorldModel__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WorldModel>);
    fn mir_msgs__msg__WorldModel__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WorldModel>, out_seq: *mut rosidl_runtime_rs::Sequence<WorldModel>) -> bool;
}

// Corresponds to mir_msgs__msg__WorldModel
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WorldModel {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// world model for a particular map
    pub world_map: rosidl_runtime_rs::Sequence<super::super::msg::rmw::WorldMap>,

}



impl Default for WorldModel {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mir_msgs__msg__WorldModel__init(&mut msg as *mut _) {
        panic!("Call to mir_msgs__msg__WorldModel__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WorldModel {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__WorldModel__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__WorldModel__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mir_msgs__msg__WorldModel__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WorldModel {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WorldModel where Self: Sized {
  const TYPE_NAME: &'static str = "mir_msgs/msg/WorldModel";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mir_msgs__msg__WorldModel() }
  }
}


