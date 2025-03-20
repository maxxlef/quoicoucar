// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gpsd_client:msg/GpsFix.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gpsd_client/msg/gps_fix.hpp"


#ifndef GPSD_CLIENT__MSG__DETAIL__GPS_FIX__STRUCT_HPP_
#define GPSD_CLIENT__MSG__DETAIL__GPS_FIX__STRUCT_HPP_

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
# define DEPRECATED__gpsd_client__msg__GpsFix __attribute__((deprecated))
#else
# define DEPRECATED__gpsd_client__msg__GpsFix __declspec(deprecated)
#endif

namespace gpsd_client
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpsFix_
{
  using Type = GpsFix_<ContainerAllocator>;

  explicit GpsFix_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->status = 0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
      this->track = 0.0;
      this->speed = 0.0;
      this->time = 0.0;
      this->gdop = 0.0;
      this->pdop = 0.0;
      this->hdop = 0.0;
      this->vdop = 0.0;
      this->tdop = 0.0;
      this->err = 0.0;
      this->err_horz = 0.0;
      this->err_vert = 0.0;
      this->err_track = 0.0;
      this->err_speed = 0.0;
      this->err_time = 0.0;
      this->satellites_visible = 0l;
    }
  }

  explicit GpsFix_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->status = 0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
      this->track = 0.0;
      this->speed = 0.0;
      this->time = 0.0;
      this->gdop = 0.0;
      this->pdop = 0.0;
      this->hdop = 0.0;
      this->vdop = 0.0;
      this->tdop = 0.0;
      this->err = 0.0;
      this->err_horz = 0.0;
      this->err_vert = 0.0;
      this->err_track = 0.0;
      this->err_speed = 0.0;
      this->err_time = 0.0;
      this->satellites_visible = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mode_type =
    int16_t;
  _mode_type mode;
  using _status_type =
    int16_t;
  _status_type status;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _track_type =
    double;
  _track_type track;
  using _speed_type =
    double;
  _speed_type speed;
  using _time_type =
    double;
  _time_type time;
  using _gdop_type =
    double;
  _gdop_type gdop;
  using _pdop_type =
    double;
  _pdop_type pdop;
  using _hdop_type =
    double;
  _hdop_type hdop;
  using _vdop_type =
    double;
  _vdop_type vdop;
  using _tdop_type =
    double;
  _tdop_type tdop;
  using _err_type =
    double;
  _err_type err;
  using _err_horz_type =
    double;
  _err_horz_type err_horz;
  using _err_vert_type =
    double;
  _err_vert_type err_vert;
  using _err_track_type =
    double;
  _err_track_type err_track;
  using _err_speed_type =
    double;
  _err_speed_type err_speed;
  using _err_time_type =
    double;
  _err_time_type err_time;
  using _satellites_visible_type =
    int32_t;
  _satellites_visible_type satellites_visible;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mode(
    const int16_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__status(
    const int16_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__track(
    const double & _arg)
  {
    this->track = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__gdop(
    const double & _arg)
  {
    this->gdop = _arg;
    return *this;
  }
  Type & set__pdop(
    const double & _arg)
  {
    this->pdop = _arg;
    return *this;
  }
  Type & set__hdop(
    const double & _arg)
  {
    this->hdop = _arg;
    return *this;
  }
  Type & set__vdop(
    const double & _arg)
  {
    this->vdop = _arg;
    return *this;
  }
  Type & set__tdop(
    const double & _arg)
  {
    this->tdop = _arg;
    return *this;
  }
  Type & set__err(
    const double & _arg)
  {
    this->err = _arg;
    return *this;
  }
  Type & set__err_horz(
    const double & _arg)
  {
    this->err_horz = _arg;
    return *this;
  }
  Type & set__err_vert(
    const double & _arg)
  {
    this->err_vert = _arg;
    return *this;
  }
  Type & set__err_track(
    const double & _arg)
  {
    this->err_track = _arg;
    return *this;
  }
  Type & set__err_speed(
    const double & _arg)
  {
    this->err_speed = _arg;
    return *this;
  }
  Type & set__err_time(
    const double & _arg)
  {
    this->err_time = _arg;
    return *this;
  }
  Type & set__satellites_visible(
    const int32_t & _arg)
  {
    this->satellites_visible = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t MODE_NOT_SEEN =
    0;
  static constexpr int16_t MODE_NO_FIX =
    1;
  static constexpr int16_t MODE_2D =
    2;
  static constexpr int16_t MODE_3D =
    3;

  // pointer types
  using RawPtr =
    gpsd_client::msg::GpsFix_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpsd_client::msg::GpsFix_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpsd_client::msg::GpsFix_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpsd_client::msg::GpsFix_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpsd_client::msg::GpsFix_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpsd_client::msg::GpsFix_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpsd_client::msg::GpsFix_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpsd_client::msg::GpsFix_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpsd_client::msg::GpsFix_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpsd_client::msg::GpsFix_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpsd_client__msg__GpsFix
    std::shared_ptr<gpsd_client::msg::GpsFix_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpsd_client__msg__GpsFix
    std::shared_ptr<gpsd_client::msg::GpsFix_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpsFix_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->track != other.track) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->gdop != other.gdop) {
      return false;
    }
    if (this->pdop != other.pdop) {
      return false;
    }
    if (this->hdop != other.hdop) {
      return false;
    }
    if (this->vdop != other.vdop) {
      return false;
    }
    if (this->tdop != other.tdop) {
      return false;
    }
    if (this->err != other.err) {
      return false;
    }
    if (this->err_horz != other.err_horz) {
      return false;
    }
    if (this->err_vert != other.err_vert) {
      return false;
    }
    if (this->err_track != other.err_track) {
      return false;
    }
    if (this->err_speed != other.err_speed) {
      return false;
    }
    if (this->err_time != other.err_time) {
      return false;
    }
    if (this->satellites_visible != other.satellites_visible) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpsFix_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpsFix_

// alias to use template instance with default allocator
using GpsFix =
  gpsd_client::msg::GpsFix_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GpsFix_<ContainerAllocator>::MODE_NOT_SEEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GpsFix_<ContainerAllocator>::MODE_NO_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GpsFix_<ContainerAllocator>::MODE_2D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GpsFix_<ContainerAllocator>::MODE_3D;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace gpsd_client

#endif  // GPSD_CLIENT__MSG__DETAIL__GPS_FIX__STRUCT_HPP_
