#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to mir_msgs__msg__BatteryCurrents

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BatteryCurrents::default())
  }
}

impl rosidl_runtime_rs::Message for BatteryCurrents {
  type RmwMsg = super::msg::rmw::BatteryCurrents;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        battery1_current: msg.battery1_current,
        battery2_current: msg.battery2_current,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      battery1_current: msg.battery1_current,
      battery2_current: msg.battery2_current,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      battery1_current: msg.battery1_current,
      battery2_current: msg.battery2_current,
    }
  }
}


// Corresponds to mir_msgs__msg__BMSData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub cell_voltage: Vec<u32>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BMSData::default())
  }
}

impl rosidl_runtime_rs::Message for BMSData {
  type RmwMsg = super::msg::rmw::BMSData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pack_voltage: msg.pack_voltage,
        charge_current: msg.charge_current,
        discharge_current: msg.discharge_current,
        state_of_charge: msg.state_of_charge,
        remaining_time_to_full_charge: msg.remaining_time_to_full_charge,
        remaining_capacity: msg.remaining_capacity,
        state_of_health: msg.state_of_health,
        status_flags: msg.status_flags,
        temperature: msg.temperature,
        cell_voltage: msg.cell_voltage.into(),
        bmz_flag: msg.bmz_flag,
        full_voltage: msg.full_voltage,
        full_capacity: msg.full_capacity,
        temperature2: msg.temperature2,
        temperature3: msg.temperature3,
        cycle_count: msg.cycle_count,
        dsg_overcurrent_counter: msg.dsg_overcurrent_counter,
        chg_overcurrent_counter: msg.chg_overcurrent_counter,
        hw_major: msg.hw_major,
        hw_minor: msg.hw_minor,
        fw_major: msg.fw_major,
        fw_minor: msg.fw_minor,
        fw_patch: msg.fw_patch,
        rec_fw_major: msg.rec_fw_major,
        rec_fw_minor: msg.rec_fw_minor,
        bl_major: msg.bl_major,
        bl_minor: msg.bl_minor,
        status_enabled: msg.status_enabled,
        status_current_limitation: msg.status_current_limitation,
        status_switch_off_warn1: msg.status_switch_off_warn1,
        status_switch_off_warn2: msg.status_switch_off_warn2,
        status_fully_discharged: msg.status_fully_discharged,
        status_nearly_discharged: msg.status_nearly_discharged,
        status_chargefet_on: msg.status_chargefet_on,
        status_dischargefet_on: msg.status_dischargefet_on,
        status_discharging: msg.status_discharging,
        status_fully_charged: msg.status_fully_charged,
        status_charging: msg.status_charging,
        status_temp_charging_err: msg.status_temp_charging_err,
        status_cell_over_voltage: msg.status_cell_over_voltage,
        status_cell_under_voltage: msg.status_cell_under_voltage,
        status_charge_over_current: msg.status_charge_over_current,
        status_shortcircuit: msg.status_shortcircuit,
        status_discharge_over_current: msg.status_discharge_over_current,
        status_temp_discharging_err: msg.status_temp_discharging_err,
        status_charger_detected: msg.status_charger_detected,
        last_battery_msg_time: msg.last_battery_msg_time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      pack_voltage: msg.pack_voltage,
      charge_current: msg.charge_current,
      discharge_current: msg.discharge_current,
      state_of_charge: msg.state_of_charge,
      remaining_time_to_full_charge: msg.remaining_time_to_full_charge,
      remaining_capacity: msg.remaining_capacity,
      state_of_health: msg.state_of_health,
      status_flags: msg.status_flags,
      temperature: msg.temperature,
        cell_voltage: msg.cell_voltage.as_slice().into(),
      bmz_flag: msg.bmz_flag,
      full_voltage: msg.full_voltage,
      full_capacity: msg.full_capacity,
      temperature2: msg.temperature2,
      temperature3: msg.temperature3,
      cycle_count: msg.cycle_count,
      dsg_overcurrent_counter: msg.dsg_overcurrent_counter,
      chg_overcurrent_counter: msg.chg_overcurrent_counter,
      hw_major: msg.hw_major,
      hw_minor: msg.hw_minor,
      fw_major: msg.fw_major,
      fw_minor: msg.fw_minor,
      fw_patch: msg.fw_patch,
      rec_fw_major: msg.rec_fw_major,
      rec_fw_minor: msg.rec_fw_minor,
      bl_major: msg.bl_major,
      bl_minor: msg.bl_minor,
      status_enabled: msg.status_enabled,
      status_current_limitation: msg.status_current_limitation,
      status_switch_off_warn1: msg.status_switch_off_warn1,
      status_switch_off_warn2: msg.status_switch_off_warn2,
      status_fully_discharged: msg.status_fully_discharged,
      status_nearly_discharged: msg.status_nearly_discharged,
      status_chargefet_on: msg.status_chargefet_on,
      status_dischargefet_on: msg.status_dischargefet_on,
      status_discharging: msg.status_discharging,
      status_fully_charged: msg.status_fully_charged,
      status_charging: msg.status_charging,
      status_temp_charging_err: msg.status_temp_charging_err,
      status_cell_over_voltage: msg.status_cell_over_voltage,
      status_cell_under_voltage: msg.status_cell_under_voltage,
      status_charge_over_current: msg.status_charge_over_current,
      status_shortcircuit: msg.status_shortcircuit,
      status_discharge_over_current: msg.status_discharge_over_current,
      status_temp_discharging_err: msg.status_temp_discharging_err,
      status_charger_detected: msg.status_charger_detected,
      last_battery_msg_time: msg.last_battery_msg_time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pack_voltage: msg.pack_voltage,
      charge_current: msg.charge_current,
      discharge_current: msg.discharge_current,
      state_of_charge: msg.state_of_charge,
      remaining_time_to_full_charge: msg.remaining_time_to_full_charge,
      remaining_capacity: msg.remaining_capacity,
      state_of_health: msg.state_of_health,
      status_flags: msg.status_flags,
      temperature: msg.temperature,
      cell_voltage: msg.cell_voltage
          .into_iter()
          .collect(),
      bmz_flag: msg.bmz_flag,
      full_voltage: msg.full_voltage,
      full_capacity: msg.full_capacity,
      temperature2: msg.temperature2,
      temperature3: msg.temperature3,
      cycle_count: msg.cycle_count,
      dsg_overcurrent_counter: msg.dsg_overcurrent_counter,
      chg_overcurrent_counter: msg.chg_overcurrent_counter,
      hw_major: msg.hw_major,
      hw_minor: msg.hw_minor,
      fw_major: msg.fw_major,
      fw_minor: msg.fw_minor,
      fw_patch: msg.fw_patch,
      rec_fw_major: msg.rec_fw_major,
      rec_fw_minor: msg.rec_fw_minor,
      bl_major: msg.bl_major,
      bl_minor: msg.bl_minor,
      status_enabled: msg.status_enabled,
      status_current_limitation: msg.status_current_limitation,
      status_switch_off_warn1: msg.status_switch_off_warn1,
      status_switch_off_warn2: msg.status_switch_off_warn2,
      status_fully_discharged: msg.status_fully_discharged,
      status_nearly_discharged: msg.status_nearly_discharged,
      status_chargefet_on: msg.status_chargefet_on,
      status_dischargefet_on: msg.status_dischargefet_on,
      status_discharging: msg.status_discharging,
      status_fully_charged: msg.status_fully_charged,
      status_charging: msg.status_charging,
      status_temp_charging_err: msg.status_temp_charging_err,
      status_cell_over_voltage: msg.status_cell_over_voltage,
      status_cell_under_voltage: msg.status_cell_under_voltage,
      status_charge_over_current: msg.status_charge_over_current,
      status_shortcircuit: msg.status_shortcircuit,
      status_discharge_over_current: msg.status_discharge_over_current,
      status_temp_discharging_err: msg.status_temp_discharging_err,
      status_charger_detected: msg.status_charger_detected,
      last_battery_msg_time: msg.last_battery_msg_time,
    }
  }
}


