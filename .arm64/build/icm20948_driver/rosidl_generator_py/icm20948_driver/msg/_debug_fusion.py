# generated from rosidl_generator_py/resource/_idl.py.em
# with input from icm20948_driver:msg/DebugFusion.idl
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


class Metaclass_DebugFusion(type):
    """Metaclass of message 'DebugFusion'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('icm20948_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'icm20948_driver.msg.DebugFusion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__debug_fusion
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__debug_fusion
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__debug_fusion
            cls._TYPE_SUPPORT = module.type_support_msg__msg__debug_fusion
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__debug_fusion

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DebugFusion(metaclass=Metaclass_DebugFusion):
    """Message class 'DebugFusion'."""

    __slots__ = [
        '_header',
        '_acceleration_error',
        '_accelerometer_ignored',
        '_acceleration_recovery_trigger',
        '_magnetic_error',
        '_magnetometer_ignored',
        '_magnetic_recovery_trigger',
        '_initialising',
        '_angular_rate_recovery',
        '_acceleration_recovery',
        '_magnetic_recovery',
        '_magnetometer_limit_reached',
        '_magnetometer_data_skipped',
        '_magnetometer_data_is_ready',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'acceleration_error': 'float',
        'accelerometer_ignored': 'boolean',
        'acceleration_recovery_trigger': 'float',
        'magnetic_error': 'float',
        'magnetometer_ignored': 'boolean',
        'magnetic_recovery_trigger': 'float',
        'initialising': 'boolean',
        'angular_rate_recovery': 'boolean',
        'acceleration_recovery': 'boolean',
        'magnetic_recovery': 'boolean',
        'magnetometer_limit_reached': 'boolean',
        'magnetometer_data_skipped': 'boolean',
        'magnetometer_data_is_ready': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.acceleration_error = kwargs.get('acceleration_error', float())
        self.accelerometer_ignored = kwargs.get('accelerometer_ignored', bool())
        self.acceleration_recovery_trigger = kwargs.get('acceleration_recovery_trigger', float())
        self.magnetic_error = kwargs.get('magnetic_error', float())
        self.magnetometer_ignored = kwargs.get('magnetometer_ignored', bool())
        self.magnetic_recovery_trigger = kwargs.get('magnetic_recovery_trigger', float())
        self.initialising = kwargs.get('initialising', bool())
        self.angular_rate_recovery = kwargs.get('angular_rate_recovery', bool())
        self.acceleration_recovery = kwargs.get('acceleration_recovery', bool())
        self.magnetic_recovery = kwargs.get('magnetic_recovery', bool())
        self.magnetometer_limit_reached = kwargs.get('magnetometer_limit_reached', bool())
        self.magnetometer_data_skipped = kwargs.get('magnetometer_data_skipped', bool())
        self.magnetometer_data_is_ready = kwargs.get('magnetometer_data_is_ready', bool())

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
        if self.acceleration_error != other.acceleration_error:
            return False
        if self.accelerometer_ignored != other.accelerometer_ignored:
            return False
        if self.acceleration_recovery_trigger != other.acceleration_recovery_trigger:
            return False
        if self.magnetic_error != other.magnetic_error:
            return False
        if self.magnetometer_ignored != other.magnetometer_ignored:
            return False
        if self.magnetic_recovery_trigger != other.magnetic_recovery_trigger:
            return False
        if self.initialising != other.initialising:
            return False
        if self.angular_rate_recovery != other.angular_rate_recovery:
            return False
        if self.acceleration_recovery != other.acceleration_recovery:
            return False
        if self.magnetic_recovery != other.magnetic_recovery:
            return False
        if self.magnetometer_limit_reached != other.magnetometer_limit_reached:
            return False
        if self.magnetometer_data_skipped != other.magnetometer_data_skipped:
            return False
        if self.magnetometer_data_is_ready != other.magnetometer_data_is_ready:
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
    def acceleration_error(self):
        """Message field 'acceleration_error'."""
        return self._acceleration_error

    @acceleration_error.setter
    def acceleration_error(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'acceleration_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acceleration_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acceleration_error = value

    @builtins.property
    def accelerometer_ignored(self):
        """Message field 'accelerometer_ignored'."""
        return self._accelerometer_ignored

    @accelerometer_ignored.setter
    def accelerometer_ignored(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accelerometer_ignored' field must be of type 'bool'"
        self._accelerometer_ignored = value

    @builtins.property
    def acceleration_recovery_trigger(self):
        """Message field 'acceleration_recovery_trigger'."""
        return self._acceleration_recovery_trigger

    @acceleration_recovery_trigger.setter
    def acceleration_recovery_trigger(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'acceleration_recovery_trigger' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acceleration_recovery_trigger' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acceleration_recovery_trigger = value

    @builtins.property
    def magnetic_error(self):
        """Message field 'magnetic_error'."""
        return self._magnetic_error

    @magnetic_error.setter
    def magnetic_error(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'magnetic_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'magnetic_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._magnetic_error = value

    @builtins.property
    def magnetometer_ignored(self):
        """Message field 'magnetometer_ignored'."""
        return self._magnetometer_ignored

    @magnetometer_ignored.setter
    def magnetometer_ignored(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'magnetometer_ignored' field must be of type 'bool'"
        self._magnetometer_ignored = value

    @builtins.property
    def magnetic_recovery_trigger(self):
        """Message field 'magnetic_recovery_trigger'."""
        return self._magnetic_recovery_trigger

    @magnetic_recovery_trigger.setter
    def magnetic_recovery_trigger(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'magnetic_recovery_trigger' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'magnetic_recovery_trigger' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._magnetic_recovery_trigger = value

    @builtins.property
    def initialising(self):
        """Message field 'initialising'."""
        return self._initialising

    @initialising.setter
    def initialising(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'initialising' field must be of type 'bool'"
        self._initialising = value

    @builtins.property
    def angular_rate_recovery(self):
        """Message field 'angular_rate_recovery'."""
        return self._angular_rate_recovery

    @angular_rate_recovery.setter
    def angular_rate_recovery(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'angular_rate_recovery' field must be of type 'bool'"
        self._angular_rate_recovery = value

    @builtins.property
    def acceleration_recovery(self):
        """Message field 'acceleration_recovery'."""
        return self._acceleration_recovery

    @acceleration_recovery.setter
    def acceleration_recovery(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'acceleration_recovery' field must be of type 'bool'"
        self._acceleration_recovery = value

    @builtins.property
    def magnetic_recovery(self):
        """Message field 'magnetic_recovery'."""
        return self._magnetic_recovery

    @magnetic_recovery.setter
    def magnetic_recovery(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'magnetic_recovery' field must be of type 'bool'"
        self._magnetic_recovery = value

    @builtins.property
    def magnetometer_limit_reached(self):
        """Message field 'magnetometer_limit_reached'."""
        return self._magnetometer_limit_reached

    @magnetometer_limit_reached.setter
    def magnetometer_limit_reached(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'magnetometer_limit_reached' field must be of type 'bool'"
        self._magnetometer_limit_reached = value

    @builtins.property
    def magnetometer_data_skipped(self):
        """Message field 'magnetometer_data_skipped'."""
        return self._magnetometer_data_skipped

    @magnetometer_data_skipped.setter
    def magnetometer_data_skipped(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'magnetometer_data_skipped' field must be of type 'bool'"
        self._magnetometer_data_skipped = value

    @builtins.property
    def magnetometer_data_is_ready(self):
        """Message field 'magnetometer_data_is_ready'."""
        return self._magnetometer_data_is_ready

    @magnetometer_data_is_ready.setter
    def magnetometer_data_is_ready(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'magnetometer_data_is_ready' field must be of type 'bool'"
        self._magnetometer_data_is_ready = value
