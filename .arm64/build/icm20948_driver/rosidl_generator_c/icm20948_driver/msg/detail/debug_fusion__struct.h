// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from icm20948_driver:msg/DebugFusion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "icm20948_driver/msg/debug_fusion.h"


#ifndef ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__STRUCT_H_
#define ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/DebugFusion in the package icm20948_driver.
typedef struct icm20948_driver__msg__DebugFusion
{
  std_msgs__msg__Header header;
  float acceleration_error;
  bool accelerometer_ignored;
  float acceleration_recovery_trigger;
  float magnetic_error;
  bool magnetometer_ignored;
  float magnetic_recovery_trigger;
  bool initialising;
  bool angular_rate_recovery;
  bool acceleration_recovery;
  bool magnetic_recovery;
  /// Magnetometer
  bool magnetometer_limit_reached;
  bool magnetometer_data_skipped;
  bool magnetometer_data_is_ready;
} icm20948_driver__msg__DebugFusion;

// Struct for a sequence of icm20948_driver__msg__DebugFusion.
typedef struct icm20948_driver__msg__DebugFusion__Sequence
{
  icm20948_driver__msg__DebugFusion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} icm20948_driver__msg__DebugFusion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__STRUCT_H_
