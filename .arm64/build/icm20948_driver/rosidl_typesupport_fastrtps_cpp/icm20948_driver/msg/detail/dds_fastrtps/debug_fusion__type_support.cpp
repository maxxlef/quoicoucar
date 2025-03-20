// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from icm20948_driver:msg/DebugFusion.idl
// generated code does not contain a copyright notice
#include "icm20948_driver/msg/detail/debug_fusion__rosidl_typesupport_fastrtps_cpp.hpp"
#include "icm20948_driver/msg/detail/debug_fusion__functions.h"
#include "icm20948_driver/msg/detail/debug_fusion__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace icm20948_driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icm20948_driver
cdr_serialize(
  const icm20948_driver::msg::DebugFusion & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: acceleration_error
  cdr << ros_message.acceleration_error;
  // Member: accelerometer_ignored
  cdr << (ros_message.accelerometer_ignored ? true : false);
  // Member: acceleration_recovery_trigger
  cdr << ros_message.acceleration_recovery_trigger;
  // Member: magnetic_error
  cdr << ros_message.magnetic_error;
  // Member: magnetometer_ignored
  cdr << (ros_message.magnetometer_ignored ? true : false);
  // Member: magnetic_recovery_trigger
  cdr << ros_message.magnetic_recovery_trigger;
  // Member: initialising
  cdr << (ros_message.initialising ? true : false);
  // Member: angular_rate_recovery
  cdr << (ros_message.angular_rate_recovery ? true : false);
  // Member: acceleration_recovery
  cdr << (ros_message.acceleration_recovery ? true : false);
  // Member: magnetic_recovery
  cdr << (ros_message.magnetic_recovery ? true : false);
  // Member: magnetometer_limit_reached
  cdr << (ros_message.magnetometer_limit_reached ? true : false);
  // Member: magnetometer_data_skipped
  cdr << (ros_message.magnetometer_data_skipped ? true : false);
  // Member: magnetometer_data_is_ready
  cdr << (ros_message.magnetometer_data_is_ready ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icm20948_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  icm20948_driver::msg::DebugFusion & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: acceleration_error
  cdr >> ros_message.acceleration_error;

  // Member: accelerometer_ignored
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accelerometer_ignored = tmp ? true : false;
  }

  // Member: acceleration_recovery_trigger
  cdr >> ros_message.acceleration_recovery_trigger;

  // Member: magnetic_error
  cdr >> ros_message.magnetic_error;

  // Member: magnetometer_ignored
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.magnetometer_ignored = tmp ? true : false;
  }

  // Member: magnetic_recovery_trigger
  cdr >> ros_message.magnetic_recovery_trigger;

  // Member: initialising
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.initialising = tmp ? true : false;
  }

  // Member: angular_rate_recovery
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.angular_rate_recovery = tmp ? true : false;
  }

  // Member: acceleration_recovery
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.acceleration_recovery = tmp ? true : false;
  }

  // Member: magnetic_recovery
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.magnetic_recovery = tmp ? true : false;
  }

  // Member: magnetometer_limit_reached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.magnetometer_limit_reached = tmp ? true : false;
  }

  // Member: magnetometer_data_skipped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.magnetometer_data_skipped = tmp ? true : false;
  }

  // Member: magnetometer_data_is_ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.magnetometer_data_is_ready = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icm20948_driver
get_serialized_size(
  const icm20948_driver::msg::DebugFusion & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: acceleration_error
  {
    size_t item_size = sizeof(ros_message.acceleration_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accelerometer_ignored
  {
    size_t item_size = sizeof(ros_message.accelerometer_ignored);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acceleration_recovery_trigger
  {
    size_t item_size = sizeof(ros_message.acceleration_recovery_trigger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: magnetic_error
  {
    size_t item_size = sizeof(ros_message.magnetic_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: magnetometer_ignored
  {
    size_t item_size = sizeof(ros_message.magnetometer_ignored);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: magnetic_recovery_trigger
  {
    size_t item_size = sizeof(ros_message.magnetic_recovery_trigger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: initialising
  {
    size_t item_size = sizeof(ros_message.initialising);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_rate_recovery
  {
    size_t item_size = sizeof(ros_message.angular_rate_recovery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acceleration_recovery
  {
    size_t item_size = sizeof(ros_message.acceleration_recovery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: magnetic_recovery
  {
    size_t item_size = sizeof(ros_message.magnetic_recovery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: magnetometer_limit_reached
  {
    size_t item_size = sizeof(ros_message.magnetometer_limit_reached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: magnetometer_data_skipped
  {
    size_t item_size = sizeof(ros_message.magnetometer_data_skipped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: magnetometer_data_is_ready
  {
    size_t item_size = sizeof(ros_message.magnetometer_data_is_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icm20948_driver
max_serialized_size_DebugFusion(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: acceleration_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accelerometer_ignored
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acceleration_recovery_trigger
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: magnetic_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: magnetometer_ignored
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: magnetic_recovery_trigger
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: initialising
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: angular_rate_recovery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acceleration_recovery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: magnetic_recovery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: magnetometer_limit_reached
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: magnetometer_data_skipped
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: magnetometer_data_is_ready
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
    using DataType = icm20948_driver::msg::DebugFusion;
    is_plain =
      (
      offsetof(DataType, magnetometer_data_is_ready) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DebugFusion__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const icm20948_driver::msg::DebugFusion *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DebugFusion__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<icm20948_driver::msg::DebugFusion *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DebugFusion__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const icm20948_driver::msg::DebugFusion *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DebugFusion__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DebugFusion(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DebugFusion__callbacks = {
  "icm20948_driver::msg",
  "DebugFusion",
  _DebugFusion__cdr_serialize,
  _DebugFusion__cdr_deserialize,
  _DebugFusion__get_serialized_size,
  _DebugFusion__max_serialized_size
};

static rosidl_message_type_support_t _DebugFusion__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DebugFusion__callbacks,
  get_message_typesupport_handle_function,
  &icm20948_driver__msg__DebugFusion__get_type_hash,
  &icm20948_driver__msg__DebugFusion__get_type_description,
  &icm20948_driver__msg__DebugFusion__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace icm20948_driver

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_icm20948_driver
const rosidl_message_type_support_t *
get_message_type_support_handle<icm20948_driver::msg::DebugFusion>()
{
  return &icm20948_driver::msg::typesupport_fastrtps_cpp::_DebugFusion__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, icm20948_driver, msg, DebugFusion)() {
  return &icm20948_driver::msg::typesupport_fastrtps_cpp::_DebugFusion__handle;
}

#ifdef __cplusplus
}
#endif
