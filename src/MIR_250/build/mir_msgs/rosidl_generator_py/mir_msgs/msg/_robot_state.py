# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/RobotState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotState(type):
    """Metaclass of message 'RobotState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROBOT_STATE_NONE': 0,
        'ROBOT_STATE_STARTING': 1,
        'ROBOT_STATE_SHUTTINGDOWN': 2,
        'ROBOT_STATE_READY': 3,
        'ROBOT_STATE_PAUSE': 4,
        'ROBOT_STATE_EXECUTING': 5,
        'ROBOT_STATE_ABORTED': 6,
        'ROBOT_STATE_COMPLETED': 7,
        'ROBOT_STATE_DOCKED': 8,
        'ROBOT_STATE_DOCKING': 9,
        'ROBOT_STATE_EMERGENCYSTOP': 10,
        'ROBOT_STATE_MANUALCONTROL': 11,
        'ROBOT_STATE_ERROR': 12,
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
                'mir_msgs.msg.RobotState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROBOT_STATE_NONE': cls.__constants['ROBOT_STATE_NONE'],
            'ROBOT_STATE_STARTING': cls.__constants['ROBOT_STATE_STARTING'],
            'ROBOT_STATE_SHUTTINGDOWN': cls.__constants['ROBOT_STATE_SHUTTINGDOWN'],
            'ROBOT_STATE_READY': cls.__constants['ROBOT_STATE_READY'],
            'ROBOT_STATE_PAUSE': cls.__constants['ROBOT_STATE_PAUSE'],
            'ROBOT_STATE_EXECUTING': cls.__constants['ROBOT_STATE_EXECUTING'],
            'ROBOT_STATE_ABORTED': cls.__constants['ROBOT_STATE_ABORTED'],
            'ROBOT_STATE_COMPLETED': cls.__constants['ROBOT_STATE_COMPLETED'],
            'ROBOT_STATE_DOCKED': cls.__constants['ROBOT_STATE_DOCKED'],
            'ROBOT_STATE_DOCKING': cls.__constants['ROBOT_STATE_DOCKING'],
            'ROBOT_STATE_EMERGENCYSTOP': cls.__constants['ROBOT_STATE_EMERGENCYSTOP'],
            'ROBOT_STATE_MANUALCONTROL': cls.__constants['ROBOT_STATE_MANUALCONTROL'],
            'ROBOT_STATE_ERROR': cls.__constants['ROBOT_STATE_ERROR'],
        }

    @property
    def ROBOT_STATE_NONE(self):
        """Message constant 'ROBOT_STATE_NONE'."""
        return Metaclass_RobotState.__constants['ROBOT_STATE_NONE']

    @property
    def ROBOT_STATE_STARTING(self):
        """Message constant 'ROBOT_STATE_STARTING'."""
        return Metaclass_RobotState.__constants['ROBOT_STATE_STARTING']

    @property
    def ROBOT_STATE_SHUTTINGDOWN(self):
        """Message constant 'ROBOT_STATE_SHUTTINGDOWN'."""
        return Metaclass_RobotState.__constants['ROBOT_STATE_SHUTTINGDOWN']

    @property
    def ROBOT_STATE_READY(self):
        """Message constant 'ROBOT_STATE_READY'."""
        return Metaclass_RobotState.__constants['ROBOT_STATE_READY']

    @property
    def ROBOT_STATE_PAUSE(self):
        """Message constant 'ROBOT_STATE_PAUSE'."""
        return Metaclass_RobotState.__constants['ROBOT_STATE_PAUSE']

    @property
    def ROBOT_STATE_EXECUTING(self):
        """Message constant 'ROBOT_STATE_EXECUTING'."""
        return Metaclass_RobotState.__constants['ROBOT_STATE_EXECUTING']

    @property
    def ROBOT_STATE_ABORTED(self):
        """Message constant 'ROBOT_STATE_ABORTED'."""
        return Metaclass_RobotState.__constants['ROBOT_STATE_ABORTED']

    @property
    def ROBOT_STATE_COMPLETED(self):
        """Message constant 'ROBOT_STATE_COMPLETED'."""
        return Metaclass_RobotState.__constants['ROBOT_STATE_COMPLETED']

    @property
    def ROBOT_STATE_DOCKED(self):
        """Message constant 'ROBOT_STATE_DOCKED'."""
        return Metaclass_RobotState.__constants['ROBOT_STATE_DOCKED']

    @property
    def ROBOT_STATE_DOCKING(self):
        """Message constant 'ROBOT_STATE_DOCKING'."""
        return Metaclass_RobotState.__constants['ROBOT_STATE_DOCKING']

    @property
    def ROBOT_STATE_EMERGENCYSTOP(self):
        """Message constant 'ROBOT_STATE_EMERGENCYSTOP'."""
        return Metaclass_RobotState.__constants['ROBOT_STATE_EMERGENCYSTOP']

    @property
    def ROBOT_STATE_MANUALCONTROL(self):
        """Message constant 'ROBOT_STATE_MANUALCONTROL'."""
        return Metaclass_RobotState.__constants['ROBOT_STATE_MANUALCONTROL']

    @property
    def ROBOT_STATE_ERROR(self):
        """Message constant 'ROBOT_STATE_ERROR'."""
        return Metaclass_RobotState.__constants['ROBOT_STATE_ERROR']


class RobotState(metaclass=Metaclass_RobotState):
    """
    Message class 'RobotState'.

    Constants:
      ROBOT_STATE_NONE
      ROBOT_STATE_STARTING
      ROBOT_STATE_SHUTTINGDOWN
      ROBOT_STATE_READY
      ROBOT_STATE_PAUSE
      ROBOT_STATE_EXECUTING
      ROBOT_STATE_ABORTED
      ROBOT_STATE_COMPLETED
      ROBOT_STATE_DOCKED
      ROBOT_STATE_DOCKING
      ROBOT_STATE_EMERGENCYSTOP
      ROBOT_STATE_MANUALCONTROL
      ROBOT_STATE_ERROR
    """

    __slots__ = [
        '_robot_state',
        '_robot_state_string',
    ]

    _fields_and_field_types = {
        'robot_state': 'uint8',
        'robot_state_string': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_state = kwargs.get('robot_state', int())
        self.robot_state_string = kwargs.get('robot_state_string', str())

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
        if self.robot_state != other.robot_state:
            return False
        if self.robot_state_string != other.robot_state_string:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_state(self):
        """Message field 'robot_state'."""
        return self._robot_state

    @robot_state.setter
    def robot_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_state' field must be an unsigned integer in [0, 255]"
        self._robot_state = value

    @builtins.property
    def robot_state_string(self):
        """Message field 'robot_state_string'."""
        return self._robot_state_string

    @robot_state_string.setter
    def robot_state_string(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_state_string' field must be of type 'str'"
        self._robot_state_string = value
