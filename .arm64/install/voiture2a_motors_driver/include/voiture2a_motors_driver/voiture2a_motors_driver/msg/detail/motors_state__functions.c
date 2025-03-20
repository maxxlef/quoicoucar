// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from voiture2a_motors_driver:msg/MotorsState.idl
// generated code does not contain a copyright notice
#include "voiture2a_motors_driver/msg/detail/motors_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
voiture2a_motors_driver__msg__MotorsState__init(voiture2a_motors_driver__msg__MotorsState * msg)
{
  if (!msg) {
    return false;
  }
  // pwm_value
  // channels
  // failsafe
  // lost
  // battery
  return true;
}

void
voiture2a_motors_driver__msg__MotorsState__fini(voiture2a_motors_driver__msg__MotorsState * msg)
{
  if (!msg) {
    return;
  }
  // pwm_value
  // channels
  // failsafe
  // lost
  // battery
}

bool
voiture2a_motors_driver__msg__MotorsState__are_equal(const voiture2a_motors_driver__msg__MotorsState * lhs, const voiture2a_motors_driver__msg__MotorsState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pwm_value
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->pwm_value[i] != rhs->pwm_value[i]) {
      return false;
    }
  }
  // channels
  for (size_t i = 0; i < 18; ++i) {
    if (lhs->channels[i] != rhs->channels[i]) {
      return false;
    }
  }
  // failsafe
  if (lhs->failsafe != rhs->failsafe) {
    return false;
  }
  // lost
  if (lhs->lost != rhs->lost) {
    return false;
  }
  // battery
  if (lhs->battery != rhs->battery) {
    return false;
  }
  return true;
}

bool
voiture2a_motors_driver__msg__MotorsState__copy(
  const voiture2a_motors_driver__msg__MotorsState * input,
  voiture2a_motors_driver__msg__MotorsState * output)
{
  if (!input || !output) {
    return false;
  }
  // pwm_value
  for (size_t i = 0; i < 2; ++i) {
    output->pwm_value[i] = input->pwm_value[i];
  }
  // channels
  for (size_t i = 0; i < 18; ++i) {
    output->channels[i] = input->channels[i];
  }
  // failsafe
  output->failsafe = input->failsafe;
  // lost
  output->lost = input->lost;
  // battery
  output->battery = input->battery;
  return true;
}

voiture2a_motors_driver__msg__MotorsState *
voiture2a_motors_driver__msg__MotorsState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voiture2a_motors_driver__msg__MotorsState * msg = (voiture2a_motors_driver__msg__MotorsState *)allocator.allocate(sizeof(voiture2a_motors_driver__msg__MotorsState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voiture2a_motors_driver__msg__MotorsState));
  bool success = voiture2a_motors_driver__msg__MotorsState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voiture2a_motors_driver__msg__MotorsState__destroy(voiture2a_motors_driver__msg__MotorsState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voiture2a_motors_driver__msg__MotorsState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voiture2a_motors_driver__msg__MotorsState__Sequence__init(voiture2a_motors_driver__msg__MotorsState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voiture2a_motors_driver__msg__MotorsState * data = NULL;

  if (size) {
    data = (voiture2a_motors_driver__msg__MotorsState *)allocator.zero_allocate(size, sizeof(voiture2a_motors_driver__msg__MotorsState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voiture2a_motors_driver__msg__MotorsState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voiture2a_motors_driver__msg__MotorsState__fini(&data[i - 1]);
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
voiture2a_motors_driver__msg__MotorsState__Sequence__fini(voiture2a_motors_driver__msg__MotorsState__Sequence * array)
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
      voiture2a_motors_driver__msg__MotorsState__fini(&array->data[i]);
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

voiture2a_motors_driver__msg__MotorsState__Sequence *
voiture2a_motors_driver__msg__MotorsState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voiture2a_motors_driver__msg__MotorsState__Sequence * array = (voiture2a_motors_driver__msg__MotorsState__Sequence *)allocator.allocate(sizeof(voiture2a_motors_driver__msg__MotorsState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voiture2a_motors_driver__msg__MotorsState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voiture2a_motors_driver__msg__MotorsState__Sequence__destroy(voiture2a_motors_driver__msg__MotorsState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voiture2a_motors_driver__msg__MotorsState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voiture2a_motors_driver__msg__MotorsState__Sequence__are_equal(const voiture2a_motors_driver__msg__MotorsState__Sequence * lhs, const voiture2a_motors_driver__msg__MotorsState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voiture2a_motors_driver__msg__MotorsState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voiture2a_motors_driver__msg__MotorsState__Sequence__copy(
  const voiture2a_motors_driver__msg__MotorsState__Sequence * input,
  voiture2a_motors_driver__msg__MotorsState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voiture2a_motors_driver__msg__MotorsState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voiture2a_motors_driver__msg__MotorsState * data =
      (voiture2a_motors_driver__msg__MotorsState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voiture2a_motors_driver__msg__MotorsState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voiture2a_motors_driver__msg__MotorsState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voiture2a_motors_driver__msg__MotorsState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
