// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gpsd_client:msg/GpsFix.idl
// generated code does not contain a copyright notice

#ifndef GPSD_CLIENT__MSG__DETAIL__GPS_FIX__TRAITS_HPP_
#define GPSD_CLIENT__MSG__DETAIL__GPS_FIX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gpsd_client/msg/detail/gps_fix__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace gpsd_client
{

namespace msg
{

inline void to_flow_style_yaml(
  const GpsFix & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: track
  {
    out << "track: ";
    rosidl_generator_traits::value_to_yaml(msg.track, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: gdop
  {
    out << "gdop: ";
    rosidl_generator_traits::value_to_yaml(msg.gdop, out);
    out << ", ";
  }

  // member: pdop
  {
    out << "pdop: ";
    rosidl_generator_traits::value_to_yaml(msg.pdop, out);
    out << ", ";
  }

  // member: hdop
  {
    out << "hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.hdop, out);
    out << ", ";
  }

  // member: vdop
  {
    out << "vdop: ";
    rosidl_generator_traits::value_to_yaml(msg.vdop, out);
    out << ", ";
  }

  // member: tdop
  {
    out << "tdop: ";
    rosidl_generator_traits::value_to_yaml(msg.tdop, out);
    out << ", ";
  }

  // member: err
  {
    out << "err: ";
    rosidl_generator_traits::value_to_yaml(msg.err, out);
    out << ", ";
  }

  // member: err_horz
  {
    out << "err_horz: ";
    rosidl_generator_traits::value_to_yaml(msg.err_horz, out);
    out << ", ";
  }

  // member: err_vert
  {
    out << "err_vert: ";
    rosidl_generator_traits::value_to_yaml(msg.err_vert, out);
    out << ", ";
  }

  // member: err_track
  {
    out << "err_track: ";
    rosidl_generator_traits::value_to_yaml(msg.err_track, out);
    out << ", ";
  }

  // member: err_speed
  {
    out << "err_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.err_speed, out);
    out << ", ";
  }

  // member: err_time
  {
    out << "err_time: ";
    rosidl_generator_traits::value_to_yaml(msg.err_time, out);
    out << ", ";
  }

  // member: satellites_visible
  {
    out << "satellites_visible: ";
    rosidl_generator_traits::value_to_yaml(msg.satellites_visible, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpsFix & msg,
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: track
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track: ";
    rosidl_generator_traits::value_to_yaml(msg.track, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: gdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gdop: ";
    rosidl_generator_traits::value_to_yaml(msg.gdop, out);
    out << "\n";
  }

  // member: pdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pdop: ";
    rosidl_generator_traits::value_to_yaml(msg.pdop, out);
    out << "\n";
  }

  // member: hdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.hdop, out);
    out << "\n";
  }

  // member: vdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vdop: ";
    rosidl_generator_traits::value_to_yaml(msg.vdop, out);
    out << "\n";
  }

  // member: tdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tdop: ";
    rosidl_generator_traits::value_to_yaml(msg.tdop, out);
    out << "\n";
  }

  // member: err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err: ";
    rosidl_generator_traits::value_to_yaml(msg.err, out);
    out << "\n";
  }

  // member: err_horz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_horz: ";
    rosidl_generator_traits::value_to_yaml(msg.err_horz, out);
    out << "\n";
  }

  // member: err_vert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_vert: ";
    rosidl_generator_traits::value_to_yaml(msg.err_vert, out);
    out << "\n";
  }

  // member: err_track
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_track: ";
    rosidl_generator_traits::value_to_yaml(msg.err_track, out);
    out << "\n";
  }

  // member: err_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.err_speed, out);
    out << "\n";
  }

  // member: err_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_time: ";
    rosidl_generator_traits::value_to_yaml(msg.err_time, out);
    out << "\n";
  }

  // member: satellites_visible
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "satellites_visible: ";
    rosidl_generator_traits::value_to_yaml(msg.satellites_visible, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpsFix & msg, bool use_flow_style = false)
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

}  // namespace gpsd_client

namespace rosidl_generator_traits
{

[[deprecated("use gpsd_client::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gpsd_client::msg::GpsFix & msg,
  std::ostream & out, size_t indentation = 0)
{
  gpsd_client::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gpsd_client::msg::to_yaml() instead")]]
inline std::string to_yaml(const gpsd_client::msg::GpsFix & msg)
{
  return gpsd_client::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gpsd_client::msg::GpsFix>()
{
  return "gpsd_client::msg::GpsFix";
}

template<>
inline const char * name<gpsd_client::msg::GpsFix>()
{
  return "gpsd_client/msg/GpsFix";
}

template<>
struct has_fixed_size<gpsd_client::msg::GpsFix>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<gpsd_client::msg::GpsFix>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<gpsd_client::msg::GpsFix>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GPSD_CLIENT__MSG__DETAIL__GPS_FIX__TRAITS_HPP_
