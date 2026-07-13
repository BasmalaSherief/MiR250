# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/BMSData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'cell_voltage'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BMSData(type):
    """Metaclass of message 'BMSData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DISCHARGING': 1,
        'CHARGING': 2,
        'OV': 4,
        'UV': 8,
        'COC': 16,
        'DOC': 32,
        'DOT': 64,
        'DUT': 128,
        'SC': 512,
        'COT': 1024,
        'CUT': 2048,
        'FW_STATUS_MSK': 2031616,
        'FW_STATUS_SHIFT': 16,
        'FW_UPD_OK': 0,
        'FW_UPD_RUNNING': 1,
        'FW_UPD_FAILED_BOOT': 2,
        'FW_UPD_FAILED_APP': 3,
        'FW_UPD_FAILED_PARAM': 4,
        'FW_STATUS_LOW_BATT': 5,
        'FW_STATUS_FILE_CORRUPTED': 6,
        'FW_STATUS_CURRENT_TO_HIGH': 7,
        'FW_STATUS_NO_CAN': 8,
        'FW_BATTERY_IMBALANCE_HIGH': 9,
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
                'mir_msgs.msg.BMSData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bms_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bms_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bms_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bms_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bms_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DISCHARGING': cls.__constants['DISCHARGING'],
            'CHARGING': cls.__constants['CHARGING'],
            'OV': cls.__constants['OV'],
            'UV': cls.__constants['UV'],
            'COC': cls.__constants['COC'],
            'DOC': cls.__constants['DOC'],
            'DOT': cls.__constants['DOT'],
            'DUT': cls.__constants['DUT'],
            'SC': cls.__constants['SC'],
            'COT': cls.__constants['COT'],
            'CUT': cls.__constants['CUT'],
            'FW_STATUS_MSK': cls.__constants['FW_STATUS_MSK'],
            'FW_STATUS_SHIFT': cls.__constants['FW_STATUS_SHIFT'],
            'FW_UPD_OK': cls.__constants['FW_UPD_OK'],
            'FW_UPD_RUNNING': cls.__constants['FW_UPD_RUNNING'],
            'FW_UPD_FAILED_BOOT': cls.__constants['FW_UPD_FAILED_BOOT'],
            'FW_UPD_FAILED_APP': cls.__constants['FW_UPD_FAILED_APP'],
            'FW_UPD_FAILED_PARAM': cls.__constants['FW_UPD_FAILED_PARAM'],
            'FW_STATUS_LOW_BATT': cls.__constants['FW_STATUS_LOW_BATT'],
            'FW_STATUS_FILE_CORRUPTED': cls.__constants['FW_STATUS_FILE_CORRUPTED'],
            'FW_STATUS_CURRENT_TO_HIGH': cls.__constants['FW_STATUS_CURRENT_TO_HIGH'],
            'FW_STATUS_NO_CAN': cls.__constants['FW_STATUS_NO_CAN'],
            'FW_BATTERY_IMBALANCE_HIGH': cls.__constants['FW_BATTERY_IMBALANCE_HIGH'],
        }

    @property
    def DISCHARGING(self):
        """Message constant 'DISCHARGING'."""
        return Metaclass_BMSData.__constants['DISCHARGING']

    @property
    def CHARGING(self):
        """Message constant 'CHARGING'."""
        return Metaclass_BMSData.__constants['CHARGING']

    @property
    def OV(self):
        """Message constant 'OV'."""
        return Metaclass_BMSData.__constants['OV']

    @property
    def UV(self):
        """Message constant 'UV'."""
        return Metaclass_BMSData.__constants['UV']

    @property
    def COC(self):
        """Message constant 'COC'."""
        return Metaclass_BMSData.__constants['COC']

    @property
    def DOC(self):
        """Message constant 'DOC'."""
        return Metaclass_BMSData.__constants['DOC']

    @property
    def DOT(self):
        """Message constant 'DOT'."""
        return Metaclass_BMSData.__constants['DOT']

    @property
    def DUT(self):
        """Message constant 'DUT'."""
        return Metaclass_BMSData.__constants['DUT']

    @property
    def SC(self):
        """Message constant 'SC'."""
        return Metaclass_BMSData.__constants['SC']

    @property
    def COT(self):
        """Message constant 'COT'."""
        return Metaclass_BMSData.__constants['COT']

    @property
    def CUT(self):
        """Message constant 'CUT'."""
        return Metaclass_BMSData.__constants['CUT']

    @property
    def FW_STATUS_MSK(self):
        """Message constant 'FW_STATUS_MSK'."""
        return Metaclass_BMSData.__constants['FW_STATUS_MSK']

    @property
    def FW_STATUS_SHIFT(self):
        """Message constant 'FW_STATUS_SHIFT'."""
        return Metaclass_BMSData.__constants['FW_STATUS_SHIFT']

    @property
    def FW_UPD_OK(self):
        """Message constant 'FW_UPD_OK'."""
        return Metaclass_BMSData.__constants['FW_UPD_OK']

    @property
    def FW_UPD_RUNNING(self):
        """Message constant 'FW_UPD_RUNNING'."""
        return Metaclass_BMSData.__constants['FW_UPD_RUNNING']

    @property
    def FW_UPD_FAILED_BOOT(self):
        """Message constant 'FW_UPD_FAILED_BOOT'."""
        return Metaclass_BMSData.__constants['FW_UPD_FAILED_BOOT']

    @property
    def FW_UPD_FAILED_APP(self):
        """Message constant 'FW_UPD_FAILED_APP'."""
        return Metaclass_BMSData.__constants['FW_UPD_FAILED_APP']

    @property
    def FW_UPD_FAILED_PARAM(self):
        """Message constant 'FW_UPD_FAILED_PARAM'."""
        return Metaclass_BMSData.__constants['FW_UPD_FAILED_PARAM']

    @property
    def FW_STATUS_LOW_BATT(self):
        """Message constant 'FW_STATUS_LOW_BATT'."""
        return Metaclass_BMSData.__constants['FW_STATUS_LOW_BATT']

    @property
    def FW_STATUS_FILE_CORRUPTED(self):
        """Message constant 'FW_STATUS_FILE_CORRUPTED'."""
        return Metaclass_BMSData.__constants['FW_STATUS_FILE_CORRUPTED']

    @property
    def FW_STATUS_CURRENT_TO_HIGH(self):
        """Message constant 'FW_STATUS_CURRENT_TO_HIGH'."""
        return Metaclass_BMSData.__constants['FW_STATUS_CURRENT_TO_HIGH']

    @property
    def FW_STATUS_NO_CAN(self):
        """Message constant 'FW_STATUS_NO_CAN'."""
        return Metaclass_BMSData.__constants['FW_STATUS_NO_CAN']

    @property
    def FW_BATTERY_IMBALANCE_HIGH(self):
        """Message constant 'FW_BATTERY_IMBALANCE_HIGH'."""
        return Metaclass_BMSData.__constants['FW_BATTERY_IMBALANCE_HIGH']


class BMSData(metaclass=Metaclass_BMSData):
    """
    Message class 'BMSData'.

    Constants:
      DISCHARGING
      CHARGING
      OV
      UV
      COC
      DOC
      DOT
      DUT
      SC
      COT
      CUT
      FW_STATUS_MSK
      FW_STATUS_SHIFT
      FW_UPD_OK
      FW_UPD_RUNNING
      FW_UPD_FAILED_BOOT
      FW_UPD_FAILED_APP
      FW_UPD_FAILED_PARAM
      FW_STATUS_LOW_BATT
      FW_STATUS_FILE_CORRUPTED
      FW_STATUS_CURRENT_TO_HIGH
      FW_STATUS_NO_CAN
      FW_BATTERY_IMBALANCE_HIGH
    """

    __slots__ = [
        '_pack_voltage',
        '_charge_current',
        '_discharge_current',
        '_state_of_charge',
        '_remaining_time_to_full_charge',
        '_remaining_capacity',
        '_state_of_health',
        '_status_flags',
        '_temperature',
        '_cell_voltage',
        '_bmz_flag',
        '_full_voltage',
        '_full_capacity',
        '_temperature2',
        '_temperature3',
        '_cycle_count',
        '_dsg_overcurrent_counter',
        '_chg_overcurrent_counter',
        '_hw_major',
        '_hw_minor',
        '_fw_major',
        '_fw_minor',
        '_fw_patch',
        '_rec_fw_major',
        '_rec_fw_minor',
        '_bl_major',
        '_bl_minor',
        '_status_enabled',
        '_status_current_limitation',
        '_status_switch_off_warn1',
        '_status_switch_off_warn2',
        '_status_fully_discharged',
        '_status_nearly_discharged',
        '_status_chargefet_on',
        '_status_dischargefet_on',
        '_status_discharging',
        '_status_fully_charged',
        '_status_charging',
        '_status_temp_charging_err',
        '_status_cell_over_voltage',
        '_status_cell_under_voltage',
        '_status_charge_over_current',
        '_status_shortcircuit',
        '_status_discharge_over_current',
        '_status_temp_discharging_err',
        '_status_charger_detected',
        '_last_battery_msg_time',
    ]

    _fields_and_field_types = {
        'pack_voltage': 'double',
        'charge_current': 'double',
        'discharge_current': 'double',
        'state_of_charge': 'int32',
        'remaining_time_to_full_charge': 'double',
        'remaining_capacity': 'int32',
        'state_of_health': 'int32',
        'status_flags': 'int32',
        'temperature': 'int32',
        'cell_voltage': 'sequence<uint32>',
        'bmz_flag': 'uint32',
        'full_voltage': 'double',
        'full_capacity': 'int32',
        'temperature2': 'int32',
        'temperature3': 'int32',
        'cycle_count': 'int32',
        'dsg_overcurrent_counter': 'int32',
        'chg_overcurrent_counter': 'int32',
        'hw_major': 'int32',
        'hw_minor': 'int32',
        'fw_major': 'int32',
        'fw_minor': 'int32',
        'fw_patch': 'int32',
        'rec_fw_major': 'int32',
        'rec_fw_minor': 'int32',
        'bl_major': 'int32',
        'bl_minor': 'int32',
        'status_enabled': 'uint32',
        'status_current_limitation': 'uint32',
        'status_switch_off_warn1': 'uint32',
        'status_switch_off_warn2': 'uint32',
        'status_fully_discharged': 'uint32',
        'status_nearly_discharged': 'uint32',
        'status_chargefet_on': 'uint32',
        'status_dischargefet_on': 'uint32',
        'status_discharging': 'uint32',
        'status_fully_charged': 'uint32',
        'status_charging': 'uint32',
        'status_temp_charging_err': 'uint32',
        'status_cell_over_voltage': 'uint32',
        'status_cell_under_voltage': 'uint32',
        'status_charge_over_current': 'uint32',
        'status_shortcircuit': 'uint32',
        'status_discharge_over_current': 'uint32',
        'status_temp_discharging_err': 'uint32',
        'status_charger_detected': 'uint32',
        'last_battery_msg_time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pack_voltage = kwargs.get('pack_voltage', float())
        self.charge_current = kwargs.get('charge_current', float())
        self.discharge_current = kwargs.get('discharge_current', float())
        self.state_of_charge = kwargs.get('state_of_charge', int())
        self.remaining_time_to_full_charge = kwargs.get('remaining_time_to_full_charge', float())
        self.remaining_capacity = kwargs.get('remaining_capacity', int())
        self.state_of_health = kwargs.get('state_of_health', int())
        self.status_flags = kwargs.get('status_flags', int())
        self.temperature = kwargs.get('temperature', int())
        self.cell_voltage = array.array('I', kwargs.get('cell_voltage', []))
        self.bmz_flag = kwargs.get('bmz_flag', int())
        self.full_voltage = kwargs.get('full_voltage', float())
        self.full_capacity = kwargs.get('full_capacity', int())
        self.temperature2 = kwargs.get('temperature2', int())
        self.temperature3 = kwargs.get('temperature3', int())
        self.cycle_count = kwargs.get('cycle_count', int())
        self.dsg_overcurrent_counter = kwargs.get('dsg_overcurrent_counter', int())
        self.chg_overcurrent_counter = kwargs.get('chg_overcurrent_counter', int())
        self.hw_major = kwargs.get('hw_major', int())
        self.hw_minor = kwargs.get('hw_minor', int())
        self.fw_major = kwargs.get('fw_major', int())
        self.fw_minor = kwargs.get('fw_minor', int())
        self.fw_patch = kwargs.get('fw_patch', int())
        self.rec_fw_major = kwargs.get('rec_fw_major', int())
        self.rec_fw_minor = kwargs.get('rec_fw_minor', int())
        self.bl_major = kwargs.get('bl_major', int())
        self.bl_minor = kwargs.get('bl_minor', int())
        self.status_enabled = kwargs.get('status_enabled', int())
        self.status_current_limitation = kwargs.get('status_current_limitation', int())
        self.status_switch_off_warn1 = kwargs.get('status_switch_off_warn1', int())
        self.status_switch_off_warn2 = kwargs.get('status_switch_off_warn2', int())
        self.status_fully_discharged = kwargs.get('status_fully_discharged', int())
        self.status_nearly_discharged = kwargs.get('status_nearly_discharged', int())
        self.status_chargefet_on = kwargs.get('status_chargefet_on', int())
        self.status_dischargefet_on = kwargs.get('status_dischargefet_on', int())
        self.status_discharging = kwargs.get('status_discharging', int())
        self.status_fully_charged = kwargs.get('status_fully_charged', int())
        self.status_charging = kwargs.get('status_charging', int())
        self.status_temp_charging_err = kwargs.get('status_temp_charging_err', int())
        self.status_cell_over_voltage = kwargs.get('status_cell_over_voltage', int())
        self.status_cell_under_voltage = kwargs.get('status_cell_under_voltage', int())
        self.status_charge_over_current = kwargs.get('status_charge_over_current', int())
        self.status_shortcircuit = kwargs.get('status_shortcircuit', int())
        self.status_discharge_over_current = kwargs.get('status_discharge_over_current', int())
        self.status_temp_discharging_err = kwargs.get('status_temp_discharging_err', int())
        self.status_charger_detected = kwargs.get('status_charger_detected', int())
        self.last_battery_msg_time = kwargs.get('last_battery_msg_time', float())

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
        if self.pack_voltage != other.pack_voltage:
            return False
        if self.charge_current != other.charge_current:
            return False
        if self.discharge_current != other.discharge_current:
            return False
        if self.state_of_charge != other.state_of_charge:
            return False
        if self.remaining_time_to_full_charge != other.remaining_time_to_full_charge:
            return False
        if self.remaining_capacity != other.remaining_capacity:
            return False
        if self.state_of_health != other.state_of_health:
            return False
        if self.status_flags != other.status_flags:
            return False
        if self.temperature != other.temperature:
            return False
        if self.cell_voltage != other.cell_voltage:
            return False
        if self.bmz_flag != other.bmz_flag:
            return False
        if self.full_voltage != other.full_voltage:
            return False
        if self.full_capacity != other.full_capacity:
            return False
        if self.temperature2 != other.temperature2:
            return False
        if self.temperature3 != other.temperature3:
            return False
        if self.cycle_count != other.cycle_count:
            return False
        if self.dsg_overcurrent_counter != other.dsg_overcurrent_counter:
            return False
        if self.chg_overcurrent_counter != other.chg_overcurrent_counter:
            return False
        if self.hw_major != other.hw_major:
            return False
        if self.hw_minor != other.hw_minor:
            return False
        if self.fw_major != other.fw_major:
            return False
        if self.fw_minor != other.fw_minor:
            return False
        if self.fw_patch != other.fw_patch:
            return False
        if self.rec_fw_major != other.rec_fw_major:
            return False
        if self.rec_fw_minor != other.rec_fw_minor:
            return False
        if self.bl_major != other.bl_major:
            return False
        if self.bl_minor != other.bl_minor:
            return False
        if self.status_enabled != other.status_enabled:
            return False
        if self.status_current_limitation != other.status_current_limitation:
            return False
        if self.status_switch_off_warn1 != other.status_switch_off_warn1:
            return False
        if self.status_switch_off_warn2 != other.status_switch_off_warn2:
            return False
        if self.status_fully_discharged != other.status_fully_discharged:
            return False
        if self.status_nearly_discharged != other.status_nearly_discharged:
            return False
        if self.status_chargefet_on != other.status_chargefet_on:
            return False
        if self.status_dischargefet_on != other.status_dischargefet_on:
            return False
        if self.status_discharging != other.status_discharging:
            return False
        if self.status_fully_charged != other.status_fully_charged:
            return False
        if self.status_charging != other.status_charging:
            return False
        if self.status_temp_charging_err != other.status_temp_charging_err:
            return False
        if self.status_cell_over_voltage != other.status_cell_over_voltage:
            return False
        if self.status_cell_under_voltage != other.status_cell_under_voltage:
            return False
        if self.status_charge_over_current != other.status_charge_over_current:
            return False
        if self.status_shortcircuit != other.status_shortcircuit:
            return False
        if self.status_discharge_over_current != other.status_discharge_over_current:
            return False
        if self.status_temp_discharging_err != other.status_temp_discharging_err:
            return False
        if self.status_charger_detected != other.status_charger_detected:
            return False
        if self.last_battery_msg_time != other.last_battery_msg_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pack_voltage(self):
        """Message field 'pack_voltage'."""
        return self._pack_voltage

    @pack_voltage.setter
    def pack_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pack_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pack_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pack_voltage = value

    @builtins.property
    def charge_current(self):
        """Message field 'charge_current'."""
        return self._charge_current

    @charge_current.setter
    def charge_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'charge_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'charge_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._charge_current = value

    @builtins.property
    def discharge_current(self):
        """Message field 'discharge_current'."""
        return self._discharge_current

    @discharge_current.setter
    def discharge_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'discharge_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'discharge_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._discharge_current = value

    @builtins.property
    def state_of_charge(self):
        """Message field 'state_of_charge'."""
        return self._state_of_charge

    @state_of_charge.setter
    def state_of_charge(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_of_charge' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'state_of_charge' field must be an integer in [-2147483648, 2147483647]"
        self._state_of_charge = value

    @builtins.property
    def remaining_time_to_full_charge(self):
        """Message field 'remaining_time_to_full_charge'."""
        return self._remaining_time_to_full_charge

    @remaining_time_to_full_charge.setter
    def remaining_time_to_full_charge(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remaining_time_to_full_charge' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'remaining_time_to_full_charge' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._remaining_time_to_full_charge = value

    @builtins.property
    def remaining_capacity(self):
        """Message field 'remaining_capacity'."""
        return self._remaining_capacity

    @remaining_capacity.setter
    def remaining_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remaining_capacity' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'remaining_capacity' field must be an integer in [-2147483648, 2147483647]"
        self._remaining_capacity = value

    @builtins.property
    def state_of_health(self):
        """Message field 'state_of_health'."""
        return self._state_of_health

    @state_of_health.setter
    def state_of_health(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_of_health' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'state_of_health' field must be an integer in [-2147483648, 2147483647]"
        self._state_of_health = value

    @builtins.property
    def status_flags(self):
        """Message field 'status_flags'."""
        return self._status_flags

    @status_flags.setter
    def status_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_flags' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status_flags' field must be an integer in [-2147483648, 2147483647]"
        self._status_flags = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temperature' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'temperature' field must be an integer in [-2147483648, 2147483647]"
        self._temperature = value

    @builtins.property
    def cell_voltage(self):
        """Message field 'cell_voltage'."""
        return self._cell_voltage

    @cell_voltage.setter
    def cell_voltage(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'cell_voltage' array.array() must have the type code of 'I'"
            self._cell_voltage = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'cell_voltage' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._cell_voltage = array.array('I', value)

    @builtins.property
    def bmz_flag(self):
        """Message field 'bmz_flag'."""
        return self._bmz_flag

    @bmz_flag.setter
    def bmz_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bmz_flag' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'bmz_flag' field must be an unsigned integer in [0, 4294967295]"
        self._bmz_flag = value

    @builtins.property
    def full_voltage(self):
        """Message field 'full_voltage'."""
        return self._full_voltage

    @full_voltage.setter
    def full_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'full_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'full_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._full_voltage = value

    @builtins.property
    def full_capacity(self):
        """Message field 'full_capacity'."""
        return self._full_capacity

    @full_capacity.setter
    def full_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'full_capacity' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'full_capacity' field must be an integer in [-2147483648, 2147483647]"
        self._full_capacity = value

    @builtins.property
    def temperature2(self):
        """Message field 'temperature2'."""
        return self._temperature2

    @temperature2.setter
    def temperature2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temperature2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'temperature2' field must be an integer in [-2147483648, 2147483647]"
        self._temperature2 = value

    @builtins.property
    def temperature3(self):
        """Message field 'temperature3'."""
        return self._temperature3

    @temperature3.setter
    def temperature3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temperature3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'temperature3' field must be an integer in [-2147483648, 2147483647]"
        self._temperature3 = value

    @builtins.property
    def cycle_count(self):
        """Message field 'cycle_count'."""
        return self._cycle_count

    @cycle_count.setter
    def cycle_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cycle_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cycle_count' field must be an integer in [-2147483648, 2147483647]"
        self._cycle_count = value

    @builtins.property
    def dsg_overcurrent_counter(self):
        """Message field 'dsg_overcurrent_counter'."""
        return self._dsg_overcurrent_counter

    @dsg_overcurrent_counter.setter
    def dsg_overcurrent_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dsg_overcurrent_counter' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'dsg_overcurrent_counter' field must be an integer in [-2147483648, 2147483647]"
        self._dsg_overcurrent_counter = value

    @builtins.property
    def chg_overcurrent_counter(self):
        """Message field 'chg_overcurrent_counter'."""
        return self._chg_overcurrent_counter

    @chg_overcurrent_counter.setter
    def chg_overcurrent_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chg_overcurrent_counter' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'chg_overcurrent_counter' field must be an integer in [-2147483648, 2147483647]"
        self._chg_overcurrent_counter = value

    @builtins.property
    def hw_major(self):
        """Message field 'hw_major'."""
        return self._hw_major

    @hw_major.setter
    def hw_major(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hw_major' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hw_major' field must be an integer in [-2147483648, 2147483647]"
        self._hw_major = value

    @builtins.property
    def hw_minor(self):
        """Message field 'hw_minor'."""
        return self._hw_minor

    @hw_minor.setter
    def hw_minor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hw_minor' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hw_minor' field must be an integer in [-2147483648, 2147483647]"
        self._hw_minor = value

    @builtins.property
    def fw_major(self):
        """Message field 'fw_major'."""
        return self._fw_major

    @fw_major.setter
    def fw_major(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fw_major' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fw_major' field must be an integer in [-2147483648, 2147483647]"
        self._fw_major = value

    @builtins.property
    def fw_minor(self):
        """Message field 'fw_minor'."""
        return self._fw_minor

    @fw_minor.setter
    def fw_minor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fw_minor' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fw_minor' field must be an integer in [-2147483648, 2147483647]"
        self._fw_minor = value

    @builtins.property
    def fw_patch(self):
        """Message field 'fw_patch'."""
        return self._fw_patch

    @fw_patch.setter
    def fw_patch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fw_patch' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fw_patch' field must be an integer in [-2147483648, 2147483647]"
        self._fw_patch = value

    @builtins.property
    def rec_fw_major(self):
        """Message field 'rec_fw_major'."""
        return self._rec_fw_major

    @rec_fw_major.setter
    def rec_fw_major(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rec_fw_major' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rec_fw_major' field must be an integer in [-2147483648, 2147483647]"
        self._rec_fw_major = value

    @builtins.property
    def rec_fw_minor(self):
        """Message field 'rec_fw_minor'."""
        return self._rec_fw_minor

    @rec_fw_minor.setter
    def rec_fw_minor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rec_fw_minor' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rec_fw_minor' field must be an integer in [-2147483648, 2147483647]"
        self._rec_fw_minor = value

    @builtins.property
    def bl_major(self):
        """Message field 'bl_major'."""
        return self._bl_major

    @bl_major.setter
    def bl_major(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bl_major' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bl_major' field must be an integer in [-2147483648, 2147483647]"
        self._bl_major = value

    @builtins.property
    def bl_minor(self):
        """Message field 'bl_minor'."""
        return self._bl_minor

    @bl_minor.setter
    def bl_minor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bl_minor' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bl_minor' field must be an integer in [-2147483648, 2147483647]"
        self._bl_minor = value

    @builtins.property
    def status_enabled(self):
        """Message field 'status_enabled'."""
        return self._status_enabled

    @status_enabled.setter
    def status_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_enabled' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_enabled' field must be an unsigned integer in [0, 4294967295]"
        self._status_enabled = value

    @builtins.property
    def status_current_limitation(self):
        """Message field 'status_current_limitation'."""
        return self._status_current_limitation

    @status_current_limitation.setter
    def status_current_limitation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_current_limitation' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_current_limitation' field must be an unsigned integer in [0, 4294967295]"
        self._status_current_limitation = value

    @builtins.property
    def status_switch_off_warn1(self):
        """Message field 'status_switch_off_warn1'."""
        return self._status_switch_off_warn1

    @status_switch_off_warn1.setter
    def status_switch_off_warn1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_switch_off_warn1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_switch_off_warn1' field must be an unsigned integer in [0, 4294967295]"
        self._status_switch_off_warn1 = value

    @builtins.property
    def status_switch_off_warn2(self):
        """Message field 'status_switch_off_warn2'."""
        return self._status_switch_off_warn2

    @status_switch_off_warn2.setter
    def status_switch_off_warn2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_switch_off_warn2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_switch_off_warn2' field must be an unsigned integer in [0, 4294967295]"
        self._status_switch_off_warn2 = value

    @builtins.property
    def status_fully_discharged(self):
        """Message field 'status_fully_discharged'."""
        return self._status_fully_discharged

    @status_fully_discharged.setter
    def status_fully_discharged(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_fully_discharged' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_fully_discharged' field must be an unsigned integer in [0, 4294967295]"
        self._status_fully_discharged = value

    @builtins.property
    def status_nearly_discharged(self):
        """Message field 'status_nearly_discharged'."""
        return self._status_nearly_discharged

    @status_nearly_discharged.setter
    def status_nearly_discharged(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_nearly_discharged' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_nearly_discharged' field must be an unsigned integer in [0, 4294967295]"
        self._status_nearly_discharged = value

    @builtins.property
    def status_chargefet_on(self):
        """Message field 'status_chargefet_on'."""
        return self._status_chargefet_on

    @status_chargefet_on.setter
    def status_chargefet_on(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_chargefet_on' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_chargefet_on' field must be an unsigned integer in [0, 4294967295]"
        self._status_chargefet_on = value

    @builtins.property
    def status_dischargefet_on(self):
        """Message field 'status_dischargefet_on'."""
        return self._status_dischargefet_on

    @status_dischargefet_on.setter
    def status_dischargefet_on(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_dischargefet_on' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_dischargefet_on' field must be an unsigned integer in [0, 4294967295]"
        self._status_dischargefet_on = value

    @builtins.property
    def status_discharging(self):
        """Message field 'status_discharging'."""
        return self._status_discharging

    @status_discharging.setter
    def status_discharging(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_discharging' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_discharging' field must be an unsigned integer in [0, 4294967295]"
        self._status_discharging = value

    @builtins.property
    def status_fully_charged(self):
        """Message field 'status_fully_charged'."""
        return self._status_fully_charged

    @status_fully_charged.setter
    def status_fully_charged(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_fully_charged' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_fully_charged' field must be an unsigned integer in [0, 4294967295]"
        self._status_fully_charged = value

    @builtins.property
    def status_charging(self):
        """Message field 'status_charging'."""
        return self._status_charging

    @status_charging.setter
    def status_charging(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_charging' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_charging' field must be an unsigned integer in [0, 4294967295]"
        self._status_charging = value

    @builtins.property
    def status_temp_charging_err(self):
        """Message field 'status_temp_charging_err'."""
        return self._status_temp_charging_err

    @status_temp_charging_err.setter
    def status_temp_charging_err(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_temp_charging_err' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_temp_charging_err' field must be an unsigned integer in [0, 4294967295]"
        self._status_temp_charging_err = value

    @builtins.property
    def status_cell_over_voltage(self):
        """Message field 'status_cell_over_voltage'."""
        return self._status_cell_over_voltage

    @status_cell_over_voltage.setter
    def status_cell_over_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_cell_over_voltage' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_cell_over_voltage' field must be an unsigned integer in [0, 4294967295]"
        self._status_cell_over_voltage = value

    @builtins.property
    def status_cell_under_voltage(self):
        """Message field 'status_cell_under_voltage'."""
        return self._status_cell_under_voltage

    @status_cell_under_voltage.setter
    def status_cell_under_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_cell_under_voltage' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_cell_under_voltage' field must be an unsigned integer in [0, 4294967295]"
        self._status_cell_under_voltage = value

    @builtins.property
    def status_charge_over_current(self):
        """Message field 'status_charge_over_current'."""
        return self._status_charge_over_current

    @status_charge_over_current.setter
    def status_charge_over_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_charge_over_current' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_charge_over_current' field must be an unsigned integer in [0, 4294967295]"
        self._status_charge_over_current = value

    @builtins.property
    def status_shortcircuit(self):
        """Message field 'status_shortcircuit'."""
        return self._status_shortcircuit

    @status_shortcircuit.setter
    def status_shortcircuit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_shortcircuit' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_shortcircuit' field must be an unsigned integer in [0, 4294967295]"
        self._status_shortcircuit = value

    @builtins.property
    def status_discharge_over_current(self):
        """Message field 'status_discharge_over_current'."""
        return self._status_discharge_over_current

    @status_discharge_over_current.setter
    def status_discharge_over_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_discharge_over_current' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_discharge_over_current' field must be an unsigned integer in [0, 4294967295]"
        self._status_discharge_over_current = value

    @builtins.property
    def status_temp_discharging_err(self):
        """Message field 'status_temp_discharging_err'."""
        return self._status_temp_discharging_err

    @status_temp_discharging_err.setter
    def status_temp_discharging_err(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_temp_discharging_err' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_temp_discharging_err' field must be an unsigned integer in [0, 4294967295]"
        self._status_temp_discharging_err = value

    @builtins.property
    def status_charger_detected(self):
        """Message field 'status_charger_detected'."""
        return self._status_charger_detected

    @status_charger_detected.setter
    def status_charger_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_charger_detected' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_charger_detected' field must be an unsigned integer in [0, 4294967295]"
        self._status_charger_detected = value

    @builtins.property
    def last_battery_msg_time(self):
        """Message field 'last_battery_msg_time'."""
        return self._last_battery_msg_time

    @last_battery_msg_time.setter
    def last_battery_msg_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'last_battery_msg_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'last_battery_msg_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._last_battery_msg_time = value
