# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/Gpio.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gpio(type):
    """Metaclass of message 'Gpio'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POWERBOARD_GPIO': 0,
        'POWERBOARD_RESET_SWITCH_LED': 1,
        'PENDANT_INPUT': 5,
        'AUTO_MODE_SWITCH': 10,
        'MANUAL_MODE_SWITCH': 11,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mir_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_msgs.msg.Gpio')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gpio
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gpio
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gpio
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gpio
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gpio

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POWERBOARD_GPIO': cls.__constants['POWERBOARD_GPIO'],
            'POWERBOARD_RESET_SWITCH_LED': cls.__constants['POWERBOARD_RESET_SWITCH_LED'],
            'PENDANT_INPUT': cls.__constants['PENDANT_INPUT'],
            'AUTO_MODE_SWITCH': cls.__constants['AUTO_MODE_SWITCH'],
            'MANUAL_MODE_SWITCH': cls.__constants['MANUAL_MODE_SWITCH'],
        }

    @property
    def POWERBOARD_GPIO(self):
        """Message constant 'POWERBOARD_GPIO'."""
        return Metaclass_Gpio.__constants['POWERBOARD_GPIO']

    @property
    def POWERBOARD_RESET_SWITCH_LED(self):
        """Message constant 'POWERBOARD_RESET_SWITCH_LED'."""
        return Metaclass_Gpio.__constants['POWERBOARD_RESET_SWITCH_LED']

    @property
    def PENDANT_INPUT(self):
        """Message constant 'PENDANT_INPUT'."""
        return Metaclass_Gpio.__constants['PENDANT_INPUT']

    @property
    def AUTO_MODE_SWITCH(self):
        """Message constant 'AUTO_MODE_SWITCH'."""
        return Metaclass_Gpio.__constants['AUTO_MODE_SWITCH']

    @property
    def MANUAL_MODE_SWITCH(self):
        """Message constant 'MANUAL_MODE_SWITCH'."""
        return Metaclass_Gpio.__constants['MANUAL_MODE_SWITCH']


class Gpio(metaclass=Metaclass_Gpio):
    """
    Message class 'Gpio'.

    Constants:
      POWERBOARD_GPIO
      POWERBOARD_RESET_SWITCH_LED
      PENDANT_INPUT
      AUTO_MODE_SWITCH
      MANUAL_MODE_SWITCH
    """

    __slots__ = [
        '_ioport',
        '_dat',
    ]

    _fields_and_field_types = {
        'ioport': 'uint8',
        'dat': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ioport = kwargs.get('ioport', int())
        self.dat = kwargs.get('dat', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.ioport != other.ioport:
            return False
        if self.dat != other.dat:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ioport(self):
        """Message field 'ioport'."""
        return self._ioport

    @ioport.setter
    def ioport(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ioport' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ioport' field must be an unsigned integer in [0, 255]"
        self._ioport = value

    @builtins.property
    def dat(self):
        """Message field 'dat'."""
        return self._dat

    @dat.setter
    def dat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dat' field must be an unsigned integer in [0, 255]"
        self._dat = value
