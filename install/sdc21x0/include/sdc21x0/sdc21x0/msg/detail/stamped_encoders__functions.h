// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sdc21x0:msg/StampedEncoders.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__FUNCTIONS_H_
#define SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sdc21x0/msg/rosidl_generator_c__visibility_control.h"

#include "sdc21x0/msg/detail/stamped_encoders__struct.h"

/// Initialize msg/StampedEncoders message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sdc21x0__msg__StampedEncoders
 * )) before or use
 * sdc21x0__msg__StampedEncoders__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__msg__StampedEncoders__init(sdc21x0__msg__StampedEncoders * msg);

/// Finalize msg/StampedEncoders message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__msg__StampedEncoders__fini(sdc21x0__msg__StampedEncoders * msg);

/// Create msg/StampedEncoders message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sdc21x0__msg__StampedEncoders__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
sdc21x0__msg__StampedEncoders *
sdc21x0__msg__StampedEncoders__create();

/// Destroy msg/StampedEncoders message.
/**
 * It calls
 * sdc21x0__msg__StampedEncoders__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__msg__StampedEncoders__destroy(sdc21x0__msg__StampedEncoders * msg);

/// Check for msg/StampedEncoders message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__msg__StampedEncoders__are_equal(const sdc21x0__msg__StampedEncoders * lhs, const sdc21x0__msg__StampedEncoders * rhs);

/// Copy a msg/StampedEncoders message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__msg__StampedEncoders__copy(
  const sdc21x0__msg__StampedEncoders * input,
  sdc21x0__msg__StampedEncoders * output);

/// Initialize array of msg/StampedEncoders messages.
/**
 * It allocates the memory for the number of elements and calls
 * sdc21x0__msg__StampedEncoders__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__msg__StampedEncoders__Sequence__init(sdc21x0__msg__StampedEncoders__Sequence * array, size_t size);

/// Finalize array of msg/StampedEncoders messages.
/**
 * It calls
 * sdc21x0__msg__StampedEncoders__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__msg__StampedEncoders__Sequence__fini(sdc21x0__msg__StampedEncoders__Sequence * array);

/// Create array of msg/StampedEncoders messages.
/**
 * It allocates the memory for the array and calls
 * sdc21x0__msg__StampedEncoders__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
sdc21x0__msg__StampedEncoders__Sequence *
sdc21x0__msg__StampedEncoders__Sequence__create(size_t size);

/// Destroy array of msg/StampedEncoders messages.
/**
 * It calls
 * sdc21x0__msg__StampedEncoders__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__msg__StampedEncoders__Sequence__destroy(sdc21x0__msg__StampedEncoders__Sequence * array);

/// Check for msg/StampedEncoders message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__msg__StampedEncoders__Sequence__are_equal(const sdc21x0__msg__StampedEncoders__Sequence * lhs, const sdc21x0__msg__StampedEncoders__Sequence * rhs);

/// Copy an array of msg/StampedEncoders messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__msg__StampedEncoders__Sequence__copy(
  const sdc21x0__msg__StampedEncoders__Sequence * input,
  sdc21x0__msg__StampedEncoders__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__FUNCTIONS_H_