// Corresponds to mir_msgs__msg__BrakeState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BrakeState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state_string: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub braked: bool,

}



impl Default for BrakeState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BrakeState::default())
  }
}

impl rosidl_runtime_rs::Message for BrakeState {
  type RmwMsg = super::msg::rmw::BrakeState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state_string: msg.state_string.as_str().into(),
        state: msg.state,
        braked: msg.braked,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state_string: msg.state_string.as_str().into(),
      state: msg.state,
      braked: msg.braked,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state_string: msg.state_string.to_string(),
      state: msg.state,
      braked: msg.braked,
    }
  }
}


// Corresponds to mir_msgs__msg__ChargingState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ChargingState::default())
  }
}

impl rosidl_runtime_rs::Message for ChargingState {
  type RmwMsg = super::msg::rmw::ChargingState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        charging_relay: msg.charging_relay,
        charging_current: msg.charging_current,
        charging_current_raw: msg.charging_current_raw,
        last_time_current: msg.last_time_current,
        charging_voltage: msg.charging_voltage,
        charging_voltage_raw: msg.charging_voltage_raw,
        is_voltage_low: msg.is_voltage_low,
        last_time_voltage: msg.last_time_voltage,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      charging_relay: msg.charging_relay,
      charging_current: msg.charging_current,
      charging_current_raw: msg.charging_current_raw,
      last_time_current: msg.last_time_current,
      charging_voltage: msg.charging_voltage,
      charging_voltage_raw: msg.charging_voltage_raw,
      is_voltage_low: msg.is_voltage_low,
      last_time_voltage: msg.last_time_voltage,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      charging_relay: msg.charging_relay,
      charging_current: msg.charging_current,
      charging_current_raw: msg.charging_current_raw,
      last_time_current: msg.last_time_current,
      charging_voltage: msg.charging_voltage,
      charging_voltage_raw: msg.charging_voltage_raw,
      is_voltage_low: msg.is_voltage_low,
      last_time_voltage: msg.last_time_voltage,
    }
  }
}


// Corresponds to mir_msgs__msg__Device

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Device {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub serial: std::string::String,

}



impl Default for Device {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Device::default())
  }
}

impl rosidl_runtime_rs::Message for Device {
  type RmwMsg = super::msg::rmw::Device;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        serial: msg.serial.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        serial: msg.serial.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      serial: msg.serial.to_string(),
    }
  }
}


// Corresponds to mir_msgs__msg__Devices

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Devices {

    // This member is not documented.
    #[allow(missing_docs)]
    pub devices: Vec<super::msg::Device>,

}



impl Default for Devices {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Devices::default())
  }
}

impl rosidl_runtime_rs::Message for Devices {
  type RmwMsg = super::msg::rmw::Devices;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        devices: msg.devices
          .into_iter()
          .map(|elem| super::msg::Device::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        devices: msg.devices
          .iter()
          .map(|elem| super::msg::Device::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      devices: msg.devices
          .into_iter()
          .map(super::msg::Device::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mir_msgs__msg__Encoders

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


// Corresponds to mir_msgs__msg__Error
/// Definition of offsets indicating what type an error is

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Error {
    /// Timestamp for when the error occurred
    pub timestamp: builtin_interfaces::msg::Time,

    /// Error code
    pub code: i32,

    /// Error description
    pub description: std::string::String,

    /// Module in which the error occurred
    pub module: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Error::default())
  }
}

impl rosidl_runtime_rs::Message for Error {
  type RmwMsg = super::msg::rmw::Error;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        code: msg.code,
        description: msg.description.as_str().into(),
        module: msg.module.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      code: msg.code,
        description: msg.description.as_str().into(),
        module: msg.module.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      code: msg.code,
      description: msg.description.to_string(),
      module: msg.module.to_string(),
    }
  }
}


// Corresponds to mir_msgs__msg__Event

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Event {
    /// The area event type
    pub event_type: u32,

    /// The area unique identifier
    pub area_guid: std::string::String,

    /// The name of the area
    pub area_name: std::string::String,

    /// An array of corner points that define the edges of the area
    pub polygon: Vec<geometry_msgs::msg::Point>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Event::default())
  }
}

