// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from icm20948_driver:msg/RPY.idl
// generated code does not contain a copyright notice

#ifndef ICM20948_DRIVER__MSG__DETAIL__RPY__BUILDER_HPP_
#define ICM20948_DRIVER__MSG__DETAIL__RPY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "icm20948_driver/msg/detail/rpy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace icm20948_driver
{

namespace msg
{

namespace builder
{

class Init_RPY_acceleration
{
public:
  explicit Init_RPY_acceleration(::icm20948_driver::msg::RPY & msg)
  : msg_(msg)
  {}
  ::icm20948_driver::msg::RPY acceleration(::icm20948_driver::msg::RPY::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::icm20948_driver::msg::RPY msg_;
};

class Init_RPY_yaw
{
public:
  explicit Init_RPY_yaw(::icm20948_driver::msg::RPY & msg)
  : msg_(msg)
  {}
  Init_RPY_acceleration yaw(::icm20948_driver::msg::RPY::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_RPY_acceleration(msg_);
  }

private:
  ::icm20948_driver::msg::RPY msg_;
};

class Init_RPY_pitch
{
public:
  explicit Init_RPY_pitch(::icm20948_driver::msg::RPY & msg)
  : msg_(msg)
  {}
  Init_RPY_yaw pitch(::icm20948_driver::msg::RPY::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_RPY_yaw(msg_);
  }

private:
  ::icm20948_driver::msg::RPY msg_;
};

class Init_RPY_roll
{
public:
  explicit Init_RPY_roll(::icm20948_driver::msg::RPY & msg)
  : msg_(msg)
  {}
  Init_RPY_pitch roll(::icm20948_driver::msg::RPY::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_RPY_pitch(msg_);
  }

private:
  ::icm20948_driver::msg::RPY msg_;
};

class Init_RPY_header
{
public:
  Init_RPY_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RPY_roll header(::icm20948_driver::msg::RPY::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RPY_roll(msg_);
  }

private:
  ::icm20948_driver::msg::RPY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::icm20948_driver::msg::RPY>()
{
  return icm20948_driver::msg::builder::Init_RPY_header();
}

}  // namespace icm20948_driver

#endif  // ICM20948_DRIVER__MSG__DETAIL__RPY__BUILDER_HPP_
