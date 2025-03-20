// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from voiture2a_motors_driver:msg/Engine.idl
// generated code does not contain a copyright notice
#include "voiture2a_motors_driver/msg/detail/engine__rosidl_typesupport_fastrtps_cpp.hpp"
#include "voiture2a_motors_driver/msg/detail/engine__struct.hpp"

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

namespace voiture2a_motors_driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voiture2a_motors_driver
cdr_serialize(
  const voiture2a_motors_driver::msg::Engine & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: servo
  cdr << ros_message.servo;
  // Member: engine
  cdr << ros_message.engine;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voiture2a_motors_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  voiture2a_motors_driver::msg::Engine & ros_message)
{
  // Member: servo
  cdr >> ros_message.servo;

  // Member: engine
  cdr >> ros_message.engine;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voiture2a_motors_driver
get_serialized_size(
  const voiture2a_motors_driver::msg::Engine & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: servo
  {
    size_t item_size = sizeof(ros_message.servo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine
  {
    size_t item_size = sizeof(ros_message.engine);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voiture2a_motors_driver
max_serialized_size_Engine(
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


  // Member: servo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engine
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
    using DataType = voiture2a_motors_driver::msg::Engine;
    is_plain =
      (
      offsetof(DataType, engine) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Engine__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const voiture2a_motors_driver::msg::Engine *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Engine__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<voiture2a_motors_driver::msg::Engine *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Engine__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const voiture2a_motors_driver::msg::Engine *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Engine__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Engine(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Engine__callbacks = {
  "voiture2a_motors_driver::msg",
  "Engine",
  _Engine__cdr_serialize,
  _Engine__cdr_deserialize,
  _Engine__get_serialized_size,
  _Engine__max_serialized_size
};

static rosidl_message_type_support_t _Engine__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Engine__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace voiture2a_motors_driver

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_voiture2a_motors_driver
const rosidl_message_type_support_t *
get_message_type_support_handle<voiture2a_motors_driver::msg::Engine>()
{
  return &voiture2a_motors_driver::msg::typesupport_fastrtps_cpp::_Engine__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, voiture2a_motors_driver, msg, Engine)() {
  return &voiture2a_motors_driver::msg::typesupport_fastrtps_cpp::_Engine__handle;
}

#ifdef __cplusplus
}
#endif