impl rosidl_runtime_rs::Message for Event {
  type RmwMsg = super::msg::rmw::Event;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        event_type: msg.event_type,
        area_guid: msg.area_guid.as_str().into(),
        area_name: msg.area_name.as_str().into(),
        polygon: msg.polygon
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      event_type: msg.event_type,
        area_guid: msg.area_guid.as_str().into(),
        area_name: msg.area_name.as_str().into(),
        polygon: msg.polygon
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      event_type: msg.event_type,
      area_guid: msg.area_guid.to_string(),
      area_name: msg.area_name.to_string(),
      polygon: msg.polygon
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mir_msgs__msg__Events

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Events {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub events: Vec<super::msg::Event>,

}



impl Default for Events {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Events::default())
  }
}

impl rosidl_runtime_rs::Message for Events {
  type RmwMsg = super::msg::rmw::Events;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        events: msg.events
          .into_iter()
          .map(|elem| super::msg::Event::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        events: msg.events
          .iter()
          .map(|elem| super::msg::Event::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      events: msg.events
          .into_iter()
          .map(super::msg::Event::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mir_msgs__msg__ExternalRobot

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExternalRobot {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_length: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_width: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub footprint: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub priority: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub extrapolated_pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub twist: geometry_msgs::msg::Twist,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ExternalRobot::default())
  }
}

impl rosidl_runtime_rs::Message for ExternalRobot {
  type RmwMsg = super::msg::rmw::ExternalRobot;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        id: msg.id,
        type_id: msg.type_id,
        name: msg.name.as_str().into(),
        robot_length: msg.robot_length,
        robot_width: msg.robot_width,
        footprint: msg.footprint.as_str().into(),
        ip: msg.ip.as_str().into(),
        map_id: msg.map_id,
        priority: msg.priority,
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        extrapolated_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.extrapolated_pose)).into_owned(),
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.twist)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      id: msg.id,
      type_id: msg.type_id,
        name: msg.name.as_str().into(),
      robot_length: msg.robot_length,
      robot_width: msg.robot_width,
        footprint: msg.footprint.as_str().into(),
        ip: msg.ip.as_str().into(),
      map_id: msg.map_id,
      priority: msg.priority,
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        extrapolated_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.extrapolated_pose)).into_owned(),
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.twist)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      id: msg.id,
      type_id: msg.type_id,
      name: msg.name.to_string(),
      robot_length: msg.robot_length,
      robot_width: msg.robot_width,
      footprint: msg.footprint.to_string(),
      ip: msg.ip.to_string(),
      map_id: msg.map_id,
      priority: msg.priority,
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      extrapolated_pose: geometry_msgs::msg::Pose::from_rmw_message(msg.extrapolated_pose),
      twist: geometry_msgs::msg::Twist::from_rmw_message(msg.twist),
    }
  }
}


// Corresponds to mir_msgs__msg__ExternalRobots

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExternalRobots {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robots: Vec<super::msg::ExternalRobot>,

}



impl Default for ExternalRobots {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ExternalRobots::default())
  }
}

impl rosidl_runtime_rs::Message for ExternalRobots {
  type RmwMsg = super::msg::rmw::ExternalRobots;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        robots: msg.robots
          .into_iter()
          .map(|elem| super::msg::ExternalRobot::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        robots: msg.robots
          .iter()
          .map(|elem| super::msg::ExternalRobot::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      robots: msg.robots
          .into_iter()
          .map(super::msg::ExternalRobot::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mir_msgs__msg__Gpio

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Gpio::default())
  }
}

impl rosidl_runtime_rs::Message for Gpio {
  type RmwMsg = super::msg::rmw::Gpio;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ioport: msg.ioport,
        dat: msg.dat,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      ioport: msg.ioport,
      dat: msg.dat,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ioport: msg.ioport,
      dat: msg.dat,
    }
  }
}


// Corresponds to mir_msgs__msg__GripperState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state_string: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub closed: bool,

}



impl Default for GripperState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GripperState::default())
  }
}

impl rosidl_runtime_rs::Message for GripperState {
  type RmwMsg = super::msg::rmw::GripperState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state_string: msg.state_string.as_str().into(),
        state: msg.state,
        closed: msg.closed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state_string: msg.state_string.as_str().into(),
      state: msg.state,
      closed: msg.closed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state_string: msg.state_string.to_string(),
      state: msg.state,
      closed: msg.closed,
    }
  }
}


// Corresponds to mir_msgs__msg__HeightState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HeightState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state_string: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub height: f64,

}



impl Default for HeightState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HeightState::default())
  }
}

impl rosidl_runtime_rs::Message for HeightState {
  type RmwMsg = super::msg::rmw::HeightState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state_string: msg.state_string.as_str().into(),
        state: msg.state,
        height: msg.height,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state_string: msg.state_string.as_str().into(),
      state: msg.state,
      height: msg.height,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state_string: msg.state_string.to_string(),
      state: msg.state,
      height: msg.height,
    }
  }
}


// Corresponds to mir_msgs__msg__HookExtendedStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HookExtendedStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub available: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake: super::msg::BrakeState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gripper: super::msg::GripperState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub height: super::msg::HeightState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angle: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub qr_marker_name: std::string::String,

}



impl Default for HookExtendedStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HookExtendedStatus::default())
  }
}

impl rosidl_runtime_rs::Message for HookExtendedStatus {
  type RmwMsg = super::msg::rmw::HookExtendedStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        available: msg.available,
        brake: super::msg::BrakeState::into_rmw_message(std::borrow::Cow::Owned(msg.brake)).into_owned(),
        gripper: super::msg::GripperState::into_rmw_message(std::borrow::Cow::Owned(msg.gripper)).into_owned(),
        height: super::msg::HeightState::into_rmw_message(std::borrow::Cow::Owned(msg.height)).into_owned(),
        angle: msg.angle,
        qr_marker_name: msg.qr_marker_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      available: msg.available,
        brake: super::msg::BrakeState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.brake)).into_owned(),
        gripper: super::msg::GripperState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.gripper)).into_owned(),
        height: super::msg::HeightState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.height)).into_owned(),
      angle: msg.angle,
        qr_marker_name: msg.qr_marker_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      available: msg.available,
      brake: super::msg::BrakeState::from_rmw_message(msg.brake),
      gripper: super::msg::GripperState::from_rmw_message(msg.gripper),
      height: super::msg::HeightState::from_rmw_message(msg.height),
      angle: msg.angle,
      qr_marker_name: msg.qr_marker_name.to_string(),
    }
  }
}


