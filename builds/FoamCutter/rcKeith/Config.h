/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-12-16 at 08:46:41.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(rcKeith, HotWire CNC)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_RAMPS_14_SF

//
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                0

//
// Stepper Drivers
//
#define AXIS4_NAME                               'U'
#define AXIS5_NAME                               'V'
#define E_ENABLE_ON                              LOW
#define I_DRIVER_TYPE                            A4988
#define I_ENABLE_ON                              LOW
#define J_DRIVER_TYPE                            A4988
#define J_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            A4988
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            A4988
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            A4988
#define Z_ENABLE_ON                              LOW

//
// Geometry
//
#define I_MAX_POS                                X_BED_SIZE
#define I_MIN_POS                                0
#define J_MAX_POS                                Y_BED_SIZE
#define J_MIN_POS                                0
#define MAX_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOP_I
#define MAX_SOFTWARE_ENDSTOP_J
#define MAX_SOFTWARE_ENDSTOP_X
#define MAX_SOFTWARE_ENDSTOP_Y
#define MAX_SOFTWARE_ENDSTOP_Z
#define MIN_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_I
#define MIN_SOFTWARE_ENDSTOP_J
#define MIN_SOFTWARE_ENDSTOP_X
#define MIN_SOFTWARE_ENDSTOP_Y
#define MIN_SOFTWARE_ENDSTOP_Z
#define X_BED_SIZE                               550
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               330
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                200
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BACKOFF_POST_MM                   { 5, 5, 5, 5, 5 }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 2, 2, 2 }
#define HOMING_BUMP_MM                           { 5, 5, 5, 5, 5 }
#define HOMING_FEEDRATE_MM_M                     { (5*60), (5*60), (5*60), (5*60), (5*60)}
#define I_HOME_DIR                               -1
#define J_HOME_DIR                               -1
#define MANUAL_Z_HOME_POS                        0
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               0

//
// Endstops
//
#define ENDSTOPPULLUPS
#define I_MIN_ENDSTOP_HIT_STATE                  HIGH
#define J_MIN_ENDSTOP_HIT_STATE                  HIGH
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH

//
// LCD
//
#define BOOTSCREEN_TIMEOUT                       3000
#define BOOT_MARLIN_LOGO_SMALL
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define FINE_MANUAL_MOVE                         0.025
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 50*60, 50*60, 50*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define MENU_HOLLOW_FRAME
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define SDCARD_RATHERRECENTFIRST
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_MENU_CONFIRM_START
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_BOOTSCREEN
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
#define INDIVIDUAL_AXIS_HOMING_MENU
#define LCD_LANGUAGE                             en
#define REVERSE_ENCODER_DIRECTION

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
#define CAPABILITIES_REPORT
#define EXTENDED_CAPABILITIES_REPORT

//
// Safety
//
#define EXTRUDE_MAXLENGTH                        200
#define EXTRUDE_MINTEMP                          170
#define USE_WATCHDOG

//
// Temperature
//
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_HOTEND                    180
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_HOTEND                    240

//
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false, false }
#define DEFAULT_ACCELERATION                     16
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 1066, 1066, 1066, 1066, 1066 }
#define DEFAULT_MAX_ACCELERATION                 { 16, 16, 16, 16, 16 }
#define DEFAULT_MAX_FEEDRATE                     { 5, 5, 5, 5, 5 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              400
#define DISABLE_IDLE_I
#define DISABLE_IDLE_J
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_I_DIR                             true
#define INVERT_J_DIR                             false
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             false
#define JD_HANDLE_SMALL_SEGMENTS
#define JUNCTION_DEVIATION_MM                    0.013
#define MIN_STEPS_PER_SEGMENT                    6
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define STEP_STATE_E                             HIGH
#define STEP_STATE_I                             HIGH
#define STEP_STATE_J                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH

//
// Serial
//
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "Foam Cutter"
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
#define DEFAULT_Kd                               114.00
#define DEFAULT_Ki                               1.08
#define DEFAULT_Kp                               22.20
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Kinematics
//
#define FOAMCUTTER_XYUV

//
// Media
//
#define SDSUPPORT

//
// Cnc
//
#define CUTTER_POWER_UNIT                        PERCENT
#define SPEED_POWER_INTERCEPT                    0
#define SPEED_POWER_MAX                          30000
#define SPEED_POWER_MIN                          5000
#define SPEED_POWER_STARTUP                      25000
#define SPINDLE_CHANGE_DIR_STOP
#define SPINDLE_FEATURE
#define SPINDLE_INVERT_DIR                       false
#define SPINDLE_LASER_ACTIVE_STATE               LOW
#define SPINDLE_LASER_FREQUENCY                  2500
#define SPINDLE_LASER_POWERDOWN_DELAY            5000
#define SPINDLE_LASER_POWERUP_DELAY              5000
#define SPINDLE_LASER_PWM_INVERT                 false
#define SPINDLE_LASER_USE_PWM

//
// Custom Main Menu
//
#define CUSTOM_MENU_MAIN
#define CUSTOM_MENU_MAIN_ONLY_IDLE
#define CUSTOM_MENU_MAIN_SCRIPT_DONE             "Done"
#define CUSTOM_MENU_MAIN_SCRIPT_RETURN
#define CUSTOM_MENU_MAIN_TITLE                   "Set/Move Axes to Zero"
#define MAIN_MENU_ITEM_1_CONFIRM
#define MAIN_MENU_ITEM_1_DESC                    "Zero All"
#define MAIN_MENU_ITEM_1_GCODE                   "G92 X0 Y0 V0 U0"
#define MAIN_MENU_ITEM_2_CONFIRM
#define MAIN_MENU_ITEM_2_DESC                    "Zero Vert Axes"
#define MAIN_MENU_ITEM_2_GCODE                   "G92 Y0 V0"
#define MAIN_MENU_ITEM_3_CONFIRM
#define MAIN_MENU_ITEM_3_DESC                    "Zero Horiz Axes"
#define MAIN_MENU_ITEM_3_GCODE                   "G92 X0 U0"
#define MAIN_MENU_ITEM_4_CONFIRM
#define MAIN_MENU_ITEM_4_DESC                    "Reset to Mach. Zero"
#define MAIN_MENU_ITEM_4_GCODE                   "G92.1"
#define MAIN_MENU_ITEM_5_CONFIRM
#define MAIN_MENU_ITEM_5_DESC                    "Move All Axes to 0"
#define MAIN_MENU_ITEM_5_GCODE                   "G0 X0 Y0 U0 V0"
#define MAIN_MENU_ITEM_6_CONFIRM
#define MAIN_MENU_ITEM_6_DESC                    "Move Vert Axes to 0"
#define MAIN_MENU_ITEM_6_GCODE                   "G0 Y0 V0"
#define MAIN_MENU_ITEM_7_CONFIRM
#define MAIN_MENU_ITEM_7_DESC                    "Move Horiz Axes to 0"
#define MAIN_MENU_ITEM_7_GCODE                   "G0 X0 U0"

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
#define NO_WORKSPACE_OFFSETS
