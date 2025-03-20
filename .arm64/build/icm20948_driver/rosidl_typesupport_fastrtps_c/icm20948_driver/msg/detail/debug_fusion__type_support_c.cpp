// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from icm20948_driver:msg/DebugFusion.idl
// generated code does not contain a copyright notice
#include "icm20948_driver/msg/detail/debug_fusion__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "icm20948_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "icm20948_driver/msg/detail/debug_fusion__struct.h"
#include "icm20948_driver/msg/detail/debug_fusion__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_icm20948_driver
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_icm20948_driver
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_icm20948_driver
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _DebugFusion__ros_msg_type = icm20948_driver__msg__DebugFusion;

static bool _DebugFusion__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DebugFusion__ros_msg_type * ros_message = static_cast<const _DebugFusion__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: acceleration_error
  {
    cdr << ros_message->acceleration_error;
  }

  // Field name: accelerometer_ignored
  {
    cdr << (ros_message->accelerometer_ignored ? true : false);
  }

  // Field name: acceleration_recovery_trigger
  {
    cdr << ros_message->acceleration_recovery_trigger;
  }

  // Field name: magnetic_error
  {
    cdr << ros_message->magnetic_error;
  }

  // Field name: magnetometer_ignored
  {
    cdr << (ros_message->magnetometer_ignored ? true : false);
  }

  // Field name: magnetic_recovery_trigger
  {
    cdr << ros_message->magnetic_recovery_trigger;
  }

  // Field name: initialising
  {
    cdr << (ros_message->initialising ? true : false);
  }

  // Field name: angular_rate_recovery
  {
    cdr << (ros_message->angular_rate_recovery ? true : false);
  }

  // Field name: acceleration_recovery
  {
    cdr << (ros_message->acceleration_recovery ? true : false);
  }

  // Field name: magnetic_recovery
  {
    cdr << (ros_message->magnetic_recovery ? true : false);
  }

  // Field name: magnetometer_limit_reached
  {
    cdr << (ros_message->magnetometer_limit_reached ? true : false);
  }

  // Field name: magnetometer_data_skipped
  {
    cdr << (ros_message->magnetometer_data_skipped ? true : false);
  }

  // Field name: magnetometer_data_is_ready
  {
    cdr << (ros_message->magnetometer_data_is_ready ? true : false);
  }

  return true;
}

static bool _DebugFusion__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DebugFusion__ros_msg_type * ros_message = static_cast<_DebugFusion__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: acceleration_error
  {
    cdr >> ros_message->acceleration_error;
  }

  // Field name: accelerometer_ignored
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accelerometer_ignored = tmp ? true : false;
  }

  // Field name: acceleration_recovery_trigger
  {
    cdr >> ros_message->acceleration_recovery_trigger;
  }

  // Field name: magnetic_error
  {
    cdr >> ros_message->magnetic_error;
  }

  // Field name: magnetometer_ignored
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->magnetometer_ignored = tmp ? true : false;
  }

  // Field name: magnetic_recovery_trigger
  {
    cdr >> ros_message->magnetic_recovery_trigger;
  }

  // Field name: initialising
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->initialising = tmp ? true : false;
  }

  // Field name: angular_rate_recovery
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->angular_rate_recovery = tmp ? true : false;
  }

  // Field name: acceleration_recovery
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->acceleration_recovery = tmp ? true : false;
  }

  // Field name: magnetic_recovery
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->magnetic_recovery = tmp ? true : false;
  }

  // Field name: magnetometer_limit_reached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->magnetometer_limit_reached = tmp ? true : false;
  }

  // Field name: magnetometer_data_skipped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->magnetometer_data_skipped = tmp ? true : false;
  }

  // Field name: magnetometer_data_is_ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->magnetometer_data_is_ready = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_icm20948_driver
size_t get_serialized_size_icm20948_driver__msg__DebugFusion(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DebugFusion__ros_msg_type * ros_message = static_cast<const _DebugFusion__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name acceleration_error
  {
    size_t item_size = sizeof(ros_message->acceleration_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accelerometer_ignored
  {
    size_t item_size = sizeof(ros_message->accelerometer_ignored);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration_recovery_trigger
  {
    size_t item_size = sizeof(ros_message->acceleration_recovery_trigger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name magnetic_error
  {
    size_t item_size = sizeof(ros_message->magnetic_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name magnetometer_ignored
  {
    size_t item_size = sizeof(ros_message->magnetometer_ignored);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name magnetic_recovery_trigger
  {
    size_t item_size = sizeof(ros_message->magnetic_recovery_trigger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initialising
  {
    size_t item_size = sizeof(ros_message->initialising);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_rate_recovery
  {
    size_t item_size = sizeof(ros_message->angular_rate_recovery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration_recovery
  {
    size_t item_size = sizeof(ros_message->acceleration_recovery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name magnetic_recovery
  {
    size_t item_size = sizeof(ros_message->magnetic_recovery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name magnetometer_limit_reached
  {
    size_t item_size = sizeof(ros_message->magnetometer_limit_reached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name magnetometer_data_skipped
  {
    size_t item_size = sizeof(ros_message->magnetometer_data_skipped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name magnetometer_data_is_ready
  {
    size_t item_size = sizeof(ros_message->magnetometer_data_is_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DebugFusion__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_icm20948_driver__msg__DebugFusion(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_icm20948_driver
size_t max_serialized_size_icm20948_driver__msg__DebugFusion(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: acceleration_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accelerometer_ignored
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acceleration_recovery_trigger
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: magnetic_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: magnetometer_ignored
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: magnetic_recovery_trigger
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: initialising
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: angular_rate_recovery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acceleration_recovery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: magnetic_recovery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: magnetometer_limit_reached
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: magnetometer_data_skipped
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: magnetometer_data_is_ready
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = icm20948_driver__msg__DebugFusion;
    is_plain =
      (
      offsetof(DataType, magnetometer_data_is_ready) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DebugFusion__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_icm20948_driver__msg__DebugFusion(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DebugFusion = {
  "icm20948_driver::msg",
  "DebugFusion",
  _DebugFusion__cdr_serialize,
  _DebugFusion__cdr_deserialize,
  _DebugFusion__get_serialized_size,
  _DebugFusion__max_serialized_size
};

static rosidl_message_type_support_t _DebugFusion__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DebugFusion,
  get_message_typesupport_handle_function,
  &icm20948_driver__msg__DebugFusion__get_type_hash,
  &icm20948_driver__msg__DebugFusion__get_type_description,
  &icm20948_driver__msg__DebugFusion__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, icm20948_driver, msg, DebugFusion)() {
  return &_DebugFusion__type_support;
}

#if defined(__cplusplus)
}
#endif