// Corresponds to mir_msgs__msg__HookStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub trolley: super::msg::Trolley,

}



impl Default for HookStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HookStatus::default())
  }
}

impl rosidl_runtime_rs::Message for HookStatus {
  type RmwMsg = super::msg::rmw::HookStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        available: msg.available,
        length: msg.length,
        height: msg.height,
        angle: msg.angle,
        braked: msg.braked,
        trolley_attached: msg.trolley_attached,
        trolley: super::msg::Trolley::into_rmw_message(std::borrow::Cow::Owned(msg.trolley)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      available: msg.available,
      length: msg.length,
      height: msg.height,
      angle: msg.angle,
      braked: msg.braked,
      trolley_attached: msg.trolley_attached,
        trolley: super::msg::Trolley::into_rmw_message(std::borrow::Cow::Borrowed(&msg.trolley)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      available: msg.available,
      length: msg.length,
      height: msg.height,
      angle: msg.angle,
      braked: msg.braked,
      trolley_attached: msg.trolley_attached,
      trolley: super::msg::Trolley::from_rmw_message(msg.trolley),
    }
  }
}


// Corresponds to mir_msgs__msg__IOs

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IOs {

    // This member is not documented.
    #[allow(missing_docs)]
    pub module_guid: std::string::String,


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
    pub input_state: Vec<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_outputs: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub output_state: Vec<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IOs::default())
  }
}

impl rosidl_runtime_rs::Message for IOs {
  type RmwMsg = super::msg::rmw::IOs;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        module_guid: msg.module_guid.as_str().into(),
        connected: msg.connected,
        status: msg.status,
        num_inputs: msg.num_inputs,
        input_state: msg.input_state.into(),
        num_outputs: msg.num_outputs,
        output_state: msg.output_state.into(),
        ip: msg.ip.as_str().into(),
        error: msg.error.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        module_guid: msg.module_guid.as_str().into(),
      connected: msg.connected,
      status: msg.status,
      num_inputs: msg.num_inputs,
        input_state: msg.input_state.as_slice().into(),
      num_outputs: msg.num_outputs,
        output_state: msg.output_state.as_slice().into(),
        ip: msg.ip.as_str().into(),
        error: msg.error.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      module_guid: msg.module_guid.to_string(),
      connected: msg.connected,
      status: msg.status,
      num_inputs: msg.num_inputs,
      input_state: msg.input_state
          .into_iter()
          .collect(),
      num_outputs: msg.num_outputs,
      output_state: msg.output_state
          .into_iter()
          .collect(),
      ip: msg.ip.to_string(),
      error: msg.error.to_string(),
    }
  }
}


// Corresponds to mir_msgs__msg__JoystickVel

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JoystickVel {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joystick_token: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_command: geometry_msgs::msg::Twist,

}



impl Default for JoystickVel {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JoystickVel::default())
  }
}

impl rosidl_runtime_rs::Message for JoystickVel {
  type RmwMsg = super::msg::rmw::JoystickVel;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joystick_token: msg.joystick_token.as_str().into(),
        speed_command: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.speed_command)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joystick_token: msg.joystick_token.as_str().into(),
        speed_command: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.speed_command)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joystick_token: msg.joystick_token.to_string(),
      speed_command: geometry_msgs::msg::Twist::from_rmw_message(msg.speed_command),
    }
  }
}


// Corresponds to mir_msgs__msg__LocalMapStat

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LocalMapStat::default())
  }
}

impl rosidl_runtime_rs::Message for LocalMapStat {
  type RmwMsg = super::msg::rmw::LocalMapStat;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        idx: msg.idx,
        x: msg.x,
        y: msg.y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      idx: msg.idx,
      x: msg.x,
      y: msg.y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      idx: msg.idx,
      x: msg.x,
      y: msg.y,
    }
  }
}


// Corresponds to mir_msgs__msg__MirExtra
/// MirExtra - to publish data on a topic

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirExtra {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MirExtra::default())
  }
}

impl rosidl_runtime_rs::Message for MirExtra {
  type RmwMsg = super::msg::rmw::MirExtra;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_delta: msg.time_delta,
        r_rpm: msg.r_rpm,
        l_rpm: msg.l_rpm,
        vel: msg.vel,
        ang: msg.ang,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      time_delta: msg.time_delta,
      r_rpm: msg.r_rpm,
      l_rpm: msg.l_rpm,
      vel: msg.vel,
      ang: msg.ang,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      time_delta: msg.time_delta,
      r_rpm: msg.r_rpm,
      l_rpm: msg.l_rpm,
      vel: msg.vel,
      ang: msg.ang,
    }
  }
}


// Corresponds to mir_msgs__msg__MissionCtrlCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionCtrlCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub description: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MissionCtrlCommand::default())
  }
}

impl rosidl_runtime_rs::Message for MissionCtrlCommand {
  type RmwMsg = super::msg::rmw::MissionCtrlCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        description: msg.description.as_str().into(),
        cmd: msg.cmd,
        mission_id: msg.mission_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        description: msg.description.as_str().into(),
      cmd: msg.cmd,
      mission_id: msg.mission_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      description: msg.description.to_string(),
      cmd: msg.cmd,
      mission_id: msg.mission_id,
    }
  }
}


// Corresponds to mir_msgs__msg__MissionCtrlState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MissionCtrlState::default())
  }
}

impl rosidl_runtime_rs::Message for MissionCtrlState {
  type RmwMsg = super::msg::rmw::MissionCtrlState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state,
        pos_id: msg.pos_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      state: msg.state,
      pos_id: msg.pos_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: msg.state,
      pos_id: msg.pos_id,
    }
  }
}


// Corresponds to mir_msgs__msg__PalletLifterStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PalletLifterStatus::default())
  }
}

impl rosidl_runtime_rs::Message for PalletLifterStatus {
  type RmwMsg = super::msg::rmw::PalletLifterStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_enabled: msg.is_enabled,
        state: msg.state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_enabled: msg.is_enabled,
      state: msg.state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_enabled: msg.is_enabled,
      state: msg.state,
    }
  }
}


