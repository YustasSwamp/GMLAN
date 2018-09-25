/*
GMLAN_29bit.h - 29-Bit specific header file for GMLAN Library
 
GMLAN is a Controller Area Network Bus used in General Motors vehicles from
roughly 2007-onwards. Its purpose is to allow various Electronic Control Units
(aka ECUs) within a modern vehicle to share information and enact procedures.
 
An example of this would be communication between the HU (Head unit) and the
DIC (Dashboard Information Cluster), when you adjust the volume up / down, this
is reported to the cluster to be displayed.
 
It is the function of this library to "crack open" this world to allow anyone
with only as little as a few hours of C++ programming under their belt to get
started in what can sometimes seem a daunting world.
 
Adapted from Jason Gaunt.
*/
 
#ifndef GMLAN_29BIT_H
#define GMLAN_29BIT_H
 
/* Known 29-Bit Arbitration IDs - periodically updated from the GMLAN Bible located at
this address: http://is.gd/gmlanbible - credit to the authors on their changelog */
#define GMLAN_ARBID_SYSTEM_POWER_MODE 0x1
#define GMLAN_ARBID_SYSTEM_POWER_MODE_BACKUP 0x2
#define GMLAN_ARBID_EASY_KEY_DISPLAY_COMMANDS 0x3
#define GMLAN_ARBID_RFA_FUNCTION 0x4
#define GMLAN_ARBID_TIRE_PRESSURE_STATUS_LS 0x5
#define GMLAN_ARBID_MODULE_SUBSTITUTION_STATUS 0x6
#define GMLAN_ARBID_ROLLOVER_STATUS 0x8
#define GMLAN_ARBID_INFOTAINMENT_OPERATION_ALLOWED 0x9
#define GMLAN_ARBID_TPM_DISPLAY_COMMANDS 0xA
#define GMLAN_ARBID_PLATFORM_IMMOBILIZER_DATA 0xB
#define GMLAN_ARBID_PLATFORM_IMMOBILIZER_PASSWORD 0xC
#define GMLAN_ARBID_VEH_SECURITY_DISPLAY_COMMANDS 0xD
#define GMLAN_ARBID_POWERTRAIN_IMMOBILIZER_DATA 0xE
#define GMLAN_ARBID_CHIME_COMMAND 0xF
#define GMLAN_ARBID_CHIME_STATUS 0x10
#define GMLAN_ARBID_DIMMING_INFORMATION 0x11
#define GMLAN_ARBID_VIN_DIGITS_2_TO_9 0x12
#define GMLAN_ARBID_VIN_DIGITS_10_TO_17 0x13
#define GMLAN_ARBID_HS_DEVICE_INFORMATION 0x14
#define GMLAN_ARBID_AUTO_OCCUPANT_SENSING_ENABLED 0x16
#define GMLAN_ARBID_DISPLAY_MEASUREMENT_SYSTEM 0x17
#define GMLAN_ARBID_BATTERY_VOLTAGE 0x18
#define GMLAN_ARBID_ROLLOVER_SENSING_ENABLED 0x19
#define GMLAN_ARBID_DRIVER_DOOR_STATUS 0x1B
#define GMLAN_ARBID_PASSENGER_DOOR_STATUS 0x1C
#define GMLAN_ARBID_LEFT_REAR_DOOR_STATUS 0x1D
#define GMLAN_ARBID_RIGHT_REAR_DOOR_STATUS 0x1E
#define GMLAN_ARBID_PERS_LIGHT_LOCK_STATUS 0x1F
#define GMLAN_ARBID_PERS_LIGHT_LOCK_REQUEST 0x20
#define GMLAN_ARBID_LIGHTING_STATUS 0x21
#define GMLAN_ARBID_ENHANCED_SERVICES_REQUEST 0x22
#define GMLAN_ARBID_PROGRAMMING_EVENT_REQUESTS 0x23
#define GMLAN_ARBID_EXPORT_MODULE_STATUS 0x24
#define GMLAN_ARBID_TRANSMISSION_GEAR_INFORMATION 0x25
#define GMLAN_ARBID_FUEL_INFORMATION 0x26
#define GMLAN_ARBID_VEHICLE_ODO_BRK_WASH_LEVEL 0x27
#define GMLAN_ARBID_VEHICLE_SPEED_INFORMATION 0x28
#define GMLAN_ARBID_ENGINE_INFORMATION_1 0x29
#define GMLAN_ARBID_AUTO_HIGH_BEAM_STATUS 0x2A
#define GMLAN_ARBID_DOOR_LOCK_COMMAND 0x2B
#define GMLAN_ARBID_DRIVER_DOOR_LOCK_SWITCH_STATUS 0x2C
#define GMLAN_ARBID_PASS_DOOR_LOCK_SWITCH_STATUS 0x2D
#define GMLAN_ARBID_BRAKE_AND_CRUISE_CONTROL_STATUS 0x2F
#define GMLAN_ARBID_REAR_CLOSURE_STATUS 0x30
#define GMLAN_ARBID_ENGINE_INFORMATION_3 0x32
#define GMLAN_ARBID_ENGINE_INFORMATION_2 0x37
#define GMLAN_ARBID_REMOTE_START_STATUS 0x38
#define GMLAN_ARBID_REAR_CLOSURE_RELEASE_SWITCH 0x39
#define GMLAN_ARBID_MEMORY_SWITCH_STATUS 0x3C
#define GMLAN_ARBID_OCCUPANT_PROTECTION_SYCH 0x3D
#define GMLAN_ARBID_WINDOW_MOTION_REQUEST 0x40
#define GMLAN_ARBID_MIRROR_MOVEMENT_REQUEST 0x41
#define GMLAN_ARBID_PERS_DRIVER_POSITION_STATUS 0x42
#define GMLAN_ARBID_PERS_DRIVER_POSITION_REQUEST 0x43
#define GMLAN_ARBID_PERS_CHIME_STATUS 0x44
#define GMLAN_ARBID_PERS_CHIME_REQUEST 0x45
#define GMLAN_ARBID_ROLLOVER_SENSOR_IDENTIFIER 0x48
#define GMLAN_ARBID_AUTO_OCCUPANT_SENSOR_IDENTIFIER 0x4A
#define GMLAN_ARBID_DRIVER_IDENTIFIER_LS 0x50
#define GMLAN_ARBID_LEVELING_AND_SUSPENSION_STATUS 0x51
#define GMLAN_ARBID_GPS_DATE_AND_TIME 0x53
#define GMLAN_ARBID_TIME_OF_DAY 0x54
#define GMLAN_ARBID_GPS_GEOGRAPHICAL_POSITION 0x55
#define GMLAN_ARBID_GPS_ELEVATION_AND_HEADING 0x56
#define GMLAN_ARBID_REAR_SEATBELT_STATUS 0x58
#define GMLAN_ARBID_STEERING_WHEEL_ANGLE 0x5B
#define GMLAN_ARBID_CLIMATE_CONTROL 0x60
#define GMLAN_ARBID_OUTSIDE_AIR_TEMP_CORRECTED 0x61
#define GMLAN_ARBID_ANTILOCK_BRAKE_AND_TC_STATUS 0x62
#define GMLAN_ARBID_CLIMATE_CONTROL_GENERAL_STATUS_2 0x64
#define GMLAN_ARBID_STEERING_WHEEL_CONTROL_SWITCHES 0x68
#define GMLAN_ARBID_REAR_CLIMATE_CONTROL_STATUS 0x6A
#define GMLAN_ARBID_RR_CLIMATE_CONTROL_RMT_COMMAND 0x6B
#define GMLAN_ARBID_HEAD_UP_DISPLAY_STATUS 0x6D
#define GMLAN_ARBID_ALARM_CLOCK_STATUS_LS 0x70
#define GMLAN_ARBID_CLIMATE_CONTROL_BUTTONS 0x71
#define GMLAN_ARBID_LEFT_CLIMATE_CONTROL_TEMP_DIAL 0x72
#define GMLAN_ARBID_RIGHT_CLIMATE_CONTROL_TEMP_DIAL 0x73
#define GMLAN_ARBID_CLIMATE_CONTROL_EXTENDED_STATUS 0x75
#define GMLAN_ARBID_PERS_PARKING_ASSIST_REQ 0x8B
#define GMLAN_ARBID_PERS_PARKING_ASSIST_STATUS 0x8C
#define GMLAN_ARBID_PARKING_ASSISTANCE_STATUS 0x8D
#define GMLAN_ARBID_PARK_ASSIST_REAR_DISTANCE 0x8E
#define GMLAN_ARBID_PARK_ASSIST_FRONT_DISTANCE 0x8F
#define GMLAN_ARBID_AIRBAG_IMPACT_DATA 0x90
#define GMLAN_ARBID_AIRBAG_IMPACT_DATA_1 0x94
#define GMLAN_ARBID_AIRBAG_IMPACT_DATA_2 0x95
#define GMLAN_ARBID_AIRBAG_IMPACT_DATA_3 0x96
#define GMLAN_ARBID_AIRBAG_IMPACT_DATA_4 0x97
#define GMLAN_ARBID_AIRBAG_INDICATIONS 0x98
#define GMLAN_ARBID_MEMORY_RECALL_IMPACT_DISABLE 0x99
#define GMLAN_ARBID_ENG_TRANS_OIL_LIFE_RESET_REQ 0x9A
#define GMLAN_ARBID_AOS_CONNECTION 0x9C
#define GMLAN_ARBID_DIGITAL_AUDIO_RECEIVER_STATUS 0x9D
#define GMLAN_ARBID_REAR_SEAT_ENTERTAINMENT_STATUS 0x9E
#define GMLAN_ARBID_PERS_MIRROR_TILT_STATUS 0xA0
#define GMLAN_ARBID_PERS_MIRROR_TILT_REQ 0xA1
#define GMLAN_ARBID_PERS_WINDOW_LOCKOUT_STATUS 0xA2
#define GMLAN_ARBID_PERS_WINDOW_LOCKOUT_REQ 0xA3
#define GMLAN_ARBID_PERSONALIZATION_INFORMATION 0xA4
#define GMLAN_ARBID_PHONE_STATUS 0x120
#define GMLAN_ARBID_ADAPTIVE_CRUISE_DISPLAY 0x124
#define GMLAN_ARBID_CONTENT_THEFT_SENSOR_DISABLE_REQ 0x12A
#define GMLAN_ARBID_CONTENT_THEFT_SENSOR_STATUS 0x130
#define GMLAN_ARBID_SOD_LEFT_STATUS 0x140
#define GMLAN_ARBID_AUDIO_MASTER_AMPLIFIER_COMMAND 0x141
#define GMLAN_ARBID_AUDIO_MASTER_AMPLIFIER_SETTING 0x142
#define GMLAN_ARBID_AUDIO_MASTER_AMPLIFIER_MUTE 0x143
#define GMLAN_ARBID_SOD_RIGHT_STATUS 0x144
#define GMLAN_ARBID_AUDIO_MASTER_ARBITRATION_COMMAND 0x145
#define GMLAN_ARBID_PHONE_DIAL_COMMAND_1 0x146
#define GMLAN_ARBID_PHONE_DIAL_COMMAND_2 0x147
#define GMLAN_ARBID_AUXILIARY_NAV_DATA_DISPLAY 0x148
#define GMLAN_ARBID_AUDIO_MASTER_AMPLIFIER_CONTROL 0x149
#define GMLAN_ARBID_REMOTE_CHANGER_COMMAND 0x14A
#define GMLAN_ARBID_ADVANCED_REMOTE_RECEIVER_CONTROL 0x14B
#define GMLAN_ARBID_VOICE_RECOGNITION_STATUS 0x14C
#define GMLAN_ARBID_DRIVER_SEAT_TEMP_CONTROL 0x150
#define GMLAN_ARBID_DRIVER_SEAT_TEMP_INDICATION 0x151
#define GMLAN_ARBID_PASS_SEAT_TEMP_CONTROL 0x152
#define GMLAN_ARBID_PASS_SEAT_TEMP_INDICATION 0x153
#define GMLAN_ARBID_RR_LEFT_SEAT_TEMP_CONTROL 0x154
#define GMLAN_ARBID_RR_LEFT_SEAT_TEMP_INDICATION 0x155
#define GMLAN_ARBID_RR_RIGHT_SEAT_TEMP_CONTROL 0x156
#define GMLAN_ARBID_RR_RIGHT_SEAT_TEMP_INDICATION 0x157
#define GMLAN_ARBID_MEMORY_COMMAND 0x160
#define GMLAN_ARBID_DRIVER_MIRROR_MOTION 0x168
#define GMLAN_ARBID_PASENGER_MIRROR_MOTION 0x169
#define GMLAN_ARBID_ARB_TEXT_DISPLAY_GEN_ATTRIBUTES 0x180
#define GMLAN_ARBID_ARB_TEXT_DISPLAY_LINE_ATTRIBUTES 0x181
#define GMLAN_ARBID_ARB_TEXT_REQ_SET_DISP_ICON 0x182
#define GMLAN_ARBID_ARB_TEXT_DISPLAY_STATUS 0x183
#define GMLAN_ARBID_ARB_TEXT_DISPLAY_MENU_ACTION 0x184
#define GMLAN_ARBID_ARB_TEXT_REQ_SET_DISP_PARAMETERS 0x185
#define GMLAN_ARBID_ARB_TEXT_REQ_SET_DISPLAY_TEXT 0x186
#define GMLAN_ARBID_ARB_TEXT_REQ_DOWNLOAD_ICON_DATA 0x187
#define GMLAN_ARBID_REAR_SEAT_AUDIO_STATUS 0x188
#define GMLAN_ARBID_AUDIO_AMPLIFIER_STATUS 0x189
#define GMLAN_ARBID_REAR_SEAT_AUDIO_COMMAND_1 0x18A
#define GMLAN_ARBID_REMOTE_CHANGER_STATUS 0x18B
#define GMLAN_ARBID_REMOTE_CHANGER_MEDIA_STATUS 0x18C
#define GMLAN_ARBID_RSE_HEADPHONE_AUDIO_STATUS 0x18D
#define GMLAN_ARBID_AUDIO_SOURCE_STATUS 0x18E
#define GMLAN_ARBID_REMOTE_RECEIVER_STATUS 0x18F
#define GMLAN_ARBID_ARB_TEXT_DISPLAY_ICON_ATTRIBUTES 0x190
#define GMLAN_ARBID_VIDEO_SOURCE_DEVICE_STATUS 0x191
#define GMLAN_ARBID_REMOTE_RECEIVER_CHANNEL_STATUS 0x192
#define GMLAN_ARBID_REMOTE_RECEIVER_PRESET_INFO 0x193
#define GMLAN_ARBID_REMOTE_RECEIVER_STATUS_2 0x194
#define GMLAN_ARBID_TV_TUNER_STATUS 0x195
#define GMLAN_ARBID_VIDEO_MASTER_ARB_COMMAND 0x196
#define GMLAN_ARBID_REMOTE_RECEIVER_TV_STATION 0x197
#define GMLAN_ARBID_REMOTE_RECEIVER_CONTROL 0x198
#define GMLAN_ARBID_ONSTAR_VOICE_PROMPT_REQUEST 0x1B0
#define GMLAN_ARBID_ONSTAR_MIN_DIGITS_1_15 0x1B1
#define GMLAN_ARBID_ONSTAR_MIN_DIGITS_16_30 0x1B2
#define GMLAN_ARBID_ONSTAR_VOICE_PROMPT_STATUS 0x1B3
#define GMLAN_ARBID_COLUMN_LOCK_COMMAND 0x1F0
#define GMLAN_ARBID_COLUMN_LOCK_STATUS 0x200
#define GMLAN_ARBID_AIR_CONDITIONING_CONTROL 0x278
#define GMLAN_ARBID_ALARM_CLOCK_REQUEST_2 0x802
 
#endif