/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2026-11-26 at 08:11:16.
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
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define INVERT_E0_DIR                            false

//
// Extruder
//
#define EXTRUDERS                                1
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75

//
// Geometry
//
#define X_BED_SIZE                               200
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               200
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                295

//
// Homing
//
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               1
#define Z_HOME_DIR                               1
#define HOMING_FEEDRATE_MM_M                     { (60*60), (60*60), (60*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 2 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 10, 15, 10 }
#define MANUAL_Z_HOME_POS                        TPARA_ARM_Z_HOME_POS + TPARA_TCP_OFFSET_Z - TPARA_OFFSET_Z
#define MANUAL_Y_HOME_POS                        TPARA_ARM_Y_HOME_POS + TPARA_TCP_OFFSET_Y - TPARA_OFFSET_Y
#define EDITABLE_HOMING_FEEDRATE
#define MANUAL_X_HOME_POS                        TPARA_ARM_X_HOME_POS + TPARA_TCP_OFFSET_X - TPARA_OFFSET_X
#define HOME_Y_BEFORE_X
#define HOME_Z_FIRST

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 31.60, 31.60, 31.60, 200 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 500, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 500, 500, 500, 1000 }
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define DEFAULT_ACCELERATION                     1000
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_RETRACT_ACCELERATION             2000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_EJERK                            3.0
#define ARC_SUPPORT
#define DEFAULT_STEPPER_TIMEOUT_SEC              0
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define DISABLE_IDLE_E
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
#define SLOWDOWN_DIVISOR                         2
#define DEFAULT_ZJERK                            5.0
#define DEFAULT_YJERK                            5.0
#define DEFAULT_XJERK                            5.0
#define EDITABLE_STEPS_PER_UNIT
#define CLASSIC_JERK
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define ENDSTOPPULLUPS
#define Y_MAX_ENDSTOP_HIT_STATE                  LOW
#define Z_MAX_ENDSTOP_HIT_STATE                  LOW
#define DETECT_BROKEN_ENDSTOP

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define HOTEND_OVERSHOOT                         15
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_KP                               24.50
#define DEFAULT_KI                               1.72
#define DEFAULT_KD                               87.73

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20

//
// Bed Temp
//
#define DEFAULT_BED_KD                           815.64
#define DEFAULT_BED_KI                           121.71
#define DEFAULT_BED_KP                           630.14

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1

//
// Calibrate
//
#define DEBUG_LEVELING_FEATURE

//
// Media
//
#define SDSUPPORT

//
// LCD
//
#define SHOW_BOOTSCREEN
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define SOUND_ON_DEFAULT
#define FINE_MANUAL_MOVE                         0.025
#define SD_PROCEDURE_DEPTH                       1
#define ULTIPANEL_FEEDMULTIPLY
#define MENU_HOLLOW_FRAME
#define FLOW_EDIT_MAX                            999
#define STATUS_CHAMBER_ANIM
#define FLOW_EDIT_MIN                            10
#define BOOT_MARLIN_LOGO_SMALL
#define STATUS_BED_ANIM
#define STATUS_HOTEND_INVERTED
#define SHOW_ELAPSED_TIME
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 10*60, 60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SD_MAX_READ_ERRORS                       5
#define MANUAL_E_MOVES_RELATIVE
#define XYZ_HOLLOW_FRAME
#define REINIT_NOISY_LCD
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define STATUS_HOTEND_ANIM
#define SDCARD_RATHERRECENTFIRST

//
// Interface
//
#define LCD_LANGUAGE                             en
#define REVERSE_ENCODER_DIRECTION

//
// TPARA
//
#define TPARA_OFFSET_X                           127.0
#define TPARA_OFFSET_Y                           0.0
#define TPARA_OFFSET_Z                           0.0
#define DEBUG_TPARA_KINEMATICS
#define AXEL_TPARA
#define TPARA_SHOULDER_AXIS_HEIGHT               135.0
#define TPARA_ARM_Z_HOME_POS                     250.00
#define TPARA_LINKAGE_2                          120
#define TPARA_TCP_OFFSET_Z                       -65.0
#define TPARA_ARM_X_HOME_POS                     28.75
#define MIDDLE_DEAD_ZONE_R                       100
#define TPARA_TCP_OFFSET_X                       27.0
#define TPARA_TCP_OFFSET_Y                       0.0
#define TPARA_LINKAGE_1                          120
#define TPARA_ARM_Y_HOME_POS                     0
#define TPARA_MAX_L1L2_ANGLE                     140.0f

//
// Polar
//
#define PRINTABLE_RADIUS                         SQRT(PRINTABLE_RADIUS_2)
#define FEEDRATE_SCALING
#define DEFAULT_SEGMENTS_PER_SECOND              200

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
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           0
#define CUSTOM_MACHINE_NAME                      "TPARA"

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_KEEPALIVE_FEATURE
#define PRINTJOB_TIMER_AUTOSTART
#define HOST_PROMPT_SUPPORT
#define HOST_ACTION_COMMANDS
#define HOST_STATUS_NOTIFICATIONS

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

//
// Temperature Presets
//
#define PREHEAT_1_TEMP_HOTEND                    180
#define PREHEAT_1_FAN_SPEED                      255
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_FAN_SPEED                      255
#define PREHEAT_2_TEMP_HOTEND                    240

//
// Temperature Sensors
//
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      3
#define TEMP_WINDOW                              1