// Corresponds to mir_msgs__msg__Path

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Path {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub poses: Vec<super::msg::Pose2D>,

}



impl Default for Path {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Path::default())
  }
}

impl rosidl_runtime_rs::Message for Path {
  type RmwMsg = super::msg::rmw::Path;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        poses: msg.poses
          .into_iter()
          .map(|elem| super::msg::Pose2D::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        poses: msg.poses
          .iter()
          .map(|elem| super::msg::Pose2D::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      poses: msg.poses
          .into_iter()
          .map(super::msg::Pose2D::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mir_msgs__msg__Pendant

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Pendant::default())
  }
}

impl rosidl_runtime_rs::Message for Pendant {
  type RmwMsg = super::msg::rmw::Pendant;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        gpio_bits: msg.gpio_bits,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      gpio_bits: msg.gpio_bits,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      gpio_bits: msg.gpio_bits,
    }
  }
}


// Corresponds to mir_msgs__msg__PlanSegment

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub path: Vec<geometry_msgs::msg::PoseStamped>,

}



impl Default for PlanSegment {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PlanSegment::default())
  }
}

impl rosidl_runtime_rs::Message for PlanSegment {
  type RmwMsg = super::msg::rmw::PlanSegment;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        forward_motion: msg.forward_motion,
        start_idx: msg.start_idx,
        length: msg.length,
        remaining_length: msg.remaining_length,
        path: msg.path
          .into_iter()
          .map(|elem| geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      forward_motion: msg.forward_motion,
      start_idx: msg.start_idx,
      length: msg.length,
      remaining_length: msg.remaining_length,
        path: msg.path
          .iter()
          .map(|elem| geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      forward_motion: msg.forward_motion,
      start_idx: msg.start_idx,
      length: msg.length,
      remaining_length: msg.remaining_length,
      path: msg.path
          .into_iter()
          .map(geometry_msgs::msg::PoseStamped::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mir_msgs__msg__PlanSegments

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlanSegments {

    // This member is not documented.
    #[allow(missing_docs)]
    pub p_segments: Vec<super::msg::PlanSegment>,

}



impl Default for PlanSegments {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PlanSegments::default())
  }
}

impl rosidl_runtime_rs::Message for PlanSegments {
  type RmwMsg = super::msg::rmw::PlanSegments;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        p_segments: msg.p_segments
          .into_iter()
          .map(|elem| super::msg::PlanSegment::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        p_segments: msg.p_segments
          .iter()
          .map(|elem| super::msg::PlanSegment::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      p_segments: msg.p_segments
          .into_iter()
          .map(super::msg::PlanSegment::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mir_msgs__msg__Pose2D

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Pose2D::default())
  }
}

impl rosidl_runtime_rs::Message for Pose2D {
  type RmwMsg = super::msg::rmw::Pose2D;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        orientation: msg.orientation,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      orientation: msg.orientation,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      orientation: msg.orientation,
    }
  }
}


// Corresponds to mir_msgs__msg__PowerBoardMotorStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PowerBoardMotorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for PowerBoardMotorStatus {
  type RmwMsg = super::msg::rmw::PowerBoardMotorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_motor_ctrl_word: msg.left_motor_ctrl_word,
        left_motor_speed: msg.left_motor_speed,
        left_motor_encoder: msg.left_motor_encoder,
        left_motor_status: msg.left_motor_status,
        left_motor_error: msg.left_motor_error,
        left_motor_error_hist1: msg.left_motor_error_hist1,
        left_motor_error_hist2: msg.left_motor_error_hist2,
        left_motor_current: msg.left_motor_current,
        left_motor_i2t_motor: msg.left_motor_i2t_motor,
        left_motor_i2t_controller: msg.left_motor_i2t_controller,
        left_motor_temperature: msg.left_motor_temperature,
        right_motor_ctrl_word: msg.right_motor_ctrl_word,
        right_motor_speed: msg.right_motor_speed,
        right_motor_encoder: msg.right_motor_encoder,
        right_motor_status: msg.right_motor_status,
        right_motor_error: msg.right_motor_error,
        right_motor_error_hist1: msg.right_motor_error_hist1,
        right_motor_error_hist2: msg.right_motor_error_hist2,
        right_motor_current: msg.right_motor_current,
        right_motor_i2t_motor: msg.right_motor_i2t_motor,
        right_motor_i2t_controller: msg.right_motor_i2t_controller,
        right_motor_temperature: msg.right_motor_temperature,
        brake_left_status: msg.brake_left_status,
        brake_right_status: msg.brake_right_status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      left_motor_ctrl_word: msg.left_motor_ctrl_word,
      left_motor_speed: msg.left_motor_speed,
      left_motor_encoder: msg.left_motor_encoder,
      left_motor_status: msg.left_motor_status,
      left_motor_error: msg.left_motor_error,
      left_motor_error_hist1: msg.left_motor_error_hist1,
      left_motor_error_hist2: msg.left_motor_error_hist2,
      left_motor_current: msg.left_motor_current,
      left_motor_i2t_motor: msg.left_motor_i2t_motor,
      left_motor_i2t_controller: msg.left_motor_i2t_controller,
      left_motor_temperature: msg.left_motor_temperature,
      right_motor_ctrl_word: msg.right_motor_ctrl_word,
      right_motor_speed: msg.right_motor_speed,
      right_motor_encoder: msg.right_motor_encoder,
      right_motor_status: msg.right_motor_status,
      right_motor_error: msg.right_motor_error,
      right_motor_error_hist1: msg.right_motor_error_hist1,
      right_motor_error_hist2: msg.right_motor_error_hist2,
      right_motor_current: msg.right_motor_current,
      right_motor_i2t_motor: msg.right_motor_i2t_motor,
      right_motor_i2t_controller: msg.right_motor_i2t_controller,
      right_motor_temperature: msg.right_motor_temperature,
      brake_left_status: msg.brake_left_status,
      brake_right_status: msg.brake_right_status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_motor_ctrl_word: msg.left_motor_ctrl_word,
      left_motor_speed: msg.left_motor_speed,
      left_motor_encoder: msg.left_motor_encoder,
      left_motor_status: msg.left_motor_status,
      left_motor_error: msg.left_motor_error,
      left_motor_error_hist1: msg.left_motor_error_hist1,
      left_motor_error_hist2: msg.left_motor_error_hist2,
      left_motor_current: msg.left_motor_current,
      left_motor_i2t_motor: msg.left_motor_i2t_motor,
      left_motor_i2t_controller: msg.left_motor_i2t_controller,
      left_motor_temperature: msg.left_motor_temperature,
      right_motor_ctrl_word: msg.right_motor_ctrl_word,
      right_motor_speed: msg.right_motor_speed,
      right_motor_encoder: msg.right_motor_encoder,
      right_motor_status: msg.right_motor_status,
      right_motor_error: msg.right_motor_error,
      right_motor_error_hist1: msg.right_motor_error_hist1,
      right_motor_error_hist2: msg.right_motor_error_hist2,
      right_motor_current: msg.right_motor_current,
      right_motor_i2t_motor: msg.right_motor_i2t_motor,
      right_motor_i2t_controller: msg.right_motor_i2t_controller,
      right_motor_temperature: msg.right_motor_temperature,
      brake_left_status: msg.brake_left_status,
      brake_right_status: msg.brake_right_status,
    }
  }
}


