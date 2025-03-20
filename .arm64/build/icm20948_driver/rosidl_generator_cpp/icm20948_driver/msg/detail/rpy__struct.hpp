// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from icm20948_driver:msg/RPY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "icm20948_driver/msg/rpy.hpp"


#ifndef ICM20948_DRIVER__MSG__DETAIL__RPY__STRUCT_HPP_
#define ICM20948_DRIVER__MSG__DETAIL__RPY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__icm20948_driver__msg__RPY __attribute__((deprecated))
#else
# define DEPRECATED__icm20948_driver__msg__RPY __declspec(deprecated)
#endif

namespace icm20948_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RPY_
{
  using Type = RPY_<ContainerAllocator>;

  explicit RPY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    acceleration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  explicit RPY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    acceleration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _acceleration_type acceleration;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    icm20948_driver::msg::RPY_<ContainerAllocator> *;
  using ConstRawPtr =
    const icm20948_driver::msg::RPY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<icm20948_driver::msg::RPY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<icm20948_driver::msg::RPY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      icm20948_driver::msg::RPY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<icm20948_driver::msg::RPY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      icm20948_driver::msg::RPY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<icm20948_driver::msg::RPY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<icm20948_driver::msg::RPY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<icm20948_driver::msg::RPY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__icm20948_driver__msg__RPY
    std::shared_ptr<icm20948_driver::msg::RPY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__icm20948_driver__msg__RPY
    std::shared_ptr<icm20948_driver::msg::RPY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RPY_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const RPY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RPY_

// alias to use template instance with default allocator
using RPY =
  icm20948_driver::msg::RPY_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace icm20948_driver

#endif  // ICM20948_DRIVER__MSG__DETAIL__RPY__STRUCT_HPP_
