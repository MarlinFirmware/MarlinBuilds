/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 12:07:58.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Prussia3D, Paul_GD MK3S)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_EINSY_RAMBO

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Stepper Drivers
//
#define X_DRIVER_TYPE                            TMC2130
#define Y_DRIVER_TYPE                            TMC2130
#define Z_DRIVER_TYPE                            TMC2130
#define E0_DRIVER_TYPE                           TMC2130
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
#define LIN_ADVANCE
#define ADVANCE_K                                0.22

//
// Geometry
//
#define X_BED_SIZE                               250
#define X_MIN_POS                                0
#define X_MAX_POS                                255
#define Y_BED_SIZE                               210
#define Y_MIN_POS                                -4
#define Y_MAX_POS                                212.5
#define Z_MIN_POS                                0.15
#define Z_MAX_POS                                210
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
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (13*60) }
#define HOMING_BUMP_DIVISOR                      { 1, 1, 1 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define Z_SAFE_HOMING_X_POINT                    35
#define HOME_AFTER_DEACTIVATE
#define EDITABLE_HOMING_FEEDRATE
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_Y_POINT                    11
#define HOMING_BACKOFF_POST_MM                   { 12, 10, 0 }

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 100, 100, 3200/8, 280 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 100, 100, 12, 120 }
#define DEFAULT_MAX_ACCELERATION                 { 960, 960, 200, 5000 }
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define DEFAULT_ACCELERATION                     1000
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_RETRACT_ACCELERATION             1000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_EJERK                            5.0
#define DEFAULT_STEPPER_TIMEOUT_SEC              60
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define DISABLE_IDLE_E
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define DEFAULT_ZJERK                            0.4
#define CLASSIC_JERK
#define EDITABLE_STEPS_PER_UNIT
#define DEFAULT_YJERK                            6.0
#define S_CURVE_ACCELERATION
#define DEFAULT_XJERK                            6.0
#define MAXIMUM_STEPPER_RATE                     5000000
#define MINIMUM_STEPPER_PULSE_NS                 0000
#define MINIMUM_STEPPER_PRE_DIR_DELAY            20
#define MINIMUM_STEPPER_POST_DIR_DELAY           20
#define MULTISTEPPING_LIMIT                      16
#define ADAPTIVE_STEP_SMOOTHING

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_STATE                         HIGH
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FIL_RUNOUT_PULLUP
#define NUM_RUNOUT_SENSORS                       1

//
// Probes
//
#define PROBING_MARGIN                           0
#define XY_PROBE_FEEDRATE                        (86*60)
#define Z_CLEARANCE_BETWEEN_PROBES               2
#define Z_CLEARANCE_DEPLOY_PROBE                 2
#define Z_CLEARANCE_MULTI_PROBE                  1
#define PROBE_OFFSET_ZMAX                        0
#define PROBE_OFFSET_ZMIN                        -3
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define EXTRA_PROBING                            1
#define MULTIPLE_PROBING                         2
#define PROBING_HEATERS_OFF
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -1
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define FIX_MOUNTED_PROBE
#define NOZZLE_TO_PROBE_OFFSET                   { 23, 5, -0.5 }
#define USE_PROBE_FOR_Z_HOMING
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define PTC_PROBE
#define PTC_PROBE_COUNT                          10
#define PTC_PROBE_ZOFFS                          { 0 }
#define PTC_BED_ZOFFS                            { 0 }
#define PTC_BED
#define PTC_PARK_POS                             { 0, 0, 100 }
#define PTC_BED_RES                              5
#define PTC_PROBE_HEATING_OFFSET                 0.5
#define PTC_PROBE_POS                            { 90, 100 }
#define PTC_PROBE_START                          30
#define PTC_PROBE_TEMP                           30
#define PTC_BED_START                            60
#define PTC_PROBE_RES                            5
#define PTC_BED_COUNT                            10

