// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from voiture2a_motors_driver:msg/MotorsState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voiture2a_motors_driver/msg/motors_state.hpp"


#ifndef VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__BUILDER_HPP_
#define VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "voiture2a_motors_driver/msg/detail/motors_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace voiture2a_motors_driver
{

namespace msg
{

namespace builder
{

class Init_MotorsState_battery
{
public:
  explicit Init_MotorsState_battery(::voiture2a_motors_driver::msg::MotorsState & msg)
  : msg_(msg)
  {}
  ::voiture2a_motors_driver::msg::MotorsState battery(::voiture2a_motors_driver::msg::MotorsState::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return std::move(msg_);
  }

private:
  ::voiture2a_motors_driver::msg::MotorsState msg_;
};

class Init_MotorsState_lost
{
public:
  explicit Init_MotorsState_lost(::voiture2a_motors_driver::msg::MotorsState & msg)
  : msg_(msg)
  {}
  Init_MotorsState_battery lost(::voiture2a_motors_driver::msg::MotorsState::_lost_type arg)
  {
    msg_.lost = std::move(arg);
    return Init_MotorsState_battery(msg_);
  }

private:
  ::voiture2a_motors_driver::msg::MotorsState msg_;
};

class Init_MotorsState_failsafe
{
public:
  explicit Init_MotorsState_failsafe(::voiture2a_motors_driver::msg::MotorsState & msg)
  : msg_(msg)
  {}
  Init_MotorsState_lost failsafe(::voiture2a_motors_driver::msg::MotorsState::_failsafe_type arg)
  {
    msg_.failsafe = std::move(arg);
    return Init_MotorsState_lost(msg_);
  }

private:
  ::voiture2a_motors_driver::msg::MotorsState msg_;
};

class Init_MotorsState_channels
{
public:
  explicit Init_MotorsState_channels(::voiture2a_motors_driver::msg::MotorsState & msg)
  : msg_(msg)
  {}
  Init_MotorsState_failsafe channels(::voiture2a_motors_driver::msg::MotorsState::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return Init_MotorsState_failsafe(msg_);
  }

private:
  ::voiture2a_motors_driver::msg::MotorsState msg_;
};

class Init_MotorsState_pwm_value
{
public:
  Init_MotorsState_pwm_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorsState_channels pwm_value(::voiture2a_motors_driver::msg::MotorsState::_pwm_value_type arg)
  {
    msg_.pwm_value = std::move(arg);
    return Init_MotorsState_channels(msg_);
  }

private:
  ::voiture2a_motors_driver::msg::MotorsState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::voiture2a_motors_driver::msg::MotorsState>()
{
  return voiture2a_motors_driver::msg::builder::Init_MotorsState_pwm_value();
}

}  // namespace voiture2a_motors_driver

#endif  // VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__BUILDER_HPP_
