// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from voiture2a_motors_driver:msg/MotorsState.idl
// generated code does not contain a copyright notice

#ifndef VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__STRUCT_H_
#define VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorsState in the package voiture2a_motors_driver.
/**
  * Values of the PWM send to the servo and the engine (in 5*ms)
 */
typedef struct voiture2a_motors_driver__msg__MotorsState
{
  uint16_t pwm_value[2];
  /// Values of the Remote Control channel (SBUS protocol)
  uint16_t channels[18];
  /// Additional values of the Remote Control
  uint8_t failsafe;
  uint8_t lost;
  /// Battery voltage
  float battery;
} voiture2a_motors_driver__msg__MotorsState;

// Struct for a sequence of voiture2a_motors_driver__msg__MotorsState.
typedef struct voiture2a_motors_driver__msg__MotorsState__Sequence
{
  voiture2a_motors_driver__msg__MotorsState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voiture2a_motors_driver__msg__MotorsState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__STRUCT_H_
