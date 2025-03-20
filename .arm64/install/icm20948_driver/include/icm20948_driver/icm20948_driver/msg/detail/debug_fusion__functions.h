// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from icm20948_driver:msg/DebugFusion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "icm20948_driver/msg/debug_fusion.h"


#ifndef ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__FUNCTIONS_H_
#define ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "icm20948_driver/msg/rosidl_generator_c__visibility_control.h"

#include "icm20948_driver/msg/detail/debug_fusion__struct.h"

/// Initialize msg/DebugFusion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * icm20948_driver__msg__DebugFusion
 * )) before or use
 * icm20948_driver__msg__DebugFusion__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
bool
icm20948_driver__msg__DebugFusion__init(icm20948_driver__msg__DebugFusion * msg);

/// Finalize msg/DebugFusion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
void
icm20948_driver__msg__DebugFusion__fini(icm20948_driver__msg__DebugFusion * msg);

/// Create msg/DebugFusion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * icm20948_driver__msg__DebugFusion__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
icm20948_driver__msg__DebugFusion *
icm20948_driver__msg__DebugFusion__create();

/// Destroy msg/DebugFusion message.
/**
 * It calls
 * icm20948_driver__msg__DebugFusion__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
void
icm20948_driver__msg__DebugFusion__destroy(icm20948_driver__msg__DebugFusion * msg);

/// Check for msg/DebugFusion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
bool
icm20948_driver__msg__DebugFusion__are_equal(const icm20948_driver__msg__DebugFusion * lhs, const icm20948_driver__msg__DebugFusion * rhs);

/// Copy a msg/DebugFusion message.
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
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
bool
icm20948_driver__msg__DebugFusion__copy(
  const icm20948_driver__msg__DebugFusion * input,
  icm20948_driver__msg__DebugFusion * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
const rosidl_type_hash_t *
icm20948_driver__msg__DebugFusion__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
const rosidl_runtime_c__type_description__TypeDescription *
icm20948_driver__msg__DebugFusion__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
const rosidl_runtime_c__type_description__TypeSource *
icm20948_driver__msg__DebugFusion__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
const rosidl_runtime_c__type_description__TypeSource__Sequence *
icm20948_driver__msg__DebugFusion__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/DebugFusion messages.
/**
 * It allocates the memory for the number of elements and calls
 * icm20948_driver__msg__DebugFusion__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
bool
icm20948_driver__msg__DebugFusion__Sequence__init(icm20948_driver__msg__DebugFusion__Sequence * array, size_t size);

/// Finalize array of msg/DebugFusion messages.
/**
 * It calls
 * icm20948_driver__msg__DebugFusion__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
void
icm20948_driver__msg__DebugFusion__Sequence__fini(icm20948_driver__msg__DebugFusion__Sequence * array);

/// Create array of msg/DebugFusion messages.
/**
 * It allocates the memory for the array and calls
 * icm20948_driver__msg__DebugFusion__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
icm20948_driver__msg__DebugFusion__Sequence *
icm20948_driver__msg__DebugFusion__Sequence__create(size_t size);

/// Destroy array of msg/DebugFusion messages.
/**
 * It calls
 * icm20948_driver__msg__DebugFusion__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
void
icm20948_driver__msg__DebugFusion__Sequence__destroy(icm20948_driver__msg__DebugFusion__Sequence * array);

/// Check for msg/DebugFusion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
bool
icm20948_driver__msg__DebugFusion__Sequence__are_equal(const icm20948_driver__msg__DebugFusion__Sequence * lhs, const icm20948_driver__msg__DebugFusion__Sequence * rhs);

/// Copy an array of msg/DebugFusion messages.
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
ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
bool
icm20948_driver__msg__DebugFusion__Sequence__copy(
  const icm20948_driver__msg__DebugFusion__Sequence * input,
  icm20948_driver__msg__DebugFusion__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__FUNCTIONS_H_
