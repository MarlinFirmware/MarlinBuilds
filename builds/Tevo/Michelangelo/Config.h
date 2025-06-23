/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 12:23:05.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(thisiskeithb, Tevo Michelangelo)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_MKS_GEN_L

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_AUTO_INIT
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
#define INVERT_E0_DIR                            true
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75

//
// Geometry
//
#define X_BED_SIZE                               150
#define X_MIN_POS                                -10
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               150
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                160
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
#define HOMING_FEEDRATE_MM_M                     { (120*60), (120*60), (30*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define QUICK_HOME

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 408 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 60, 55 }
#define DEFAULT_MAX_ACCELERATION                 { 10000, 10000, 400, 10000 }
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             true
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.02
#define DEFAULT_ACCELERATION                     2000
#define DEFAULT_TRAVEL_ACCELERATION              5000
#define DEFAULT_RETRACT_ACCELERATION             10000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define JD_HANDLE_SMALL_SEGMENTS
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define DISABLE_IDLE_E
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define EDITABLE_STEPS_PER_UNIT
#define S_CURVE_ACCELERATION
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define ENDSTOPPULLUPS

//
// Probes
//
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         285
#define PREHEAT_1_TEMP_HOTEND                    200
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      255
#define PREHEAT_1_LABEL                          "PLA"
#define TEMP_RESIDENCY_TIME                      5
#define TEMP_WINDOW                              1
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "PETG"
#define PREHEAT_2_TEMP_HOTEND                    240
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_FACTOR                          0.1f

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_Kp                               19.71
#define DEFAULT_Kd                               69.81
#define DEFAULT_Ki                               1.39

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20
#define PID_AUTOTUNE_MENU
#define PID_EDIT_MENU

//
// Fans
//
#define E0_AUTO_FAN_PIN                          7
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_SOFT_PWM
#define FAN_KICKSTART_TIME                       100

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
#define ADVANCED_PAUSE_PURGE_LENGTH              50
#define CONFIGURE_FILAMENT_CHANGE
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
#define LCD_PROBE_Z_RANGE                        4
#define MESH_TEST_BED_TEMP                       60
#define RESTORE_LEVELING_AFTER_G28
#define MESH_BED_LEVELING
#define BED_TRAMMING_Z_HOP                       4.0
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define G26_XY_FEEDRATE_TRAVEL                   100
#define BED_TRAMMING_HEIGHT                      0.0
#define MESH_EDIT_Z_STEP                         0.025
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define LCD_BED_LEVELING
#define G26_RETRACT_MULTIPLIER                   1.0
#define MESH_TEST_HOTEND_TEMP                    205
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define G26_XY_FEEDRATE                          20
#define BED_TRAMMING_INSET_LFRB                  { 30, 30, 30, 30 }
#define MESH_TEST_LAYER_HEIGHT                   0.2
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define MANUAL_PROBE_START_Z                     0.2
#define LCD_BED_TRAMMING
#define G26_MESH_VALIDATION

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
#define MKS_MINI_12864
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define USE_BIG_EDIT_FONT
#define STATUS_HOTEND_ANIM
#define SHOW_CUSTOM_BOOTSCREEN
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define SDCARD_SORT_ALPHA
#define MENU_HOLLOW_FRAME
#define SCROLL_LONG_FILENAMES
#define BOOT_MARLIN_LOGO_SMALL
#define BABYSTEPPING
#define SDSORT_USES_STACK                        false
#define SDSORT_REVERSE                           false
#define MANUAL_E_MOVES_RELATIVE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SDSORT_LIMIT                             40
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define SDSORT_DYNAMIC_RAM                       false
#define STATUS_HEAT_PERCENT
#define SHOW_ELAPSED_TIME
#define SOUND_ON_DEFAULT
#define SD_PROCEDURE_DEPTH                       1
#define FLOW_EDIT_MAX                            999
#define STATUS_CHAMBER_ANIM
#define FLOW_EDIT_MIN                            10
#define STATUS_BED_ANIM
#define STATUS_HOTEND_INVERTED
#define SDSORT_CACHE_VFATS                       2
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define SDSORT_CACHE_NAMES                       false
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                1
#define LONG_FILENAME_HOST_SUPPORT
#define SDSORT_GCODE                             false
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SET_PROGRESS_MANUALLY
#define XYZ_HOLLOW_FRAME
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define SDSORT_USES_RAM                          false
#define SET_PROGRESS_PERCENT
#define SDSORT_FOLDERS                           -1
#define DOUBLECLICK_FOR_Z_BABYSTEPPING

//
// Interface
//
#define LCD_LANGUAGE                             en
#define LCD_FEEDBACK_FREQUENCY_HZ                5000
#define ENCODER_STEPS_PER_MENU_ITEM              1
#define SPEAKER
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS       2
#define ENCODER_PULSES_PER_STEP                  4
#define INDIVIDUAL_AXIS_HOMING_MENU

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
// Nozzle Clean
//
#define NOZZLE_CLEAN_CIRCLE_FN                   10
#define NOZZLE_CLEAN_STROKES                     12
#define NOZZLE_CLEAN_FEATURE
#define NOZZLE_CLEAN_PATTERN_ZIGZAG
#define NOZZLE_CLEAN_MIN_TEMP                    170
#define NOZZLE_CLEAN_END_POINT                   { { 100, 60, (Z_MIN_POS + 1) } }
#define NOZZLE_CLEAN_PATTERN_CIRCLE
#define NOZZLE_CLEAN_CIRCLE_RADIUS               6.5
#define NOZZLE_CLEAN_GOBACK
#define NOZZLE_CLEAN_PATTERN_LINE
#define NOZZLE_CLEAN_START_POINT                 { { 30, 30, (Z_MIN_POS + 1) } }
#define NOZZLE_CLEAN_DEFAULT_PATTERN             0
#define NOZZLE_CLEAN_CIRCLE_MIDDLE               NOZZLE_CLEAN_START_POINT
#define NOZZLE_CLEAN_TRIANGLES                   3

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
#define CUSTOM_MACHINE_NAME                      "Michelangelo"

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
#define EXTRUDE_MAXLENGTH                        300
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE

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
