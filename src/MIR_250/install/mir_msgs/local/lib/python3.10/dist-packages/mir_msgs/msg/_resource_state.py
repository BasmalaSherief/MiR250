# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/ResourceState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ResourceState(type):
    """Metaclass of message 'ResourceState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROBOT_POSITION': 0,
        'STAGING_POSITION': 1,
        'CHARGING_STATION': 2,
        'AREA': 3,
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
                'mir_msgs.msg.ResourceState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__resource_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__resource_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__resource_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__resource_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__resource_state

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROBOT_POSITION': cls.__constants['ROBOT_POSITION'],
            'STAGING_POSITION': cls.__constants['STAGING_POSITION'],
            'CHARGING_STATION': cls.__constants['CHARGING_STATION'],
            'AREA': cls.__constants['AREA'],
        }

    @property
    def ROBOT_POSITION(self):
        """Message constant 'ROBOT_POSITION'."""
        return Metaclass_ResourceState.__constants['ROBOT_POSITION']

    @property
    def STAGING_POSITION(self):
        """Message constant 'STAGING_POSITION'."""
        return Metaclass_ResourceState.__constants['STAGING_POSITION']

    @property
    def CHARGING_STATION(self):
        """Message constant 'CHARGING_STATION'."""
        return Metaclass_ResourceState.__constants['CHARGING_STATION']

    @property
    def AREA(self):
        """Message constant 'AREA'."""
        return Metaclass_ResourceState.__constants['AREA']


class ResourceState(metaclass=Metaclass_ResourceState):
    """
    Message class 'ResourceState'.

    Constants:
      ROBOT_POSITION
      STAGING_POSITION
      CHARGING_STATION
      AREA
    """

    __slots__ = [
        '_assigned',
        '_type',
        '_path_idx',
        '_distance',
        '_collision_point',
        '_queue',
        '_name',
        '_guid',
    ]

    _fields_and_field_types = {
        'assigned': 'sequence<string>',
        'type': 'uint32',
        'path_idx': 'uint32',
        'distance': 'float',
        'collision_point': 'geometry_msgs/Point',
        'queue': 'sequence<string>',
        'name': 'string',
        'guid': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.assigned = kwargs.get('assigned', [])
        self.type = kwargs.get('type', int())
        self.path_idx = kwargs.get('path_idx', int())
        self.distance = kwargs.get('distance', float())
        from geometry_msgs.msg import Point
        self.collision_point = kwargs.get('collision_point', Point())
        self.queue = kwargs.get('queue', [])
        self.name = kwargs.get('name', str())
        self.guid = kwargs.get('guid', str())

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
        if self.assigned != other.assigned:
            return False
        if self.type != other.type:
            return False
        if self.path_idx != other.path_idx:
            return False
        if self.distance != other.distance:
            return False
        if self.collision_point != other.collision_point:
            return False
        if self.queue != other.queue:
            return False
        if self.name != other.name:
            return False
        if self.guid != other.guid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def assigned(self):
        """Message field 'assigned'."""
        return self._assigned

    @assigned.setter
    def assigned(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'assigned' field must be a set or sequence and each value of type 'str'"
        self._assigned = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'type' field must be an unsigned integer in [0, 4294967295]"
        self._type = value

    @builtins.property
    def path_idx(self):
        """Message field 'path_idx'."""
        return self._path_idx

    @path_idx.setter
    def path_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_idx' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'path_idx' field must be an unsigned integer in [0, 4294967295]"
        self._path_idx = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance = value

    @builtins.property
    def collision_point(self):
        """Message field 'collision_point'."""
        return self._collision_point

    @collision_point.setter
    def collision_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'collision_point' field must be a sub message of type 'Point'"
        self._collision_point = value

    @builtins.property
    def queue(self):
        """Message field 'queue'."""
        return self._queue

    @queue.setter
    def queue(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'queue' field must be a set or sequence and each value of type 'str'"
        self._queue = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def guid(self):
        """Message field 'guid'."""
        return self._guid

    @guid.setter
    def guid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'guid' field must be of type 'str'"
        self._guid = value
