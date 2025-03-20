// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from icm20948_driver:msg/DebugFusion.idl
// generated code does not contain a copyright notice

#ifndef ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__TRAITS_HPP_
#define ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "icm20948_driver/msg/detail/debug_fusion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace icm20948_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const DebugFusion & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: acceleration_error
  {
    out << "acceleration_error: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_error, out);
    out << ", ";
  }

  // member: accelerometer_ignored
  {
    out << "accelerometer_ignored: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerometer_ignored, out);
    out << ", ";
  }

  // member: acceleration_recovery_trigger
  {
    out << "acceleration_recovery_trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_recovery_trigger, out);
    out << ", ";
  }

  // member: magnetic_error
  {
    out << "magnetic_error: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetic_error, out);
    out << ", ";
  }

  // member: magnetometer_ignored
  {
    out << "magnetometer_ignored: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_ignored, out);
    out << ", ";
  }

  // member: magnetic_recovery_trigger
  {
    out << "magnetic_recovery_trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetic_recovery_trigger, out);
    out << ", ";
  }

  // member: initialising
  {
    out << "initialising: ";
    rosidl_generator_traits::value_to_yaml(msg.initialising, out);
    out << ", ";
  }

  // member: angular_rate_recovery
  {
    out << "angular_rate_recovery: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_rate_recovery, out);
    out << ", ";
  }

  // member: acceleration_recovery
  {
    out << "acceleration_recovery: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_recovery, out);
    out << ", ";
  }

  // member: magnetic_recovery
  {
    out << "magnetic_recovery: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetic_recovery, out);
    out << ", ";
  }

  // member: magnetometer_limit_reached
  {
    out << "magnetometer_limit_reached: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_limit_reached, out);
    out << ", ";
  }

  // member: magnetometer_data_skipped
  {
    out << "magnetometer_data_skipped: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_data_skipped, out);
    out << ", ";
  }

  // member: magnetometer_data_is_ready
  {
    out << "magnetometer_data_is_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_data_is_ready, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DebugFusion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: acceleration_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_error: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_error, out);
    out << "\n";
  }

  // member: accelerometer_ignored
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerometer_ignored: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerometer_ignored, out);
    out << "\n";
  }

  // member: acceleration_recovery_trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_recovery_trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_recovery_trigger, out);
    out << "\n";
  }

  // member: magnetic_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetic_error: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetic_error, out);
    out << "\n";
  }

  // member: magnetometer_ignored
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetometer_ignored: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_ignored, out);
    out << "\n";
  }

  // member: magnetic_recovery_trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetic_recovery_trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetic_recovery_trigger, out);
    out << "\n";
  }

  // member: initialising
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initialising: ";
    rosidl_generator_traits::value_to_yaml(msg.initialising, out);
    out << "\n";
  }

  // member: angular_rate_recovery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_rate_recovery: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_rate_recovery, out);
    out << "\n";
  }

  // member: acceleration_recovery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_recovery: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_recovery, out);
    out << "\n";
  }

  // member: magnetic_recovery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetic_recovery: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetic_recovery, out);
    out << "\n";
  }

  // member: magnetometer_limit_reached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetometer_limit_reached: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_limit_reached, out);
    out << "\n";
  }

  // member: magnetometer_data_skipped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetometer_data_skipped: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_data_skipped, out);
    out << "\n";
  }

  // member: magnetometer_data_is_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetometer_data_is_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_data_is_ready, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DebugFusion & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace icm20948_driver

namespace rosidl_generator_traits
{

[[deprecated("use icm20948_driver::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const icm20948_driver::msg::DebugFusion & msg,
  std::ostream & out, size_t indentation = 0)
{
  icm20948_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use icm20948_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const icm20948_driver::msg::DebugFusion & msg)
{
  return icm20948_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<icm20948_driver::msg::DebugFusion>()
{
  return "icm20948_driver::msg::DebugFusion";
}

template<>
inline const char * name<icm20948_driver::msg::DebugFusion>()
{
  return "icm20948_driver/msg/DebugFusion";
}

template<>
struct has_fixed_size<icm20948_driver::msg::DebugFusion>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<icm20948_driver::msg::DebugFusion>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<icm20948_driver::msg::DebugFusion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__TRAITS_HPP_
