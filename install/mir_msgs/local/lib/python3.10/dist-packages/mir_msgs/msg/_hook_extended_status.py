# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/HookExtendedStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HookExtendedStatus(type):
    """Metaclass of message 'HookExtendedStatus'."""

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
                'mir_msgs.msg.HookExtendedStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hook_extended_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hook_extended_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hook_extended_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hook_extended_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hook_extended_status

            from mir_msgs.msg import BrakeState
            if BrakeState.__class__._TYPE_SUPPORT is None:
                BrakeState.__class__.__import_type_support__()

            from mir_msgs.msg import GripperState
            if GripperState.__class__._TYPE_SUPPORT is None:
                GripperState.__class__.__import_type_support__()

            from mir_msgs.msg import HeightState
            if HeightState.__class__._TYPE_SUPPORT is None:
                HeightState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HookExtendedStatus(metaclass=Metaclass_HookExtendedStatus):
    """Message class 'HookExtendedStatus'."""

    __slots__ = [
        '_available',
        '_brake',
        '_gripper',
        '_height',
        '_angle',
        '_qr_marker_name',
    ]

    _fields_and_field_types = {
        'available': 'boolean',
        'brake': 'mir_msgs/BrakeState',
        'gripper': 'mir_msgs/GripperState',
        'height': 'mir_msgs/HeightState',
        'angle': 'float',
        'qr_marker_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mir_msgs', 'msg'], 'BrakeState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mir_msgs', 'msg'], 'GripperState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mir_msgs', 'msg'], 'HeightState'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.available = kwargs.get('available', bool())
        from mir_msgs.msg import BrakeState
        self.brake = kwargs.get('brake', BrakeState())
        from mir_msgs.msg import GripperState
        self.gripper = kwargs.get('gripper', GripperState())
        from mir_msgs.msg import HeightState
        self.height = kwargs.get('height', HeightState())
        self.angle = kwargs.get('angle', float())
        self.qr_marker_name = kwargs.get('qr_marker_name', str())

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
        if self.available != other.available:
            return False
        if self.brake != other.brake:
            return False
        if self.gripper != other.gripper:
            return False
        if self.height != other.height:
            return False
        if self.angle != other.angle:
            return False
        if self.qr_marker_name != other.qr_marker_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def available(self):
        """Message field 'available'."""
        return self._available

    @available.setter
    def available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'available' field must be of type 'bool'"
        self._available = value

    @builtins.property
    def brake(self):
        """Message field 'brake'."""
        return self._brake

    @brake.setter
    def brake(self, value):
        if __debug__:
            from mir_msgs.msg import BrakeState
            assert \
                isinstance(value, BrakeState), \
                "The 'brake' field must be a sub message of type 'BrakeState'"
        self._brake = value

    @builtins.property
    def gripper(self):
        """Message field 'gripper'."""
        return self._gripper

    @gripper.setter
    def gripper(self, value):
        if __debug__:
            from mir_msgs.msg import GripperState
            assert \
                isinstance(value, GripperState), \
                "The 'gripper' field must be a sub message of type 'GripperState'"
        self._gripper = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            from mir_msgs.msg import HeightState
            assert \
                isinstance(value, HeightState), \
                "The 'height' field must be a sub message of type 'HeightState'"
        self._height = value

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle = value

    @builtins.property
    def qr_marker_name(self):
        """Message field 'qr_marker_name'."""
        return self._qr_marker_name

    @qr_marker_name.setter
    def qr_marker_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'qr_marker_name' field must be of type 'str'"
        self._qr_marker_name = value
