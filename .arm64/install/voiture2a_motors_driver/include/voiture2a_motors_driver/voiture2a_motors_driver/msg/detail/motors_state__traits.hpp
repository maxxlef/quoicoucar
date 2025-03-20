// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from voiture2a_motors_driver:msg/MotorsState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voiture2a_motors_driver/msg/motors_state.hpp"


#ifndef VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__TRAITS_HPP_
#define VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "voiture2a_motors_driver/msg/detail/motors_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace voiture2a_motors_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorsState & msg,
  std::ostream & out)
{
  out << "{";
  // member: pwm_value
  {
    if (msg.pwm_value.size() == 0) {
      out << "pwm_value: []";
    } else {
      out << "pwm_value: [";
      size_t pending_items = msg.pwm_value.size();
      for (auto item : msg.pwm_value) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: channels
  {
    if (msg.channels.size() == 0) {
      out << "channels: []";
    } else {
      out << "channels: [";
      size_t pending_items = msg.channels.size();
      for (auto item : msg.channels) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: failsafe
  {
    out << "failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.failsafe, out);
    out << ", ";
  }

  // member: lost
  {
    out << "lost: ";
    rosidl_generator_traits::value_to_yaml(msg.lost, out);
    out << ", ";
  }

  // member: battery
  {
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorsState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pwm_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pwm_value.size() == 0) {
      out << "pwm_value: []\n";
    } else {
      out << "pwm_value:\n";
      for (auto item : msg.pwm_value) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.channels.size() == 0) {
      out << "channels: []\n";
    } else {
      out << "channels:\n";
      for (auto item : msg.channels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.failsafe, out);
    out << "\n";
  }

  // member: lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lost: ";
    rosidl_generator_traits::value_to_yaml(msg.lost, out);
    out << "\n";
  }

  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorsState & msg, bool use_flow_style = false)
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
  const voiture2a_motors_driver::msg::MotorsState & msg,
  std::ostream & out, size_t indentation = 0)
{
  voiture2a_motors_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voiture2a_motors_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const voiture2a_motors_driver::msg::MotorsState & msg)
{
  return voiture2a_motors_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<voiture2a_motors_driver::msg::MotorsState>()
{
  return "voiture2a_motors_driver::msg::MotorsState";
}

template<>
inline const char * name<voiture2a_motors_driver::msg::MotorsState>()
{
  return "voiture2a_motors_driver/msg/MotorsState";
}

template<>
struct has_fixed_size<voiture2a_motors_driver::msg::MotorsState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<voiture2a_motors_driver::msg::MotorsState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<voiture2a_motors_driver::msg::MotorsState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__TRAITS_HPP_
