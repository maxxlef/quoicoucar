// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from voiture2a_motors_driver:msg/Engine.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voiture2a_motors_driver/msg/engine.h"


#ifndef VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__STRUCT_H_
#define VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Engine in the package voiture2a_motors_driver.
typedef struct voiture2a_motors_driver__msg__Engine
{
  uint8_t servo;
  uint8_t engine;
} voiture2a_motors_driver__msg__Engine;

// Struct for a sequence of voiture2a_motors_driver__msg__Engine.
typedef struct voiture2a_motors_driver__msg__Engine__Sequence
{
  voiture2a_motors_driver__msg__Engine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voiture2a_motors_driver__msg__Engine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__STRUCT_H_
