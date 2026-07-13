# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/MissionCtrlState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MissionCtrlState(type):
    """Metaclass of message 'MissionCtrlState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATE_IDLE': 0,
        'STATE_WAIT_POS_LOCK': 1,
        'STATE_WAIT_AREA_LOCK': 2,
        'STATE_WAIT_MAP_TRANSITION': 10,
        'STATE_WAIT_LIFT_START_FLOOR': 11,
        'STATE_WAIT_LIFT_END_FLOOR': 12,
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
                'mir_msgs.msg.MissionCtrlState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mission_ctrl_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mission_ctrl_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mission_ctrl_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mission_ctrl_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mission_ctrl_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATE_IDLE': cls.__constants['STATE_IDLE'],
            'STATE_WAIT_POS_LOCK': cls.__constants['STATE_WAIT_POS_LOCK'],
            'STATE_WAIT_AREA_LOCK': cls.__constants['STATE_WAIT_AREA_LOCK'],
            'STATE_WAIT_MAP_TRANSITION': cls.__constants['STATE_WAIT_MAP_TRANSITION'],
            'STATE_WAIT_LIFT_START_FLOOR': cls.__constants['STATE_WAIT_LIFT_START_FLOOR'],
            'STATE_WAIT_LIFT_END_FLOOR': cls.__constants['STATE_WAIT_LIFT_END_FLOOR'],
        }

    @property
    def STATE_IDLE(self):
        """Message constant 'STATE_IDLE'."""
        return Metaclass_MissionCtrlState.__constants['STATE_IDLE']

    @property
    def STATE_WAIT_POS_LOCK(self):
        """Message constant 'STATE_WAIT_POS_LOCK'."""
        return Metaclass_MissionCtrlState.__constants['STATE_WAIT_POS_LOCK']

    @property
    def STATE_WAIT_AREA_LOCK(self):
        """Message constant 'STATE_WAIT_AREA_LOCK'."""
        return Metaclass_MissionCtrlState.__constants['STATE_WAIT_AREA_LOCK']

    @property
    def STATE_WAIT_MAP_TRANSITION(self):
        """Message constant 'STATE_WAIT_MAP_TRANSITION'."""
        return Metaclass_MissionCtrlState.__constants['STATE_WAIT_MAP_TRANSITION']

    @property
    def STATE_WAIT_LIFT_START_FLOOR(self):
        """Message constant 'STATE_WAIT_LIFT_START_FLOOR'."""
        return Metaclass_MissionCtrlState.__constants['STATE_WAIT_LIFT_START_FLOOR']

    @property
    def STATE_WAIT_LIFT_END_FLOOR(self):
        """Message constant 'STATE_WAIT_LIFT_END_FLOOR'."""
        return Metaclass_MissionCtrlState.__constants['STATE_WAIT_LIFT_END_FLOOR']


class MissionCtrlState(metaclass=Metaclass_MissionCtrlState):
    """
    Message class 'MissionCtrlState'.

    Constants:
      STATE_IDLE
      STATE_WAIT_POS_LOCK
      STATE_WAIT_AREA_LOCK
      STATE_WAIT_MAP_TRANSITION
      STATE_WAIT_LIFT_START_FLOOR
      STATE_WAIT_LIFT_END_FLOOR
    """

    __slots__ = [
        '_state',
        '_pos_id',
    ]

    _fields_and_field_types = {
        'state': 'int32',
        'pos_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', int())
        self.pos_id = kwargs.get('pos_id', int())

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
        if self.state != other.state:
            return False
        if self.pos_id != other.pos_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'state' field must be an integer in [-2147483648, 2147483647]"
        self._state = value

    @builtins.property
    def pos_id(self):
        """Message field 'pos_id'."""
        return self._pos_id

    @pos_id.setter
    def pos_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pos_id' field must be an integer in [-2147483648, 2147483647]"
        self._pos_id = value
