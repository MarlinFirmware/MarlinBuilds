/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-11-26 at 20:49:42.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Axel Sepúlveda)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_RAMPS_14_EFB

//
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             3.0
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            false

//
// Bed Temp
//
#define DEFAULT_bedKd                            815.64
#define DEFAULT_bedKi                            121.71
#define DEFAULT_bedKp                            630.14

//
// Fans
//
#define CHAMBER_AUTO_FAN_PIN                     -1
#define COOLER_AUTO_FAN_PIN                      -1
#define E0_AUTO_FAN_PIN                          -1

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           A4988
#define E_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            A4988
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            A4988
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            A4988
#define Z_ENABLE_ON                              LOW

//
// Geometry
//
#define MAX_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOP_Z
#define MIN_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_Z
#define X_BED_SIZE                               200
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               200
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                225
#define Z_MIN_POS                                MANUAL_Z_HOME_POS

//
// Homing
//
#define HOMING_BUMP_DIVISOR                      { 2, 2, 2 }
#define HOMING_BUMP_MM                           { 10, 15, 10 }
#define HOMING_FEEDRATE_MM_M                     { (10*60), (10*60), (10*60) }
#define MANUAL_X_HOME_POS                        35
#define MANUAL_Y_HOME_POS                        0
#define MANUAL_Z_HOME_POS                        125
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               1
#define Z_HOME_DIR                               1

//
// Endstops
//
#define DETECT_BROKEN_ENDSTOP
#define ENDSTOPPULLUPS
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MAX_ENDSTOP_HIT_STATE                  LOW
#define Z_MAX_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            LOW

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_KEEPALIVE_FEATURE
#define PRINTJOB_TIMER_AUTOSTART

//
// Reporting
//
#define AUTO_REPORT_TEMPERATURES
#define CAPABILITIES_REPORT
#define EXTENDED_CAPABILITIES_REPORT

//
// Temperature
//
#define AUTOTEMP
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_OVERSHOOT                            10
#define CHAMBER_CHECK_INTERVAL                   5000
#define COOLER_OVERSHOOT                         2
#define DUMMY_THERMISTOR_998_VALUE               25
#define DUMMY_THERMISTOR_999_VALUE               100
#define HEATER_0_MAXTEMP                         275
#define HEATER_0_MINTEMP                         5
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      255
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       70
#define PREHEAT_1_TEMP_CHAMBER                   35
#define PREHEAT_1_TEMP_HOTEND                    180
#define PREHEAT_2_FAN_SPEED                      255
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       100
#define PREHEAT_2_TEMP_CHAMBER                   35
#define PREHEAT_2_TEMP_HOTEND                    240
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      3
#define TEMP_SENSOR_0                            1
#define TEMP_WINDOW                              1
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40

//
// Safety
//
#define EXTRUDE_MAXLENGTH                        200
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_HOTENDS
#define USE_WATCHDOG

//
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define CLASSIC_JERK
#define DEFAULT_ACCELERATION                     1000
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 63.21,63.21,63.21, 200 }
#define DEFAULT_EJERK                            3.0
#define DEFAULT_MAX_ACCELERATION                 { 500, 500, 500, 1000 }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 500, 25 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             2000
#define DEFAULT_STEPPER_TIMEOUT_SEC              0
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_XJERK                            5.0
#define DEFAULT_YJERK                            5.0
#define DEFAULT_ZJERK                            5.0
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define MIN_STEPS_PER_SEGMENT                    6
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN_DIVISOR                         2
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH

//
// TPARA
//
#define AXEL_TPARA
#define DEBUG_TPARA_KINEMATICS
#define MIDDLE_DEAD_ZONE_R                       0
#define TPARA_LINKAGE_1                          120
#define TPARA_LINKAGE_2                          120
#define TPARA_OFFSET_X                           0
#define TPARA_OFFSET_Y                           0
#define TPARA_OFFSET_Z                           0

//
// PSU Control
//
#define PSU_ACTIVE_STATE                         LOW
#define PSU_CONTROL
#define PS_EDM_RESPONSE                          250

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20

//
// Hotend Temp
//
#define DEFAULT_Kd                               87.73
#define DEFAULT_Ki                               1.72
#define DEFAULT_Kp                               24.50
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Calibrate
//
#define DEBUG_LEVELING_FEATURE

//
// Serial
//
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "TPARA"
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              0
#define TX_BUFFER_SIZE                           0

//
// Polar
//
#define DEFAULT_SEGMENTS_PER_SECOND              200
#define FEEDRATE_SCALING
#define PRINTABLE_RADIUS                         (TPARA_LINKAGE_1 + TPARA_LINKAGE_2)

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER
