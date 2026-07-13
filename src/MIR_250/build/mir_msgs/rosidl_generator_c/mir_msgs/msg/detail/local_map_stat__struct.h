// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/LocalMapStat.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__LOCAL_MAP_STAT__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__LOCAL_MAP_STAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LocalMapStat in the package mir_msgs.
typedef struct mir_msgs__msg__LocalMapStat
{
  int32_t idx;
  int32_t x;
  int32_t y;
} mir_msgs__msg__LocalMapStat;

// Struct for a sequence of mir_msgs__msg__LocalMapStat.
typedef struct mir_msgs__msg__LocalMapStat__Sequence
{
  mir_msgs__msg__LocalMapStat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__LocalMapStat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__LOCAL_MAP_STAT__STRUCT_H_
