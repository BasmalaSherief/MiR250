# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/RobotStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotStatus(type):
    """Metaclass of message 'RobotStatus'."""

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
                'mir_msgs.msg.RobotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_status

            from mir_msgs.msg import Error
            if Error.__class__._TYPE_SUPPORT is None:
                Error.__class__.__import_type_support__()

            from mir_msgs.msg import HookStatus
            if HookStatus.__class__._TYPE_SUPPORT is None:
                HookStatus.__class__.__import_type_support__()

            from mir_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

            from mir_msgs.msg import Twist2D
            if Twist2D.__class__._TYPE_SUPPORT is None:
                Twist2D.__class__.__import_type_support__()

            from mir_msgs.msg import UserPrompt
            if UserPrompt.__class__._TYPE_SUPPORT is None:
                UserPrompt.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotStatus(metaclass=Metaclass_RobotStatus):
    """Message class 'RobotStatus'."""

    __slots__ = [
        '_battery_percentage',
        '_battery_time_remaining',
        '_battery_voltage',
        '_distance_to_next_target',
        '_errors',
        '_footprint',
        '_hook_status',
        '_map_id',
        '_unloaded_map_changes',
        '_mission_queue_id',
        '_mission_text',
        '_mode_id',
        '_mode_text',
        '_moved',
        '_position',
        '_robot_name',
        '_session_id',
        '_software_version',
        '_state_id',
        '_state_text',
        '_uptime',
        '_velocity',
        '_user_prompt',
        '_safety_system_muted',
        '_joystick_low_speed_mode_enabled',
        '_joystick_web_session_id',
        '_mode_key_state',
    ]

    _fields_and_field_types = {
        'battery_percentage': 'float',
        'battery_time_remaining': 'int32',
        'battery_voltage': 'float',
        'distance_to_next_target': 'float',
        'errors': 'sequence<mir_msgs/Error>',
        'footprint': 'string',
        'hook_status': 'mir_msgs/HookStatus',
        'map_id': 'string',
        'unloaded_map_changes': 'boolean',
        'mission_queue_id': 'int32',
        'mission_text': 'string',
        'mode_id': 'int32',
        'mode_text': 'string',
        'moved': 'double',
        'position': 'mir_msgs/Pose2D',
        'robot_name': 'string',
        'session_id': 'string',
        'software_version': 'string',
        'state_id': 'uint8',
        'state_text': 'string',
        'uptime': 'int32',
        'velocity': 'mir_msgs/Twist2D',
        'user_prompt': 'mir_msgs/UserPrompt',
        'safety_system_muted': 'boolean',
        'joystick_low_speed_mode_enabled': 'boolean',
        'joystick_web_session_id': 'string',
        'mode_key_state': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['mir_msgs', 'msg'], 'Error')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mir_msgs', 'msg'], 'HookStatus'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mir_msgs', 'msg'], 'Pose2D'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mir_msgs', 'msg'], 'Twist2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mir_msgs', 'msg'], 'UserPrompt'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.battery_percentage = kwargs.get('battery_percentage', float())
        self.battery_time_remaining = kwargs.get('battery_time_remaining', int())
        self.battery_voltage = kwargs.get('battery_voltage', float())
        self.distance_to_next_target = kwargs.get('distance_to_next_target', float())
        self.errors = kwargs.get('errors', [])
        self.footprint = kwargs.get('footprint', str())
        from mir_msgs.msg import HookStatus
        self.hook_status = kwargs.get('hook_status', HookStatus())
        self.map_id = kwargs.get('map_id', str())
        self.unloaded_map_changes = kwargs.get('unloaded_map_changes', bool())
        self.mission_queue_id = kwargs.get('mission_queue_id', int())
        self.mission_text = kwargs.get('mission_text', str())
        self.mode_id = kwargs.get('mode_id', int())
        self.mode_text = kwargs.get('mode_text', str())
        self.moved = kwargs.get('moved', float())
        from mir_msgs.msg import Pose2D
        self.position = kwargs.get('position', Pose2D())
        self.robot_name = kwargs.get('robot_name', str())
        self.session_id = kwargs.get('session_id', str())
        self.software_version = kwargs.get('software_version', str())
        self.state_id = kwargs.get('state_id', int())
        self.state_text = kwargs.get('state_text', str())
        self.uptime = kwargs.get('uptime', int())
        from mir_msgs.msg import Twist2D
        self.velocity = kwargs.get('velocity', Twist2D())
        from mir_msgs.msg import UserPrompt
        self.user_prompt = kwargs.get('user_prompt', UserPrompt())
        self.safety_system_muted = kwargs.get('safety_system_muted', bool())
        self.joystick_low_speed_mode_enabled = kwargs.get('joystick_low_speed_mode_enabled', bool())
        self.joystick_web_session_id = kwargs.get('joystick_web_session_id', str())
        self.mode_key_state = kwargs.get('mode_key_state', str())

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
        if self.battery_percentage != other.battery_percentage:
            return False
        if self.battery_time_remaining != other.battery_time_remaining:
            return False
        if self.battery_voltage != other.battery_voltage:
            return False
        if self.distance_to_next_target != other.distance_to_next_target:
            return False
        if self.errors != other.errors:
            return False
        if self.footprint != other.footprint:
            return False
        if self.hook_status != other.hook_status:
            return False
        if self.map_id != other.map_id:
            return False
        if self.unloaded_map_changes != other.unloaded_map_changes:
            return False
        if self.mission_queue_id != other.mission_queue_id:
            return False
        if self.mission_text != other.mission_text:
            return False
        if self.mode_id != other.mode_id:
            return False
        if self.mode_text != other.mode_text:
            return False
        if self.moved != other.moved:
            return False
        if self.position != other.position:
            return False
        if self.robot_name != other.robot_name:
            return False
        if self.session_id != other.session_id:
            return False
        if self.software_version != other.software_version:
            return False
        if self.state_id != other.state_id:
            return False
        if self.state_text != other.state_text:
            return False
        if self.uptime != other.uptime:
            return False
        if self.velocity != other.velocity:
            return False
        if self.user_prompt != other.user_prompt:
            return False
        if self.safety_system_muted != other.safety_system_muted:
            return False
        if self.joystick_low_speed_mode_enabled != other.joystick_low_speed_mode_enabled:
            return False
        if self.joystick_web_session_id != other.joystick_web_session_id:
            return False
        if self.mode_key_state != other.mode_key_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def battery_percentage(self):
        """Message field 'battery_percentage'."""
        return self._battery_percentage

    @battery_percentage.setter
    def battery_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_percentage = value

    @builtins.property
    def battery_time_remaining(self):
        """Message field 'battery_time_remaining'."""
        return self._battery_time_remaining

    @battery_time_remaining.setter
    def battery_time_remaining(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_time_remaining' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'battery_time_remaining' field must be an integer in [-2147483648, 2147483647]"
        self._battery_time_remaining = value

    @builtins.property
    def battery_voltage(self):
        """Message field 'battery_voltage'."""
        return self._battery_voltage

    @battery_voltage.setter
    def battery_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_voltage = value

    @builtins.property
    def distance_to_next_target(self):
        """Message field 'distance_to_next_target'."""
        return self._distance_to_next_target

    @distance_to_next_target.setter
    def distance_to_next_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_next_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_to_next_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_to_next_target = value

    @builtins.property
    def errors(self):
        """Message field 'errors'."""
        return self._errors

    @errors.setter
    def errors(self, value):
        if __debug__:
            from mir_msgs.msg import Error
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
                 all(isinstance(v, Error) for v in value) and
                 True), \
                "The 'errors' field must be a set or sequence and each value of type 'Error'"
        self._errors = value

    @builtins.property
    def footprint(self):
        """Message field 'footprint'."""
        return self._footprint

    @footprint.setter
    def footprint(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'footprint' field must be of type 'str'"
        self._footprint = value

    @builtins.property
    def hook_status(self):
        """Message field 'hook_status'."""
        return self._hook_status

    @hook_status.setter
    def hook_status(self, value):
        if __debug__:
            from mir_msgs.msg import HookStatus
            assert \
                isinstance(value, HookStatus), \
                "The 'hook_status' field must be a sub message of type 'HookStatus'"
        self._hook_status = value

    @builtins.property
    def map_id(self):
        """Message field 'map_id'."""
        return self._map_id

    @map_id.setter
    def map_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'map_id' field must be of type 'str'"
        self._map_id = value

    @builtins.property
    def unloaded_map_changes(self):
        """Message field 'unloaded_map_changes'."""
        return self._unloaded_map_changes

    @unloaded_map_changes.setter
    def unloaded_map_changes(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'unloaded_map_changes' field must be of type 'bool'"
        self._unloaded_map_changes = value

    @builtins.property
    def mission_queue_id(self):
        """Message field 'mission_queue_id'."""
        return self._mission_queue_id

    @mission_queue_id.setter
    def mission_queue_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mission_queue_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mission_queue_id' field must be an integer in [-2147483648, 2147483647]"
        self._mission_queue_id = value

    @builtins.property
    def mission_text(self):
        """Message field 'mission_text'."""
        return self._mission_text

    @mission_text.setter
    def mission_text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mission_text' field must be of type 'str'"
        self._mission_text = value

    @builtins.property
    def mode_id(self):
        """Message field 'mode_id'."""
        return self._mode_id

    @mode_id.setter
    def mode_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode_id' field must be an integer in [-2147483648, 2147483647]"
        self._mode_id = value

    @builtins.property
    def mode_text(self):
        """Message field 'mode_text'."""
        return self._mode_text

    @mode_text.setter
    def mode_text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode_text' field must be of type 'str'"
        self._mode_text = value

    @builtins.property
    def moved(self):
        """Message field 'moved'."""
        return self._moved

    @moved.setter
    def moved(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'moved' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'moved' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._moved = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from mir_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'position' field must be a sub message of type 'Pose2D'"
        self._position = value

    @builtins.property
    def robot_name(self):
        """Message field 'robot_name'."""
        return self._robot_name

    @robot_name.setter
    def robot_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_name' field must be of type 'str'"
        self._robot_name = value

    @builtins.property
    def session_id(self):
        """Message field 'session_id'."""
        return self._session_id

    @session_id.setter
    def session_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'session_id' field must be of type 'str'"
        self._session_id = value

    @builtins.property
    def software_version(self):
        """Message field 'software_version'."""
        return self._software_version

    @software_version.setter
    def software_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'software_version' field must be of type 'str'"
        self._software_version = value

    @builtins.property
    def state_id(self):
        """Message field 'state_id'."""
        return self._state_id

    @state_id.setter
    def state_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state_id' field must be an unsigned integer in [0, 255]"
        self._state_id = value

    @builtins.property
    def state_text(self):
        """Message field 'state_text'."""
        return self._state_text

    @state_text.setter
    def state_text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state_text' field must be of type 'str'"
        self._state_text = value

    @builtins.property
    def uptime(self):
        """Message field 'uptime'."""
        return self._uptime

    @uptime.setter
    def uptime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uptime' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'uptime' field must be an integer in [-2147483648, 2147483647]"
        self._uptime = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from mir_msgs.msg import Twist2D
            assert \
                isinstance(value, Twist2D), \
                "The 'velocity' field must be a sub message of type 'Twist2D'"
        self._velocity = value

    @builtins.property
    def user_prompt(self):
        """Message field 'user_prompt'."""
        return self._user_prompt

    @user_prompt.setter
    def user_prompt(self, value):
        if __debug__:
            from mir_msgs.msg import UserPrompt
            assert \
                isinstance(value, UserPrompt), \
                "The 'user_prompt' field must be a sub message of type 'UserPrompt'"
        self._user_prompt = value

    @builtins.property
    def safety_system_muted(self):
        """Message field 'safety_system_muted'."""
        return self._safety_system_muted

    @safety_system_muted.setter
    def safety_system_muted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'safety_system_muted' field must be of type 'bool'"
        self._safety_system_muted = value

    @builtins.property
    def joystick_low_speed_mode_enabled(self):
        """Message field 'joystick_low_speed_mode_enabled'."""
        return self._joystick_low_speed_mode_enabled

    @joystick_low_speed_mode_enabled.setter
    def joystick_low_speed_mode_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'joystick_low_speed_mode_enabled' field must be of type 'bool'"
        self._joystick_low_speed_mode_enabled = value

    @builtins.property
    def joystick_web_session_id(self):
        """Message field 'joystick_web_session_id'."""
        return self._joystick_web_session_id

    @joystick_web_session_id.setter
    def joystick_web_session_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'joystick_web_session_id' field must be of type 'str'"
        self._joystick_web_session_id = value

    @builtins.property
    def mode_key_state(self):
        """Message field 'mode_key_state'."""
        return self._mode_key_state

    @mode_key_state.setter
    def mode_key_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode_key_state' field must be of type 'str'"
        self._mode_key_state = value
