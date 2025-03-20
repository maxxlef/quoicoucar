// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpsd_client:msg/GpsFix.idl
// generated code does not contain a copyright notice

#ifndef GPSD_CLIENT__MSG__DETAIL__GPS_FIX__BUILDER_HPP_
#define GPSD_CLIENT__MSG__DETAIL__GPS_FIX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gpsd_client/msg/detail/gps_fix__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gpsd_client
{

namespace msg
{

namespace builder
{

class Init_GpsFix_satellites_visible
{
public:
  explicit Init_GpsFix_satellites_visible(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  ::gpsd_client::msg::GpsFix satellites_visible(::gpsd_client::msg::GpsFix::_satellites_visible_type arg)
  {
    msg_.satellites_visible = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_err_time
{
public:
  explicit Init_GpsFix_err_time(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_satellites_visible err_time(::gpsd_client::msg::GpsFix::_err_time_type arg)
  {
    msg_.err_time = std::move(arg);
    return Init_GpsFix_satellites_visible(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_err_speed
{
public:
  explicit Init_GpsFix_err_speed(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_err_time err_speed(::gpsd_client::msg::GpsFix::_err_speed_type arg)
  {
    msg_.err_speed = std::move(arg);
    return Init_GpsFix_err_time(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_err_track
{
public:
  explicit Init_GpsFix_err_track(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_err_speed err_track(::gpsd_client::msg::GpsFix::_err_track_type arg)
  {
    msg_.err_track = std::move(arg);
    return Init_GpsFix_err_speed(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_err_vert
{
public:
  explicit Init_GpsFix_err_vert(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_err_track err_vert(::gpsd_client::msg::GpsFix::_err_vert_type arg)
  {
    msg_.err_vert = std::move(arg);
    return Init_GpsFix_err_track(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_err_horz
{
public:
  explicit Init_GpsFix_err_horz(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_err_vert err_horz(::gpsd_client::msg::GpsFix::_err_horz_type arg)
  {
    msg_.err_horz = std::move(arg);
    return Init_GpsFix_err_vert(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_err
{
public:
  explicit Init_GpsFix_err(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_err_horz err(::gpsd_client::msg::GpsFix::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_GpsFix_err_horz(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_tdop
{
public:
  explicit Init_GpsFix_tdop(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_err tdop(::gpsd_client::msg::GpsFix::_tdop_type arg)
  {
    msg_.tdop = std::move(arg);
    return Init_GpsFix_err(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_vdop
{
public:
  explicit Init_GpsFix_vdop(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_tdop vdop(::gpsd_client::msg::GpsFix::_vdop_type arg)
  {
    msg_.vdop = std::move(arg);
    return Init_GpsFix_tdop(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_hdop
{
public:
  explicit Init_GpsFix_hdop(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_vdop hdop(::gpsd_client::msg::GpsFix::_hdop_type arg)
  {
    msg_.hdop = std::move(arg);
    return Init_GpsFix_vdop(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_pdop
{
public:
  explicit Init_GpsFix_pdop(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_hdop pdop(::gpsd_client::msg::GpsFix::_pdop_type arg)
  {
    msg_.pdop = std::move(arg);
    return Init_GpsFix_hdop(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_gdop
{
public:
  explicit Init_GpsFix_gdop(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_pdop gdop(::gpsd_client::msg::GpsFix::_gdop_type arg)
  {
    msg_.gdop = std::move(arg);
    return Init_GpsFix_pdop(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_time
{
public:
  explicit Init_GpsFix_time(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_gdop time(::gpsd_client::msg::GpsFix::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_GpsFix_gdop(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_speed
{
public:
  explicit Init_GpsFix_speed(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_time speed(::gpsd_client::msg::GpsFix::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_GpsFix_time(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_track
{
public:
  explicit Init_GpsFix_track(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_speed track(::gpsd_client::msg::GpsFix::_track_type arg)
  {
    msg_.track = std::move(arg);
    return Init_GpsFix_speed(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_altitude
{
public:
  explicit Init_GpsFix_altitude(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_track altitude(::gpsd_client::msg::GpsFix::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_GpsFix_track(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_longitude
{
public:
  explicit Init_GpsFix_longitude(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_altitude longitude(::gpsd_client::msg::GpsFix::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_GpsFix_altitude(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_latitude
{
public:
  explicit Init_GpsFix_latitude(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_longitude latitude(::gpsd_client::msg::GpsFix::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GpsFix_longitude(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_status
{
public:
  explicit Init_GpsFix_status(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_latitude status(::gpsd_client::msg::GpsFix::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GpsFix_latitude(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_mode
{
public:
  explicit Init_GpsFix_mode(::gpsd_client::msg::GpsFix & msg)
  : msg_(msg)
  {}
  Init_GpsFix_status mode(::gpsd_client::msg::GpsFix::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_GpsFix_status(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

class Init_GpsFix_header
{
public:
  Init_GpsFix_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpsFix_mode header(::gpsd_client::msg::GpsFix::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GpsFix_mode(msg_);
  }

private:
  ::gpsd_client::msg::GpsFix msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpsd_client::msg::GpsFix>()
{
  return gpsd_client::msg::builder::Init_GpsFix_header();
}

}  // namespace gpsd_client

#endif  // GPSD_CLIENT__MSG__DETAIL__GPS_FIX__BUILDER_HPP_
