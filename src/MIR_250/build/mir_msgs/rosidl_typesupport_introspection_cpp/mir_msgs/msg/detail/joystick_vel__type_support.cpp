// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mir_msgs:msg/JoystickVel.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mir_msgs/msg/detail/joystick_vel__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mir_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JoystickVel_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mir_msgs::msg::JoystickVel(_init);
}

void JoystickVel_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mir_msgs::msg::JoystickVel *>(message_memory);
  typed_message->~JoystickVel();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JoystickVel_message_member_array[2] = {
  {
    "joystick_token",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs::msg::JoystickVel, joystick_token),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed_command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Twist>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs::msg::JoystickVel, speed_command),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JoystickVel_message_members = {
  "mir_msgs::msg",  // message namespace
  "JoystickVel",  // message name
  2,  // number of fields
  sizeof(mir_msgs::msg::JoystickVel),
  JoystickVel_message_member_array,  // message members
  JoystickVel_init_function,  // function to initialize message memory (memory has to be allocated)
  JoystickVel_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JoystickVel_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JoystickVel_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mir_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mir_msgs::msg::JoystickVel>()
{
  return &::mir_msgs::msg::rosidl_typesupport_introspection_cpp::JoystickVel_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mir_msgs, msg, JoystickVel)() {
  return &::mir_msgs::msg::rosidl_typesupport_introspection_cpp::JoystickVel_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
