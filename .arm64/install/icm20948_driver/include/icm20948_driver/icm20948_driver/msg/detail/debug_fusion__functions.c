// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from icm20948_driver:msg/DebugFusion.idl
// generated code does not contain a copyright notice
#include "icm20948_driver/msg/detail/debug_fusion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
icm20948_driver__msg__DebugFusion__init(icm20948_driver__msg__DebugFusion * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    icm20948_driver__msg__DebugFusion__fini(msg);
    return false;
  }
  // acceleration_error
  // accelerometer_ignored
  // acceleration_recovery_trigger
  // magnetic_error
  // magnetometer_ignored
  // magnetic_recovery_trigger
  // initialising
  // angular_rate_recovery
  // acceleration_recovery
  // magnetic_recovery
  // magnetometer_limit_reached
  // magnetometer_data_skipped
  // magnetometer_data_is_ready
  return true;
}

void
icm20948_driver__msg__DebugFusion__fini(icm20948_driver__msg__DebugFusion * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // acceleration_error
  // accelerometer_ignored
  // acceleration_recovery_trigger
  // magnetic_error
  // magnetometer_ignored
  // magnetic_recovery_trigger
  // initialising
  // angular_rate_recovery
  // acceleration_recovery
  // magnetic_recovery
  // magnetometer_limit_reached
  // magnetometer_data_skipped
  // magnetometer_data_is_ready
}

bool
icm20948_driver__msg__DebugFusion__are_equal(const icm20948_driver__msg__DebugFusion * lhs, const icm20948_driver__msg__DebugFusion * rhs)
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
  // acceleration_error
  if (lhs->acceleration_error != rhs->acceleration_error) {
    return false;
  }
  // accelerometer_ignored
  if (lhs->accelerometer_ignored != rhs->accelerometer_ignored) {
    return false;
  }
  // acceleration_recovery_trigger
  if (lhs->acceleration_recovery_trigger != rhs->acceleration_recovery_trigger) {
    return false;
  }
  // magnetic_error
  if (lhs->magnetic_error != rhs->magnetic_error) {
    return false;
  }
  // magnetometer_ignored
  if (lhs->magnetometer_ignored != rhs->magnetometer_ignored) {
    return false;
  }
  // magnetic_recovery_trigger
  if (lhs->magnetic_recovery_trigger != rhs->magnetic_recovery_trigger) {
    return false;
  }
  // initialising
  if (lhs->initialising != rhs->initialising) {
    return false;
  }
  // angular_rate_recovery
  if (lhs->angular_rate_recovery != rhs->angular_rate_recovery) {
    return false;
  }
  // acceleration_recovery
  if (lhs->acceleration_recovery != rhs->acceleration_recovery) {
    return false;
  }
  // magnetic_recovery
  if (lhs->magnetic_recovery != rhs->magnetic_recovery) {
    return false;
  }
  // magnetometer_limit_reached
  if (lhs->magnetometer_limit_reached != rhs->magnetometer_limit_reached) {
    return false;
  }
  // magnetometer_data_skipped
  if (lhs->magnetometer_data_skipped != rhs->magnetometer_data_skipped) {
    return false;
  }
  // magnetometer_data_is_ready
  if (lhs->magnetometer_data_is_ready != rhs->magnetometer_data_is_ready) {
    return false;
  }
  return true;
}

bool
icm20948_driver__msg__DebugFusion__copy(
  const icm20948_driver__msg__DebugFusion * input,
  icm20948_driver__msg__DebugFusion * output)
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
  // acceleration_error
  output->acceleration_error = input->acceleration_error;
  // accelerometer_ignored
  output->accelerometer_ignored = input->accelerometer_ignored;
  // acceleration_recovery_trigger
  output->acceleration_recovery_trigger = input->acceleration_recovery_trigger;
  // magnetic_error
  output->magnetic_error = input->magnetic_error;
  // magnetometer_ignored
  output->magnetometer_ignored = input->magnetometer_ignored;
  // magnetic_recovery_trigger
  output->magnetic_recovery_trigger = input->magnetic_recovery_trigger;
  // initialising
  output->initialising = input->initialising;
  // angular_rate_recovery
  output->angular_rate_recovery = input->angular_rate_recovery;
  // acceleration_recovery
  output->acceleration_recovery = input->acceleration_recovery;
  // magnetic_recovery
  output->magnetic_recovery = input->magnetic_recovery;
  // magnetometer_limit_reached
  output->magnetometer_limit_reached = input->magnetometer_limit_reached;
  // magnetometer_data_skipped
  output->magnetometer_data_skipped = input->magnetometer_data_skipped;
  // magnetometer_data_is_ready
  output->magnetometer_data_is_ready = input->magnetometer_data_is_ready;
  return true;
}

icm20948_driver__msg__DebugFusion *
icm20948_driver__msg__DebugFusion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icm20948_driver__msg__DebugFusion * msg = (icm20948_driver__msg__DebugFusion *)allocator.allocate(sizeof(icm20948_driver__msg__DebugFusion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(icm20948_driver__msg__DebugFusion));
  bool success = icm20948_driver__msg__DebugFusion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
icm20948_driver__msg__DebugFusion__destroy(icm20948_driver__msg__DebugFusion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    icm20948_driver__msg__DebugFusion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
icm20948_driver__msg__DebugFusion__Sequence__init(icm20948_driver__msg__DebugFusion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icm20948_driver__msg__DebugFusion * data = NULL;

  if (size) {
    data = (icm20948_driver__msg__DebugFusion *)allocator.zero_allocate(size, sizeof(icm20948_driver__msg__DebugFusion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = icm20948_driver__msg__DebugFusion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        icm20948_driver__msg__DebugFusion__fini(&data[i - 1]);
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
icm20948_driver__msg__DebugFusion__Sequence__fini(icm20948_driver__msg__DebugFusion__Sequence * array)
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
      icm20948_driver__msg__DebugFusion__fini(&array->data[i]);
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

icm20948_driver__msg__DebugFusion__Sequence *
icm20948_driver__msg__DebugFusion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icm20948_driver__msg__DebugFusion__Sequence * array = (icm20948_driver__msg__DebugFusion__Sequence *)allocator.allocate(sizeof(icm20948_driver__msg__DebugFusion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = icm20948_driver__msg__DebugFusion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
icm20948_driver__msg__DebugFusion__Sequence__destroy(icm20948_driver__msg__DebugFusion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    icm20948_driver__msg__DebugFusion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
icm20948_driver__msg__DebugFusion__Sequence__are_equal(const icm20948_driver__msg__DebugFusion__Sequence * lhs, const icm20948_driver__msg__DebugFusion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!icm20948_driver__msg__DebugFusion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
icm20948_driver__msg__DebugFusion__Sequence__copy(
  const icm20948_driver__msg__DebugFusion__Sequence * input,
  icm20948_driver__msg__DebugFusion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(icm20948_driver__msg__DebugFusion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    icm20948_driver__msg__DebugFusion * data =
      (icm20948_driver__msg__DebugFusion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!icm20948_driver__msg__DebugFusion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          icm20948_driver__msg__DebugFusion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!icm20948_driver__msg__DebugFusion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
