// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from voiture2a_motors_driver:msg/MotorsState.idl
// generated code does not contain a copyright notice
#include "voiture2a_motors_driver/msg/detail/motors_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "voiture2a_motors_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "voiture2a_motors_driver/msg/detail/motors_state__struct.h"
#include "voiture2a_motors_driver/msg/detail/motors_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MotorsState__ros_msg_type = voiture2a_motors_driver__msg__MotorsState;

static bool _MotorsState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotorsState__ros_msg_type * ros_message = static_cast<const _MotorsState__ros_msg_type *>(untyped_ros_message);
  // Field name: pwm_value
  {
    size_t size = 2;
    auto array_ptr = ros_message->pwm_value;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: channels
  {
    size_t size = 18;
    auto array_ptr = ros_message->channels;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: failsafe
  {
    cdr << ros_message->failsafe;
  }

  // Field name: lost
  {
    cdr << ros_message->lost;
  }

  // Field name: battery
  {
    cdr << ros_message->battery;
  }

  return true;
}

static bool _MotorsState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotorsState__ros_msg_type * ros_message = static_cast<_MotorsState__ros_msg_type *>(untyped_ros_message);
  // Field name: pwm_value
  {
    size_t size = 2;
    auto array_ptr = ros_message->pwm_value;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: channels
  {
    size_t size = 18;
    auto array_ptr = ros_message->channels;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: failsafe
  {
    cdr >> ros_message->failsafe;
  }

  // Field name: lost
  {
    cdr >> ros_message->lost;
  }

  // Field name: battery
  {
    cdr >> ros_message->battery;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voiture2a_motors_driver
size_t get_serialized_size_voiture2a_motors_driver__msg__MotorsState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorsState__ros_msg_type * ros_message = static_cast<const _MotorsState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pwm_value
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->pwm_value;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name channels
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->channels;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name failsafe
  {
    size_t item_size = sizeof(ros_message->failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lost
  {
    size_t item_size = sizeof(ros_message->lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery
  {
    size_t item_size = sizeof(ros_message->battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotorsState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_voiture2a_motors_driver__msg__MotorsState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voiture2a_motors_driver
size_t max_serialized_size_voiture2a_motors_driver__msg__MotorsState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: pwm_value
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: channels
  {
    size_t array_size = 18;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: failsafe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = voiture2a_motors_driver__msg__MotorsState;
    is_plain =
      (
      offsetof(DataType, battery) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MotorsState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_voiture2a_motors_driver__msg__MotorsState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotorsState = {
  "voiture2a_motors_driver::msg",
  "MotorsState",
  _MotorsState__cdr_serialize,
  _MotorsState__cdr_deserialize,
  _MotorsState__get_serialized_size,
  _MotorsState__max_serialized_size
};

static rosidl_message_type_support_t _MotorsState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorsState,
  get_message_typesupport_handle_function,
  &voiture2a_motors_driver__msg__MotorsState__get_type_hash,
  &voiture2a_motors_driver__msg__MotorsState__get_type_description,
  &voiture2a_motors_driver__msg__MotorsState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voiture2a_motors_driver, msg, MotorsState)() {
  return &_MotorsState__type_support;
}

#if defined(__cplusplus)
}
#endif
