/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2026-11-26 at 07:39:43.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Aaron Just, CR-10 V3)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_RAMPS_CREALITY

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Stepper Drivers
//
#define X_DRIVER_TYPE                            TMC2208_STANDALONE
#define Y_DRIVER_TYPE                            TMC2208_STANDALONE
#define Z_DRIVER_TYPE                            TMC2208_STANDALONE
#define E0_DRIVER_TYPE                           TMC2208_STANDALONE
#define X_ENABLE_ON                              LOW
#define Y_ENABLE_ON                              LOW
#define Z_ENABLE_ON                              LOW
#define E_ENABLE_ON                              LOW
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define INVERT_E0_DIR                            true

//
// Extruder
//
#define EXTRUDERS                                1
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75

//
// Geometry
//
#define X_BED_SIZE                               300
#define X_MIN_POS                                -5
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               300
#define Y_MIN_POS                                -5
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
#define SOFT_ENDSTOPS_MENU_ITEM

//
// Homing
//
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1
#define HOMING_FEEDRATE_MM_M                     { (80*60), (80*60), (10*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define Z_CLEARANCE_FOR_HOMING                   4
#define QUICK_HOME

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80.00, 80.00, 400.00, 407 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 200, 200, 14, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 500, 500, 100, 1000 }
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define DEFAULT_ACCELERATION                     500
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_RETRACT_ACCELERATION             500
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_EJERK                            5.0
#define ARC_SUPPORT
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define DISABLE_IDLE_E
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      48
#define N_ARC_CORRECTION                         25
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define MAX_FEEDRATE_EDIT_VALUES                 { 200, 200, 14, 25 }
#define DEFAULT_ZJERK                            0.4
#define DEFAULT_YJERK                            10.0
#define S_CURVE_ACCELERATION
#define DEFAULT_XJERK                            10.0
#define EDITABLE_STEPS_PER_UNIT
#define TRAVEL_EXTRA_XYJERK                      5.0
#define LIMITED_MAX_FR_EDITING
#define CLASSIC_JERK
#define ARC_P_CIRCLES
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS

//
// Filament Runout Sensors
//
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FILAMENT_RUNOUT_DISTANCE_MM              5
#define FILAMENT_RUNOUT_SENSOR
#define NUM_RUNOUT_SENSORS                       1
#define FIL_RUNOUT_STATE                         LOW

//
// Probes
//
#define Z_MIN_PROBE_PIN                          32
#define PROBING_MARGIN_LEFT                      0

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            10
#define THERMAL_PROTECTION_PERIOD                60
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    180
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        50
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              120
#define AUTOTEMP_MIN                             210
#define ADAPTIVE_FAN_SLOWING
#define AUTOTEMP_FACTOR                          0.1f
#define TEMP_TUNING_MAINTAIN_FAN
#define THERMAL_PROTECTION_BED_PERIOD            50
#define AUTOTEMP_MAX                             250

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_KP                               19.47
#define DEFAULT_KI                               1.59
#define DEFAULT_KD                               59.40

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20
#define PID_EDIT_MENU
#define PID_AUTOTUNE_MENU

//
// Bed Temp
//
#define MAX_BED_POWER                            255
#define PIDTEMPBED
#define DEFAULT_BED_KD                           1068.83
#define DEFAULT_BED_KI                           111.47
#define DEFAULT_BED_KP                           690.34

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1
#define NUM_M106_FANS                            1
#define FAN_KICKSTART_TIME                       100

