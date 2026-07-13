// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/WorldMap.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__WORLD_MAP__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__WORLD_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'positions'
// Member 'areas'
#include "mir_msgs/msg/detail/resources_state__struct.h"
// Member 'robots'
#include "mir_msgs/msg/detail/external_robots__struct.h"

/// Struct defined in msg/WorldMap in the package mir_msgs.
typedef struct mir_msgs__msg__WorldMap
{
  mir_msgs__msg__ResourcesState positions;
  mir_msgs__msg__ResourcesState areas;
  mir_msgs__msg__ExternalRobots robots;
  int32_t map_id;
} mir_msgs__msg__WorldMap;

// Struct for a sequence of mir_msgs__msg__WorldMap.
typedef struct mir_msgs__msg__WorldMap__Sequence
{
  mir_msgs__msg__WorldMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__WorldMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__WORLD_MAP__STRUCT_H_
