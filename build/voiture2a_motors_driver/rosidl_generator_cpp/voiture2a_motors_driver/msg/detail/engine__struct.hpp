// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from voiture2a_motors_driver:msg/Engine.idl
// generated code does not contain a copyright notice

#ifndef VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__STRUCT_HPP_
#define VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__voiture2a_motors_driver__msg__Engine __attribute__((deprecated))
#else
# define DEPRECATED__voiture2a_motors_driver__msg__Engine __declspec(deprecated)
#endif

namespace voiture2a_motors_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Engine_
{
  using Type = Engine_<ContainerAllocator>;

  explicit Engine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo = 0;
      this->engine = 0;
    }
  }

  explicit Engine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo = 0;
      this->engine = 0;
    }
  }

  // field types and members
  using _servo_type =
    uint8_t;
  _servo_type servo;
  using _engine_type =
    uint8_t;
  _engine_type engine;

  // setters for named parameter idiom
  Type & set__servo(
    const uint8_t & _arg)
  {
    this->servo = _arg;
    return *this;
  }
  Type & set__engine(
    const uint8_t & _arg)
  {
    this->engine = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    voiture2a_motors_driver::msg::Engine_<ContainerAllocator> *;
  using ConstRawPtr =
    const voiture2a_motors_driver::msg::Engine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voiture2a_motors_driver::msg::Engine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voiture2a_motors_driver::msg::Engine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voiture2a_motors_driver::msg::Engine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voiture2a_motors_driver::msg::Engine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voiture2a_motors_driver::msg::Engine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voiture2a_motors_driver::msg::Engine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voiture2a_motors_driver::msg::Engine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voiture2a_motors_driver::msg::Engine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voiture2a_motors_driver__msg__Engine
    std::shared_ptr<voiture2a_motors_driver::msg::Engine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voiture2a_motors_driver__msg__Engine
    std::shared_ptr<voiture2a_motors_driver::msg::Engine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Engine_ & other) const
  {
    if (this->servo != other.servo) {
      return false;
    }
    if (this->engine != other.engine) {
      return false;
    }
    return true;
  }
  bool operator!=(const Engine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Engine_

// alias to use template instance with default allocator
using Engine =
  voiture2a_motors_driver::msg::Engine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace voiture2a_motors_driver

#endif  // VOITURE2A_MOTORS_DRIVER__MSG__DETAIL__ENGINE__STRUCT_HPP_