//
// Advanced Pause
//
#define ADVANCED_PAUSE_PURGE_LENGTH              20
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define PAUSE_PARK_RETRACT_LENGTH                4
#define FILAMENT_UNLOAD_PURGE_RETRACT            6
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_UNLOAD_ALL_EXTRUDERS
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          40
#define PAUSE_PARK_NOZZLE_TIMEOUT                180
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_UNLOAD_LENGTH            40
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          15
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define ADVANCED_PAUSE_FANS_PAUSE
#define HOME_BEFORE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              2
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_UNLOAD_PURGE_LENGTH             2
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       30
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define BED_TRAMMING_HEIGHT                      0.0
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define BED_TRAMMING_INSET_LFRB                  { 45, 45, 45, 45 }
#define BED_TRAMMING_INCLUDE_CENTER
#define LCD_BED_TRAMMING
#define BED_TRAMMING_Z_HOP                       4.0

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
#define SHOW_CUSTOM_BOOTSCREEN
#define SOUND_MENU_ITEM
#define FINE_MANUAL_MOVE                         0.025
#define SD_PROCEDURE_DEPTH                       1
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define SDSORT_CACHE_NAMES                       true
#define SDCARD_SORT_ALPHA
#define MENU_HOLLOW_FRAME
#define SET_PROGRESS_MANUALLY
#define FLOW_EDIT_MAX                            999
#define STATUS_CHAMBER_ANIM
#define FLOW_EDIT_MIN                            10
#define SCROLL_LONG_FILENAMES
#define BOOT_MARLIN_LOGO_SMALL
#define PLR_ENABLED_DEFAULT                      true
#define STATUS_BED_ANIM
#define STATUS_HOTEND_INVERTED
#define AUTO_REPORT_SD_STATUS
#define SHOW_ELAPSED_TIME
#define SDSORT_CACHE_VFATS                       2
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define CUSTOM_STATUS_SCREEN_IMAGE
#define LCD_DECIMAL_SMALL_XY
#define POWER_LOSS_RECOVERY
#define LONG_FILENAME_HOST_SUPPORT
#define SDSORT_GCODE                             false
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SDSORT_USES_STACK                        true
#define SD_MAX_READ_ERRORS                       5
#define SDSORT_QUICK                             true
#define MANUAL_E_MOVES_RELATIVE
#define XYZ_HOLLOW_FRAME
#define REINIT_NOISY_LCD
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define LCD_TIMEOUT_TO_STATUS                    15000
#define BOOTSCREEN_TIMEOUT                       3000
#define SET_PROGRESS_PERCENT
#define SD_MENU_CONFIRM_START
#define SDSORT_LIMIT                             40
#define SHOW_PROGRESS_PERCENT
#define SDSORT_FOLDERS                           -1
#define STATUS_HOTEND_ANIM
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define SDSORT_USES_RAM                          true
#define SDCARD_RATHERRECENTFIRST
#define SDSORT_REVERSE                           false
#define SDSORT_DYNAMIC_RAM                       true
#define POWER_LOSS_MIN_Z_CHANGE                  0.05

//
// Interface
//
#define LCD_LANGUAGE                             en
#define ENCODER_STEPS_PER_MENU_ITEM              1
#define INDIVIDUAL_AXIS_HOMING_MENU

//
// Custom Main Menu
//
#define CUSTOM_MENU_MAIN
#define MAIN_MENU_ITEM_1_DESC                    "Park Nozzle"
#define MAIN_MENU_ITEM_1_GCODE                   "G27"
#define CUSTOM_MENU_MAIN_SCRIPT_AUDIBLE_FEEDBACK
#define CUSTOM_MENU_MAIN_ONLY_IDLE
#define CUSTOM_MENU_MAIN_SCRIPT_DONE             "M117 User Script Done"

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  200
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 5), (Y_MAX_POS - 5), 100 }
#define NOZZLE_PARK_Z_FEEDRATE                   14

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define NO_WORKSPACE_OFFSETS
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
#define CUSTOM_MACHINE_NAME                      "CR-10 V3"
#define EMERGENCY_PARSER
#define ADVANCED_OK

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
#define HOST_START_MENU_ITEM
#define HOST_SHUTDOWN_MENU_ITEM

//
// Filament Width
//
#define DEFAULT_STDDEV_FILAMENT_DIA              0.05

//
// Reporting
//
#define AUTO_REPORT_TEMPERATURES
#define EXTENDED_CAPABILITIES_REPORT
#define CAPABILITIES_REPORT
#define M114_DETAIL

//
// Safety
//
#define USE_WATCHDOG
#define THERMAL_PROTECTION_HOTENDS
#define EXTRUDE_MAXLENGTH                        435
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED

//
// Stats
//
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define PRINTCOUNTER
#define SERVICE_WARNING_BUZZES                   3
#define SERVICE_INTERVAL_1                       50
#define SERVICE_INTERVAL_2                       300
#define SERVICE_NAME_1                           "Service 50h"
#define SERVICE_NAME_2                           "Service 300h"

//
// Extras
//
#define CANCEL_OBJECTS

//
// Temperature Presets
//
#define PREHEAT_1_TEMP_HOTEND                    205
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_2_LABEL                          "PETG"
#define PREHEAT_2_TEMP_BED                       80
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_TEMP_HOTEND                    230

//
// Temperature Sensors
//
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  8
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      5
#define TEMP_WINDOW                              1
#define TEMP_SENSOR_BED                          1
