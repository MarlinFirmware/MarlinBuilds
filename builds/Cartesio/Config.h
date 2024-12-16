/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-12-16 at 07:02:30.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(MaukCC, CartesioE)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_CNCONTROLS_12

//
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define DISABLE_OTHER_EXTRUDERS
#define EXTRUDERS                                3
#define INVERT_E0_DIR                            false
#define INVERT_E1_DIR                            false
#define INVERT_E2_DIR                            false

//
// Bed Temp
//
#define DEFAULT_bedKd                            546
#define DEFAULT_bedKi                            70
#define DEFAULT_bedKp                            390
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define E2_AUTO_FAN_PIN                          -1
#define E3_AUTO_FAN_PIN                          AUTO_FAN_PIN
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            35

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           A4988
#define E1_DRIVER_TYPE                           A4988
#define E2_DRIVER_TYPE                           A4988
#define E_ENABLE_ON                              LOW
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
#define X_BED_SIZE                               435
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               270
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                400
#define Z_MIN_POS                                0

//
// Homing
//
#define HOME_Y_BEFORE_X
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (10*60) }
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1

//
// Endstops
//
#define ENDSTOPPULLUPS
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW

//
// Probes
//
#define PROBING_TOOL                             0

//
// LCD
//
#define BOOTSCREEN_TIMEOUT                       3000
#define BOOT_MARLIN_LOGO_SMALL
#define CARTESIO_UI
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define MANUAL_E_MOVES_RELATIVE
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define MENU_HOLLOW_FRAME
#define REPRAPWORLD_KEYPAD
#define REPRAPWORLD_KEYPAD_MOVE_STEP             10.0
#define SDCARD_RATHERRECENTFIRST
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_MENU_CONFIRM_START
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_BOOTSCREEN
#define SHOW_CUSTOM_BOOTSCREEN
#define SHOW_ELAPSED_TIME
#define SHOW_PROGRESS_PERCENT
#define SOUND_ON_DEFAULT
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define STATUS_BED_ANIM
#define STATUS_CHAMBER_ANIM
#define STATUS_HOTEND_ANIM
#define STATUS_HOTEND_INVERTED
#define ULTIPANEL_FEEDMULTIPLY
#define XYZ_HOLLOW_FRAME

//
// Interface
//
#define ENCODER_PULSES_PER_STEP                  2
#define ENCODER_STEPS_PER_MENU_ITEM              1
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS       100
#define LCD_FEEDBACK_FREQUENCY_HZ                1000
#define LCD_LANGUAGE                             en
#define SPEAKER

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
#define THERMAL_PROTECTION_BED
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
#define BED_MAXTEMP                              165
#define BED_MINTEMP                              5
#define BED_OVERSHOOT                            10
#define HEATER_0_MAXTEMP                         305
#define HEATER_0_MINTEMP                         5
#define HEATER_1_MAXTEMP                         305
#define HEATER_1_MINTEMP                         5
#define HEATER_2_MAXTEMP                         305
#define HEATER_2_MINTEMP                         5
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       50
#define PREHEAT_1_TEMP_HOTEND                    190
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       110
#define PREHEAT_2_TEMP_HOTEND                    240
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  1
#define TEMP_BED_WINDOW                          1
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      4
#define TEMP_SENSOR_0                            -1
#define TEMP_SENSOR_1                            -1
#define TEMP_SENSOR_2                            1
#define TEMP_SENSOR_AD595_GAIN                   1.0
#define TEMP_SENSOR_AD595_OFFSET                 0.0
#define TEMP_SENSOR_BED                          1
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
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_ACCELERATION                     500
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 71.128, 71.128, 640, 152 }
#define DEFAULT_MAX_ACCELERATION                 { 1000, 1000, 100, 10000 }
#define DEFAULT_MAX_FEEDRATE                     { 200, 200, 20, 20 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             10000
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             false
#define JD_HANDLE_SMALL_SEGMENTS
#define JUNCTION_DEVIATION_MM                    0.08
#define MIN_STEPS_PER_SEGMENT                    6
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH

//
// Lights
//
#define TEMP_STAT_LEDS

//
// Serial
//
#define BAUDRATE                                 115200
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "CartesioE"
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

//
// Hotend Temp
//
#define DEFAULT_Kd                               100.0
#define DEFAULT_Ki                               1.0
#define DEFAULT_Kp                               18.0
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

//
// Tool Change
//
#define TOOLCHANGE_FS_EXTRA_PRIME                0
#define TOOLCHANGE_ZRAISE                        2