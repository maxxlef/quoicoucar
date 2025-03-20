// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from voiture2a_motors_driver:msg/Engine.idl
// generated code does not contain a copyright notice

#ifndef VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__BUILDER_HPP_
#define VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "voiture2a_motors_driver/msg/detail/engine__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace voiture2a_motors_driver
{

namespace msg
{

namespace builder
{

class Init_Engine_engine
{
public:
  explicit Init_Engine_engine(::voiture2a_motors_driver::msg::Engine & msg)
  : msg_(msg)
  {}
  ::voiture2a_motors_driver::msg::Engine engine(::voiture2a_motors_driver::msg::Engine::_engine_type arg)
  {
    msg_.engine = std::move(arg);
    return std::move(msg_);
  }

private:
  ::voiture2a_motors_driver::msg::Engine msg_;
};

class Init_Engine_servo
{
public:
  Init_Engine_servo()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Engine_engine servo(::voiture2a_motors_driver::msg::Engine::_servo_type arg)
  {
    msg_.servo = std::move(arg);
    return Init_Engine_engine(msg_);
  }

private:
  ::voiture2a_motors_driver::msg::Engine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::voiture2a_motors_driver::msg::Engine>()
{
  return voiture2a_motors_driver::msg::builder::Init_Engine_servo();
}

}  // namespace voiture2a_motors_driver

#endif  // VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__BUILDER_HPP_
