// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mir_msgs:msg/PlanSegments.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mir_msgs/msg/detail/plan_segments__struct.hpp"
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

void PlanSegments_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mir_msgs::msg::PlanSegments(_init);
}

void PlanSegments_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mir_msgs::msg::PlanSegments *>(message_memory);
  typed_message->~PlanSegments();
}

size_t size_function__PlanSegments__p_segments(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mir_msgs::msg::PlanSegment> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanSegments__p_segments(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mir_msgs::msg::PlanSegment> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanSegments__p_segments(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mir_msgs::msg::PlanSegment> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanSegments__p_segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mir_msgs::msg::PlanSegment *>(
    get_const_function__PlanSegments__p_segments(untyped_member, index));
  auto & value = *reinterpret_cast<mir_msgs::msg::PlanSegment *>(untyped_value);
  value = item;
}

void assign_function__PlanSegments__p_segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mir_msgs::msg::PlanSegment *>(
    get_function__PlanSegments__p_segments(untyped_member, index));
  const auto & value = *reinterpret_cast<const mir_msgs::msg::PlanSegment *>(untyped_value);
  item = value;
}

void resize_function__PlanSegments__p_segments(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mir_msgs::msg::PlanSegment> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlanSegments_message_member_array[1] = {
  {
    "p_segments",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mir_msgs::msg::PlanSegment>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs::msg::PlanSegments, p_segments),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanSegments__p_segments,  // size() function pointer
    get_const_function__PlanSegments__p_segments,  // get_const(index) function pointer
    get_function__PlanSegments__p_segments,  // get(index) function pointer
    fetch_function__PlanSegments__p_segments,  // fetch(index, &value) function pointer
    assign_function__PlanSegments__p_segments,  // assign(index, value) function pointer
    resize_function__PlanSegments__p_segments  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlanSegments_message_members = {
  "mir_msgs::msg",  // message namespace
  "PlanSegments",  // message name
  1,  // number of fields
  sizeof(mir_msgs::msg::PlanSegments),
  PlanSegments_message_member_array,  // message members
  PlanSegments_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanSegments_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlanSegments_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlanSegments_message_members,
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
get_message_type_support_handle<mir_msgs::msg::PlanSegments>()
{
  return &::mir_msgs::msg::rosidl_typesupport_introspection_cpp::PlanSegments_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mir_msgs, msg, PlanSegments)() {
  return &::mir_msgs::msg::rosidl_typesupport_introspection_cpp::PlanSegments_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
