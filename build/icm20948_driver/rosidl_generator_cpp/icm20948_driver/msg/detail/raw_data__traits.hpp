// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from icm20948_driver:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__TRAITS_HPP_
#define ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "icm20948_driver/msg/detail/raw_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'accel'
// Member 'gyro'
// Member 'mag'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace icm20948_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const RawData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: accel
  {
    out << "accel: ";
    to_flow_style_yaml(msg.accel, out);
    out << ", ";
  }

  // member: gyro
  {
    out << "gyro: ";
    to_flow_style_yaml(msg.gyro, out);
    out << ", ";
  }

  // member: mag
  {
    out << "mag: ";
    to_flow_style_yaml(msg.mag, out);
    out << ", ";
  }

  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RawData & msg,
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

  // member: accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel:\n";
    to_block_style_yaml(msg.accel, out, indentation + 2);
  }

  // member: gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro:\n";
    to_block_style_yaml(msg.gyro, out, indentation + 2);
  }

  // member: mag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag:\n";
    to_block_style_yaml(msg.mag, out, indentation + 2);
  }

  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RawData & msg, bool use_flow_style = false)
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
  const icm20948_driver::msg::RawData & msg,
  std::ostream & out, size_t indentation = 0)
{
  icm20948_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use icm20948_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const icm20948_driver::msg::RawData & msg)
{
  return icm20948_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<icm20948_driver::msg::RawData>()
{
  return "icm20948_driver::msg::RawData";
}

template<>
inline const char * name<icm20948_driver::msg::RawData>()
{
  return "icm20948_driver/msg/RawData";
}

template<>
struct has_fixed_size<icm20948_driver::msg::RawData>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<icm20948_driver::msg::RawData>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<icm20948_driver::msg::RawData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__TRAITS_HPP_
