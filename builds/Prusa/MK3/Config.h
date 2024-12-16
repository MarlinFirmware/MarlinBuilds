/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-12-16 at 09:06:39.
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
// Extruder
//
#define ADVANCE_K                                0.22
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            false
#define LIN_ADVANCE

//
// Bed Temp
//
#define DEFAULT_bedKd                            924.76
#define DEFAULT_bedKi                            4.30
#define DEFAULT_bedKp                            126.13
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define E0_AUTO_FAN_PIN                          8
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_KICKSTART_TIME                       800

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           TMC2130
#define E_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            TMC2130
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            TMC2130
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            TMC2130
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
#define X_BED_SIZE                               250
#define X_MAX_POS                                255
#define X_MIN_POS                                0
#define Y_BED_SIZE                               210
#define Y_MAX_POS                                212.5
#define Y_MIN_POS                                -4
#define Z_MAX_POS                                210
#define Z_MIN_POS                                0.15

//
// Homing
//
#define HOME_AFTER_DEACTIVATE
#define HOMING_BACKOFF_POST_MM                   { 12, 10, 0 }
#define HOMING_BUMP_DIVISOR                      { 1, 1, 1 }
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (13*60) }
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_X_POINT                    35
#define Z_SAFE_HOMING_Y_POINT                    11

//
// Endstops
//
#define ENDSTOPPULLUPS
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Probes
//
#define EXTRA_PROBING                            1
#define FIX_MOUNTED_PROBE
#define MULTIPLE_PROBING                         2
#define NOZZLE_TO_PROBE_OFFSET                   { 23, 5, -0.5 }
#define PROBE_OFFSET_ZMAX                        0
#define PROBE_OFFSET_ZMIN                        -3
#define PROBING_HEATERS_OFF
#define PROBING_MARGIN                           0
#define PTC_BED
#define PTC_BED_COUNT                            10
#define PTC_BED_RES                              5
#define PTC_BED_START                            60
#define PTC_BED_ZOFFS                            { 0 }
#define PTC_PARK_POS                             { 0, 0, 100 }
#define PTC_PROBE
#define PTC_PROBE_COUNT                          10
#define PTC_PROBE_HEATING_OFFSET                 0.5
#define PTC_PROBE_POS                            { 90, 100 }
#define PTC_PROBE_RES                            5
#define PTC_PROBE_START                          30
#define PTC_PROBE_TEMP                           30
#define PTC_PROBE_ZOFFS                          { 0 }
#define USE_PROBE_FOR_Z_HOMING
#define XY_PROBE_FEEDRATE                        (86*60)
#define Z_CLEARANCE_BETWEEN_PROBES               2
#define Z_CLEARANCE_DEPLOY_PROBE                 2
#define Z_CLEARANCE_MULTI_PROBE                  1
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_PROBE_LOW_POINT                        -1

//
// LCD
//
#define BABYSTEPPING
#define BABYSTEP_DISPLAY_TOTAL
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define BABYSTEP_ZPROBE_OFFSET
#define BOOTSCREEN_TIMEOUT                       3000
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define DOUBLECLICK_MAX_INTERVAL                 2000
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define LCD_INFO_MENU
#define LCD_TIMEOUT_TO_STATUS                    15000
#define LONG_FILENAME_HOST_SUPPORT
#define MANUAL_E_MOVES_RELATIVE
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define MOVE_Z_IDLE_MULTIPLICATOR                1
#define MOVE_Z_WHEN_IDLE
#define REPRAP_DISCOUNT_SMART_CONTROLLER
#define SCROLL_LONG_FILENAMES
#define SDCARD_RATHERRECENTFIRST
#define SDCARD_SORT_ALPHA
#define SDSORT_CACHE_NAMES                       false
#define SDSORT_CACHE_VFATS                       2
#define SDSORT_DYNAMIC_RAM                       false
#define SDSORT_FOLDERS                           -1
#define SDSORT_GCODE                             false
#define SDSORT_LIMIT                             40
#define SDSORT_REVERSE                           false
#define SDSORT_USES_RAM                          false
#define SDSORT_USES_STACK                        false
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_MENU_CONFIRM_START
#define SD_PROCEDURE_DEPTH                       1
#define SET_PROGRESS_MANUALLY
#define SET_PROGRESS_PERCENT
#define SET_REMAINING_TIME
#define SHOW_BOOTSCREEN
#define SHOW_ELAPSED_TIME
#define SHOW_PROGRESS_PERCENT
#define SHOW_REMAINING_TIME
#define SOUND_ON_DEFAULT
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define STATUS_MESSAGE_SCROLLING
#define ULTIPANEL_FEEDMULTIPLY

