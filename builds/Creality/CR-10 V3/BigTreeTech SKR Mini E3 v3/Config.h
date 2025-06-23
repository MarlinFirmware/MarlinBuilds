/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 10:11:32.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(PurseChicken, CR-10 V3)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_BTT_SKR_MINI_E3_V3_0

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Stepper Drivers
//
#define X_DRIVER_TYPE                            TMC2209
#define Y_DRIVER_TYPE                            TMC2209
#define Z_DRIVER_TYPE                            TMC2209
#define E0_DRIVER_TYPE                           TMC2209
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
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define Z_SAFE_HOMING
#define Z_CLEARANCE_FOR_HOMING                   4
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER
#define QUICK_HOME

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80.00, 80.00, 400.00, 407 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 200, 200, 14, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 500, 500, 100, 1000 }
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             false
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
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define DISABLE_IDLE_E
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define DEFAULT_ZJERK                            0.4
#define MAX_FEEDRATE_EDIT_VALUES                 { 200, 200, 14, 25 }
#define CLASSIC_JERK
#define EDITABLE_STEPS_PER_UNIT
#define TRAVEL_EXTRA_XYJERK                      5.0
#define DEFAULT_YJERK                            10.0
#define S_CURVE_ACCELERATION
#define DEFAULT_XJERK                            10.0
#define LIMITED_MAX_FR_EDITING
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            TERN(CR10V3_BLTOUCH, HIGH, LOW)

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_DISTANCE_MM              5
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_STATE                         LOW
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define NUM_RUNOUT_SENSORS                       1

//
// Probes
//
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (200*60)
#define Z_CLEARANCE_BETWEEN_PROBES               3
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_CLEARANCE_MULTI_PROBE                  3
#define PROBE_OFFSET_ZMAX                        9
#define PROBE_OFFSET_ZMIN                        -9
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define Z_AFTER_PROBING                          100
#define MULTIPLE_PROBING                         2
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -1
#define PROBING_MARGIN_LEFT                      45
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define BLTOUCH
#define NOZZLE_TO_PROBE_OFFSET                   { 46, 2, 0 }
#define USE_PROBE_FOR_Z_HOMING
#define Z_PROBE_FEEDRATE_FAST                    (14*60)

//
// BLTouch
//
#define BLTOUCH_SET_5V_MODE
#define BLTOUCH_HS_MODE                          true
#define BLTOUCH_HS_EXTRA_CLEARANCE               7

//
// Leveling
//
#define G29_FAILURE_COMMANDS                     "M117 Bed leveling failed.\nG0 Z10\nM300 P25 S880\nM300 P50 S0\nM300 P25 S880\nM300 P50 S0\nM300 P25 S880\nM300 P50 S0\nG4 S1"
#define G29_RECOVER_COMMANDS                     "M117 Probe failed. Rewiping.\nG28\nG12 P0 S12 T0"
#define G29_HALT_ON_FAILURE
#define G29_SUCCESS_COMMANDS                     "M117 Bed leveling done."
#define G29_RETRY_AND_RECOVER
#define G29_MAX_RETRIES                          3

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            10
#define THERMAL_PROTECTION_PERIOD                60
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define PREHEAT_1_TEMP_HOTEND                    205
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  8
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      5
#define TEMP_WINDOW                              1
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define TEMP_SENSOR_BED                          1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    180
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        50
#define PREHEAT_2_FAN_SPEED                      0
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              120
#define PREHEAT_2_LABEL                          "PETG"
#define PREHEAT_2_TEMP_BED                       80
#define PREHEAT_2_TEMP_HOTEND                    230
#define AUTOTEMP_MIN                             210
#define TEMP_TUNING_MAINTAIN_FAN
#define AUTOTEMP_MAX                             250
#define ADAPTIVE_FAN_SLOWING
#define AUTOTEMP_FACTOR                          0.1f
#define THERMAL_PROTECTION_BED_PERIOD            50

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_Kd                               59.40
#define DEFAULT_Ki                               1.59
#define DEFAULT_Kp                               19.47

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20
#define PID_AUTOTUNE_MENU
#define PID_EDIT_MENU

//
// Bed Temp
//
#define MAX_BED_POWER                            255
#define DEFAULT_bedKi                            111.47
#define PIDTEMPBED
#define DEFAULT_bedKd                            1068.83
#define DEFAULT_bedKp                            690.34