// Corresponds to mir_msgs__msg__Proximity

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Proximity {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ranges: Vec<u16>,

}



impl Default for Proximity {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Proximity::default())
  }
}

impl rosidl_runtime_rs::Message for Proximity {
  type RmwMsg = super::msg::rmw::Proximity;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ranges: msg.ranges.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        ranges: msg.ranges.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ranges: msg.ranges
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to mir_msgs__msg__ResourcesState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResourcesState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub resources: Vec<super::msg::ResourceState>,

}



impl Default for ResourcesState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ResourcesState::default())
  }
}

impl rosidl_runtime_rs::Message for ResourcesState {
  type RmwMsg = super::msg::rmw::ResourcesState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        resources: msg.resources
          .into_iter()
          .map(|elem| super::msg::ResourceState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        resources: msg.resources
          .iter()
          .map(|elem| super::msg::ResourceState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      resources: msg.resources
          .into_iter()
          .map(super::msg::ResourceState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mir_msgs__msg__ResourceState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResourceState {
    /// A token that is true whenever the resource is busy.
    pub assigned: Vec<std::string::String>,

    /// The resource type
    pub type_: u32,

    /// The index from the global path in which the robot gets into the position
    pub path_idx: u32,

    /// The distance from the robot to the resource
    pub distance: f32,

    /// The collision point with the resource
    pub collision_point: geometry_msgs::msg::Point,

    /// The queue for a resource. It's a list of robots ips.
    pub queue: Vec<std::string::String>,

    /// The name of the resource
    pub name: std::string::String,

    /// The guid of the resource
    pub guid: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ResourceState::default())
  }
}

impl rosidl_runtime_rs::Message for ResourceState {
  type RmwMsg = super::msg::rmw::ResourceState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        assigned: msg.assigned
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        type_: msg.type_,
        path_idx: msg.path_idx,
        distance: msg.distance,
        collision_point: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.collision_point)).into_owned(),
        queue: msg.queue
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        name: msg.name.as_str().into(),
        guid: msg.guid.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        assigned: msg.assigned
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      type_: msg.type_,
      path_idx: msg.path_idx,
      distance: msg.distance,
        collision_point: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.collision_point)).into_owned(),
        queue: msg.queue
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        name: msg.name.as_str().into(),
        guid: msg.guid.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      assigned: msg.assigned
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      type_: msg.type_,
      path_idx: msg.path_idx,
      distance: msg.distance,
      collision_point: geometry_msgs::msg::Point::from_rmw_message(msg.collision_point),
      queue: msg.queue
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      name: msg.name.to_string(),
      guid: msg.guid.to_string(),
    }
  }
}


// Corresponds to mir_msgs__msg__RobotMode
/// The robot operates in different mode

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_mode_string: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotMode::default())
  }
}

impl rosidl_runtime_rs::Message for RobotMode {
  type RmwMsg = super::msg::rmw::RobotMode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_mode: msg.robot_mode,
        robot_mode_string: msg.robot_mode_string.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      robot_mode: msg.robot_mode,
        robot_mode_string: msg.robot_mode_string.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      robot_mode: msg.robot_mode,
      robot_mode_string: msg.robot_mode_string.to_string(),
    }
  }
}


// Corresponds to mir_msgs__msg__RobotState
/// The robot has to be in a predefined state

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_state_string: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotState::default())
  }
}

impl rosidl_runtime_rs::Message for RobotState {
  type RmwMsg = super::msg::rmw::RobotState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_state: msg.robot_state,
        robot_state_string: msg.robot_state_string.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      robot_state: msg.robot_state,
        robot_state_string: msg.robot_state_string.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      robot_state: msg.robot_state,
      robot_state_string: msg.robot_state_string.to_string(),
    }
  }
}


// Corresponds to mir_msgs__msg__RobotStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub errors: Vec<super::msg::Error>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub footprint: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hook_status: super::msg::HookStatus,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unloaded_map_changes: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_queue_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_text: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_text: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub moved: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: super::msg::Pose2D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub session_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub software_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_text: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uptime: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: super::msg::Twist2D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub user_prompt: super::msg::UserPrompt,


    // This member is not documented.
    #[allow(missing_docs)]
    pub safety_system_muted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joystick_low_speed_mode_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joystick_web_session_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_key_state: std::string::String,

}



