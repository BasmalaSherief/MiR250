// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_msgs:msg/WorldMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_msgs/msg/detail/world_map__rosidl_typesupport_introspection_c.h"
#include "mir_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_msgs/msg/detail/world_map__functions.h"
#include "mir_msgs/msg/detail/world_map__struct.h"


// Include directives for member types
// Member `positions`
// Member `areas`
#include "mir_msgs/msg/resources_state.h"
// Member `positions`
// Member `areas`
#include "mir_msgs/msg/detail/resources_state__rosidl_typesupport_introspection_c.h"
// Member `robots`
#include "mir_msgs/msg/external_robots.h"
// Member `robots`
#include "mir_msgs/msg/detail/external_robots__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_msgs__msg__WorldMap__init(message_memory);
}

void mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_fini_function(void * message_memory)
{
  mir_msgs__msg__WorldMap__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_message_member_array[4] = {
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__WorldMap, positions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "areas",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__WorldMap, areas),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__WorldMap, robots),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__WorldMap, map_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_message_members = {
  "mir_msgs__msg",  // message namespace
  "WorldMap",  // message name
  4,  // number of fields
  sizeof(mir_msgs__msg__WorldMap),
  mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_message_member_array,  // message members
  mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_message_type_support_handle = {
  0,
  &mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, WorldMap)() {
  mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, ResourcesState)();
  mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, ResourcesState)();
  mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, ExternalRobots)();
  if (!mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_message_type_support_handle.typesupport_identifier) {
    mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_msgs__msg__WorldMap__rosidl_typesupport_introspection_c__WorldMap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
