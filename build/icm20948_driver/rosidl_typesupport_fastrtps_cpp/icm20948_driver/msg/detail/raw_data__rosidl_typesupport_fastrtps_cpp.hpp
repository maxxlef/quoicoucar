// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from icm20948_driver:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "icm20948_driver/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "icm20948_driver/msg/detail/raw_data__struct.hpp"

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

namespace icm20948_driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icm20948_driver
cdr_serialize(
  const icm20948_driver::msg::RawData & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icm20948_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  icm20948_driver::msg::RawData & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icm20948_driver
get_serialized_size(
  const icm20948_driver::msg::RawData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icm20948_driver
max_serialized_size_RawData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace icm20948_driver

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icm20948_driver
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, icm20948_driver, msg, RawData)();

#ifdef __cplusplus
}
#endif

#endif  // ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
