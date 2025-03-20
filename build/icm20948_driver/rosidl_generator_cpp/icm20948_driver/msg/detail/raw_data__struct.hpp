// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from icm20948_driver:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__STRUCT_HPP_
#define ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__STRUCT_HPP_

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
// Member 'accel'
// Member 'gyro'
// Member 'mag'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__icm20948_driver__msg__RawData __attribute__((deprecated))
#else
# define DEPRECATED__icm20948_driver__msg__RawData __declspec(deprecated)
#endif

namespace icm20948_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawData_
{
  using Type = RawData_<ContainerAllocator>;

  explicit RawData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    accel(_init),
    gyro(_init),
    mag(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = 0.0f;
    }
  }

  explicit RawData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    accel(_alloc, _init),
    gyro(_alloc, _init),
    mag(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _accel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _accel_type accel;
  using _gyro_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _gyro_type gyro;
  using _mag_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _mag_type mag;
  using _temp_type =
    float;
  _temp_type temp;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__accel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->accel = _arg;
    return *this;
  }
  Type & set__gyro(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->gyro = _arg;
    return *this;
  }
  Type & set__mag(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->mag = _arg;
    return *this;
  }
  Type & set__temp(
    const float & _arg)
  {
    this->temp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    icm20948_driver::msg::RawData_<ContainerAllocator> *;
  using ConstRawPtr =
    const icm20948_driver::msg::RawData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<icm20948_driver::msg::RawData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<icm20948_driver::msg::RawData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      icm20948_driver::msg::RawData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<icm20948_driver::msg::RawData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      icm20948_driver::msg::RawData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<icm20948_driver::msg::RawData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<icm20948_driver::msg::RawData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<icm20948_driver::msg::RawData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__icm20948_driver__msg__RawData
    std::shared_ptr<icm20948_driver::msg::RawData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__icm20948_driver__msg__RawData
    std::shared_ptr<icm20948_driver::msg::RawData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    if (this->gyro != other.gyro) {
      return false;
    }
    if (this->mag != other.mag) {
      return false;
    }
    if (this->temp != other.temp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawData_

// alias to use template instance with default allocator
using RawData =
  icm20948_driver::msg::RawData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace icm20948_driver

#endif  // ICM20948_DRIVER__MSG__DETAIL__RAW_DATA__STRUCT_HPP_
