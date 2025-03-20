// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gpsd_client:msg/GpsFix.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gpsd_client/msg/gps_fix.h"


#ifndef GPSD_CLIENT__MSG__DETAIL__GPS_FIX__STRUCT_H_
#define GPSD_CLIENT__MSG__DETAIL__GPS_FIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MODE_NOT_SEEN'.
/**
  * Measurement status
  * mode update not seen yet
 */
enum
{
  gpsd_client__msg__GpsFix__MODE_NOT_SEEN = 0
};

/// Constant 'MODE_NO_FIX'.
/**
  * none
 */
enum
{
  gpsd_client__msg__GpsFix__MODE_NO_FIX = 1
};

/// Constant 'MODE_2D'.
/**
  * good for latitude/longitude
 */
enum
{
  gpsd_client__msg__GpsFix__MODE_2D = 2
};

/// Constant 'MODE_3D'.
/**
  * good for altitude/climb too
 */
enum
{
  gpsd_client__msg__GpsFix__MODE_3D = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/GpsFix in the package gpsd_client.
/**
  * A more complete GPS fix to supplement sensor_msgs/NavSatFix.
 */
typedef struct gpsd_client__msg__GpsFix
{
  std_msgs__msg__Header header;
  int16_t mode;
  /// STATUS_NO_FIX   0       // no, or unknown
  /// - yes, plain GPS (SPS Mode), without DGPS, PPS, RTK, DR, etc.
  /// STATUS_FIX      1
  /// STATUS_DGPS_FIX 2       /* yes, with DGPS */
  /// STATUS_RTK_FIX  3       /* yes, with RTK Fixed */
  /// STATUS_RTK_FLT  4       /* yes, with RTK Float */
  /// STATUS_DR       5       /* yes, with dead reckoning */
  /// STATUS_GNSSDR   6       /* yes, with GNSS + dead reckoning */
  /// STATUS_TIME     7       /* yes, time only (surveyed in, manual) */
  /// Note that STATUS_SIM and MODE_NO_FIX can go together.
  /// STATUS_SIM      8       /* yes, simulated */
  /// - yes, Precise Positioning Service (PPS)
  /// - Not to be confused with Pulse per Second (PPS)
  /// - PPS is the encrypted military P(Y)-code
  /// STATUS_PPS_FIX  9
  int16_t status;
  /// Latitude (degrees). Positive is north of equator; negative is south.
  double latitude;
  /// Longitude (degrees). Positive is east of prime meridian, negative west.
  double longitude;
  /// Altitude (meters). Positive is above reference (e.g., sea level).
  double altitude;
  /// Direction (degrees from north)
  double track;
  /// Ground speed (meters/second)
  double speed;
  /// GPS time
  double time;
  /// Dilution of precision; Xdop<=0 means the value is unknown
  /// Total (positional-temporal) dilution of precision
  double gdop;
  /// Positional (3D) dilution of precision
  double pdop;
  /// Horizontal dilution of precision
  double hdop;
  /// Vertical dilution of precision
  double vdop;
  /// Temporal dilution of precision
  double tdop;
  /// Uncertainty of measurement, 95% confidence
  /// Spherical position uncertainty (meters)
  double err;
  /// Horizontal position uncertainty (meters)
  double err_horz;
  /// Vertical position uncertainty (meters)
  double err_vert;
  /// Track uncertainty (degrees)
  double err_track;
  /// Ground speed uncertainty (meters/second)
  double err_speed;
  /// Temporal uncertainty
  double err_time;
  /// Number of satellites used in solution
  int32_t satellites_visible;
} gpsd_client__msg__GpsFix;

// Struct for a sequence of gpsd_client__msg__GpsFix.
typedef struct gpsd_client__msg__GpsFix__Sequence
{
  gpsd_client__msg__GpsFix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpsd_client__msg__GpsFix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPSD_CLIENT__MSG__DETAIL__GPS_FIX__STRUCT_H_