//
// Interface
//
#define DISPLAY_CHARSET_HD44780                  JAPANESE
#define ENCODER_PULSES_PER_STEP                  4
#define INDIVIDUAL_AXIS_HOMING_MENU
#define LCD_INFO_SCREEN_STYLE                    1
#define REVERSE_ENCODER_DIRECTION
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
// Temperature
//
#define BED_MAXTEMP                              125
#define BED_MINTEMP                              10
#define BED_OVERSHOOT                            10
#define DEFAULT_Kc                               (1)
#define HEATER_0_MAXTEMP                         305
#define HEATER_0_MINTEMP                         10
#define HOTEND_OVERSHOOT                         15
#define LPQ_MAX_LEN                              50
#define PID_EXTRUSION_SCALING
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_1_TEMP_HOTEND                    215
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "PETG"
#define PREHEAT_2_TEMP_BED                       85
#define PREHEAT_2_TEMP_HOTEND                    230
#define PREHEAT_3_FAN_SPEED                      0
#define PREHEAT_3_LABEL                          "ASA"
#define PREHEAT_3_TEMP_BED                       105
#define PREHEAT_3_TEMP_CHAMBER                   35
#define PREHEAT_3_TEMP_HOTEND                    260
#define PREHEAT_4_FAN_SPEED                      0
#define PREHEAT_4_LABEL                          "TPU"
#define PREHEAT_4_TEMP_BED                       50
#define PREHEAT_4_TEMP_CHAMBER                   35
#define PREHEAT_4_TEMP_HOTEND                    230
#define PREHEAT_5_FAN_SPEED                      0
#define PREHEAT_5_LABEL                          "GTP"
#define PREHEAT_5_TEMP_BED                       50
#define PREHEAT_5_TEMP_CHAMBER                   35
#define PREHEAT_5_TEMP_HOTEND                    225
#define PREHEAT_6_FAN_SPEED                      0
#define PREHEAT_6_LABEL                          "PC"
#define PREHEAT_6_TEMP_BED                       110
#define PREHEAT_6_TEMP_CHAMBER                   35
#define PREHEAT_6_TEMP_HOTEND                    275
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_SENSOR_0                            1
#define TEMP_SENSOR_BED                          1
#define TEMP_SENSOR_PROBE                        1
#define TEMP_WINDOW                              1
#define THERMAL_PROTECTION_BED_HYSTERESIS        5
#define THERMAL_PROTECTION_BED_PERIOD            360
#define THERMAL_PROTECTION_HYSTERESIS            10
#define THERMAL_PROTECTION_PERIOD                45
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    180
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40

//
// Safety
//
#define EXTRUDE_MAXLENGTH                        200
#define EXTRUDE_MINTEMP                          175
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED
#define THERMAL_PROTECTION_HOTENDS
#define USE_WATCHDOG

//
// Motion
//
#define ADAPTIVE_STEP_SMOOTHING
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define CLASSIC_JERK
#define DEFAULT_ACCELERATION                     1000
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 100, 100, 3200/8, 280 }
#define DEFAULT_EJERK                            5.0
#define DEFAULT_MAX_ACCELERATION                 { 960, 960, 200, 5000 }
#define DEFAULT_MAX_FEEDRATE                     { 100, 100, 12, 120 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             1000
#define DEFAULT_STEPPER_TIMEOUT_SEC              60
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_XJERK                            6.0
#define DEFAULT_YJERK                            6.0
#define DEFAULT_ZJERK                            0.4
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define MAXIMUM_STEPPER_RATE                     5000000
#define MINIMUM_STEPPER_POST_DIR_DELAY           20
#define MINIMUM_STEPPER_PRE_DIR_DELAY            20
#define MINIMUM_STEPPER_PULSE_NS                 0000
#define MIN_STEPS_PER_SEGMENT                    6
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define S_CURVE_ACCELERATION

//
// Calibrate
//
#define ABL_BILINEAR_SUBDIVISION
#define AUTO_BED_LEVELING_BILINEAR
#define BILINEAR_SUBDIVISIONS                    3
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define ENABLE_LEVELING_FADE_HEIGHT
#define EVENT_GCODE_AFTER_G29                    "G1 X12 Y6 F7200\nG1 Z0 F8000"
#define GRID_MAX_POINTS_X                        4
#define GRID_MAX_POINTS_Y                        6
#define LEVELED_SEGMENT_LENGTH                   5.0
#define SEGMENT_LEVELED_MOVES
#define SKEW_CORRECTION
#define SKEW_CORRECTION_FOR_Z
#define SKEW_CORRECTION_GCODE
#define XY_DIAG_AC                               282.8427124746
#define XY_DIAG_BD                               282.8427124746
#define XY_SIDE_AD                               200
#define XZ_DIAG_AC                               282.8427124746
#define XZ_DIAG_BD                               282.8427124746
#define YZ_DIAG_AC                               282.8427124746
#define YZ_DIAG_BD                               282.8427124746
#define YZ_SIDE_AD                               200

//
// Stats
//
#define PRINTCOUNTER
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define SERVICE_WARNING_BUZZES                   3

