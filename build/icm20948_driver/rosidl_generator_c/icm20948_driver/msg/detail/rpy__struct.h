// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from icm20948_driver:msg/RPY.idl
// generated code does not contain a copyright notice

#ifndef ICM20948_DRIVER__MSG__DETAIL__RPY__STRUCT_H_
#define ICM20948_DRIVER__MSG__DETAIL__RPY__STRUCT_H_

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
// Member 'acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/RPY in the package icm20948_driver.
typedef struct icm20948_driver__msg__RPY
{
  std_msgs__msg__Header header;
  float roll;
  float pitch;
  float yaw;
  geometry_msgs__msg__Vector3 acceleration;
} icm20948_driver__msg__RPY;

// Struct for a sequence of icm20948_driver__msg__RPY.
typedef struct icm20948_driver__msg__RPY__Sequence
{
  icm20948_driver__msg__RPY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} icm20948_driver__msg__RPY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ICM20948_DRIVER__MSG__DETAIL__RPY__STRUCT_H_
