// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from icm20948_driver:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__STRUCT_H_
#define ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__STRUCT_H_

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
// Member 'accel'
// Member 'gyro'
// Member 'mag'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/RawData in the package icm20948_driver.
typedef struct icm20948_driver__msg__RawData
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 accel;
  geometry_msgs__msg__Vector3 gyro;
  geometry_msgs__msg__Vector3 mag;
  float temp;
} icm20948_driver__msg__RawData;

// Struct for a sequence of icm20948_driver__msg__RawData.
typedef struct icm20948_driver__msg__RawData__Sequence
{
  icm20948_driver__msg__RawData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} icm20948_driver__msg__RawData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__STRUCT_H_
