// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from icm20948_driver:msg/RPY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "icm20948_driver/msg/rpy.hpp"


#ifndef ICM20948_DRIVER__MSG__DETAIL__RPY__TRAITS_HPP_
#define ICM20948_DRIVER__MSG__DETAIL__RPY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "icm20948_driver/msg/detail/rpy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace icm20948_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const RPY & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RPY & msg,
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

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RPY & msg, bool use_flow_style = false)
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
  const icm20948_driver::msg::RPY & msg,
  std::ostream & out, size_t indentation = 0)
{
  icm20948_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use icm20948_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const icm20948_driver::msg::RPY & msg)
{
  return icm20948_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<icm20948_driver::msg::RPY>()
{
  return "icm20948_driver::msg::RPY";
}

template<>
inline const char * name<icm20948_driver::msg::RPY>()
{
  return "icm20948_driver/msg/RPY";
}

template<>
struct has_fixed_size<icm20948_driver::msg::RPY>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<icm20948_driver::msg::RPY>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<icm20948_driver::msg::RPY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ICM20948_DRIVER__MSG__DETAIL__RPY__TRAITS_HPP_
