// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from icm20948_driver:msg/DebugFusion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "icm20948_driver/msg/debug_fusion.hpp"


#ifndef ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__BUILDER_HPP_
#define ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "icm20948_driver/msg/detail/debug_fusion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace icm20948_driver
{

namespace msg
{

namespace builder
{

class Init_DebugFusion_magnetometer_data_is_ready
{
public:
  explicit Init_DebugFusion_magnetometer_data_is_ready(::icm20948_driver::msg::DebugFusion & msg)
  : msg_(msg)
  {}
  ::icm20948_driver::msg::DebugFusion magnetometer_data_is_ready(::icm20948_driver::msg::DebugFusion::_magnetometer_data_is_ready_type arg)
  {
    msg_.magnetometer_data_is_ready = std::move(arg);
    return std::move(msg_);
  }

private:
  ::icm20948_driver::msg::DebugFusion msg_;
};

class Init_DebugFusion_magnetometer_data_skipped
{
public:
  explicit Init_DebugFusion_magnetometer_data_skipped(::icm20948_driver::msg::DebugFusion & msg)
  : msg_(msg)
  {}
  Init_DebugFusion_magnetometer_data_is_ready magnetometer_data_skipped(::icm20948_driver::msg::DebugFusion::_magnetometer_data_skipped_type arg)
  {
    msg_.magnetometer_data_skipped = std::move(arg);
    return Init_DebugFusion_magnetometer_data_is_ready(msg_);
  }

private:
  ::icm20948_driver::msg::DebugFusion msg_;
};

class Init_DebugFusion_magnetometer_limit_reached
{
public:
  explicit Init_DebugFusion_magnetometer_limit_reached(::icm20948_driver::msg::DebugFusion & msg)
  : msg_(msg)
  {}
  Init_DebugFusion_magnetometer_data_skipped magnetometer_limit_reached(::icm20948_driver::msg::DebugFusion::_magnetometer_limit_reached_type arg)
  {
    msg_.magnetometer_limit_reached = std::move(arg);
    return Init_DebugFusion_magnetometer_data_skipped(msg_);
  }

private:
  ::icm20948_driver::msg::DebugFusion msg_;
};

class Init_DebugFusion_magnetic_recovery
{
public:
  explicit Init_DebugFusion_magnetic_recovery(::icm20948_driver::msg::DebugFusion & msg)
  : msg_(msg)
  {}
  Init_DebugFusion_magnetometer_limit_reached magnetic_recovery(::icm20948_driver::msg::DebugFusion::_magnetic_recovery_type arg)
  {
    msg_.magnetic_recovery = std::move(arg);
    return Init_DebugFusion_magnetometer_limit_reached(msg_);
  }

private:
  ::icm20948_driver::msg::DebugFusion msg_;
};

class Init_DebugFusion_acceleration_recovery
{
public:
  explicit Init_DebugFusion_acceleration_recovery(::icm20948_driver::msg::DebugFusion & msg)
  : msg_(msg)
  {}
  Init_DebugFusion_magnetic_recovery acceleration_recovery(::icm20948_driver::msg::DebugFusion::_acceleration_recovery_type arg)
  {
    msg_.acceleration_recovery = std::move(arg);
    return Init_DebugFusion_magnetic_recovery(msg_);
  }

private:
  ::icm20948_driver::msg::DebugFusion msg_;
};

class Init_DebugFusion_angular_rate_recovery
{
public:
  explicit Init_DebugFusion_angular_rate_recovery(::icm20948_driver::msg::DebugFusion & msg)
  : msg_(msg)
  {}
  Init_DebugFusion_acceleration_recovery angular_rate_recovery(::icm20948_driver::msg::DebugFusion::_angular_rate_recovery_type arg)
  {
    msg_.angular_rate_recovery = std::move(arg);
    return Init_DebugFusion_acceleration_recovery(msg_);
  }

private:
  ::icm20948_driver::msg::DebugFusion msg_;
};

class Init_DebugFusion_initialising
{
public:
  explicit Init_DebugFusion_initialising(::icm20948_driver::msg::DebugFusion & msg)
  : msg_(msg)
  {}
  Init_DebugFusion_angular_rate_recovery initialising(::icm20948_driver::msg::DebugFusion::_initialising_type arg)
  {
    msg_.initialising = std::move(arg);
    return Init_DebugFusion_angular_rate_recovery(msg_);
  }

private:
  ::icm20948_driver::msg::DebugFusion msg_;
};

class Init_DebugFusion_magnetic_recovery_trigger
{
public:
  explicit Init_DebugFusion_magnetic_recovery_trigger(::icm20948_driver::msg::DebugFusion & msg)
  : msg_(msg)
  {}
  Init_DebugFusion_initialising magnetic_recovery_trigger(::icm20948_driver::msg::DebugFusion::_magnetic_recovery_trigger_type arg)
  {
    msg_.magnetic_recovery_trigger = std::move(arg);
    return Init_DebugFusion_initialising(msg_);
  }

private:
  ::icm20948_driver::msg::DebugFusion msg_;
};

class Init_DebugFusion_magnetometer_ignored
{
public:
  explicit Init_DebugFusion_magnetometer_ignored(::icm20948_driver::msg::DebugFusion & msg)
  : msg_(msg)
  {}
  Init_DebugFusion_magnetic_recovery_trigger magnetometer_ignored(::icm20948_driver::msg::DebugFusion::_magnetometer_ignored_type arg)
  {
    msg_.magnetometer_ignored = std::move(arg);
    return Init_DebugFusion_magnetic_recovery_trigger(msg_);
  }

private:
  ::icm20948_driver::msg::DebugFusion msg_;
};

class Init_DebugFusion_magnetic_error
{
public:
  explicit Init_DebugFusion_magnetic_error(::icm20948_driver::msg::DebugFusion & msg)
  : msg_(msg)
  {}
  Init_DebugFusion_magnetometer_ignored magnetic_error(::icm20948_driver::msg::DebugFusion::_magnetic_error_type arg)
  {
    msg_.magnetic_error = std::move(arg);
    return Init_DebugFusion_magnetometer_ignored(msg_);
  }

private:
  ::icm20948_driver::msg::DebugFusion msg_;
};

class Init_DebugFusion_acceleration_recovery_trigger
{
public:
  explicit Init_DebugFusion_acceleration_recovery_trigger(::icm20948_driver::msg::DebugFusion & msg)
  : msg_(msg)
  {}
  Init_DebugFusion_magnetic_error acceleration_recovery_trigger(::icm20948_driver::msg::DebugFusion::_acceleration_recovery_trigger_type arg)
  {
    msg_.acceleration_recovery_trigger = std::move(arg);
    return Init_DebugFusion_magnetic_error(msg_);
  }

private:
  ::icm20948_driver::msg::DebugFusion msg_;
};

class Init_DebugFusion_accelerometer_ignored
{
public:
  explicit Init_DebugFusion_accelerometer_ignored(::icm20948_driver::msg::DebugFusion & msg)
  : msg_(msg)
  {}
  Init_DebugFusion_acceleration_recovery_trigger accelerometer_ignored(::icm20948_driver::msg::DebugFusion::_accelerometer_ignored_type arg)
  {
    msg_.accelerometer_ignored = std::move(arg);
    return Init_DebugFusion_acceleration_recovery_trigger(msg_);
  }

private:
  ::icm20948_driver::msg::DebugFusion msg_;
};

class Init_DebugFusion_acceleration_error
{
public:
  explicit Init_DebugFusion_acceleration_error(::icm20948_driver::msg::DebugFusion & msg)
  : msg_(msg)
  {}
  Init_DebugFusion_accelerometer_ignored acceleration_error(::icm20948_driver::msg::DebugFusion::_acceleration_error_type arg)
  {
    msg_.acceleration_error = std::move(arg);
    return Init_DebugFusion_accelerometer_ignored(msg_);
  }

private:
  ::icm20948_driver::msg::DebugFusion msg_;
};

class Init_DebugFusion_header
{
public:
  Init_DebugFusion_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugFusion_acceleration_error header(::icm20948_driver::msg::DebugFusion::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DebugFusion_acceleration_error(msg_);
  }

private:
  ::icm20948_driver::msg::DebugFusion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::icm20948_driver::msg::DebugFusion>()
{
  return icm20948_driver::msg::builder::Init_DebugFusion_header();
}

}  // namespace icm20948_driver

#endif  // ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__BUILDER_HPP_
