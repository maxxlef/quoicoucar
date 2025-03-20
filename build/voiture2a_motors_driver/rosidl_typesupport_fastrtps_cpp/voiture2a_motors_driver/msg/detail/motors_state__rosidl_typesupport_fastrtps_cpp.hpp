// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from voiture2a_motors_driver:msg/MotorsState.idl
// generated code does not contain a copyright notice

#ifndef VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "voiture2a_motors_driver/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "voiture2a_motors_driver/msg/detail/motors_state__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace voiture2a_motors_driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voiture2a_motors_driver
cdr_serialize(
  const voiture2a_motors_driver::msg::MotorsState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voiture2a_motors_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  voiture2a_motors_driver::msg::MotorsState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voiture2a_motors_driver
get_serialized_size(
  const voiture2a_motors_driver::msg::MotorsState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voiture2a_motors_driver
max_serialized_size_MotorsState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace voiture2a_motors_driver

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voiture2a_motors_driver
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, voiture2a_motors_driver, msg, MotorsState)();

#ifdef __cplusplus
}
#endif

#endif  // VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
