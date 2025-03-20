// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from voiture2a_motors_driver:msg/Engine.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voiture2a_motors_driver/msg/engine.h"


#ifndef VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__FUNCTIONS_H_
#define VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__FUNCTIONS_H_

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
#include "voiture2a_motors_driver/msg/rosidl_generator_c__visibility_control.h"

#include "voiture2a_motors_driver/msg/detail/engine__struct.h"

/// Initialize msg/Engine message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * voiture2a_motors_driver__msg__Engine
 * )) before or use
 * voiture2a_motors_driver__msg__Engine__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
bool
voiture2a_motors_driver__msg__Engine__init(voiture2a_motors_driver__msg__Engine * msg);

/// Finalize msg/Engine message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
void
voiture2a_motors_driver__msg__Engine__fini(voiture2a_motors_driver__msg__Engine * msg);

/// Create msg/Engine message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * voiture2a_motors_driver__msg__Engine__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
voiture2a_motors_driver__msg__Engine *
voiture2a_motors_driver__msg__Engine__create();

/// Destroy msg/Engine message.
/**
 * It calls
 * voiture2a_motors_driver__msg__Engine__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
void
voiture2a_motors_driver__msg__Engine__destroy(voiture2a_motors_driver__msg__Engine * msg);

/// Check for msg/Engine message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
bool
voiture2a_motors_driver__msg__Engine__are_equal(const voiture2a_motors_driver__msg__Engine * lhs, const voiture2a_motors_driver__msg__Engine * rhs);

/// Copy a msg/Engine message.
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
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
bool
voiture2a_motors_driver__msg__Engine__copy(
  const voiture2a_motors_driver__msg__Engine * input,
  voiture2a_motors_driver__msg__Engine * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
const rosidl_type_hash_t *
voiture2a_motors_driver__msg__Engine__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
const rosidl_runtime_c__type_description__TypeDescription *
voiture2a_motors_driver__msg__Engine__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
const rosidl_runtime_c__type_description__TypeSource *
voiture2a_motors_driver__msg__Engine__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
const rosidl_runtime_c__type_description__TypeSource__Sequence *
voiture2a_motors_driver__msg__Engine__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Engine messages.
/**
 * It allocates the memory for the number of elements and calls
 * voiture2a_motors_driver__msg__Engine__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
bool
voiture2a_motors_driver__msg__Engine__Sequence__init(voiture2a_motors_driver__msg__Engine__Sequence * array, size_t size);

/// Finalize array of msg/Engine messages.
/**
 * It calls
 * voiture2a_motors_driver__msg__Engine__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
void
voiture2a_motors_driver__msg__Engine__Sequence__fini(voiture2a_motors_driver__msg__Engine__Sequence * array);

/// Create array of msg/Engine messages.
/**
 * It allocates the memory for the array and calls
 * voiture2a_motors_driver__msg__Engine__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
voiture2a_motors_driver__msg__Engine__Sequence *
voiture2a_motors_driver__msg__Engine__Sequence__create(size_t size);

/// Destroy array of msg/Engine messages.
/**
 * It calls
 * voiture2a_motors_driver__msg__Engine__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
void
voiture2a_motors_driver__msg__Engine__Sequence__destroy(voiture2a_motors_driver__msg__Engine__Sequence * array);

/// Check for msg/Engine message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
bool
voiture2a_motors_driver__msg__Engine__Sequence__are_equal(const voiture2a_motors_driver__msg__Engine__Sequence * lhs, const voiture2a_motors_driver__msg__Engine__Sequence * rhs);

/// Copy an array of msg/Engine messages.
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
ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
bool
voiture2a_motors_driver__msg__Engine__Sequence__copy(
  const voiture2a_motors_driver__msg__Engine__Sequence * input,
  voiture2a_motors_driver__msg__Engine__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__FUNCTIONS_H_
