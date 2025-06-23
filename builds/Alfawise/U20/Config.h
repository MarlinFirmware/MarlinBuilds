/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 09:33:33.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Hobi, tpruvot)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_LONGER3D_LK

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

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
#define INVERT_E0_DIR                            false
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define HOTEND_IDLE_TIMEOUT_SEC                  (5*60)
#define HOTEND_IDLE_MIN_TRIGGER                  180
#define HOTEND_IDLE_NOZZLE_TARGET                50
#define HOTEND_IDLE_TIMEOUT
#define HOTEND_IDLE_BED_TARGET                   30

//
// Geometry
//
#define X_BED_SIZE                               300
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               300
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                400
#define MIN_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_X
#define MIN_SOFTWARE_ENDSTOP_Y
#define MIN_SOFTWARE_ENDSTOP_Z
#define MAX_SOFTWARE_ENDSTOP_X
#define MAX_SOFTWARE_ENDSTOP_Y
#define MAX_SOFTWARE_ENDSTOP_Z

//
// Homing
//
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1
#define HOMING_FEEDRATE_MM_M                     { (40*60), (40*60), (6*60) }
#define HOMING_BUMP_DIVISOR                      { 4, 4, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 98 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 200, 200, 100, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 200, 200, 100, 3000 }
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define DEFAULT_ACCELERATION                     200
#define DEFAULT_TRAVEL_ACCELERATION              200
#define DEFAULT_RETRACT_ACCELERATION             500
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
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define DEFAULT_ZJERK                            0.4
#define MAX_FEEDRATE_EDIT_VALUES                 { 250, 250, 200, 50 }
#define MAX_ACCEL_EDIT_VALUES                    { 600, 600, 400, 6000 }
#define CLASSIC_JERK
#define EDITABLE_STEPS_PER_UNIT
#define DEFAULT_YJERK                            10.0
#define LIMITED_JERK_EDITING
#define DEFAULT_XJERK                            10.0
#define LIMITED_MAX_FR_EDITING
#define LIMITED_MAX_ACCEL_EDITING
#define MAX_JERK_EDIT_VALUES                     { 20, 20, 0.6, 10 }
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define ENDSTOP_INTERRUPTS_FEATURE

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_STATE                         HIGH
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define NUM_RUNOUT_SENSORS                       1

