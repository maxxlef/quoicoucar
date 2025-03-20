// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from voiture2a_motors_driver:msg/MotorsState.idl
// generated code does not contain a copyright notice

#ifndef VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__STRUCT_HPP_
#define VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__voiture2a_motors_driver__msg__MotorsState __attribute__((deprecated))
#else
# define DEPRECATED__voiture2a_motors_driver__msg__MotorsState __declspec(deprecated)
#endif

namespace voiture2a_motors_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorsState_
{
  using Type = MotorsState_<ContainerAllocator>;

  explicit MotorsState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint16_t, 2>::iterator, uint16_t>(this->pwm_value.begin(), this->pwm_value.end(), 0);
      std::fill<typename std::array<uint16_t, 18>::iterator, uint16_t>(this->channels.begin(), this->channels.end(), 0);
      this->failsafe = 0;
      this->lost = 0;
      this->battery = 0.0f;
    }
  }

  explicit MotorsState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pwm_value(_alloc),
    channels(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint16_t, 2>::iterator, uint16_t>(this->pwm_value.begin(), this->pwm_value.end(), 0);
      std::fill<typename std::array<uint16_t, 18>::iterator, uint16_t>(this->channels.begin(), this->channels.end(), 0);
      this->failsafe = 0;
      this->lost = 0;
      this->battery = 0.0f;
    }
  }

  // field types and members
  using _pwm_value_type =
    std::array<uint16_t, 2>;
  _pwm_value_type pwm_value;
  using _channels_type =
    std::array<uint16_t, 18>;
  _channels_type channels;
  using _failsafe_type =
    uint8_t;
  _failsafe_type failsafe;
  using _lost_type =
    uint8_t;
  _lost_type lost;
  using _battery_type =
    float;
  _battery_type battery;

  // setters for named parameter idiom
  Type & set__pwm_value(
    const std::array<uint16_t, 2> & _arg)
  {
    this->pwm_value = _arg;
    return *this;
  }
  Type & set__channels(
    const std::array<uint16_t, 18> & _arg)
  {
    this->channels = _arg;
    return *this;
  }
  Type & set__failsafe(
    const uint8_t & _arg)
  {
    this->failsafe = _arg;
    return *this;
  }
  Type & set__lost(
    const uint8_t & _arg)
  {
    this->lost = _arg;
    return *this;
  }
  Type & set__battery(
    const float & _arg)
  {
    this->battery = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    voiture2a_motors_driver::msg::MotorsState_<ContainerAllocator> *;
  using ConstRawPtr =
    const voiture2a_motors_driver::msg::MotorsState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voiture2a_motors_driver::msg::MotorsState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voiture2a_motors_driver::msg::MotorsState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voiture2a_motors_driver::msg::MotorsState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voiture2a_motors_driver::msg::MotorsState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voiture2a_motors_driver::msg::MotorsState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voiture2a_motors_driver::msg::MotorsState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voiture2a_motors_driver::msg::MotorsState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voiture2a_motors_driver::msg::MotorsState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voiture2a_motors_driver__msg__MotorsState
    std::shared_ptr<voiture2a_motors_driver::msg::MotorsState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voiture2a_motors_driver__msg__MotorsState
    std::shared_ptr<voiture2a_motors_driver::msg::MotorsState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorsState_ & other) const
  {
    if (this->pwm_value != other.pwm_value) {
      return false;
    }
    if (this->channels != other.channels) {
      return false;
    }
    if (this->failsafe != other.failsafe) {
      return false;
    }
    if (this->lost != other.lost) {
      return false;
    }
    if (this->battery != other.battery) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorsState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorsState_

// alias to use template instance with default allocator
using MotorsState =
  voiture2a_motors_driver::msg::MotorsState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace voiture2a_motors_driver

#endif  // VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__MOTORS_STATE__STRUCT_HPP_