impl Default for RobotStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = super::msg::rmw::RobotStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        battery_percentage: msg.battery_percentage,
        battery_time_remaining: msg.battery_time_remaining,
        battery_voltage: msg.battery_voltage,
        distance_to_next_target: msg.distance_to_next_target,
        errors: msg.errors
          .into_iter()
          .map(|elem| super::msg::Error::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        footprint: msg.footprint.as_str().into(),
        hook_status: super::msg::HookStatus::into_rmw_message(std::borrow::Cow::Owned(msg.hook_status)).into_owned(),
        map_id: msg.map_id.as_str().into(),
        unloaded_map_changes: msg.unloaded_map_changes,
        mission_queue_id: msg.mission_queue_id,
        mission_text: msg.mission_text.as_str().into(),
        mode_id: msg.mode_id,
        mode_text: msg.mode_text.as_str().into(),
        moved: msg.moved,
        position: super::msg::Pose2D::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        robot_name: msg.robot_name.as_str().into(),
        session_id: msg.session_id.as_str().into(),
        software_version: msg.software_version.as_str().into(),
        state_id: msg.state_id,
        state_text: msg.state_text.as_str().into(),
        uptime: msg.uptime,
        velocity: super::msg::Twist2D::into_rmw_message(std::borrow::Cow::Owned(msg.velocity)).into_owned(),
        user_prompt: super::msg::UserPrompt::into_rmw_message(std::borrow::Cow::Owned(msg.user_prompt)).into_owned(),
        safety_system_muted: msg.safety_system_muted,
        joystick_low_speed_mode_enabled: msg.joystick_low_speed_mode_enabled,
        joystick_web_session_id: msg.joystick_web_session_id.as_str().into(),
        mode_key_state: msg.mode_key_state.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      battery_percentage: msg.battery_percentage,
      battery_time_remaining: msg.battery_time_remaining,
      battery_voltage: msg.battery_voltage,
      distance_to_next_target: msg.distance_to_next_target,
        errors: msg.errors
          .iter()
          .map(|elem| super::msg::Error::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        footprint: msg.footprint.as_str().into(),
        hook_status: super::msg::HookStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.hook_status)).into_owned(),
        map_id: msg.map_id.as_str().into(),
      unloaded_map_changes: msg.unloaded_map_changes,
      mission_queue_id: msg.mission_queue_id,
        mission_text: msg.mission_text.as_str().into(),
      mode_id: msg.mode_id,
        mode_text: msg.mode_text.as_str().into(),
      moved: msg.moved,
        position: super::msg::Pose2D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
        robot_name: msg.robot_name.as_str().into(),
        session_id: msg.session_id.as_str().into(),
        software_version: msg.software_version.as_str().into(),
      state_id: msg.state_id,
        state_text: msg.state_text.as_str().into(),
      uptime: msg.uptime,
        velocity: super::msg::Twist2D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.velocity)).into_owned(),
        user_prompt: super::msg::UserPrompt::into_rmw_message(std::borrow::Cow::Borrowed(&msg.user_prompt)).into_owned(),
      safety_system_muted: msg.safety_system_muted,
      joystick_low_speed_mode_enabled: msg.joystick_low_speed_mode_enabled,
        joystick_web_session_id: msg.joystick_web_session_id.as_str().into(),
        mode_key_state: msg.mode_key_state.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      battery_percentage: msg.battery_percentage,
      battery_time_remaining: msg.battery_time_remaining,
      battery_voltage: msg.battery_voltage,
      distance_to_next_target: msg.distance_to_next_target,
      errors: msg.errors
          .into_iter()
          .map(super::msg::Error::from_rmw_message)
          .collect(),
      footprint: msg.footprint.to_string(),
      hook_status: super::msg::HookStatus::from_rmw_message(msg.hook_status),
      map_id: msg.map_id.to_string(),
      unloaded_map_changes: msg.unloaded_map_changes,
      mission_queue_id: msg.mission_queue_id,
      mission_text: msg.mission_text.to_string(),
      mode_id: msg.mode_id,
      mode_text: msg.mode_text.to_string(),
      moved: msg.moved,
      position: super::msg::Pose2D::from_rmw_message(msg.position),
      robot_name: msg.robot_name.to_string(),
      session_id: msg.session_id.to_string(),
      software_version: msg.software_version.to_string(),
      state_id: msg.state_id,
      state_text: msg.state_text.to_string(),
      uptime: msg.uptime,
      velocity: super::msg::Twist2D::from_rmw_message(msg.velocity),
      user_prompt: super::msg::UserPrompt::from_rmw_message(msg.user_prompt),
      safety_system_muted: msg.safety_system_muted,
      joystick_low_speed_mode_enabled: msg.joystick_low_speed_mode_enabled,
      joystick_web_session_id: msg.joystick_web_session_id.to_string(),
      mode_key_state: msg.mode_key_state.to_string(),
    }
  }
}


// Corresponds to mir_msgs__msg__SafetyStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SafetyStatus::default())
  }
}

impl rosidl_runtime_rs::Message for SafetyStatus {
  type RmwMsg = super::msg::rmw::SafetyStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_connected: msg.is_connected,
        is_firmware_ok: msg.is_firmware_ok,
        firmware_version: msg.firmware_version,
        in_protective_stop: msg.in_protective_stop,
        in_emergency_stop: msg.in_emergency_stop,
        sto_feedback: msg.sto_feedback,
        is_restart_required: msg.is_restart_required,
        is_safety_muted: msg.is_safety_muted,
        max_lin_speed: msg.max_lin_speed,
        max_rot_speed: msg.max_rot_speed,
        mute_mask: msg.mute_mask,
        partial_mute_mask: msg.partial_mute_mask,
        is_limited_speed_active: msg.is_limited_speed_active,
        is_lifter_down: msg.is_lifter_down,
        in_sleep_mode: msg.in_sleep_mode,
        in_manual_mode: msg.in_manual_mode,
        is_manual_mode_restart_required: msg.is_manual_mode_restart_required,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_connected: msg.is_connected,
      is_firmware_ok: msg.is_firmware_ok,
      firmware_version: msg.firmware_version,
      in_protective_stop: msg.in_protective_stop,
      in_emergency_stop: msg.in_emergency_stop,
      sto_feedback: msg.sto_feedback,
      is_restart_required: msg.is_restart_required,
      is_safety_muted: msg.is_safety_muted,
      max_lin_speed: msg.max_lin_speed,
      max_rot_speed: msg.max_rot_speed,
      mute_mask: msg.mute_mask,
      partial_mute_mask: msg.partial_mute_mask,
      is_limited_speed_active: msg.is_limited_speed_active,
      is_lifter_down: msg.is_lifter_down,
      in_sleep_mode: msg.in_sleep_mode,
      in_manual_mode: msg.in_manual_mode,
      is_manual_mode_restart_required: msg.is_manual_mode_restart_required,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_connected: msg.is_connected,
      is_firmware_ok: msg.is_firmware_ok,
      firmware_version: msg.firmware_version,
      in_protective_stop: msg.in_protective_stop,
      in_emergency_stop: msg.in_emergency_stop,
      sto_feedback: msg.sto_feedback,
      is_restart_required: msg.is_restart_required,
      is_safety_muted: msg.is_safety_muted,
      max_lin_speed: msg.max_lin_speed,
      max_rot_speed: msg.max_rot_speed,
      mute_mask: msg.mute_mask,
      partial_mute_mask: msg.partial_mute_mask,
      is_limited_speed_active: msg.is_limited_speed_active,
      is_lifter_down: msg.is_lifter_down,
      in_sleep_mode: msg.in_sleep_mode,
      in_manual_mode: msg.in_manual_mode,
      is_manual_mode_restart_required: msg.is_manual_mode_restart_required,
    }
  }
}


