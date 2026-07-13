// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mir_msgs:msg/UserPrompt.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/user_prompt__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mir_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mir_msgs/msg/detail/user_prompt__struct.h"
#include "mir_msgs/msg/detail/user_prompt__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/duration__functions.h"  // timeout
#include "rosidl_runtime_c/string.h"  // guid, options, question, user_group
#include "rosidl_runtime_c/string_functions.h"  // guid, options, question, user_group

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mir_msgs
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mir_msgs
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mir_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration)();


using _UserPrompt__ros_msg_type = mir_msgs__msg__UserPrompt;

static bool _UserPrompt__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UserPrompt__ros_msg_type * ros_message = static_cast<const _UserPrompt__ros_msg_type *>(untyped_ros_message);
  // Field name: has_request
  {
    cdr << (ros_message->has_request ? true : false);
  }

  // Field name: guid
  {
    const rosidl_runtime_c__String * str = &ros_message->guid;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: user_group
  {
    const rosidl_runtime_c__String * str = &ros_message->user_group;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: question
  {
    const rosidl_runtime_c__String * str = &ros_message->question;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: options
  {
    size_t size = ros_message->options.size;
    auto array_ptr = ros_message->options.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: timeout
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->timeout, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _UserPrompt__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UserPrompt__ros_msg_type * ros_message = static_cast<_UserPrompt__ros_msg_type *>(untyped_ros_message);
  // Field name: has_request
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_request = tmp ? true : false;
  }

  // Field name: guid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->guid.data) {
      rosidl_runtime_c__String__init(&ros_message->guid);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->guid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'guid'\n");
      return false;
    }
  }

  // Field name: user_group
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->user_group.data) {
      rosidl_runtime_c__String__init(&ros_message->user_group);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->user_group,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'user_group'\n");
      return false;
    }
  }

  // Field name: question
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->question.data) {
      rosidl_runtime_c__String__init(&ros_message->question);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->question,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'question'\n");
      return false;
    }
  }

  // Field name: options
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->options.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->options);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->options, size)) {
      fprintf(stderr, "failed to create array for field 'options'");
      return false;
    }
    auto array_ptr = ros_message->options.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'options'\n");
        return false;
      }
    }
  }

  // Field name: timeout
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->timeout))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_mir_msgs__msg__UserPrompt(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UserPrompt__ros_msg_type * ros_message = static_cast<const _UserPrompt__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name has_request
  {
    size_t item_size = sizeof(ros_message->has_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name guid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->guid.size + 1);
  // field.name user_group
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->user_group.size + 1);
  // field.name question
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->question.size + 1);
  // field.name options
  {
    size_t array_size = ros_message->options.size;
    auto array_ptr = ros_message->options.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name timeout

  current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
    &(ros_message->timeout), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _UserPrompt__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mir_msgs__msg__UserPrompt(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_mir_msgs__msg__UserPrompt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: has_request
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: guid
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: user_group
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: question
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: options
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: timeout
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mir_msgs__msg__UserPrompt;
    is_plain =
      (
      offsetof(DataType, timeout) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _UserPrompt__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mir_msgs__msg__UserPrompt(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UserPrompt = {
  "mir_msgs::msg",
  "UserPrompt",
  _UserPrompt__cdr_serialize,
  _UserPrompt__cdr_deserialize,
  _UserPrompt__get_serialized_size,
  _UserPrompt__max_serialized_size
};

static rosidl_message_type_support_t _UserPrompt__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UserPrompt,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, UserPrompt)() {
  return &_UserPrompt__type_support;
}

#if defined(__cplusplus)
}
#endif
