/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-11-26 at 20:02:37.
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
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            true

//
// Bed Temp
//
#define DEFAULT_bedKd                            1068.83
#define DEFAULT_bedKi                            111.47
#define DEFAULT_bedKp                            690.34
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define CHAMBER_AUTO_FAN_PIN                     -1
#define COOLER_AUTO_FAN_PIN                      -1
#define E0_AUTO_FAN_PIN                          -1
#define FAN_KICKSTART_TIME                       100
#define NUM_M106_FANS                            1

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           TMC2208_STANDALONE
#define E_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            TMC2208_STANDALONE
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            TMC2208_STANDALONE
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            TMC2208_STANDALONE
#define Z_ENABLE_ON                              LOW

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
#define SOFT_ENDSTOPS_MENU_ITEM
#define X_BED_SIZE                               300
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                -5
#define Y_BED_SIZE                               300
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                -5
#define Z_MAX_POS                                400
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define HOMING_FEEDRATE_MM_M                     { (80*60), (80*60), (10*60) }
#define QUICK_HOME
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_CLEARANCE_FOR_HOMING                   4
#define Z_HOME_DIR                               -1

//
// Endstops
//
#define ENDSTOPPULLUPS
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            TERN(CR10V3_BLTOUCH, HIGH, LOW)

//
// Probes
//
#define PROBING_MARGIN_LEFT                      0
#define Z_MIN_PROBE_PIN                          32

//
// LCD
//
#define AUTO_REPORT_SD_STATUS
#define BOOTSCREEN_TIMEOUT                       3000
#define BOOT_MARLIN_LOGO_SMALL
#define CUSTOM_STATUS_SCREEN_IMAGE
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define LCD_DECIMAL_SMALL_XY
#define LCD_INFO_MENU
#define LCD_TIMEOUT_TO_STATUS                    15000
#define LONG_FILENAME_HOST_SUPPORT
#define MANUAL_E_MOVES_RELATIVE
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define MENU_HOLLOW_FRAME
#define PLR_ENABLED_DEFAULT                      true
#define POWER_LOSS_MIN_Z_CHANGE                  0.05
#define POWER_LOSS_RECOVERY
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define SCROLL_LONG_FILENAMES
#define SDCARD_RATHERRECENTFIRST
#define SDCARD_SORT_ALPHA
#define SDSORT_CACHE_NAMES                       true
#define SDSORT_CACHE_VFATS                       2
#define SDSORT_DYNAMIC_RAM                       true
#define SDSORT_FOLDERS                           -1
#define SDSORT_GCODE                             false
#define SDSORT_LIMIT                             40
#define SDSORT_REVERSE                           false
#define SDSORT_USES_RAM                          true
#define SDSORT_USES_STACK                        true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_MENU_CONFIRM_START
#define SD_PROCEDURE_DEPTH                       1
#define SET_PROGRESS_MANUALLY
#define SET_PROGRESS_PERCENT
#define SHOW_BOOTSCREEN
#define SHOW_CUSTOM_BOOTSCREEN
#define SHOW_ELAPSED_TIME
#define SHOW_PROGRESS_PERCENT
#define SOUND_MENU_ITEM
#define SOUND_ON_DEFAULT
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define STATUS_BED_ANIM
#define STATUS_CHAMBER_ANIM
#define STATUS_HOTEND_ANIM
#define STATUS_HOTEND_INVERTED
#define STATUS_MESSAGE_SCROLLING
#define ULTIPANEL_FEEDMULTIPLY
#define XYZ_HOLLOW_FRAME

//
// Interface
//
#define ENCODER_STEPS_PER_MENU_ITEM              1
#define INDIVIDUAL_AXIS_HOMING_MENU
#define LCD_LANGUAGE                             en

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_ACTION_COMMANDS
#define HOST_KEEPALIVE_FEATURE
#define HOST_PROMPT_SUPPORT
#define PRINTJOB_TIMER_AUTOSTART

//
// Reporting
//
#define AUTO_REPORT_TEMPERATURES
#define CAPABILITIES_REPORT
#define EXTENDED_CAPABILITIES_REPORT
#define M114_DETAIL

//
// Temperature
//
#define ADAPTIVE_FAN_SLOWING
#define AUTOTEMP
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_MAXTEMP                              120
#define BED_MINTEMP                              5
#define BED_OVERSHOOT                            10
#define CHAMBER_CHECK_INTERVAL                   5000
#define COOLER_OVERSHOOT                         2
#define DUMMY_THERMISTOR_998_VALUE               25
#define DUMMY_THERMISTOR_999_VALUE               100
#define HEATER_0_MAXTEMP                         275
#define HEATER_0_MINTEMP                         5
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_1_TEMP_CHAMBER                   35
#define PREHEAT_1_TEMP_HOTEND                    205
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "PETG"
#define PREHEAT_2_TEMP_BED                       80
#define PREHEAT_2_TEMP_CHAMBER                   35
#define PREHEAT_2_TEMP_HOTEND                    230
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  8
#define TEMP_BED_WINDOW                          1
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      5
#define TEMP_SENSOR_0                            1
#define TEMP_SENSOR_BED                          1
#define TEMP_TUNING_MAINTAIN_FAN
#define TEMP_WINDOW                              1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define THERMAL_PROTECTION_BED_PERIOD            50
#define THERMAL_PROTECTION_HYSTERESIS            10
#define THERMAL_PROTECTION_PERIOD                60
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    180
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        50