//
// Leveling
//
#define PROBING_MARGIN_FRONT                     6
#define PROBING_MARGIN_BACK                      0
#define PROBING_MARGIN_RIGHT                     22
#define PROBING_MARGIN_LEFT                      24

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            10
#define THERMAL_PROTECTION_PERIOD                45
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         10
#define HEATER_0_MAXTEMP                         305
#define PREHEAT_1_TEMP_HOTEND                    215
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
#define TEMP_SENSOR_BED                          1
#define THERMAL_PROTECTION_BED_HYSTERESIS        5
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    180
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define TEMP_SENSOR_PROBE                        1
#define PREHEAT_5_TEMP_HOTEND                    225
#define PREHEAT_5_LABEL                          "GTP"
#define PREHEAT_3_TEMP_CHAMBER                   35
#define PREHEAT_5_TEMP_CHAMBER                   35
#define PREHEAT_5_TEMP_BED                       50
#define PREHEAT_4_TEMP_CHAMBER                   35
#define PREHEAT_5_FAN_SPEED                      0
#define PREHEAT_3_FAN_SPEED                      0
#define PREHEAT_4_TEMP_HOTEND                    230
#define PREHEAT_3_TEMP_BED                       105
#define PREHEAT_4_LABEL                          "TPU"
#define PREHEAT_3_LABEL                          "ASA"
#define PREHEAT_3_TEMP_HOTEND                    260
#define PREHEAT_4_FAN_SPEED                      0
#define PREHEAT_6_TEMP_HOTEND                    275
#define PREHEAT_2_FAN_SPEED                      0
#define BED_MINTEMP                              10
#define BED_MAXTEMP                              125
#define PREHEAT_6_TEMP_BED                       110
#define PREHEAT_6_TEMP_CHAMBER                   35
#define PREHEAT_4_TEMP_BED                       50
#define PREHEAT_6_LABEL                          "PC"
#define PREHEAT_2_LABEL                          "PETG"
#define PREHEAT_6_FAN_SPEED                      0
#define PREHEAT_2_TEMP_BED                       85
#define PREHEAT_2_TEMP_HOTEND                    230
#define LPQ_MAX_LEN                              50
#define PID_EXTRUSION_SCALING
#define DEFAULT_Kc                               (1)
#define THERMAL_PROTECTION_BED_PERIOD            360

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_Kp                               16.13
#define DEFAULT_Kd                               56.23
#define DEFAULT_Ki                               1.1625

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
#define DEFAULT_bedKi                            4.30
#define PIDTEMPBED
#define DEFAULT_bedKd                            924.76
#define DEFAULT_bedKp                            126.13

//
// Fans
//
#define E0_AUTO_FAN_PIN                          8
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_KICKSTART_TIME                       800

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                2
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         63
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define HOME_BEFORE_FILAMENT_CHANGE
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             500
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         3
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       18
#define FILAMENT_CHANGE_UNLOAD_LENGTH            80
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          60
#define ADVANCED_PAUSE_PURGE_LENGTH              50
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_PURGE_RETRACT            0
#define FILAMENT_UNLOAD_PURGE_LENGTH             3
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_UNLOAD_PURGE_DELAY              0

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define GRID_MAX_POINTS_X                        4
#define XZ_DIAG_AC                               282.8427124746
#define XZ_DIAG_BD                               282.8427124746
#define XY_SIDE_AD                               200
#define XY_DIAG_AC                               282.8427124746
#define XY_DIAG_BD                               282.8427124746
#define YZ_SIDE_AD                               200
#define AUTO_BED_LEVELING_BILINEAR
#define YZ_DIAG_AC                               282.8427124746
#define SKEW_CORRECTION_FOR_Z
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define BILINEAR_SUBDIVISIONS                    3
#define EVENT_GCODE_AFTER_G29                    "G1 X12 Y6 F7200\nG1 Z0 F8000"
#define GRID_MAX_POINTS_Y                        6
#define LEVELED_SEGMENT_LENGTH                   5.0
#define YZ_DIAG_BD                               282.8427124746
#define SKEW_CORRECTION
#define ABL_BILINEAR_SUBDIVISION
#define SKEW_CORRECTION_GCODE

//
// Media
//
#define SD_CHECK_AND_RETRY
#define SDSUPPORT

//
// LCD
//
#define SHOW_BOOTSCREEN
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define REPRAP_DISCOUNT_SMART_CONTROLLER
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define DOUBLECLICK_MAX_INTERVAL                 2000
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define SDCARD_SORT_ALPHA
#define SCROLL_LONG_FILENAMES
#define BABYSTEPPING
#define BABYSTEP_DISPLAY_TOTAL
#define SDSORT_USES_STACK                        false
#define SDSORT_REVERSE                           false
#define MANUAL_E_MOVES_RELATIVE
#define MOVE_Z_WHEN_IDLE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SDSORT_LIMIT                             40
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define SDSORT_DYNAMIC_RAM                       false
#define SHOW_ELAPSED_TIME
#define SOUND_ON_DEFAULT
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_REMAINING_TIME
#define SET_REMAINING_TIME
#define FLOW_EDIT_MAX                            999
#define BABYSTEP_ZPROBE_OFFSET
#define FLOW_EDIT_MIN                            10
#define SDSORT_CACHE_VFATS                       2
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define SDSORT_CACHE_NAMES                       false
#define MOVE_Z_IDLE_MULTIPLICATOR                1
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                1
#define LONG_FILENAME_HOST_SUPPORT
#define SDSORT_GCODE                             false
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SET_PROGRESS_MANUALLY
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define SDSORT_USES_RAM                          false
#define LCD_TIMEOUT_TO_STATUS                    15000
#define SET_PROGRESS_PERCENT
#define SDSORT_FOLDERS                           -1
#define DOUBLECLICK_FOR_Z_BABYSTEPPING

