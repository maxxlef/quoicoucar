// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from icm20948_driver:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__BUILDER_HPP_
#define ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "icm20948_driver/msg/detail/raw_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace icm20948_driver
{

namespace msg
{

namespace builder
{

class Init_RawData_temp
{
public:
  explicit Init_RawData_temp(::icm20948_driver::msg::RawData & msg)
  : msg_(msg)
  {}
  ::icm20948_driver::msg::RawData temp(::icm20948_driver::msg::RawData::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::icm20948_driver::msg::RawData msg_;
};

class Init_RawData_mag
{
public:
  explicit Init_RawData_mag(::icm20948_driver::msg::RawData & msg)
  : msg_(msg)
  {}
  Init_RawData_temp mag(::icm20948_driver::msg::RawData::_mag_type arg)
  {
    msg_.mag = std::move(arg);
    return Init_RawData_temp(msg_);
  }

private:
  ::icm20948_driver::msg::RawData msg_;
};

class Init_RawData_gyro
{
public:
  explicit Init_RawData_gyro(::icm20948_driver::msg::RawData & msg)
  : msg_(msg)
  {}
  Init_RawData_mag gyro(::icm20948_driver::msg::RawData::_gyro_type arg)
  {
    msg_.gyro = std::move(arg);
    return Init_RawData_mag(msg_);
  }

private:
  ::icm20948_driver::msg::RawData msg_;
};

class Init_RawData_accel
{
public:
  explicit Init_RawData_accel(::icm20948_driver::msg::RawData & msg)
  : msg_(msg)
  {}
  Init_RawData_gyro accel(::icm20948_driver::msg::RawData::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_RawData_gyro(msg_);
  }

private:
  ::icm20948_driver::msg::RawData msg_;
};

class Init_RawData_header
{
public:
  Init_RawData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawData_accel header(::icm20948_driver::msg::RawData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RawData_accel(msg_);
  }

private:
  ::icm20948_driver::msg::RawData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::icm20948_driver::msg::RawData>()
{
  return icm20948_driver::msg::builder::Init_RawData_header();
}

}  // namespace icm20948_driver

#endif  // ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__BUILDER_HPP_
