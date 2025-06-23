/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 10:11:09.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(JPT)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_CREALITY_V427

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

//
// Extruder
//
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            false
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75

//
// Geometry
//
#define X_BED_SIZE                               500
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE + 10
#define Y_BED_SIZE                               500
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                500
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
#define HOMING_FEEDRATE_MM_M                     { (20*60), (20*60), (4*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 10, 10, 5 }
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define HOME_AFTER_DEACTIVATE
#define MANUAL_Y_HOME_POS                        2
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER
#define MANUAL_X_HOME_POS                        4
#define HOMING_BACKOFF_POST_MM                   { 10, 10, 10 }
#define QUICK_HOME

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 93 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 5, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 500, 500, 100, 5000 }
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.02
#define DEFAULT_ACCELERATION                     500
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_RETRACT_ACCELERATION             500
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
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Probes
//
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_CLEARANCE_MULTI_PROBE                  5
#define PROBE_OFFSET_ZMAX                        5
#define PROBE_OFFSET_ZMIN                        -5
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define Z_AFTER_PROBING                          10
#define MULTIPLE_PROBING                         2
#define Z_PROBE_ERROR_TOLERANCE                  10
#define PROBING_NOZZLE_TEMP                      20
#define Z_PROBE_LOW_POINT                        -3
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define BLTOUCH
#define NOZZLE_TO_PROBE_OFFSET                   { -45, -5, -1.2 }
#define USE_PROBE_FOR_Z_HOMING
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define PROBING_BED_TEMP                         50
#define PREHEAT_BEFORE_PROBING

//
// Leveling
//
#define PROBING_MARGIN_FRONT                     15
#define PROBING_MARGIN_BACK                      15
#define PROBING_MARGIN_RIGHT                     30
#define PROBING_MARGIN_LEFT                      5
#define MESH_MAX_Y                               Y_BED_SIZE - 15
#define MESH_MAX_X                               X_BED_SIZE - 35
#define MESH_MIN_X                               5
#define MESH_MIN_Y                               15

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         250
#define PREHEAT_1_TEMP_HOTEND                    205
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  0
#define TEMP_BED_WINDOW                          2
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define TEMP_SENSOR_BED                          1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define PREHEAT_2_FAN_SPEED                      0
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              125
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       80
#define PREHEAT_2_TEMP_HOTEND                    235
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
#define DEFAULT_Kp                               20.91
#define DEFAULT_Kd                               68.97
#define DEFAULT_Ki                               1.59

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20

//
// Bed Temp
//
#define MAX_BED_POWER                            255

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1
#define FAN_SOFT_PWM

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define MESH_INSET                               1
#define GRID_MAX_POINTS_X                        5
#define UBL_SAVE_ACTIVE_ON_M500
#define MESH_TEST_BED_TEMP                       40
#define MESH_EDIT_GFX_OVERLAY
#define RESTORE_LEVELING_AFTER_G28
#define UBL_HILBERT_CURVE
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define G26_XY_FEEDRATE_TRAVEL                   100
#define AUTO_BED_LEVELING_UBL
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define G26_RETRACT_MULTIPLIER                   1.0
#define MESH_TEST_HOTEND_TEMP                    200
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define G26_XY_FEEDRATE                          20
#define UBL_MESH_EDIT_MOVES_Z
#define UBL_MESH_WIZARD
#define MESH_TEST_LAYER_HEIGHT                   0.2
#define MANUAL_PROBE_START_Z                     0.2
#define G26_MESH_VALIDATION

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
#define RET6_12864_LCD
#define CR10_STOCKDISPLAY
#define SPEED_EDIT_MAX                           999
#define PROBE_DEPLOY_STOW_MENU
#define SPEED_EDIT_MIN                           10
#define STATUS_HOTEND_ANIM
#define SHOW_CUSTOM_BOOTSCREEN
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define SDCARD_SORT_ALPHA
#define MENU_HOLLOW_FRAME
#define SCROLL_LONG_FILENAMES
#define BOOT_MARLIN_LOGO_SMALL
#define BABYSTEP_MILLIMETER_UNITS
#define BABYSTEPPING
#define AUTO_REPORT_SD_STATUS
#define BABYSTEP_DISPLAY_TOTAL
#define SDSORT_USES_STACK                        false
#define SDSORT_REVERSE                           false
#define MANUAL_E_MOVES_RELATIVE
#define PROBE_OFFSET_WIZARD_XY_POS               { X_CENTER, Y_CENTER }
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SDSORT_LIMIT                             40
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G27"
#define BABYSTEP_MULTIPLICATOR_Z                 0.05
#define SDSORT_DYNAMIC_RAM                       false
#define SHOW_ELAPSED_TIME
#define SOUND_ON_DEFAULT
#define SD_PROCEDURE_DEPTH                       1
#define FLOW_EDIT_MAX                            999
#define BABYSTEP_ZPROBE_OFFSET
#define STATUS_CHAMBER_ANIM
#define FLOW_EDIT_MIN                            10
#define STATUS_BED_ANIM
#define STATUS_HOTEND_INVERTED
#define PROBE_OFFSET_WIZARD
#define SDSORT_CACHE_VFATS                       2
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define SDSORT_CACHE_NAMES                       true
#define PROBE_OFFSET_WIZARD_START_Z              -1.0
#define CUSTOM_STATUS_SCREEN_IMAGE
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                0.05
#define LONG_FILENAME_HOST_SUPPORT
#define UTF_FILENAME_SUPPORT
#define BABYSTEP_ALWAYS_AVAILABLE
#define SDSORT_GCODE                             false
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define MEDIA_MENU_AT_TOP
#define XYZ_HOLLOW_FRAME
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define SDSORT_USES_RAM                          true
#define SDSORT_FOLDERS                           -1
#define BROWSE_MEDIA_ON_INSERT

//
// Interface
//
#define LCD_LANGUAGE                             en
#define SPEAKER

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 20), (Y_MAX_POS - 20), 20 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define GCODE_CASE_INSENSITIVE
#define DEBUG_FLAGS_GCODE

//
// Serial
//
#define SERIAL_PORT                              1
#define BAUDRATE                                 115200
#define BUFSIZE                                  4
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           0
#define CUSTOM_MACHINE_NAME                      "CR-10 S5"
#define RX_BUFFER_SIZE                           1024
#define RX_BUFFER_MONITOR
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
#define M114_DETAIL
#define CAPABILITIES_REPORT

//
// Safety
//
#define USE_WATCHDOG
#define THERMAL_PROTECTION_HOTENDS
#define EXTRUDE_MAXLENGTH                        500
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED

//
// Servos
//
#define SERVO_DELAY                              { 50 }

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
