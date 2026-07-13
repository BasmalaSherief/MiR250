// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from sdc21x0:msg/MotorCurrents.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sdc21x0/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "sdc21x0/msg/detail/motor_currents__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace sdc21x0
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdc21x0
cdr_serialize(
  const sdc21x0::msg::MotorCurrents & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdc21x0
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sdc21x0::msg::MotorCurrents & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdc21x0
get_serialized_size(
  const sdc21x0::msg::MotorCurrents & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdc21x0
max_serialized_size_MotorCurrents(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sdc21x0

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdc21x0
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sdc21x0, msg, MotorCurrents)();

#ifdef __cplusplus
}
#endif

#endif  // SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