//
// Serial
//
#define ADVANCED_OK
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "Prusa MK3S"
#define EMERGENCY_PARSER
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              0
#define TX_BUFFER_SIZE                           0

//
// PID Temp
//
#define PID_AUTOTUNE_MENU
#define PID_EDIT_MENU
#define PID_FUNCTIONAL_RANGE                     10

//
// Nozzle Park
//
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 }
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5
#define NOZZLE_PARK_Z_RAISE_MIN                  2

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLUP
#define FIL_RUNOUT_STATE                         HIGH
#define NUM_RUNOUT_SENSORS                       1

//
// Hotend Temp
//
#define DEFAULT_Kd                               56.23
#define DEFAULT_Ki                               1.1625
#define DEFAULT_Kp                               16.13
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Media
//
#define SDSUPPORT
#define SD_CHECK_AND_RETRY

//
// TMC_Smart
//
#define CHOPPER_TIMING                           CHOPPER_PRUSAMK3_24V
#define CURRENT_STEP_DOWN                        50
#define E0_CHAIN_POS                             -1
#define E0_CURRENT                               514
#define E0_HYBRID_THRESHOLD                      0
#define E0_MICROSTEPS                            32
#define E0_RSENSE                                0.22
#define E1_HYBRID_THRESHOLD                      30
#define E2_HYBRID_THRESHOLD                      30
#define E3_HYBRID_THRESHOLD                      30
#define E4_HYBRID_THRESHOLD                      30
#define E5_HYBRID_THRESHOLD                      30
#define E6_HYBRID_THRESHOLD                      30
#define E7_HYBRID_THRESHOLD                      30
#define EDGE_STEPPING
#define HOLD_MULTIPLIER                          1.0
#define IMPROVE_HOMING_RELIABILITY
#define INTERPOLATE                              true
#define I_HYBRID_THRESHOLD                       3
#define J_HYBRID_THRESHOLD                       3
#define K_HYBRID_THRESHOLD                       3
#define MONITOR_DRIVER_STATUS
#define REPORT_CURRENT_CHANGE
#define SENSORLESS_HOMING
#define STEALTHCHOP_XY
#define STEALTHCHOP_Z
#define STOP_ON_ERROR
#define TMC_DEBUG
#define TMC_HOME_PHASE                           { 640, 640, -1 }
#define U_HYBRID_THRESHOLD                       3
#define V_HYBRID_THRESHOLD                       3
#define W_HYBRID_THRESHOLD                       3
#define X2_HYBRID_THRESHOLD                      100
#define X2_STALL_SENSITIVITY                     X_STALL_SENSITIVITY
#define X_CHAIN_POS                              -1
#define X_CURRENT                                500
#define X_CURRENT_HOME                           230
#define X_HYBRID_THRESHOLD                       100
#define X_MICROSTEPS                             16
#define X_RSENSE                                 0.22
#define X_STALL_SENSITIVITY                      3
#define Y2_HYBRID_THRESHOLD                      100
#define Y2_STALL_SENSITIVITY                     Y_STALL_SENSITIVITY
#define Y_CHAIN_POS                              -1
#define Y_CURRENT                                500
#define Y_CURRENT_HOME                           260
#define Y_HYBRID_THRESHOLD                       100
#define Y_MICROSTEPS                             16
#define Y_RSENSE                                 0.22
#define Y_STALL_SENSITIVITY                      3
#define Z2_HYBRID_THRESHOLD                      80
#define Z3_HYBRID_THRESHOLD                      80
#define Z4_HYBRID_THRESHOLD                      80
#define Z_CHAIN_POS                              -1
#define Z_CURRENT                                530
#define Z_CURRENT_HOME                           348
#define Z_HYBRID_THRESHOLD                       80
#define Z_MICROSTEPS                             16
#define Z_RSENSE                                 0.22

//
// Advanced Pause
//
#define ADVANCED_PAUSE_FEATURE
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define ADVANCED_PAUSE_PURGE_LENGTH              50
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       18
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         63
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         3
#define FILAMENT_CHANGE_UNLOAD_ACCEL             500
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          60
#define FILAMENT_CHANGE_UNLOAD_LENGTH            80
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_PURGE_DELAY              0
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_UNLOAD_PURGE_LENGTH             3
#define FILAMENT_UNLOAD_PURGE_RETRACT            0
#define HOME_BEFORE_FILAMENT_CHANGE
#define PARK_HEAD_ON_PAUSE
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_RETRACT_LENGTH                2

//
// Leveling
//
#define PROBING_MARGIN_BACK                      0
#define PROBING_MARGIN_FRONT                     6
#define PROBING_MARGIN_LEFT                      24
#define PROBING_MARGIN_RIGHT                     22

//
// Extras
//
#define ARC_SUPPORT
#define CANCEL_OBJECTS
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25

//
// Develop
//
#define M100_FREE_MEMORY_WATCHER

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER
