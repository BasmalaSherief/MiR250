// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/BMSData.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__BMS_DATA__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__BMS_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DISCHARGING'.
/**
  * bit 0
 */
enum
{
  mir_msgs__msg__BMSData__DISCHARGING = 1l
};

/// Constant 'CHARGING'.
/**
  * bit 1
 */
enum
{
  mir_msgs__msg__BMSData__CHARGING = 2l
};

/// Constant 'OV'.
/**
  * bit 2 Over voltage
 */
enum
{
  mir_msgs__msg__BMSData__OV = 4l
};

/// Constant 'UV'.
/**
  * bit 3 Under voltage
 */
enum
{
  mir_msgs__msg__BMSData__UV = 8l
};

/// Constant 'COC'.
/**
  * bit 4 Charge over current
 */
enum
{
  mir_msgs__msg__BMSData__COC = 16l
};

/// Constant 'DOC'.
/**
  * bit 5 Discharge over current
 */
enum
{
  mir_msgs__msg__BMSData__DOC = 32l
};

/// Constant 'DOT'.
/**
  * bit 6 Discharge over temperature
 */
enum
{
  mir_msgs__msg__BMSData__DOT = 64l
};

/// Constant 'DUT'.
/**
  * bit 7 Discharge under temperature
 */
enum
{
  mir_msgs__msg__BMSData__DUT = 128l
};

/// Constant 'SC'.
/**
  * bit 9
 */
enum
{
  mir_msgs__msg__BMSData__SC = 512l
};

/// Constant 'COT'.
/**
  * bit 10 Charge over temperature
 */
enum
{
  mir_msgs__msg__BMSData__COT = 1024l
};

/// Constant 'CUT'.
/**
  * bit 11 Charge under temperature
 */
enum
{
  mir_msgs__msg__BMSData__CUT = 2048l
};

/// Constant 'FW_STATUS_MSK'.
/**
  * to get Battery_Firmware_Status  do the following:
 */
enum
{
  mir_msgs__msg__BMSData__FW_STATUS_MSK = 2031616l
};

/// Constant 'FW_STATUS_SHIFT'.
/**
  * batt_fw_stat=(status_flags & FW_STATUS_MSK)>>FW_STATUS_SHIFT
 */
enum
{
  mir_msgs__msg__BMSData__FW_STATUS_SHIFT = 16l
};

/// Constant 'FW_UPD_OK'.
/**
  * Battery firmware update finished OK.
 */
enum
{
  mir_msgs__msg__BMSData__FW_UPD_OK = 0l
};

/// Constant 'FW_UPD_RUNNING'.
/**
  * Battery firmware update running.
 */
enum
{
  mir_msgs__msg__BMSData__FW_UPD_RUNNING = 1l
};

/// Constant 'FW_UPD_FAILED_BOOT'.
/**
  * Battery firmware update failed in Bootloader (Robot must not drive)
 */
enum
{
  mir_msgs__msg__BMSData__FW_UPD_FAILED_BOOT = 2l
};

/// Constant 'FW_UPD_FAILED_APP'.
/**
  * Battery firmware update failed updating the application (Robot can drive with old FW)
 */
enum
{
  mir_msgs__msg__BMSData__FW_UPD_FAILED_APP = 3l
};

/// Constant 'FW_UPD_FAILED_PARAM'.
/**
  * Battery firmware update failed uploading parameters (Robot can drive with old fw and parameters.)
 */
enum
{
  mir_msgs__msg__BMSData__FW_UPD_FAILED_PARAM = 4l
};

/// Constant 'FW_STATUS_LOW_BATT'.
/**
  * Battery firmware update skipped battery too low (Robot can drive with old parameters.)
 */
enum
{
  mir_msgs__msg__BMSData__FW_STATUS_LOW_BATT = 5l
};

/// Constant 'FW_STATUS_FILE_CORRUPTED'.
/**
  * Battery firmware file corrupted (Robot can drive with old parameters.)
 */
enum
{
  mir_msgs__msg__BMSData__FW_STATUS_FILE_CORRUPTED = 6l
};

/// Constant 'FW_STATUS_CURRENT_TO_HIGH'.
/**
  * Battery firmware file corrupted (Robot can drive with old parameters.)
 */
enum
{
  mir_msgs__msg__BMSData__FW_STATUS_CURRENT_TO_HIGH = 7l
};

/// Constant 'FW_STATUS_NO_CAN'.
/**
  * Battery firmware update skipped no CAN communication (Robot can drive with old fw and parameters.)
 */
enum
{
  mir_msgs__msg__BMSData__FW_STATUS_NO_CAN = 8l
};

/// Constant 'FW_BATTERY_IMBALANCE_HIGH'.
/**
  * Battery firmware update is enforced and the battery will be shut off by the new firmware
 */
enum
{
  mir_msgs__msg__BMSData__FW_BATTERY_IMBALANCE_HIGH = 9l
};

// Include directives for member types
// Member 'cell_voltage'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/BMSData in the package mir_msgs.
typedef struct mir_msgs__msg__BMSData
{
  double pack_voltage;
  double charge_current;
  double discharge_current;
  int32_t state_of_charge;
  double remaining_time_to_full_charge;
  int32_t remaining_capacity;
  int32_t state_of_health;
  int32_t status_flags;
  int32_t temperature;
  /// In Mk2 robots and above the BMS provides data for 8 battery cells. 2Gen robots have BMS for 13 battery cells
  rosidl_runtime_c__uint32__Sequence cell_voltage;
  /// Exteded diagnosticts for BMZ battery
  /// Flag for enabling extended diagnosticts
  uint32_t bmz_flag;
  double full_voltage;
  int32_t full_capacity;
  int32_t temperature2;
  int32_t temperature3;
  int32_t cycle_count;
  int32_t dsg_overcurrent_counter;
  int32_t chg_overcurrent_counter;
  int32_t hw_major;
  int32_t hw_minor;
  int32_t fw_major;
  int32_t fw_minor;
  int32_t fw_patch;
  int32_t rec_fw_major;
  int32_t rec_fw_minor;
  int32_t bl_major;
  int32_t bl_minor;
  uint32_t status_enabled;
  uint32_t status_current_limitation;
  uint32_t status_switch_off_warn1;
  uint32_t status_switch_off_warn2;
  uint32_t status_fully_discharged;
  uint32_t status_nearly_discharged;
  uint32_t status_chargefet_on;
  uint32_t status_dischargefet_on;
  uint32_t status_discharging;
  uint32_t status_fully_charged;
  uint32_t status_charging;
  uint32_t status_temp_charging_err;
  uint32_t status_cell_over_voltage;
  uint32_t status_cell_under_voltage;
  uint32_t status_charge_over_current;
  uint32_t status_shortcircuit;
  uint32_t status_discharge_over_current;
  uint32_t status_temp_discharging_err;
  uint32_t status_charger_detected;
  double last_battery_msg_time;
} mir_msgs__msg__BMSData;

// Struct for a sequence of mir_msgs__msg__BMSData.
typedef struct mir_msgs__msg__BMSData__Sequence
{
  mir_msgs__msg__BMSData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__BMSData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__BMS_DATA__STRUCT_H_