// Corresponds to mir_msgs__msg__Serial

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Serial {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: std::string::String,

}



impl Default for Serial {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Serial::default())
  }
}

impl rosidl_runtime_rs::Message for Serial {
  type RmwMsg = super::msg::rmw::Serial;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      data: msg.data.to_string(),
    }
  }
}


// Corresponds to mir_msgs__msg__StampedEncoders

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


// Corresponds to mir_msgs__msg__Trolley

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Trolley::default())
  }
}

impl rosidl_runtime_rs::Message for Trolley {
  type RmwMsg = super::msg::rmw::Trolley;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        length: msg.length,
        width: msg.width,
        height: msg.height,
        offset_locked_wheels: msg.offset_locked_wheels,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
      length: msg.length,
      width: msg.width,
      height: msg.height,
      offset_locked_wheels: msg.offset_locked_wheels,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      length: msg.length,
      width: msg.width,
      height: msg.height,
      offset_locked_wheels: msg.offset_locked_wheels,
    }
  }
}


// Corresponds to mir_msgs__msg__Twist2D

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Twist2D::default())
  }
}

impl rosidl_runtime_rs::Message for Twist2D {
  type RmwMsg = super::msg::rmw::Twist2D;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        linear: msg.linear,
        angular: msg.angular,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      linear: msg.linear,
      angular: msg.angular,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      linear: msg.linear,
      angular: msg.angular,
    }
  }
}


// Corresponds to mir_msgs__msg__UserPrompt

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UserPrompt {

    // This member is not documented.
    #[allow(missing_docs)]
    pub has_request: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub guid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub user_group: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub question: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub options: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout: builtin_interfaces::msg::Duration,

}



impl Default for UserPrompt {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UserPrompt::default())
  }
}

impl rosidl_runtime_rs::Message for UserPrompt {
  type RmwMsg = super::msg::rmw::UserPrompt;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        has_request: msg.has_request,
        guid: msg.guid.as_str().into(),
        user_group: msg.user_group.as_str().into(),
        question: msg.question.as_str().into(),
        options: msg.options
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        timeout: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.timeout)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      has_request: msg.has_request,
        guid: msg.guid.as_str().into(),
        user_group: msg.user_group.as_str().into(),
        question: msg.question.as_str().into(),
        options: msg.options
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        timeout: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timeout)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      has_request: msg.has_request,
      guid: msg.guid.to_string(),
      user_group: msg.user_group.to_string(),
      question: msg.question.to_string(),
      options: msg.options
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      timeout: builtin_interfaces::msg::Duration::from_rmw_message(msg.timeout),
    }
  }
}


// Corresponds to mir_msgs__msg__WebPath

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WebPath {

    // This member is not documented.
    #[allow(missing_docs)]
    pub seq: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: Vec<f32>,

}



impl Default for WebPath {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WebPath::default())
  }
}

impl rosidl_runtime_rs::Message for WebPath {
  type RmwMsg = super::msg::rmw::WebPath;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        seq: msg.seq,
        x: msg.x.into(),
        y: msg.y.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      seq: msg.seq,
        x: msg.x.as_slice().into(),
        y: msg.y.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      seq: msg.seq,
      x: msg.x
          .into_iter()
          .collect(),
      y: msg.y
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to mir_msgs__msg__WorldMap

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WorldMap {

    // This member is not documented.
    #[allow(missing_docs)]
    pub positions: super::msg::ResourcesState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub areas: super::msg::ResourcesState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robots: super::msg::ExternalRobots,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_id: i32,

}



impl Default for WorldMap {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WorldMap::default())
  }
}

impl rosidl_runtime_rs::Message for WorldMap {
  type RmwMsg = super::msg::rmw::WorldMap;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        positions: super::msg::ResourcesState::into_rmw_message(std::borrow::Cow::Owned(msg.positions)).into_owned(),
        areas: super::msg::ResourcesState::into_rmw_message(std::borrow::Cow::Owned(msg.areas)).into_owned(),
        robots: super::msg::ExternalRobots::into_rmw_message(std::borrow::Cow::Owned(msg.robots)).into_owned(),
        map_id: msg.map_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        positions: super::msg::ResourcesState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.positions)).into_owned(),
        areas: super::msg::ResourcesState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.areas)).into_owned(),
        robots: super::msg::ExternalRobots::into_rmw_message(std::borrow::Cow::Borrowed(&msg.robots)).into_owned(),
      map_id: msg.map_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      positions: super::msg::ResourcesState::from_rmw_message(msg.positions),
      areas: super::msg::ResourcesState::from_rmw_message(msg.areas),
      robots: super::msg::ExternalRobots::from_rmw_message(msg.robots),
      map_id: msg.map_id,
    }
  }
}


// Corresponds to mir_msgs__msg__WorldModel

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WorldModel {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// world model for a particular map
    pub world_map: Vec<super::msg::WorldMap>,

}



impl Default for WorldModel {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WorldModel::default())
  }
}

impl rosidl_runtime_rs::Message for WorldModel {
  type RmwMsg = super::msg::rmw::WorldModel;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        world_map: msg.world_map
          .into_iter()
          .map(|elem| super::msg::WorldMap::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        world_map: msg.world_map
          .iter()
          .map(|elem| super::msg::WorldMap::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      world_map: msg.world_map
          .into_iter()
          .map(super::msg::WorldMap::from_rmw_message)
          .collect(),
    }
  }
}


