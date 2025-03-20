// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gpsd_client:msg/GpsFix.idl
// generated code does not contain a copyright notice

#include "gpsd_client/msg/detail/gps_fix__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gpsd_client
const rosidl_type_hash_t *
gpsd_client__msg__GpsFix__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x65, 0x6d, 0xb0, 0x64, 0x94, 0x88, 0x85, 0xbf,
      0xf4, 0x6e, 0x7f, 0x4e, 0x4e, 0x95, 0x62, 0x48,
      0x2d, 0x43, 0xb6, 0x51, 0x88, 0x51, 0xc4, 0x2f,
      0x1f, 0xfa, 0x49, 0xbd, 0xb1, 0x3c, 0x39, 0xab,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char gpsd_client__msg__GpsFix__TYPE_NAME[] = "gpsd_client/msg/GpsFix";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char gpsd_client__msg__GpsFix__FIELD_NAME__header[] = "header";
static char gpsd_client__msg__GpsFix__FIELD_NAME__mode[] = "mode";
static char gpsd_client__msg__GpsFix__FIELD_NAME__status[] = "status";
static char gpsd_client__msg__GpsFix__FIELD_NAME__latitude[] = "latitude";
static char gpsd_client__msg__GpsFix__FIELD_NAME__longitude[] = "longitude";
static char gpsd_client__msg__GpsFix__FIELD_NAME__altitude[] = "altitude";
static char gpsd_client__msg__GpsFix__FIELD_NAME__track[] = "track";
static char gpsd_client__msg__GpsFix__FIELD_NAME__speed[] = "speed";
static char gpsd_client__msg__GpsFix__FIELD_NAME__time[] = "time";
static char gpsd_client__msg__GpsFix__FIELD_NAME__gdop[] = "gdop";
static char gpsd_client__msg__GpsFix__FIELD_NAME__pdop[] = "pdop";
static char gpsd_client__msg__GpsFix__FIELD_NAME__hdop[] = "hdop";
static char gpsd_client__msg__GpsFix__FIELD_NAME__vdop[] = "vdop";
static char gpsd_client__msg__GpsFix__FIELD_NAME__tdop[] = "tdop";
static char gpsd_client__msg__GpsFix__FIELD_NAME__err[] = "err";
static char gpsd_client__msg__GpsFix__FIELD_NAME__err_horz[] = "err_horz";
static char gpsd_client__msg__GpsFix__FIELD_NAME__err_vert[] = "err_vert";
static char gpsd_client__msg__GpsFix__FIELD_NAME__err_track[] = "err_track";
static char gpsd_client__msg__GpsFix__FIELD_NAME__err_speed[] = "err_speed";
static char gpsd_client__msg__GpsFix__FIELD_NAME__err_time[] = "err_time";
static char gpsd_client__msg__GpsFix__FIELD_NAME__satellites_visible[] = "satellites_visible";

static rosidl_runtime_c__type_description__Field gpsd_client__msg__GpsFix__FIELDS[] = {
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__altitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__track, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__gdop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__pdop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__hdop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__vdop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__tdop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__err, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__err_horz, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__err_vert, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__err_track, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__err_speed, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__err_time, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpsd_client__msg__GpsFix__FIELD_NAME__satellites_visible, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gpsd_client__msg__GpsFix__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gpsd_client__msg__GpsFix__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gpsd_client__msg__GpsFix__TYPE_NAME, 22, 22},
      {gpsd_client__msg__GpsFix__FIELDS, 21, 21},
    },
    {gpsd_client__msg__GpsFix__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# A more complete GPS fix to supplement sensor_msgs/NavSatFix.\n"
  "std_msgs/Header header\n"
  "\n"
  "# Measurement status\n"
  "int16 MODE_NOT_SEEN=0\\t# mode update not seen yet\n"
  "int16 MODE_NO_FIX=1\\t# none\n"
  "int16 MODE_2D=2\\t# good for latitude/longitude\n"
  "int16 MODE_3D=3\\t# good for altitude/climb too\n"
  "int16 mode\n"
  "\n"
  "# STATUS_NO_FIX   0       // no, or unknown\n"
  "# - yes, plain GPS (SPS Mode), without DGPS, PPS, RTK, DR, etc.\n"
  "# STATUS_FIX      1\n"
  "# STATUS_DGPS_FIX 2       /* yes, with DGPS */\n"
  "# STATUS_RTK_FIX  3       /* yes, with RTK Fixed */\n"
  "# STATUS_RTK_FLT  4       /* yes, with RTK Float */\n"
  "# STATUS_DR       5       /* yes, with dead reckoning */\n"
  "# STATUS_GNSSDR   6       /* yes, with GNSS + dead reckoning */\n"
  "# STATUS_TIME     7       /* yes, time only (surveyed in, manual) */\n"
  "# Note that STATUS_SIM and MODE_NO_FIX can go together.\n"
  "# STATUS_SIM      8       /* yes, simulated */\n"
  "# - yes, Precise Positioning Service (PPS)\n"
  "# - Not to be confused with Pulse per Second (PPS)\n"
  "# - PPS is the encrypted military P(Y)-code\n"
  "# STATUS_PPS_FIX  9\n"
  "int16 status\n"
  "\n"
  "# Latitude (degrees). Positive is north of equator; negative is south.\n"
  "float64 latitude\n"
  "\n"
  "# Longitude (degrees). Positive is east of prime meridian, negative west.\n"
  "float64 longitude\n"
  "\n"
  "# Altitude (meters). Positive is above reference (e.g., sea level).\n"
  "float64 altitude\n"
  "\n"
  "# Direction (degrees from north)\n"
  "float64 track\n"
  "\n"
  "# Ground speed (meters/second)\n"
  "float64 speed\n"
  "\n"
  "# GPS time\n"
  "float64 time\n"
  "\n"
  "## Dilution of precision; Xdop<=0 means the value is unknown\n"
  "\n"
  "# Total (positional-temporal) dilution of precision\n"
  "float64 gdop\n"
  "\n"
  "# Positional (3D) dilution of precision\n"
  "float64 pdop\n"
  "\n"
  "# Horizontal dilution of precision\n"
  "float64 hdop\n"
  "\n"
  "# Vertical dilution of precision\n"
  "float64 vdop\n"
  "\n"
  "# Temporal dilution of precision\n"
  "float64 tdop\n"
  "\n"
  "## Uncertainty of measurement, 95% confidence\n"
  "\n"
  "# Spherical position uncertainty (meters) [epe]\n"
  "float64 err\n"
  "\n"
  "# Horizontal position uncertainty (meters) [eph]\n"
  "float64 err_horz\n"
  "\n"
  "# Vertical position uncertainty (meters) [epv]\n"
  "float64 err_vert\n"
  "\n"
  "# Track uncertainty (degrees) [epd]\n"
  "float64 err_track\n"
  "\n"
  "# Ground speed uncertainty (meters/second) [eps]\n"
  "float64 err_speed\n"
  "\n"
  "# Temporal uncertainty [ept]\n"
  "float64 err_time\n"
  "\n"
  "# Number of satellites used in solution\n"
  "int32 satellites_visible";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gpsd_client__msg__GpsFix__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gpsd_client__msg__GpsFix__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2218, 2218},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gpsd_client__msg__GpsFix__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gpsd_client__msg__GpsFix__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
