/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-12-16 at 08:42:02.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(elsie tech corp)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_EINSTART_S

//
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            false

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           A4988
#define E_ENABLE_ON                              HIGH
#define X_DRIVER_TYPE                            A4988
#define X_ENABLE_ON                              HIGH
#define Y_DRIVER_TYPE                            A4988
#define Y_ENABLE_ON                              HIGH
#define Z_DRIVER_TYPE                            A4988
#define Z_ENABLE_ON                              HIGH

//
// Geometry
//
#define MAX_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOP_X
#define MAX_SOFTWARE_ENDSTOP_Y
#define MAX_SOFTWARE_ENDSTOP_Z
#define MIN_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_X
#define MIN_SOFTWARE_ENDSTOP_Y
#define MIN_SOFTWARE_ENDSTOP_Z
#define X_BED_SIZE                               160
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               160
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                165
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (4*60) }
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               1
#define Z_IDLE_HEIGHT                            Z_MAX_POS

//
// Endstops
//
#define ENDSTOPPULLUPS
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define X_STOP_INVERTING                         true
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_STOP_INVERTING                         true
#define Z_MAX_ENDSTOP_HIT_STATE                  LOW
#define Z_STOP_INVERTING                         true

//
// LCD
//
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define SDCARD_RATHERRECENTFIRST
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_PROCEDURE_DEPTH                       1

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
// Safety
//
#define EXTRUDE_MAXLENGTH                        200
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_HOTENDS
#define USE_WATCHDOG

//
// Temperature
//
#define AUTOTEMP
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define HEATER_0_MAXTEMP                         275
#define HEATER_0_MINTEMP                         5
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_HOTEND                    180
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_HOTEND                    240
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_SENSOR_0                            666
#define TEMP_WINDOW                              1
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40

//
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_ACCELERATION                     2000
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 80, 96.337120 }
#define DEFAULT_MAX_ACCELERATION                 { 2000, 2000, 100, 10000 }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 5, 25 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             2000
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              2000
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define JD_HANDLE_SMALL_SEGMENTS
#define JUNCTION_DEVIATION_MM                    0.02
#define MAXIMUM_STEPPER_RATE                     250000
#define MINIMUM_STEPPER_PULSE_NS                 2000
#define MIN_STEPS_PER_SEGMENT                    6
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define S_CURVE_ACCELERATION

//
// Serial
//
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "The Shining"
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              0
#define TX_BUFFER_SIZE                           0

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     10

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Hotend Temp
//
#define DEFAULT_Kd                               63.03
#define DEFAULT_Ki                               0.93
#define DEFAULT_Kp                               15.31
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Media
//
#define SDSUPPORT

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
