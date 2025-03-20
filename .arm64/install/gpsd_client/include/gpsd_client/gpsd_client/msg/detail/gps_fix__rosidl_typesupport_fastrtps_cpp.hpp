// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from gpsd_client:msg/GpsFix.idl
// generated code does not contain a copyright notice

#ifndef GPSD_CLIENT__MSG__DETAIL__GPS_FIX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define GPSD_CLIENT__MSG__DETAIL__GPS_FIX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "gpsd_client/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "gpsd_client/msg/detail/gps_fix__struct.hpp"

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

namespace gpsd_client
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpsd_client
cdr_serialize(
  const gpsd_client::msg::GpsFix & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpsd_client
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gpsd_client::msg::GpsFix & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpsd_client
get_serialized_size(
  const gpsd_client::msg::GpsFix & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpsd_client
max_serialized_size_GpsFix(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace gpsd_client

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpsd_client
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpsd_client, msg, GpsFix)();

#ifdef __cplusplus
}
#endif

#endif  // GPSD_CLIENT__MSG__DETAIL__GPS_FIX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