//
// Safety
//
#define EXTRUDE_MAXLENGTH                        435
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
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define CLASSIC_JERK
#define DEFAULT_ACCELERATION                     500
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80.00, 80.00, 400.00, 407 }
#define DEFAULT_EJERK                            5.0
#define DEFAULT_MAX_ACCELERATION                 { 500, 500, 100, 1000 }
#define DEFAULT_MAX_FEEDRATE                     { 200, 200, 14, 25 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             500
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_XJERK                            10.0
#define DEFAULT_YJERK                            10.0
#define DEFAULT_ZJERK                            0.4
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define LIMITED_MAX_FR_EDITING
#define MAX_FEEDRATE_EDIT_VALUES                 { 200, 200, 14, 25 }
#define MIN_STEPS_PER_SEGMENT                    6
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define S_CURVE_ACCELERATION
#define TRAVEL_EXTRA_XYJERK                      5.0

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_DISTANCE_MM              5
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PIN                           2
#define FIL_RUNOUT_STATE                         LOW
#define NUM_RUNOUT_SENSORS                       1

//
// Stats
//
#define PRINTCOUNTER
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define SERVICE_INTERVAL_1                       50
#define SERVICE_INTERVAL_2                       300
#define SERVICE_NAME_1                           "Service 50h"
#define SERVICE_NAME_2                           "Service 300h"
#define SERVICE_WARNING_BUZZES                   3

//
// Calibrate
//
#define BED_TRAMMING_HEIGHT                      0.0
#define BED_TRAMMING_INCLUDE_CENTER
#define BED_TRAMMING_INSET_LFRB                  { 45, 45, 45, 45 }
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define BED_TRAMMING_Z_HOP                       4.0
#define LCD_BED_TRAMMING

//
// Media
//
#define SDSUPPORT

//
// PID Temp
//
#define PID_AUTOTUNE_MENU
#define PID_EDIT_MENU
#define PID_FUNCTIONAL_RANGE                     10

//
// Hotend Temp
//
#define DEFAULT_Kd                               59.40
#define DEFAULT_Ki                               1.59
#define DEFAULT_Kp                               19.47
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Serial
//
#define ADVANCED_OK
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "CR-10 V3"
#define EMERGENCY_PARSER
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              0
#define TX_BUFFER_SIZE                           0

//
// Nozzle Park
//
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 5), (Y_MAX_POS - 5), 100 }
#define NOZZLE_PARK_XY_FEEDRATE                  200
#define NOZZLE_PARK_Z_FEEDRATE                   14
#define NOZZLE_PARK_Z_RAISE_MIN                  2

//
// Advanced Pause
//
#define ADVANCED_PAUSE_FANS_PAUSE
#define ADVANCED_PAUSE_FEATURE
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define ADVANCED_PAUSE_PURGE_LENGTH              20
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              2
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          15
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       30
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          40
#define FILAMENT_CHANGE_UNLOAD_LENGTH            40
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_ALL_EXTRUDERS
#define FILAMENT_UNLOAD_PURGE_DELAY              5000
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_UNLOAD_PURGE_LENGTH             2
#define FILAMENT_UNLOAD_PURGE_RETRACT            6
#define HOME_BEFORE_FILAMENT_CHANGE
#define PARK_HEAD_ON_PAUSE
#define PAUSE_PARK_NOZZLE_TIMEOUT                180
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_RETRACT_LENGTH                4

//
// Extras
//
#define ARC_P_CIRCLES
#define ARC_SUPPORT
#define CANCEL_OBJECTS
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      48
#define N_ARC_CORRECTION                         25

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER
#define NO_WORKSPACE_OFFSETS

//
// Custom Main Menu
//
#define CUSTOM_MENU_MAIN
#define CUSTOM_MENU_MAIN_ONLY_IDLE
#define CUSTOM_MENU_MAIN_SCRIPT_AUDIBLE_FEEDBACK
#define CUSTOM_MENU_MAIN_SCRIPT_DONE             "M117 User Script Done"
#define MAIN_MENU_ITEM_1_DESC                    "Park Nozzle"
#define MAIN_MENU_ITEM_1_GCODE                   "G27"

//
// Filament Width
//
#define DEFAULT_STDDEV_FILAMENT_DIA              0.05