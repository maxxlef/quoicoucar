// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from voiture2a_motors_driver:msg/Engine.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voiture2a_motors_driver/msg/engine.hpp"


#ifndef VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__TRAITS_HPP_
#define VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "voiture2a_motors_driver/msg/detail/engine__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace voiture2a_motors_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const Engine & msg,
  std::ostream & out)
{
  out << "{";
  // member: servo
  {
    out << "servo: ";
    rosidl_generator_traits::value_to_yaml(msg.servo, out);
    out << ", ";
  }

  // member: engine
  {
    out << "engine: ";
    rosidl_generator_traits::value_to_yaml(msg.engine, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Engine & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: servo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo: ";
    rosidl_generator_traits::value_to_yaml(msg.servo, out);
    out << "\n";
  }

  // member: engine
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine: ";
    rosidl_generator_traits::value_to_yaml(msg.engine, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Engine & msg, bool use_flow_style = false)
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

}  // namespace voiture2a_motors_driver

namespace rosidl_generator_traits
{

[[deprecated("use voiture2a_motors_driver::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voiture2a_motors_driver::msg::Engine & msg,
  std::ostream & out, size_t indentation = 0)
{
  voiture2a_motors_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voiture2a_motors_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const voiture2a_motors_driver::msg::Engine & msg)
{
  return voiture2a_motors_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<voiture2a_motors_driver::msg::Engine>()
{
  return "voiture2a_motors_driver::msg::Engine";
}

template<>
inline const char * name<voiture2a_motors_driver::msg::Engine>()
{
  return "voiture2a_motors_driver/msg/Engine";
}

template<>
struct has_fixed_size<voiture2a_motors_driver::msg::Engine>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<voiture2a_motors_driver::msg::Engine>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<voiture2a_motors_driver::msg::Engine>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__TRAITS_HPP_
