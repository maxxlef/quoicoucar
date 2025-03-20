// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from icm20948_driver:msg/RawData.idl
// generated code does not contain a copyright notice
#include "icm20948_driver/msg/detail/raw_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `accel`
// Member `gyro`
// Member `mag`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
icm20948_driver__msg__RawData__init(icm20948_driver__msg__RawData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    icm20948_driver__msg__RawData__fini(msg);
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Vector3__init(&msg->accel)) {
    icm20948_driver__msg__RawData__fini(msg);
    return false;
  }
  // gyro
  if (!geometry_msgs__msg__Vector3__init(&msg->gyro)) {
    icm20948_driver__msg__RawData__fini(msg);
    return false;
  }
  // mag
  if (!geometry_msgs__msg__Vector3__init(&msg->mag)) {
    icm20948_driver__msg__RawData__fini(msg);
    return false;
  }
  // temp
  return true;
}

void
icm20948_driver__msg__RawData__fini(icm20948_driver__msg__RawData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // accel
  geometry_msgs__msg__Vector3__fini(&msg->accel);
  // gyro
  geometry_msgs__msg__Vector3__fini(&msg->gyro);
  // mag
  geometry_msgs__msg__Vector3__fini(&msg->mag);
  // temp
}

bool
icm20948_driver__msg__RawData__are_equal(const icm20948_driver__msg__RawData * lhs, const icm20948_driver__msg__RawData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->accel), &(rhs->accel)))
  {
    return false;
  }
  // gyro
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->gyro), &(rhs->gyro)))
  {
    return false;
  }
  // mag
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->mag), &(rhs->mag)))
  {
    return false;
  }
  // temp
  if (lhs->temp != rhs->temp) {
    return false;
  }
  return true;
}

bool
icm20948_driver__msg__RawData__copy(
  const icm20948_driver__msg__RawData * input,
  icm20948_driver__msg__RawData * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->accel), &(output->accel)))
  {
    return false;
  }
  // gyro
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->gyro), &(output->gyro)))
  {
    return false;
  }
  // mag
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->mag), &(output->mag)))
  {
    return false;
  }
  // temp
  output->temp = input->temp;
  return true;
}

icm20948_driver__msg__RawData *
icm20948_driver__msg__RawData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icm20948_driver__msg__RawData * msg = (icm20948_driver__msg__RawData *)allocator.allocate(sizeof(icm20948_driver__msg__RawData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(icm20948_driver__msg__RawData));
  bool success = icm20948_driver__msg__RawData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
icm20948_driver__msg__RawData__destroy(icm20948_driver__msg__RawData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    icm20948_driver__msg__RawData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
icm20948_driver__msg__RawData__Sequence__init(icm20948_driver__msg__RawData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icm20948_driver__msg__RawData * data = NULL;

  if (size) {
    data = (icm20948_driver__msg__RawData *)allocator.zero_allocate(size, sizeof(icm20948_driver__msg__RawData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = icm20948_driver__msg__RawData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        icm20948_driver__msg__RawData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
icm20948_driver__msg__RawData__Sequence__fini(icm20948_driver__msg__RawData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      icm20948_driver__msg__RawData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

icm20948_driver__msg__RawData__Sequence *
icm20948_driver__msg__RawData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icm20948_driver__msg__RawData__Sequence * array = (icm20948_driver__msg__RawData__Sequence *)allocator.allocate(sizeof(icm20948_driver__msg__RawData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = icm20948_driver__msg__RawData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
icm20948_driver__msg__RawData__Sequence__destroy(icm20948_driver__msg__RawData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    icm20948_driver__msg__RawData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
icm20948_driver__msg__RawData__Sequence__are_equal(const icm20948_driver__msg__RawData__Sequence * lhs, const icm20948_driver__msg__RawData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!icm20948_driver__msg__RawData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
icm20948_driver__msg__RawData__Sequence__copy(
  const icm20948_driver__msg__RawData__Sequence * input,
  icm20948_driver__msg__RawData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(icm20948_driver__msg__RawData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    icm20948_driver__msg__RawData * data =
      (icm20948_driver__msg__RawData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!icm20948_driver__msg__RawData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          icm20948_driver__msg__RawData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!icm20948_driver__msg__RawData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
