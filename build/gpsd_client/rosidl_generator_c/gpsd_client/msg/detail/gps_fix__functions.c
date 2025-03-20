// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gpsd_client:msg/GpsFix.idl
// generated code does not contain a copyright notice
#include "gpsd_client/msg/detail/gps_fix__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
gpsd_client__msg__GpsFix__init(gpsd_client__msg__GpsFix * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gpsd_client__msg__GpsFix__fini(msg);
    return false;
  }
  // mode
  // status
  // latitude
  // longitude
  // altitude
  // track
  // speed
  // time
  // gdop
  // pdop
  // hdop
  // vdop
  // tdop
  // err
  // err_horz
  // err_vert
  // err_track
  // err_speed
  // err_time
  // satellites_visible
  return true;
}

void
gpsd_client__msg__GpsFix__fini(gpsd_client__msg__GpsFix * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mode
  // status
  // latitude
  // longitude
  // altitude
  // track
  // speed
  // time
  // gdop
  // pdop
  // hdop
  // vdop
  // tdop
  // err
  // err_horz
  // err_vert
  // err_track
  // err_speed
  // err_time
  // satellites_visible
}

bool
gpsd_client__msg__GpsFix__are_equal(const gpsd_client__msg__GpsFix * lhs, const gpsd_client__msg__GpsFix * rhs)
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
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // track
  if (lhs->track != rhs->track) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // gdop
  if (lhs->gdop != rhs->gdop) {
    return false;
  }
  // pdop
  if (lhs->pdop != rhs->pdop) {
    return false;
  }
  // hdop
  if (lhs->hdop != rhs->hdop) {
    return false;
  }
  // vdop
  if (lhs->vdop != rhs->vdop) {
    return false;
  }
  // tdop
  if (lhs->tdop != rhs->tdop) {
    return false;
  }
  // err
  if (lhs->err != rhs->err) {
    return false;
  }
  // err_horz
  if (lhs->err_horz != rhs->err_horz) {
    return false;
  }
  // err_vert
  if (lhs->err_vert != rhs->err_vert) {
    return false;
  }
  // err_track
  if (lhs->err_track != rhs->err_track) {
    return false;
  }
  // err_speed
  if (lhs->err_speed != rhs->err_speed) {
    return false;
  }
  // err_time
  if (lhs->err_time != rhs->err_time) {
    return false;
  }
  // satellites_visible
  if (lhs->satellites_visible != rhs->satellites_visible) {
    return false;
  }
  return true;
}

bool
gpsd_client__msg__GpsFix__copy(
  const gpsd_client__msg__GpsFix * input,
  gpsd_client__msg__GpsFix * output)
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
  // mode
  output->mode = input->mode;
  // status
  output->status = input->status;
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // altitude
  output->altitude = input->altitude;
  // track
  output->track = input->track;
  // speed
  output->speed = input->speed;
  // time
  output->time = input->time;
  // gdop
  output->gdop = input->gdop;
  // pdop
  output->pdop = input->pdop;
  // hdop
  output->hdop = input->hdop;
  // vdop
  output->vdop = input->vdop;
  // tdop
  output->tdop = input->tdop;
  // err
  output->err = input->err;
  // err_horz
  output->err_horz = input->err_horz;
  // err_vert
  output->err_vert = input->err_vert;
  // err_track
  output->err_track = input->err_track;
  // err_speed
  output->err_speed = input->err_speed;
  // err_time
  output->err_time = input->err_time;
  // satellites_visible
  output->satellites_visible = input->satellites_visible;
  return true;
}

gpsd_client__msg__GpsFix *
gpsd_client__msg__GpsFix__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpsd_client__msg__GpsFix * msg = (gpsd_client__msg__GpsFix *)allocator.allocate(sizeof(gpsd_client__msg__GpsFix), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpsd_client__msg__GpsFix));
  bool success = gpsd_client__msg__GpsFix__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpsd_client__msg__GpsFix__destroy(gpsd_client__msg__GpsFix * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpsd_client__msg__GpsFix__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpsd_client__msg__GpsFix__Sequence__init(gpsd_client__msg__GpsFix__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpsd_client__msg__GpsFix * data = NULL;

  if (size) {
    data = (gpsd_client__msg__GpsFix *)allocator.zero_allocate(size, sizeof(gpsd_client__msg__GpsFix), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpsd_client__msg__GpsFix__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpsd_client__msg__GpsFix__fini(&data[i - 1]);
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
gpsd_client__msg__GpsFix__Sequence__fini(gpsd_client__msg__GpsFix__Sequence * array)
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
      gpsd_client__msg__GpsFix__fini(&array->data[i]);
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

gpsd_client__msg__GpsFix__Sequence *
gpsd_client__msg__GpsFix__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpsd_client__msg__GpsFix__Sequence * array = (gpsd_client__msg__GpsFix__Sequence *)allocator.allocate(sizeof(gpsd_client__msg__GpsFix__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpsd_client__msg__GpsFix__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpsd_client__msg__GpsFix__Sequence__destroy(gpsd_client__msg__GpsFix__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpsd_client__msg__GpsFix__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpsd_client__msg__GpsFix__Sequence__are_equal(const gpsd_client__msg__GpsFix__Sequence * lhs, const gpsd_client__msg__GpsFix__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpsd_client__msg__GpsFix__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpsd_client__msg__GpsFix__Sequence__copy(
  const gpsd_client__msg__GpsFix__Sequence * input,
  gpsd_client__msg__GpsFix__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpsd_client__msg__GpsFix);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpsd_client__msg__GpsFix * data =
      (gpsd_client__msg__GpsFix *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpsd_client__msg__GpsFix__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpsd_client__msg__GpsFix__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpsd_client__msg__GpsFix__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
