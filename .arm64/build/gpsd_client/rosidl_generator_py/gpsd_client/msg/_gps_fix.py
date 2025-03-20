# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gpsd_client:msg/GpsFix.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GpsFix(type):
    """Metaclass of message 'GpsFix'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODE_NOT_SEEN': 0,
        'MODE_NO_FIX': 1,
        'MODE_2D': 2,
        'MODE_3D': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gpsd_client')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gpsd_client.msg.GpsFix')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gps_fix
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gps_fix
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gps_fix
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gps_fix
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gps_fix

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE_NOT_SEEN': cls.__constants['MODE_NOT_SEEN'],
            'MODE_NO_FIX': cls.__constants['MODE_NO_FIX'],
            'MODE_2D': cls.__constants['MODE_2D'],
            'MODE_3D': cls.__constants['MODE_3D'],
        }

    @property
    def MODE_NOT_SEEN(self):
        """Message constant 'MODE_NOT_SEEN'."""
        return Metaclass_GpsFix.__constants['MODE_NOT_SEEN']

    @property
    def MODE_NO_FIX(self):
        """Message constant 'MODE_NO_FIX'."""
        return Metaclass_GpsFix.__constants['MODE_NO_FIX']

    @property
    def MODE_2D(self):
        """Message constant 'MODE_2D'."""
        return Metaclass_GpsFix.__constants['MODE_2D']

    @property
    def MODE_3D(self):
        """Message constant 'MODE_3D'."""
        return Metaclass_GpsFix.__constants['MODE_3D']


class GpsFix(metaclass=Metaclass_GpsFix):
    """
    Message class 'GpsFix'.

    Constants:
      MODE_NOT_SEEN
      MODE_NO_FIX
      MODE_2D
      MODE_3D
    """

    __slots__ = [
        '_header',
        '_mode',
        '_status',
        '_latitude',
        '_longitude',
        '_altitude',
        '_track',
        '_speed',
        '_time',
        '_gdop',
        '_pdop',
        '_hdop',
        '_vdop',
        '_tdop',
        '_err',
        '_err_horz',
        '_err_vert',
        '_err_track',
        '_err_speed',
        '_err_time',
        '_satellites_visible',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'mode': 'int16',
        'status': 'int16',
        'latitude': 'double',
        'longitude': 'double',
        'altitude': 'double',
        'track': 'double',
        'speed': 'double',
        'time': 'double',
        'gdop': 'double',
        'pdop': 'double',
        'hdop': 'double',
        'vdop': 'double',
        'tdop': 'double',
        'err': 'double',
        'err_horz': 'double',
        'err_vert': 'double',
        'err_track': 'double',
        'err_speed': 'double',
        'err_time': 'double',
        'satellites_visible': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.mode = kwargs.get('mode', int())
        self.status = kwargs.get('status', int())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.altitude = kwargs.get('altitude', float())
        self.track = kwargs.get('track', float())
        self.speed = kwargs.get('speed', float())
        self.time = kwargs.get('time', float())
        self.gdop = kwargs.get('gdop', float())
        self.pdop = kwargs.get('pdop', float())
        self.hdop = kwargs.get('hdop', float())
        self.vdop = kwargs.get('vdop', float())
        self.tdop = kwargs.get('tdop', float())
        self.err = kwargs.get('err', float())
        self.err_horz = kwargs.get('err_horz', float())
        self.err_vert = kwargs.get('err_vert', float())
        self.err_track = kwargs.get('err_track', float())
        self.err_speed = kwargs.get('err_speed', float())
        self.err_time = kwargs.get('err_time', float())
        self.satellites_visible = kwargs.get('satellites_visible', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.mode != other.mode:
            return False
        if self.status != other.status:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.altitude != other.altitude:
            return False
        if self.track != other.track:
            return False
        if self.speed != other.speed:
            return False
        if self.time != other.time:
            return False
        if self.gdop != other.gdop:
            return False
        if self.pdop != other.pdop:
            return False
        if self.hdop != other.hdop:
            return False
        if self.vdop != other.vdop:
            return False
        if self.tdop != other.tdop:
            return False
        if self.err != other.err:
            return False
        if self.err_horz != other.err_horz:
            return False
        if self.err_vert != other.err_vert:
            return False
        if self.err_track != other.err_track:
            return False
        if self.err_speed != other.err_speed:
            return False
        if self.err_time != other.err_time:
            return False
        if self.satellites_visible != other.satellites_visible:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'mode' field must be an integer in [-32768, 32767]"
        self._mode = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'status' field must be an integer in [-32768, 32767]"
        self._status = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._altitude = value

    @builtins.property
    def track(self):
        """Message field 'track'."""
        return self._track

    @track.setter
    def track(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'track' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'track' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._track = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed = value

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time = value

    @builtins.property
    def gdop(self):
        """Message field 'gdop'."""
        return self._gdop

    @gdop.setter
    def gdop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gdop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gdop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gdop = value

    @builtins.property
    def pdop(self):
        """Message field 'pdop'."""
        return self._pdop

    @pdop.setter
    def pdop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pdop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pdop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pdop = value

    @builtins.property
    def hdop(self):
        """Message field 'hdop'."""
        return self._hdop

    @hdop.setter
    def hdop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'hdop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'hdop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._hdop = value

    @builtins.property
    def vdop(self):
        """Message field 'vdop'."""
        return self._vdop

    @vdop.setter
    def vdop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vdop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vdop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vdop = value

    @builtins.property
    def tdop(self):
        """Message field 'tdop'."""
        return self._tdop

    @tdop.setter
    def tdop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'tdop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tdop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tdop = value

    @builtins.property
    def err(self):
        """Message field 'err'."""
        return self._err

    @err.setter
    def err(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err = value

    @builtins.property
    def err_horz(self):
        """Message field 'err_horz'."""
        return self._err_horz

    @err_horz.setter
    def err_horz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err_horz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err_horz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err_horz = value

    @builtins.property
    def err_vert(self):
        """Message field 'err_vert'."""
        return self._err_vert

    @err_vert.setter
    def err_vert(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err_vert' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err_vert' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err_vert = value

    @builtins.property
    def err_track(self):
        """Message field 'err_track'."""
        return self._err_track

    @err_track.setter
    def err_track(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err_track' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err_track' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err_track = value

    @builtins.property
    def err_speed(self):
        """Message field 'err_speed'."""
        return self._err_speed

    @err_speed.setter
    def err_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err_speed = value

    @builtins.property
    def err_time(self):
        """Message field 'err_time'."""
        return self._err_time

    @err_time.setter
    def err_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err_time = value

    @builtins.property
    def satellites_visible(self):
        """Message field 'satellites_visible'."""
        return self._satellites_visible

    @satellites_visible.setter
    def satellites_visible(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'satellites_visible' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'satellites_visible' field must be an integer in [-2147483648, 2147483647]"
        self._satellites_visible = value
