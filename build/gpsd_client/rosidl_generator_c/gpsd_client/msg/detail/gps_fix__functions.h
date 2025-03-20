// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gpsd_client:msg/GpsFix.idl
// generated code does not contain a copyright notice

#ifndef GPSD_CLIENT__MSG__DETAIL__GPS_FIX__FUNCTIONS_H_
#define GPSD_CLIENT__MSG__DETAIL__GPS_FIX__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gpsd_client/msg/rosidl_generator_c__visibility_control.h"

#include "gpsd_client/msg/detail/gps_fix__struct.h"

/// Initialize msg/GpsFix message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gpsd_client__msg__GpsFix
 * )) before or use
 * gpsd_client__msg__GpsFix__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gpsd_client
bool
gpsd_client__msg__GpsFix__init(gpsd_client__msg__GpsFix * msg);

/// Finalize msg/GpsFix message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpsd_client
void
gpsd_client__msg__GpsFix__fini(gpsd_client__msg__GpsFix * msg);

/// Create msg/GpsFix message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gpsd_client__msg__GpsFix__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpsd_client
gpsd_client__msg__GpsFix *
gpsd_client__msg__GpsFix__create();

/// Destroy msg/GpsFix message.
/**
 * It calls
 * gpsd_client__msg__GpsFix__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpsd_client
void
gpsd_client__msg__GpsFix__destroy(gpsd_client__msg__GpsFix * msg);

/// Check for msg/GpsFix message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpsd_client
bool
gpsd_client__msg__GpsFix__are_equal(const gpsd_client__msg__GpsFix * lhs, const gpsd_client__msg__GpsFix * rhs);

/// Copy a msg/GpsFix message.
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
ROSIDL_GENERATOR_C_PUBLIC_gpsd_client
bool
gpsd_client__msg__GpsFix__copy(
  const gpsd_client__msg__GpsFix * input,
  gpsd_client__msg__GpsFix * output);

/// Initialize array of msg/GpsFix messages.
/**
 * It allocates the memory for the number of elements and calls
 * gpsd_client__msg__GpsFix__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpsd_client
bool
gpsd_client__msg__GpsFix__Sequence__init(gpsd_client__msg__GpsFix__Sequence * array, size_t size);

/// Finalize array of msg/GpsFix messages.
/**
 * It calls
 * gpsd_client__msg__GpsFix__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpsd_client
void
gpsd_client__msg__GpsFix__Sequence__fini(gpsd_client__msg__GpsFix__Sequence * array);

/// Create array of msg/GpsFix messages.
/**
 * It allocates the memory for the array and calls
 * gpsd_client__msg__GpsFix__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpsd_client
gpsd_client__msg__GpsFix__Sequence *
gpsd_client__msg__GpsFix__Sequence__create(size_t size);

/// Destroy array of msg/GpsFix messages.
/**
 * It calls
 * gpsd_client__msg__GpsFix__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpsd_client
void
gpsd_client__msg__GpsFix__Sequence__destroy(gpsd_client__msg__GpsFix__Sequence * array);

/// Check for msg/GpsFix message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpsd_client
bool
gpsd_client__msg__GpsFix__Sequence__are_equal(const gpsd_client__msg__GpsFix__Sequence * lhs, const gpsd_client__msg__GpsFix__Sequence * rhs);

/// Copy an array of msg/GpsFix messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gpsd_client
bool
gpsd_client__msg__GpsFix__Sequence__copy(
  const gpsd_client__msg__GpsFix__Sequence * input,
  gpsd_client__msg__GpsFix__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GPSD_CLIENT__MSG__DETAIL__GPS_FIX__FUNCTIONS_H_