//
// Fans
//
#define E0_AUTO_FAN_PIN                          FAN1_PIN
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define NUM_M106_FANS                            1
#define CONTROLLERFAN_SPEED_MIN                  0
#define CONTROLLERFAN_SPEED_ACTIVE               255
#define CONTROLLER_FAN_BED_HEATING
#define CONTROLLERFAN_IDLE_TIME                  60
#define FAN_KICKSTART_TIME                       100
#define USE_CONTROLLER_FAN
#define CONTROLLER_FAN_PIN                       FAN2_PIN
#define CONTROLLERFAN_SPEED_IDLE                 0

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                4
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_UNLOAD_ALL_EXTRUDERS
#define HOME_BEFORE_FILAMENT_CHANGE
#define PAUSE_PARK_NOZZLE_TIMEOUT                180
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define FILAMENT_CHANGE_ALERT_BEEPS              2
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       30
#define FILAMENT_CHANGE_UNLOAD_LENGTH            40
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          40
#define ADVANCED_PAUSE_FANS_PAUSE
#define ADVANCED_PAUSE_PURGE_LENGTH              20
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_PURGE_RETRACT            6
#define FILAMENT_UNLOAD_PURGE_LENGTH             2
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          15
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define GRID_MAX_POINTS_X                        5
#define LCD_PROBE_Z_RANGE                        4
#define MESH_TEST_BED_TEMP                       60
#define BED_TRAMMING_PROBE_TOLERANCE             0.1
#define BED_TRAMMING_VERIFY_RAISED
#define AUTO_BED_LEVELING_BILINEAR
#define RESTORE_LEVELING_AFTER_G28
#define BED_TRAMMING_Z_HOP                       4.0
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define G26_XY_FEEDRATE_TRAVEL                   100
#define BED_TRAMMING_HEIGHT                      0.0
#define BED_TRAMMING_USE_PROBE
#define MESH_EDIT_Z_STEP                         0.025
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define LCD_BED_LEVELING
#define G26_RETRACT_MULTIPLIER                   1.0
#define MESH_TEST_HOTEND_TEMP                    205
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   20.0
#define G26_XY_FEEDRATE                          20
#define BED_TRAMMING_INSET_LFRB                  { 45, 45, 45, 45 }
#define MESH_TEST_LAYER_HEIGHT                   0.2
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define MESH_EDIT_MENU
#define LCD_BED_TRAMMING
#define BED_TRAMMING_INCLUDE_CENTER
#define G26_MESH_VALIDATION
#define ASSISTED_TRAMMING
#define RESTORE_LEVELING_AFTER_G35
#define TRAMMING_SCREW_THREAD                    M3_CW
#define ASSISTED_TRAMMING_WIZARD
#define TRAMMING_POINT_XY                        { { 45, 20 }, { 280, 20 }, { 280, 280 }, { 45, 280 } }
#define TRAMMING_POINT_NAME_1                    "Front-Left"
#define TRAMMING_POINT_NAME_2                    "Front-Right"
#define TRAMMING_POINT_NAME_3                    "Back-Right"
#define TRAMMING_POINT_NAME_4                    "Back-Left"

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
#define CR10_STOCKDISPLAY
#define SPEED_EDIT_MAX                           999
#define PROBE_DEPLOY_STOW_MENU
#define SPEED_EDIT_MIN                           10
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define STATUS_HOTEND_ANIM
#define SOUND_MENU_ITEM
#define SHOW_CUSTOM_BOOTSCREEN
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define SDCARD_SORT_ALPHA
#define MENU_HOLLOW_FRAME
#define SCROLL_LONG_FILENAMES
#define BOOT_MARLIN_LOGO_SMALL
#define BABYSTEPPING
#define AUTO_REPORT_SD_STATUS
#define LCD_DECIMAL_SMALL_XY
#define POWER_LOSS_RECOVERY
#define SDSORT_USES_STACK                        true
#define SDSORT_REVERSE                           false
#define MANUAL_E_MOVES_RELATIVE
#define BABYSTEP_GFX_OVERLAY
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SDSORT_LIMIT                             40
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define BABYSTEP_MULTIPLICATOR_Z                 4
#define SDSORT_DYNAMIC_RAM                       true
#define SHOW_ELAPSED_TIME
#define SOUND_ON_DEFAULT
#define SD_PROCEDURE_DEPTH                       1
#define FLOW_EDIT_MAX                            999
#define BABYSTEP_ZPROBE_OFFSET
#define STATUS_CHAMBER_ANIM
#define FLOW_EDIT_MIN                            10
#define PLR_ENABLED_DEFAULT                      true
#define STATUS_BED_ANIM
#define STATUS_HOTEND_INVERTED
#define SDSORT_CACHE_VFATS                       2
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define SDSORT_CACHE_NAMES                       true
#define CUSTOM_STATUS_SCREEN_IMAGE
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                1
#define LONG_FILENAME_HOST_SUPPORT
#define BABYSTEP_ALWAYS_AVAILABLE
#define SDSORT_GCODE                             false
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SET_PROGRESS_MANUALLY
#define XYZ_HOLLOW_FRAME
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define SDSORT_USES_RAM                          true
#define LCD_TIMEOUT_TO_STATUS                    15000
#define SET_PROGRESS_PERCENT
#define SDSORT_FOLDERS                           -1
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define POWER_LOSS_MIN_Z_CHANGE                  0.05
#define PROBE_OFFSET_WIZARD

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
#define CUSTOM_MENU_MAIN_SCRIPT_DONE             "M117 User Script Done"
#define MAIN_MENU_ITEM_1_GCODE                   "G27"
#define CUSTOM_MENU_MAIN_SCRIPT_AUDIBLE_FEEDBACK
#define MAIN_MENU_ITEM_1_DESC                    "Park Nozzle"
#define CUSTOM_MENU_MAIN_ONLY_IDLE

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 5), (Y_MAX_POS - 5), 100 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  200
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
#define SERIAL_PORT                              -1
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

