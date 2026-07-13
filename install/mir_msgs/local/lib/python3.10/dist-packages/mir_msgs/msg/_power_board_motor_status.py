# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/PowerBoardMotorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PowerBoardMotorStatus(type):
    """Metaclass of message 'PowerBoardMotorStatus'."""

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
            module = import_type_support('mir_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_msgs.msg.PowerBoardMotorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__power_board_motor_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__power_board_motor_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__power_board_motor_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__power_board_motor_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__power_board_motor_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PowerBoardMotorStatus(metaclass=Metaclass_PowerBoardMotorStatus):
    """Message class 'PowerBoardMotorStatus'."""

    __slots__ = [
        '_left_motor_ctrl_word',
        '_left_motor_speed',
        '_left_motor_encoder',
        '_left_motor_status',
        '_left_motor_error',
        '_left_motor_error_hist1',
        '_left_motor_error_hist2',
        '_left_motor_current',
        '_left_motor_i2t_motor',
        '_left_motor_i2t_controller',
        '_left_motor_temperature',
        '_right_motor_ctrl_word',
        '_right_motor_speed',
        '_right_motor_encoder',
        '_right_motor_status',
        '_right_motor_error',
        '_right_motor_error_hist1',
        '_right_motor_error_hist2',
        '_right_motor_current',
        '_right_motor_i2t_motor',
        '_right_motor_i2t_controller',
        '_right_motor_temperature',
        '_brake_left_status',
        '_brake_right_status',
    ]

    _fields_and_field_types = {
        'left_motor_ctrl_word': 'uint16',
        'left_motor_speed': 'int32',
        'left_motor_encoder': 'int32',
        'left_motor_status': 'uint16',
        'left_motor_error': 'uint8',
        'left_motor_error_hist1': 'uint32',
        'left_motor_error_hist2': 'uint32',
        'left_motor_current': 'int32',
        'left_motor_i2t_motor': 'uint16',
        'left_motor_i2t_controller': 'uint16',
        'left_motor_temperature': 'int16',
        'right_motor_ctrl_word': 'uint16',
        'right_motor_speed': 'int32',
        'right_motor_encoder': 'int32',
        'right_motor_status': 'uint16',
        'right_motor_error': 'uint8',
        'right_motor_error_hist1': 'uint32',
        'right_motor_error_hist2': 'uint32',
        'right_motor_current': 'int32',
        'right_motor_i2t_motor': 'uint16',
        'right_motor_i2t_controller': 'uint16',
        'right_motor_temperature': 'int16',
        'brake_left_status': 'uint8',
        'brake_right_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_motor_ctrl_word = kwargs.get('left_motor_ctrl_word', int())
        self.left_motor_speed = kwargs.get('left_motor_speed', int())
        self.left_motor_encoder = kwargs.get('left_motor_encoder', int())
        self.left_motor_status = kwargs.get('left_motor_status', int())
        self.left_motor_error = kwargs.get('left_motor_error', int())
        self.left_motor_error_hist1 = kwargs.get('left_motor_error_hist1', int())
        self.left_motor_error_hist2 = kwargs.get('left_motor_error_hist2', int())
        self.left_motor_current = kwargs.get('left_motor_current', int())
        self.left_motor_i2t_motor = kwargs.get('left_motor_i2t_motor', int())
        self.left_motor_i2t_controller = kwargs.get('left_motor_i2t_controller', int())
        self.left_motor_temperature = kwargs.get('left_motor_temperature', int())
        self.right_motor_ctrl_word = kwargs.get('right_motor_ctrl_word', int())
        self.right_motor_speed = kwargs.get('right_motor_speed', int())
        self.right_motor_encoder = kwargs.get('right_motor_encoder', int())
        self.right_motor_status = kwargs.get('right_motor_status', int())
        self.right_motor_error = kwargs.get('right_motor_error', int())
        self.right_motor_error_hist1 = kwargs.get('right_motor_error_hist1', int())
        self.right_motor_error_hist2 = kwargs.get('right_motor_error_hist2', int())
        self.right_motor_current = kwargs.get('right_motor_current', int())
        self.right_motor_i2t_motor = kwargs.get('right_motor_i2t_motor', int())
        self.right_motor_i2t_controller = kwargs.get('right_motor_i2t_controller', int())
        self.right_motor_temperature = kwargs.get('right_motor_temperature', int())
        self.brake_left_status = kwargs.get('brake_left_status', int())
        self.brake_right_status = kwargs.get('brake_right_status', int())

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
        if self.left_motor_ctrl_word != other.left_motor_ctrl_word:
            return False
        if self.left_motor_speed != other.left_motor_speed:
            return False
        if self.left_motor_encoder != other.left_motor_encoder:
            return False
        if self.left_motor_status != other.left_motor_status:
            return False
        if self.left_motor_error != other.left_motor_error:
            return False
        if self.left_motor_error_hist1 != other.left_motor_error_hist1:
            return False
        if self.left_motor_error_hist2 != other.left_motor_error_hist2:
            return False
        if self.left_motor_current != other.left_motor_current:
            return False
        if self.left_motor_i2t_motor != other.left_motor_i2t_motor:
            return False
        if self.left_motor_i2t_controller != other.left_motor_i2t_controller:
            return False
        if self.left_motor_temperature != other.left_motor_temperature:
            return False
        if self.right_motor_ctrl_word != other.right_motor_ctrl_word:
            return False
        if self.right_motor_speed != other.right_motor_speed:
            return False
        if self.right_motor_encoder != other.right_motor_encoder:
            return False
        if self.right_motor_status != other.right_motor_status:
            return False
        if self.right_motor_error != other.right_motor_error:
            return False
        if self.right_motor_error_hist1 != other.right_motor_error_hist1:
            return False
        if self.right_motor_error_hist2 != other.right_motor_error_hist2:
            return False
        if self.right_motor_current != other.right_motor_current:
            return False
        if self.right_motor_i2t_motor != other.right_motor_i2t_motor:
            return False
        if self.right_motor_i2t_controller != other.right_motor_i2t_controller:
            return False
        if self.right_motor_temperature != other.right_motor_temperature:
            return False
        if self.brake_left_status != other.brake_left_status:
            return False
        if self.brake_right_status != other.brake_right_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_motor_ctrl_word(self):
        """Message field 'left_motor_ctrl_word'."""
        return self._left_motor_ctrl_word

    @left_motor_ctrl_word.setter
    def left_motor_ctrl_word(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_motor_ctrl_word' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'left_motor_ctrl_word' field must be an unsigned integer in [0, 65535]"
        self._left_motor_ctrl_word = value

    @builtins.property
    def left_motor_speed(self):
        """Message field 'left_motor_speed'."""
        return self._left_motor_speed

    @left_motor_speed.setter
    def left_motor_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_motor_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'left_motor_speed' field must be an integer in [-2147483648, 2147483647]"
        self._left_motor_speed = value

    @builtins.property
    def left_motor_encoder(self):
        """Message field 'left_motor_encoder'."""
        return self._left_motor_encoder

    @left_motor_encoder.setter
    def left_motor_encoder(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_motor_encoder' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'left_motor_encoder' field must be an integer in [-2147483648, 2147483647]"
        self._left_motor_encoder = value

    @builtins.property
    def left_motor_status(self):
        """Message field 'left_motor_status'."""
        return self._left_motor_status

    @left_motor_status.setter
    def left_motor_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_motor_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'left_motor_status' field must be an unsigned integer in [0, 65535]"
        self._left_motor_status = value

    @builtins.property
    def left_motor_error(self):
        """Message field 'left_motor_error'."""
        return self._left_motor_error

    @left_motor_error.setter
    def left_motor_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_motor_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'left_motor_error' field must be an unsigned integer in [0, 255]"
        self._left_motor_error = value

    @builtins.property
    def left_motor_error_hist1(self):
        """Message field 'left_motor_error_hist1'."""
        return self._left_motor_error_hist1

    @left_motor_error_hist1.setter
    def left_motor_error_hist1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_motor_error_hist1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'left_motor_error_hist1' field must be an unsigned integer in [0, 4294967295]"
        self._left_motor_error_hist1 = value

    @builtins.property
    def left_motor_error_hist2(self):
        """Message field 'left_motor_error_hist2'."""
        return self._left_motor_error_hist2

    @left_motor_error_hist2.setter
    def left_motor_error_hist2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_motor_error_hist2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'left_motor_error_hist2' field must be an unsigned integer in [0, 4294967295]"
        self._left_motor_error_hist2 = value

    @builtins.property
    def left_motor_current(self):
        """Message field 'left_motor_current'."""
        return self._left_motor_current

    @left_motor_current.setter
    def left_motor_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_motor_current' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'left_motor_current' field must be an integer in [-2147483648, 2147483647]"
        self._left_motor_current = value

    @builtins.property
    def left_motor_i2t_motor(self):
        """Message field 'left_motor_i2t_motor'."""
        return self._left_motor_i2t_motor

    @left_motor_i2t_motor.setter
    def left_motor_i2t_motor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_motor_i2t_motor' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'left_motor_i2t_motor' field must be an unsigned integer in [0, 65535]"
        self._left_motor_i2t_motor = value

    @builtins.property
    def left_motor_i2t_controller(self):
        """Message field 'left_motor_i2t_controller'."""
        return self._left_motor_i2t_controller

    @left_motor_i2t_controller.setter
    def left_motor_i2t_controller(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_motor_i2t_controller' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'left_motor_i2t_controller' field must be an unsigned integer in [0, 65535]"
        self._left_motor_i2t_controller = value

    @builtins.property
    def left_motor_temperature(self):
        """Message field 'left_motor_temperature'."""
        return self._left_motor_temperature

    @left_motor_temperature.setter
    def left_motor_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_motor_temperature' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'left_motor_temperature' field must be an integer in [-32768, 32767]"
        self._left_motor_temperature = value

    @builtins.property
    def right_motor_ctrl_word(self):
        """Message field 'right_motor_ctrl_word'."""
        return self._right_motor_ctrl_word

    @right_motor_ctrl_word.setter
    def right_motor_ctrl_word(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_motor_ctrl_word' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'right_motor_ctrl_word' field must be an unsigned integer in [0, 65535]"
        self._right_motor_ctrl_word = value

    @builtins.property
    def right_motor_speed(self):
        """Message field 'right_motor_speed'."""
        return self._right_motor_speed

    @right_motor_speed.setter
    def right_motor_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_motor_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'right_motor_speed' field must be an integer in [-2147483648, 2147483647]"
        self._right_motor_speed = value

    @builtins.property
    def right_motor_encoder(self):
        """Message field 'right_motor_encoder'."""
        return self._right_motor_encoder

    @right_motor_encoder.setter
    def right_motor_encoder(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_motor_encoder' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'right_motor_encoder' field must be an integer in [-2147483648, 2147483647]"
        self._right_motor_encoder = value

    @builtins.property
    def right_motor_status(self):
        """Message field 'right_motor_status'."""
        return self._right_motor_status

    @right_motor_status.setter
    def right_motor_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_motor_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'right_motor_status' field must be an unsigned integer in [0, 65535]"
        self._right_motor_status = value

    @builtins.property
    def right_motor_error(self):
        """Message field 'right_motor_error'."""
        return self._right_motor_error

    @right_motor_error.setter
    def right_motor_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_motor_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'right_motor_error' field must be an unsigned integer in [0, 255]"
        self._right_motor_error = value

    @builtins.property
    def right_motor_error_hist1(self):
        """Message field 'right_motor_error_hist1'."""
        return self._right_motor_error_hist1

    @right_motor_error_hist1.setter
    def right_motor_error_hist1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_motor_error_hist1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'right_motor_error_hist1' field must be an unsigned integer in [0, 4294967295]"
        self._right_motor_error_hist1 = value

    @builtins.property
    def right_motor_error_hist2(self):
        """Message field 'right_motor_error_hist2'."""
        return self._right_motor_error_hist2

    @right_motor_error_hist2.setter
    def right_motor_error_hist2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_motor_error_hist2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'right_motor_error_hist2' field must be an unsigned integer in [0, 4294967295]"
        self._right_motor_error_hist2 = value

    @builtins.property
    def right_motor_current(self):
        """Message field 'right_motor_current'."""
        return self._right_motor_current

    @right_motor_current.setter
    def right_motor_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_motor_current' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'right_motor_current' field must be an integer in [-2147483648, 2147483647]"
        self._right_motor_current = value

    @builtins.property
    def right_motor_i2t_motor(self):
        """Message field 'right_motor_i2t_motor'."""
        return self._right_motor_i2t_motor

    @right_motor_i2t_motor.setter
    def right_motor_i2t_motor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_motor_i2t_motor' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'right_motor_i2t_motor' field must be an unsigned integer in [0, 65535]"
        self._right_motor_i2t_motor = value

    @builtins.property
    def right_motor_i2t_controller(self):
        """Message field 'right_motor_i2t_controller'."""
        return self._right_motor_i2t_controller

    @right_motor_i2t_controller.setter
    def right_motor_i2t_controller(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_motor_i2t_controller' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'right_motor_i2t_controller' field must be an unsigned integer in [0, 65535]"
        self._right_motor_i2t_controller = value

    @builtins.property
    def right_motor_temperature(self):
        """Message field 'right_motor_temperature'."""
        return self._right_motor_temperature

    @right_motor_temperature.setter
    def right_motor_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_motor_temperature' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'right_motor_temperature' field must be an integer in [-32768, 32767]"
        self._right_motor_temperature = value

    @builtins.property
    def brake_left_status(self):
        """Message field 'brake_left_status'."""
        return self._brake_left_status

    @brake_left_status.setter
    def brake_left_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_left_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brake_left_status' field must be an unsigned integer in [0, 255]"
        self._brake_left_status = value

    @builtins.property
    def brake_right_status(self):
        """Message field 'brake_right_status'."""
        return self._brake_right_status

    @brake_right_status.setter
    def brake_right_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_right_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brake_right_status' field must be an unsigned integer in [0, 255]"
        self._brake_right_status = value
