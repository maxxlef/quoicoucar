// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from icm20948_driver:msg/RPY.idl
// generated code does not contain a copyright notice
#include "icm20948_driver/msg/detail/rpy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `acceleration`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
icm20948_driver__msg__RPY__init(icm20948_driver__msg__RPY * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    icm20948_driver__msg__RPY__fini(msg);
    return false;
  }
  // roll
  // pitch
  // yaw
  // acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration)) {
    icm20948_driver__msg__RPY__fini(msg);
    return false;
  }
  return true;
}

void
icm20948_driver__msg__RPY__fini(icm20948_driver__msg__RPY * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // roll
  // pitch
  // yaw
  // acceleration
  geometry_msgs__msg__Vector3__fini(&msg->acceleration);
}

bool
icm20948_driver__msg__RPY__are_equal(const icm20948_driver__msg__RPY * lhs, const icm20948_driver__msg__RPY * rhs)
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
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  return true;
}

bool
icm20948_driver__msg__RPY__copy(
  const icm20948_driver__msg__RPY * input,
  icm20948_driver__msg__RPY * output)
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
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  return true;
}

icm20948_driver__msg__RPY *
icm20948_driver__msg__RPY__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icm20948_driver__msg__RPY * msg = (icm20948_driver__msg__RPY *)allocator.allocate(sizeof(icm20948_driver__msg__RPY), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(icm20948_driver__msg__RPY));
  bool success = icm20948_driver__msg__RPY__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
icm20948_driver__msg__RPY__destroy(icm20948_driver__msg__RPY * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    icm20948_driver__msg__RPY__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
icm20948_driver__msg__RPY__Sequence__init(icm20948_driver__msg__RPY__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icm20948_driver__msg__RPY * data = NULL;

  if (size) {
    data = (icm20948_driver__msg__RPY *)allocator.zero_allocate(size, sizeof(icm20948_driver__msg__RPY), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = icm20948_driver__msg__RPY__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        icm20948_driver__msg__RPY__fini(&data[i - 1]);
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
icm20948_driver__msg__RPY__Sequence__fini(icm20948_driver__msg__RPY__Sequence * array)
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
      icm20948_driver__msg__RPY__fini(&array->data[i]);
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

icm20948_driver__msg__RPY__Sequence *
icm20948_driver__msg__RPY__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icm20948_driver__msg__RPY__Sequence * array = (icm20948_driver__msg__RPY__Sequence *)allocator.allocate(sizeof(icm20948_driver__msg__RPY__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = icm20948_driver__msg__RPY__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
icm20948_driver__msg__RPY__Sequence__destroy(icm20948_driver__msg__RPY__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    icm20948_driver__msg__RPY__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
icm20948_driver__msg__RPY__Sequence__are_equal(const icm20948_driver__msg__RPY__Sequence * lhs, const icm20948_driver__msg__RPY__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!icm20948_driver__msg__RPY__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
icm20948_driver__msg__RPY__Sequence__copy(
  const icm20948_driver__msg__RPY__Sequence * input,
  icm20948_driver__msg__RPY__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(icm20948_driver__msg__RPY);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    icm20948_driver__msg__RPY * data =
      (icm20948_driver__msg__RPY *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!icm20948_driver__msg__RPY__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          icm20948_driver__msg__RPY__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!icm20948_driver__msg__RPY__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
