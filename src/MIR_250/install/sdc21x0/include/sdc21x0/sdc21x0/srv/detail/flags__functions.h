// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sdc21x0:srv/Flags.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__SRV__DETAIL__FLAGS__FUNCTIONS_H_
#define SDC21X0__SRV__DETAIL__FLAGS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sdc21x0/msg/rosidl_generator_c__visibility_control.h"

#include "sdc21x0/srv/detail/flags__struct.h"

/// Initialize srv/Flags message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sdc21x0__srv__Flags_Request
 * )) before or use
 * sdc21x0__srv__Flags_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Request__init(sdc21x0__srv__Flags_Request * msg);

/// Finalize srv/Flags message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Request__fini(sdc21x0__srv__Flags_Request * msg);

/// Create srv/Flags message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sdc21x0__srv__Flags_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
sdc21x0__srv__Flags_Request *
sdc21x0__srv__Flags_Request__create();

/// Destroy srv/Flags message.
/**
 * It calls
 * sdc21x0__srv__Flags_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Request__destroy(sdc21x0__srv__Flags_Request * msg);

/// Check for srv/Flags message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Request__are_equal(const sdc21x0__srv__Flags_Request * lhs, const sdc21x0__srv__Flags_Request * rhs);

/// Copy a srv/Flags message.
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
sdc21x0__srv__Flags_Request__copy(
  const sdc21x0__srv__Flags_Request * input,
  sdc21x0__srv__Flags_Request * output);

/// Initialize array of srv/Flags messages.
/**
 * It allocates the memory for the number of elements and calls
 * sdc21x0__srv__Flags_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Request__Sequence__init(sdc21x0__srv__Flags_Request__Sequence * array, size_t size);

/// Finalize array of srv/Flags messages.
/**
 * It calls
 * sdc21x0__srv__Flags_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Request__Sequence__fini(sdc21x0__srv__Flags_Request__Sequence * array);

/// Create array of srv/Flags messages.
/**
 * It allocates the memory for the array and calls
 * sdc21x0__srv__Flags_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
sdc21x0__srv__Flags_Request__Sequence *
sdc21x0__srv__Flags_Request__Sequence__create(size_t size);

/// Destroy array of srv/Flags messages.
/**
 * It calls
 * sdc21x0__srv__Flags_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Request__Sequence__destroy(sdc21x0__srv__Flags_Request__Sequence * array);

/// Check for srv/Flags message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Request__Sequence__are_equal(const sdc21x0__srv__Flags_Request__Sequence * lhs, const sdc21x0__srv__Flags_Request__Sequence * rhs);

/// Copy an array of srv/Flags messages.
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
sdc21x0__srv__Flags_Request__Sequence__copy(
  const sdc21x0__srv__Flags_Request__Sequence * input,
  sdc21x0__srv__Flags_Request__Sequence * output);

/// Initialize srv/Flags message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sdc21x0__srv__Flags_Response
 * )) before or use
 * sdc21x0__srv__Flags_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Response__init(sdc21x0__srv__Flags_Response * msg);

/// Finalize srv/Flags message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Response__fini(sdc21x0__srv__Flags_Response * msg);

/// Create srv/Flags message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sdc21x0__srv__Flags_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
sdc21x0__srv__Flags_Response *
sdc21x0__srv__Flags_Response__create();

/// Destroy srv/Flags message.
/**
 * It calls
 * sdc21x0__srv__Flags_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Response__destroy(sdc21x0__srv__Flags_Response * msg);

/// Check for srv/Flags message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Response__are_equal(const sdc21x0__srv__Flags_Response * lhs, const sdc21x0__srv__Flags_Response * rhs);

/// Copy a srv/Flags message.
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
sdc21x0__srv__Flags_Response__copy(
  const sdc21x0__srv__Flags_Response * input,
  sdc21x0__srv__Flags_Response * output);

/// Initialize array of srv/Flags messages.
/**
 * It allocates the memory for the number of elements and calls
 * sdc21x0__srv__Flags_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Response__Sequence__init(sdc21x0__srv__Flags_Response__Sequence * array, size_t size);

/// Finalize array of srv/Flags messages.
/**
 * It calls
 * sdc21x0__srv__Flags_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Response__Sequence__fini(sdc21x0__srv__Flags_Response__Sequence * array);

/// Create array of srv/Flags messages.
/**
 * It allocates the memory for the array and calls
 * sdc21x0__srv__Flags_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
sdc21x0__srv__Flags_Response__Sequence *
sdc21x0__srv__Flags_Response__Sequence__create(size_t size);

/// Destroy array of srv/Flags messages.
/**
 * It calls
 * sdc21x0__srv__Flags_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Response__Sequence__destroy(sdc21x0__srv__Flags_Response__Sequence * array);

/// Check for srv/Flags message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Response__Sequence__are_equal(const sdc21x0__srv__Flags_Response__Sequence * lhs, const sdc21x0__srv__Flags_Response__Sequence * rhs);

/// Copy an array of srv/Flags messages.
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
sdc21x0__srv__Flags_Response__Sequence__copy(
  const sdc21x0__srv__Flags_Response__Sequence * input,
  sdc21x0__srv__Flags_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SDC21X0__SRV__DETAIL__FLAGS__FUNCTIONS_H_
