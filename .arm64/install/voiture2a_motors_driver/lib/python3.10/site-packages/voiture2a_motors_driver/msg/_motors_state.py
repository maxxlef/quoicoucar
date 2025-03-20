# generated from rosidl_generator_py/resource/_idl.py.em
# with input from voiture2a_motors_driver:msg/MotorsState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'pwm_value'
# Member 'channels'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorsState(type):
    """Metaclass of message 'MotorsState'."""

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
            module = import_type_support('voiture2a_motors_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'voiture2a_motors_driver.msg.MotorsState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motors_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motors_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motors_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motors_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motors_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorsState(metaclass=Metaclass_MotorsState):
    """Message class 'MotorsState'."""

    __slots__ = [
        '_pwm_value',
        '_channels',
        '_failsafe',
        '_lost',
        '_battery',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'pwm_value': 'uint16[2]',
        'channels': 'uint16[18]',
        'failsafe': 'uint8',
        'lost': 'uint8',
        'battery': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 18),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        if 'pwm_value' not in kwargs:
            self.pwm_value = numpy.zeros(2, dtype=numpy.uint16)
        else:
            self.pwm_value = numpy.array(kwargs.get('pwm_value'), dtype=numpy.uint16)
            assert self.pwm_value.shape == (2, )
        if 'channels' not in kwargs:
            self.channels = numpy.zeros(18, dtype=numpy.uint16)
        else:
            self.channels = numpy.array(kwargs.get('channels'), dtype=numpy.uint16)
            assert self.channels.shape == (18, )
        self.failsafe = kwargs.get('failsafe', int())
        self.lost = kwargs.get('lost', int())
        self.battery = kwargs.get('battery', float())

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
        if all(self.pwm_value != other.pwm_value):
            return False
        if all(self.channels != other.channels):
            return False
        if self.failsafe != other.failsafe:
            return False
        if self.lost != other.lost:
            return False
        if self.battery != other.battery:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pwm_value(self):
        """Message field 'pwm_value'."""
        return self._pwm_value

    @pwm_value.setter
    def pwm_value(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint16, \
                    "The 'pwm_value' numpy.ndarray() must have the dtype of 'numpy.uint16'"
                assert value.size == 2, \
                    "The 'pwm_value' numpy.ndarray() must have a size of 2"
                self._pwm_value = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'pwm_value' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._pwm_value = numpy.array(value, dtype=numpy.uint16)

    @builtins.property
    def channels(self):
        """Message field 'channels'."""
        return self._channels

    @channels.setter
    def channels(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint16, \
                    "The 'channels' numpy.ndarray() must have the dtype of 'numpy.uint16'"
                assert value.size == 18, \
                    "The 'channels' numpy.ndarray() must have a size of 18"
                self._channels = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 18 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'channels' field must be a set or sequence with length 18 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._channels = numpy.array(value, dtype=numpy.uint16)

    @builtins.property
    def failsafe(self):
        """Message field 'failsafe'."""
        return self._failsafe

    @failsafe.setter
    def failsafe(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'failsafe' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'failsafe' field must be an unsigned integer in [0, 255]"
        self._failsafe = value

    @builtins.property
    def lost(self):
        """Message field 'lost'."""
        return self._lost

    @lost.setter
    def lost(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'lost' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lost' field must be an unsigned integer in [0, 255]"
        self._lost = value

    @builtins.property
    def battery(self):
        """Message field 'battery'."""
        return self._battery

    @battery.setter
    def battery(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'battery' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery = value