//
// Interface
//
#define DISPLAY_CHARSET_HD44780                  JAPANESE
#define LCD_INFO_SCREEN_STYLE                    1
#define LCD_LANGUAGE                             en
#define REVERSE_ENCODER_DIRECTION
#define SPEAKER
#define ENCODER_PULSES_PER_STEP                  4
#define INDIVIDUAL_AXIS_HOMING_MENU

//
// Develop
//
#define M100_FREE_MEMORY_WATCHER

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5

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
#define CUSTOM_MACHINE_NAME                      "Prusa MK3S"
#define EMERGENCY_PARSER
#define ADVANCED_OK

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
#define EXTRUDE_MINTEMP                          175
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED

//
// Stats
//
#define PRINTCOUNTER
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define SERVICE_WARNING_BUZZES                   3

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
#define CANCEL_OBJECTS

//
// TMC_Smart
//
#define CHOPPER_TIMING                           CHOPPER_PRUSAMK3_24V
#define Y_STALL_SENSITIVITY                      3
#define X2_STALL_SENSITIVITY                     X_STALL_SENSITIVITY
#define INTERPOLATE                              true
#define IMPROVE_HOMING_RELIABILITY
#define E0_HYBRID_THRESHOLD                      0
#define Z_RSENSE                                 0.22
#define HOLD_MULTIPLIER                          1.0
#define K_HYBRID_THRESHOLD                       3
#define X_CHAIN_POS                              -1
#define Y_RSENSE                                 0.22
#define U_HYBRID_THRESHOLD                       3
#define E3_HYBRID_THRESHOLD                      30
#define Z_MICROSTEPS                             16
#define STEALTHCHOP_Z
#define Z_CURRENT_HOME                           348
#define REPORT_CURRENT_CHANGE
#define X_RSENSE                                 0.22
#define Y_CHAIN_POS                              -1
#define X_HYBRID_THRESHOLD                       100
#define E6_HYBRID_THRESHOLD                      30
#define X_CURRENT_HOME                           230
#define Z4_HYBRID_THRESHOLD                      80
#define X_STALL_SENSITIVITY                      3
#define STOP_ON_ERROR
#define Z_CHAIN_POS                              -1
#define J_HYBRID_THRESHOLD                       3
#define E0_RSENSE                                0.22
#define MONITOR_DRIVER_STATUS
#define EDITABLE_HOMING_CURRENT
#define Z_CURRENT                                530
#define E2_HYBRID_THRESHOLD                      30
#define Y_MICROSTEPS                             16
#define W_HYBRID_THRESHOLD                       3
#define SENSORLESS_HOMING
#define E5_HYBRID_THRESHOLD                      30
#define Z3_HYBRID_THRESHOLD                      80
#define CURRENT_STEP_DOWN                        50
#define X2_HYBRID_THRESHOLD                      100
#define Z_HYBRID_THRESHOLD                       80
#define X_CURRENT                                500
#define E0_CHAIN_POS                             -1
#define I_HYBRID_THRESHOLD                       3
#define EDGE_STEPPING
#define Y_CURRENT                                500
#define E1_HYBRID_THRESHOLD                      30
#define STEALTHCHOP_XY
#define Y2_STALL_SENSITIVITY                     Y_STALL_SENSITIVITY
#define Y2_HYBRID_THRESHOLD                      100
#define TMC_HOME_PHASE                           { 640, 640, -1 }
#define E0_MICROSTEPS                            32
#define Y_CURRENT_HOME                           260
#define TMC_DEBUG
#define X_MICROSTEPS                             16
#define V_HYBRID_THRESHOLD                       3
#define E4_HYBRID_THRESHOLD                      30
#define Z2_HYBRID_THRESHOLD                      80
#define E0_CURRENT                               514
#define Y_HYBRID_THRESHOLD                       100
#define E7_HYBRID_THRESHOLD                      30
