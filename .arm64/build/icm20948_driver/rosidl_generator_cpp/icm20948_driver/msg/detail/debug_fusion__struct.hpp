// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from icm20948_driver:msg/DebugFusion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "icm20948_driver/msg/debug_fusion.hpp"


#ifndef ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__STRUCT_HPP_
#define ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__icm20948_driver__msg__DebugFusion __attribute__((deprecated))
#else
# define DEPRECATED__icm20948_driver__msg__DebugFusion __declspec(deprecated)
#endif

namespace icm20948_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DebugFusion_
{
  using Type = DebugFusion_<ContainerAllocator>;

  explicit DebugFusion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acceleration_error = 0.0f;
      this->accelerometer_ignored = false;
      this->acceleration_recovery_trigger = 0.0f;
      this->magnetic_error = 0.0f;
      this->magnetometer_ignored = false;
      this->magnetic_recovery_trigger = 0.0f;
      this->initialising = false;
      this->angular_rate_recovery = false;
      this->acceleration_recovery = false;
      this->magnetic_recovery = false;
      this->magnetometer_limit_reached = false;
      this->magnetometer_data_skipped = false;
      this->magnetometer_data_is_ready = false;
    }
  }

  explicit DebugFusion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acceleration_error = 0.0f;
      this->accelerometer_ignored = false;
      this->acceleration_recovery_trigger = 0.0f;
      this->magnetic_error = 0.0f;
      this->magnetometer_ignored = false;
      this->magnetic_recovery_trigger = 0.0f;
      this->initialising = false;
      this->angular_rate_recovery = false;
      this->acceleration_recovery = false;
      this->magnetic_recovery = false;
      this->magnetometer_limit_reached = false;
      this->magnetometer_data_skipped = false;
      this->magnetometer_data_is_ready = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _acceleration_error_type =
    float;
  _acceleration_error_type acceleration_error;
  using _accelerometer_ignored_type =
    bool;
  _accelerometer_ignored_type accelerometer_ignored;
  using _acceleration_recovery_trigger_type =
    float;
  _acceleration_recovery_trigger_type acceleration_recovery_trigger;
  using _magnetic_error_type =
    float;
  _magnetic_error_type magnetic_error;
  using _magnetometer_ignored_type =
    bool;
  _magnetometer_ignored_type magnetometer_ignored;
  using _magnetic_recovery_trigger_type =
    float;
  _magnetic_recovery_trigger_type magnetic_recovery_trigger;
  using _initialising_type =
    bool;
  _initialising_type initialising;
  using _angular_rate_recovery_type =
    bool;
  _angular_rate_recovery_type angular_rate_recovery;
  using _acceleration_recovery_type =
    bool;
  _acceleration_recovery_type acceleration_recovery;
  using _magnetic_recovery_type =
    bool;
  _magnetic_recovery_type magnetic_recovery;
  using _magnetometer_limit_reached_type =
    bool;
  _magnetometer_limit_reached_type magnetometer_limit_reached;
  using _magnetometer_data_skipped_type =
    bool;
  _magnetometer_data_skipped_type magnetometer_data_skipped;
  using _magnetometer_data_is_ready_type =
    bool;
  _magnetometer_data_is_ready_type magnetometer_data_is_ready;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__acceleration_error(
    const float & _arg)
  {
    this->acceleration_error = _arg;
    return *this;
  }
  Type & set__accelerometer_ignored(
    const bool & _arg)
  {
    this->accelerometer_ignored = _arg;
    return *this;
  }
  Type & set__acceleration_recovery_trigger(
    const float & _arg)
  {
    this->acceleration_recovery_trigger = _arg;
    return *this;
  }
  Type & set__magnetic_error(
    const float & _arg)
  {
    this->magnetic_error = _arg;
    return *this;
  }
  Type & set__magnetometer_ignored(
    const bool & _arg)
  {
    this->magnetometer_ignored = _arg;
    return *this;
  }
  Type & set__magnetic_recovery_trigger(
    const float & _arg)
  {
    this->magnetic_recovery_trigger = _arg;
    return *this;
  }
  Type & set__initialising(
    const bool & _arg)
  {
    this->initialising = _arg;
    return *this;
  }
  Type & set__angular_rate_recovery(
    const bool & _arg)
  {
    this->angular_rate_recovery = _arg;
    return *this;
  }
  Type & set__acceleration_recovery(
    const bool & _arg)
  {
    this->acceleration_recovery = _arg;
    return *this;
  }
  Type & set__magnetic_recovery(
    const bool & _arg)
  {
    this->magnetic_recovery = _arg;
    return *this;
  }
  Type & set__magnetometer_limit_reached(
    const bool & _arg)
  {
    this->magnetometer_limit_reached = _arg;
    return *this;
  }
  Type & set__magnetometer_data_skipped(
    const bool & _arg)
  {
    this->magnetometer_data_skipped = _arg;
    return *this;
  }
  Type & set__magnetometer_data_is_ready(
    const bool & _arg)
  {
    this->magnetometer_data_is_ready = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    icm20948_driver::msg::DebugFusion_<ContainerAllocator> *;
  using ConstRawPtr =
    const icm20948_driver::msg::DebugFusion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<icm20948_driver::msg::DebugFusion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<icm20948_driver::msg::DebugFusion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      icm20948_driver::msg::DebugFusion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<icm20948_driver::msg::DebugFusion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      icm20948_driver::msg::DebugFusion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<icm20948_driver::msg::DebugFusion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<icm20948_driver::msg::DebugFusion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<icm20948_driver::msg::DebugFusion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__icm20948_driver__msg__DebugFusion
    std::shared_ptr<icm20948_driver::msg::DebugFusion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__icm20948_driver__msg__DebugFusion
    std::shared_ptr<icm20948_driver::msg::DebugFusion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DebugFusion_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->acceleration_error != other.acceleration_error) {
      return false;
    }
    if (this->accelerometer_ignored != other.accelerometer_ignored) {
      return false;
    }
    if (this->acceleration_recovery_trigger != other.acceleration_recovery_trigger) {
      return false;
    }
    if (this->magnetic_error != other.magnetic_error) {
      return false;
    }
    if (this->magnetometer_ignored != other.magnetometer_ignored) {
      return false;
    }
    if (this->magnetic_recovery_trigger != other.magnetic_recovery_trigger) {
      return false;
    }
    if (this->initialising != other.initialising) {
      return false;
    }
    if (this->angular_rate_recovery != other.angular_rate_recovery) {
      return false;
    }
    if (this->acceleration_recovery != other.acceleration_recovery) {
      return false;
    }
    if (this->magnetic_recovery != other.magnetic_recovery) {
      return false;
    }
    if (this->magnetometer_limit_reached != other.magnetometer_limit_reached) {
      return false;
    }
    if (this->magnetometer_data_skipped != other.magnetometer_data_skipped) {
      return false;
    }
    if (this->magnetometer_data_is_ready != other.magnetometer_data_is_ready) {
      return false;
    }
    return true;
  }
  bool operator!=(const DebugFusion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DebugFusion_

// alias to use template instance with default allocator
using DebugFusion =
  icm20948_driver::msg::DebugFusion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace icm20948_driver

#endif  // ICM20948_DRIVER__MSG__DETAIL__DEBUG_FUSION__STRUCT_HPP_
