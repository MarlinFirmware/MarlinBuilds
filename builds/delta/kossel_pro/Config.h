/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 11:35:16.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Richard Wackerbarth)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_BRAINWAVE_PRO

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT

//
// Stepper Drivers
//
#define X_DRIVER_TYPE                            A4988
#define Y_DRIVER_TYPE                            A4988
#define Z_DRIVER_TYPE                            A4988
#define E0_DRIVER_TYPE                           A4988
#define X_ENABLE_ON                              LOW
#define Y_ENABLE_ON                              LOW
#define Z_ENABLE_ON                              LOW
#define E_ENABLE_ON                              LOW

//
// Extruder
//
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            true
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75

//
// Geometry
//
#define X_BED_SIZE                               ((PRINTABLE_RADIUS) * 2)
#define X_MIN_POS                                -(PRINTABLE_RADIUS)
#define X_MAX_POS                                PRINTABLE_RADIUS
#define Y_BED_SIZE                               ((PRINTABLE_RADIUS) * 2)
#define Y_MIN_POS                                -(PRINTABLE_RADIUS)
#define Y_MAX_POS                                PRINTABLE_RADIUS
#define Z_MIN_POS                                0
#define Z_MAX_POS                                MANUAL_Z_HOME_POS
#define MIN_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_Z
#define MAX_SOFTWARE_ENDSTOP_Z

//
// Homing
//
#define X_HOME_DIR                               1
#define Y_HOME_DIR                               1
#define Z_HOME_DIR                               1
#define HOMING_FEEDRATE_MM_M                     { (200*60), (200*60), (200*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define MANUAL_Z_HOME_POS                        DELTA_HEIGHT
#define BED_CENTER_AT_0_0
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { DEFAULT_XYZ_STEPS_PER_UNIT, DEFAULT_XYZ_STEPS_PER_UNIT, DEFAULT_XYZ_STEPS_PER_UNIT, 184.8 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 200, 200, 200, 200 }
#define DEFAULT_MAX_ACCELERATION                 { 9000, 9000, 9000, 9000 }
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             true
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define DEFAULT_ACCELERATION                     3000
#define DEFAULT_TRAVEL_ACCELERATION              3000
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_EJERK                            5.0
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define DISABLE_IDLE_E
#define SLOWDOWN_DIVISOR                         2
#define DEFAULT_ZJERK                            DEFAULT_XJERK
#define XYZ_BELT_PITCH                           2
#define XYZ_FULL_STEPS_PER_ROTATION              200
#define CLASSIC_JERK
#define XYZ_STEPS                                ((XYZ_FULL_STEPS_PER_ROTATION) * (XYZ_MICROSTEPS) / double(XYZ_BELT_PITCH) / double(XYZ_PULLEY_TEETH))
#define EDITABLE_STEPS_PER_UNIT
#define XYZ_PULLEY_TEETH                         20
#define DEFAULT_YJERK                            DEFAULT_XJERK
#define XYZ_MICROSTEPS                           32
#define DEFAULT_XJERK                            10.0
#define DEFAULT_XYZ_STEPS_PER_UNIT               ((XYZ_FULL_STEPS_PER_ROTATION) * (XYZ_MICROSTEPS) / double(XYZ_BELT_PITCH) / double(XYZ_PULLEY_TEETH))
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define ENDSTOPPULLUPS
#define Y_MAX_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH
#define X_MAX_ENDSTOP_HIT_STATE                  HIGH
#define Z_MAX_ENDSTOP_HIT_STATE                  HIGH

//
// Probes
//
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 100
#define PROBE_OFFSET_ZMIN                        -20
#define Z_PROBE_ALLEN_KEY_DEPLOY_1_FEEDRATE      XY_PROBE_FEEDRATE
#define Z_PROBE_ALLEN_KEY_DEPLOY_1               { -105.00, 0.00, 100.0 }
#define Z_PROBE_ALLEN_KEY_DEPLOY_2               { -110.00, -125.00, 100.0 }
#define Z_PROBE_ALLEN_KEY_DEPLOY_4               { 45.00, -125.00, 100.0 }
#define Z_PROBE_ALLEN_KEY_STOW_2_FEEDRATE        (XY_PROBE_FEEDRATE)/2
#define Z_PROBE_ALLEN_KEY_DEPLOY_3               { -110.00 * 0.75, -125.00 * 0.75, 100.0 }
#define Z_PROBE_ALLEN_KEY
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_ALLEN_KEY_DEPLOY_4_FEEDRATE      (XY_PROBE_FEEDRATE)/2
#define Z_PROBE_LOW_POINT                        -2
#define Z_PROBE_ALLEN_KEY_STOW_2                 { 36.00, -125.00, 0.0 }
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_PROBE_ALLEN_KEY_STOW_1_FEEDRATE        XY_PROBE_FEEDRATE
#define Z_PROBE_ALLEN_KEY_STOW_4_FEEDRATE        XY_PROBE_FEEDRATE
#define Z_PROBE_ALLEN_KEY_STOW_1                 { 36.00, -125.00, 75.0 }
#define Z_PROBE_ALLEN_KEY_STOW_3                 { 0.0, 0.0, 100.0 }
#define Z_PROBE_ALLEN_KEY_STOW_4                 { 0.0, 0.0, 100.0 }
#define NOZZLE_TO_PROBE_OFFSET                   { -23, -6, -17.25 }
#define Z_PROBE_FEEDRATE_FAST                    (200*60)
#define Z_PROBE_ALLEN_KEY_STOW_3_FEEDRATE        XY_PROBE_FEEDRATE
#define Z_PROBE_ALLEN_KEY_DEPLOY_3_FEEDRATE      XY_PROBE_FEEDRATE
#define Z_PROBE_ALLEN_KEY_DEPLOY_2_FEEDRATE      XY_PROBE_FEEDRATE

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            5
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define PREHEAT_1_TEMP_HOTEND                    180
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      255
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       70
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  0
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define TEMP_SENSOR_BED                          5
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define PREHEAT_2_FAN_SPEED                      255
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              150
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       100
#define PREHEAT_2_TEMP_HOTEND                    240
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_FACTOR                          0.1f
#define THERMAL_PROTECTION_BED_PERIOD            20

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  125
#define DEFAULT_Kp                               19.30
#define DEFAULT_Kd                               26.56
#define DEFAULT_Ki                               3.51

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     50

//
// Bed Temp
//
#define MAX_BED_POWER                            255
#define PIDTEMPBED
#define DEFAULT_bedKd                            545.98
#define DEFAULT_bedKi                            62.77
#define DEFAULT_bedKp                            370.25

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1

//
// Media
//
#define SDSUPPORT

//
// LCD
//
#define SDCARD_RATHERRECENTFIRST
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define SD_PROCEDURE_DEPTH                       1
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"

//
// Delta
//
#define DELTA_DIAGONAL_ROD                       301.0
#define DELTA_TOWER_ANGLE_TRIM                   { 0.0, 0.0, 0.0 }
#define DELTA_HEIGHT                             277.00
#define DELTA_RADIUS                             152.357
#define DELTA_ENDSTOP_ADJ                        { 0.0, 0.0, 0.0 }
#define DELTA

//
// Polar
//
#define DEFAULT_SEGMENTS_PER_SECOND              160
#define PRINTABLE_RADIUS                         127.0

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define DEBUG_FLAGS_GCODE

//
// Serial
//
#define SERIAL_PORT                              0
#define BAUDRATE                                 115200
#define BUFSIZE                                  4
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           0
#define CUSTOM_MACHINE_NAME                      "Kossel Pro"

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
#define EXTENDED_CAPABILITIES_REPORT
#define CAPABILITIES_REPORT

//
// Safety
//
#define USE_WATCHDOG
#define THERMAL_PROTECTION_HOTENDS
#define EXTRUDE_MAXLENGTH                        200
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