//
// Filament Width
//
#define DEFAULT_STDDEV_FILAMENT_DIA              0.05

//
// Reporting
//
#define AUTO_REPORT_TEMPERATURES
#define EXTENDED_CAPABILITIES_REPORT
#define M114_DETAIL
#define CAPABILITIES_REPORT

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
// Servos
//
#define SERVO_DELAY                              { 50 }

//
// Stats
//
#define PRINTCOUNTER
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define SERVICE_WARNING_BUZZES                   3
#define SERVICE_NAME_1                           "Service 50h"
#define SERVICE_NAME_2                           "Service 300h"
#define SERVICE_INTERVAL_1                       50
#define SERVICE_INTERVAL_2                       300

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      48
#define N_ARC_CORRECTION                         25
#define ARC_P_CIRCLES
#define CANCEL_OBJECTS

//
// User
//
#define CR10V3_BLTOUCH

//
// TMC_Smart
//
#define CHOPPER_TIMING                           CHOPPER_DEFAULT_24V
#define INTERPOLATE                              true
#define E0_HYBRID_THRESHOLD                      50
#define Z_RSENSE                                 0.11
#define HOLD_MULTIPLIER                          0.5
#define K_HYBRID_THRESHOLD                       3
#define X_CHAIN_POS                              -1
#define Y_RSENSE                                 0.11
#define U_HYBRID_THRESHOLD                       3
#define E3_HYBRID_THRESHOLD                      30
#define Z_MICROSTEPS                             16
#define STEALTHCHOP_Z
#define Z_CURRENT_HOME                           Z_CURRENT
#define X_RSENSE                                 0.11
#define Y_CHAIN_POS                              -1
#define X_HYBRID_THRESHOLD                       150
#define E6_HYBRID_THRESHOLD                      30
#define X_CURRENT_HOME                           X_CURRENT
#define Z4_HYBRID_THRESHOLD                      3
#define Z_CHAIN_POS                              -1
#define J_HYBRID_THRESHOLD                       3
#define E0_RSENSE                                0.11
#define Z_CURRENT                                850
#define E2_HYBRID_THRESHOLD                      30
#define Y_MICROSTEPS                             16
#define W_HYBRID_THRESHOLD                       3
#define E5_HYBRID_THRESHOLD                      30
#define E0_CHAIN_POS                             -1
#define Z3_HYBRID_THRESHOLD                      3
#define X2_HYBRID_THRESHOLD                      100
#define Z_HYBRID_THRESHOLD                       10
#define X_CURRENT                                730
#define I_HYBRID_THRESHOLD                       3
#define EDGE_STEPPING
#define Y_CURRENT                                730
#define E1_HYBRID_THRESHOLD                      30
#define STEALTHCHOP_XY
#define Y2_HYBRID_THRESHOLD                      100
#define E0_MICROSTEPS                            16
#define Y_CURRENT_HOME                           Y_CURRENT
#define X_MICROSTEPS                             16
#define V_HYBRID_THRESHOLD                       3
#define E4_HYBRID_THRESHOLD                      30
#define Z2_HYBRID_THRESHOLD                      10
#define E0_CURRENT                               730
#define Y_HYBRID_THRESHOLD                       150
#define E7_HYBRID_THRESHOLD                      30
