/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-11-26 at 21:03:47.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(mojocorp, M300 config)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_MALYAN_M300

//
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            true

//
// Bed Temp
//
#define DEFAULT_bedKd                            85.08
#define DEFAULT_bedKi                            2.58
#define DEFAULT_bedKp                            18.13
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define CHAMBER_AUTO_FAN_PIN                     -1
#define COOLER_AUTO_FAN_PIN                      -1
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_SOFT_PWM

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
#define X_BED_SIZE                               ((PRINTABLE_RADIUS) * 2)
#define X_MAX_POS                                PRINTABLE_RADIUS
#define X_MIN_POS                                -(PRINTABLE_RADIUS)
#define Y_BED_SIZE                               ((PRINTABLE_RADIUS) * 2)
#define Y_MAX_POS                                PRINTABLE_RADIUS
#define Y_MIN_POS                                -(PRINTABLE_RADIUS)
#define Z_MAX_POS                                MANUAL_Z_HOME_POS
#define Z_MIN_POS                                0

//
// Homing
//
#define BED_CENTER_AT_0_0
#define HOMING_BUMP_DIVISOR                      { 10, 10, 10 }
#define HOMING_BUMP_MM                           { 5, 5, 5 }
#define HOMING_FEEDRATE_MM_M                     { (200*30), (200*30), (200*30) }
#define MANUAL_Z_HOME_POS                        DELTA_HEIGHT
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               1
#define Y_HOME_DIR                               1
#define Z_HOME_DIR                               1

//
// Endstops
//
#define ENDSTOPPULLUPS
#define X_MAX_ENDSTOP_HIT_STATE                  HIGH
#define Y_MAX_ENDSTOP_HIT_STATE                  HIGH
#define Z_MAX_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            LOW

//
// Probes
//
#define PROBE_MANUALLY
#define PROBING_MARGIN                           5.0
#define XY_PROBE_FEEDRATE                        (66*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 50

//
// LCD
//
#define BOOTSCREEN_TIMEOUT                       3000
#define EVENT_GCODE_SD_ABORT                     "G28"
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define LCD_SERIAL_PORT                          1
#define MALYAN_LCD
#define MANUAL_FEEDRATE                          { MANUAL_FEEDRATE_XYZ, MANUAL_FEEDRATE_XYZ, MANUAL_FEEDRATE_XYZ, 60 }
#define MANUAL_FEEDRATE_XYZ                      50*60
#define SDCARD_RATHERRECENTFIRST
#define SD_DETECT_STATE                          HIGH
#define SD_FINISHED_RELEASECOMMAND               "M84 X Y Z E"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_BOOTSCREEN
#define SHOW_ELAPSED_TIME
#define SHOW_PROGRESS_PERCENT
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10

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
// Delta
//
#define DELTA
#define DELTA_DIAGONAL_ROD                       120.8
#define DELTA_DIAGONAL_ROD_TRIM_TOWER            { 0.0, 0.0, 0.0 }
#define DELTA_ENDSTOP_ADJ                        { 0.0, 0.0, 0.0 }
#define DELTA_HEIGHT                             113.0
#define DELTA_MAX_RADIUS                         60.0
#define DELTA_RADIUS                             63.0
#define DELTA_TOWER_ANGLE_TRIM                   { 0.0, 0.0, 0.0 }

//
// Temperature
//
#define AUTOTEMP
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_MAXTEMP                              150
#define BED_MINTEMP                              5
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
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_SENSOR_0                            11
#define TEMP_SENSOR_BED                          75
#define TEMP_WINDOW                              1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define THERMAL_PROTECTION_BED_PERIOD            20
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40

//
// Safety
//
#define EXTRUDE_MAXLENGTH                        200
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED
#define THERMAL_PROTECTION_HOTENDS
#define USE_WATCHDOG

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_SETTINGS

//
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define CLASSIC_JERK
#define DEFAULT_ACCELERATION                     3000
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 114.28, 114.28, 114.28, 97.0 }
#define DEFAULT_EJERK                            5.0
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 3000, 10000 }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 500, 25 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_STEPPER_TIMEOUT_SEC              60
#define DEFAULT_TRAVEL_ACCELERATION              3000
#define DEFAULT_XJERK                            10.0
#define DEFAULT_YJERK                            DEFAULT_XJERK
#define DEFAULT_ZJERK                            DEFAULT_XJERK
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             false
#define MIN_STEPS_PER_SEGMENT                    1
#define MULTISTEPPING_LIMIT                      16
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH

//
// Media
//
#define SDSUPPORT

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     10

//
// Hotend Temp
//
#define DEFAULT_Kd                               62.47
#define DEFAULT_Ki                               0.56
#define DEFAULT_Kp                               11.79
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Serial
//
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "Malyan M300"
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              -1
#define TX_BUFFER_SIZE                           0

//
// Polar
//
#define DEFAULT_SEGMENTS_PER_SECOND              200
#define PRINTABLE_RADIUS                         60.0

//
// Calibrate
//
#define AUTO_BED_LEVELING_3POINT
#define MANUAL_PROBE_START_Z                     0.2
#define RESTORE_LEVELING_AFTER_G28

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER

//
// Leveling
//
#define PROBE_PT_1                               { -43, -25 }
#define PROBE_PT_2                               { 43, -25 }
#define PROBE_PT_3                               { 0, 50 }