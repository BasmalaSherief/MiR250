// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__EVENT__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EV_SPEED'.
enum
{
  mir_msgs__msg__Event__EV_SPEED = 1ul
};

/// Constant 'EV_BLINK'.
enum
{
  mir_msgs__msg__Event__EV_BLINK = 2ul
};

/// Constant 'EV_SOUND'.
enum
{
  mir_msgs__msg__Event__EV_SOUND = 3ul
};

/// Constant 'EV_DOOR'.
enum
{
  mir_msgs__msg__Event__EV_DOOR = 4ul
};

/// Constant 'EV_AMCLOFF'.
enum
{
  mir_msgs__msg__Event__EV_AMCLOFF = 5ul
};

/// Constant 'EV_FWDDIST'.
enum
{
  mir_msgs__msg__Event__EV_FWDDIST = 6ul
};

/// Constant 'EV_IO'.
enum
{
  mir_msgs__msg__Event__EV_IO = 7ul
};

/// Constant 'EV_FLEETLCK'.
/**
  * Fleet
 */
enum
{
  mir_msgs__msg__Event__EV_FLEETLCK = 8ul
};

/// Constant 'EV_EMERGENCY'.
/**
  * Fleet
 */
enum
{
  mir_msgs__msg__Event__EV_EMERGENCY = 9ul
};

// Include directives for member types
// Member 'area_guid'
// Member 'area_name'
#include "rosidl_runtime_c/string.h"
// Member 'polygon'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Event in the package mir_msgs.
typedef struct mir_msgs__msg__Event
{
  /// The area event type
  uint32_t event_type;
  /// The area unique identifier
  rosidl_runtime_c__String area_guid;
  /// The name of the area
  rosidl_runtime_c__String area_name;
  /// An array of corner points that define the edges of the area
  geometry_msgs__msg__Point__Sequence polygon;
} mir_msgs__msg__Event;

// Struct for a sequence of mir_msgs__msg__Event.
typedef struct mir_msgs__msg__Event__Sequence
{
  mir_msgs__msg__Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__EVENT__STRUCT_H_