//
// Probes
//
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (80*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            10
#define THERMAL_PROTECTION_PERIOD                60
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define PREHEAT_1_TEMP_HOTEND                    200
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define TEMP_SENSOR_BED                          1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        60
#define PREHEAT_2_FAN_SPEED                      0
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              150
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       100
#define PREHEAT_2_TEMP_HOTEND                    250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_FACTOR                          0.1f
#define THERMAL_PROTECTION_BED_PERIOD            20

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_Kd                               74.22
#define DEFAULT_Ki                               1.00
#define DEFAULT_Kp                               17.22

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20

//
// Bed Temp
//
#define MAX_BED_POWER                            255
#define DEFAULT_bedKi                            152.12
#define PIDTEMPBED
#define DEFAULT_bedKd                            1164.25
#define DEFAULT_bedKp                            841.68

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1
#define FAN_SOFT_PWM
#define FAN_MIN_PWM                              TERN(MAPLE_STM32F1, 35, 5)
#define FAN_MAX_PWM                              255
#define FAST_PWM_FAN
#define FAST_PWM_FAN_FREQUENCY                   31400

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                2
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_LENGTH            100
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          10
#define ADVANCED_PAUSE_PURGE_LENGTH              25
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_PURGE_RETRACT            13
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define MESH_INSET                               10
#define GRID_MAX_POINTS_X                        3
#define MESH_BED_LEVELING
#define BED_TRAMMING_Z_HOP                       4.0
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define BED_TRAMMING_HEIGHT                      0.2
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define BED_TRAMMING_INSET_LFRB                  { 30, 30, 30, 30 }
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define MANUAL_PROBE_START_Z                     0.2
#define LCD_BED_TRAMMING

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
#define TOUCH_OFFSET_X                           -43
#define TOUCH_OFFSET_Y                           257
#define BUTTON_DELAY_EDIT                        75
#define TOUCH_CALIBRATION_AUTO_SAVE
#define TOUCH_SCREEN_CALIBRATION
#define TOUCH_CALIBRATION_X                      12000
#define TOUCH_CALIBRATION_Y                      -9000
#define TFT_CLASSIC_UI
#define LONGER_LK_TFT28
#define BUTTON_DELAY_MENU                        100
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define PLR_ENABLED_DEFAULT                      false
#define STATUS_HOTEND_ANIM
#define ULTIPANEL_FEEDMULTIPLY
#define SDCARD_SORT_ALPHA
#define MENU_HOLLOW_FRAME
#define LCD_LANGUAGE_3                           de
#define LCD_LANGUAGE_4                           es
#define LCD_LANGUAGE_5                           it
#define BOOT_MARLIN_LOGO_SMALL
#define POWER_LOSS_RECOVERY
#define TFT_MARLINBG_COLOR                       COLOR_BLACK
#define TFT_DISABLED_COLOR                       0x10A2
#define SDCARD_CONNECTION                        ONBOARD
#define SDSORT_USES_STACK                        false
#define SDSORT_REVERSE                           false
#define MANUAL_E_MOVES_RELATIVE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define LCD_LANGUAGE_2                           fr
#define SD_MENU_CONFIRM_START
#define SDSORT_LIMIT                             40
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28X"
#define SD_REPRINT_LAST_SELECTED_FILE
#define SDSORT_DYNAMIC_RAM                       false
#define TFT_BTOKMENU_COLOR                       COLOR_BLUE
#define STATUS_HEAT_PERCENT
#define SHOW_ELAPSED_TIME
#define MENU_ADDAUTOSTART
#define SD_PROCEDURE_DEPTH                       1
#define FLOW_EDIT_MAX                            999
#define STATUS_CHAMBER_ANIM
#define FLOW_EDIT_MIN                            10
#define STATUS_BED_ANIM
#define STATUS_HOTEND_INVERTED
#define SDSORT_CACHE_VFATS                       2
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define SDSORT_CACHE_NAMES                       true
#define CUSTOM_STATUS_SCREEN_IMAGE
#define FINE_MANUAL_MOVE                         0.025
#define LONG_FILENAME_HOST_SUPPORT
#define TFT_BTCANCEL_COLOR                       COLOR_RED
#define SDSORT_GCODE                             true
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SET_PROGRESS_MANUALLY
#define TFT_BTARROWS_COLOR                       COLOR_WHITE
#define XYZ_HOLLOW_FRAME
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define SDSORT_USES_RAM                          true
#define SET_PROGRESS_PERCENT
#define LCD_LANGUAGE_AUTO_SAVE
#define SDSORT_FOLDERS                           -1
#define POWER_LOSS_MIN_Z_CHANGE                  0.05
#define TFT_MARLINUI_COLOR                       COLOR_WHITE

//
// Interface
//
#define LCD_LANGUAGE                             en
#define INDIVIDUAL_AXIS_HOMING_MENU

//
// Develop
//
#define SOFT_RESET_VIA_SERIAL

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         1
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  50
#define NOZZLE_PARK_Z_FEEDRATE                   6

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        32
#define FASTER_GCODE_PARSER
#define DEBUG_FLAGS_GCODE

//
// Serial
//
#define SERIAL_PORT                              1
#define BAUDRATE                                 250000
#define BUFSIZE                                  8
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           0
#define CUSTOM_MACHINE_NAME                      "Alfawise U20"
#define BAUD_RATE_GCODE
#define EMERGENCY_PARSER

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_KEEPALIVE_FEATURE
#define PRINTJOB_TIMER_AUTOSTART

//
// PSU Control
//
#define PSU_NAME                                 "360W 24V/15A"

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

//
// User
//
#define LCD_READ_ID                              0xD3
