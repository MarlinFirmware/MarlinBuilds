/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-12-16 at 07:13:22.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(DevPeeps, CR-10 S5 BL)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_RAMPS_CREALITY

//
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            false

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
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           A4988
#define E_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            A4988
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            A4988
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            A4988
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
#define X_BED_SIZE                               500
#define X_MAX_POS                                X_BED_SIZE + 10
#define X_MIN_POS                                0
#define Y_BED_SIZE                               500
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                500
#define Z_MIN_POS                                0

//
// Homing
//
#define HOME_AFTER_DEACTIVATE
#define HOMING_BACKOFF_POST_MM                   { 25, 25, 10 }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 10, 10, 5 }
#define HOMING_FEEDRATE_MM_M                     { (20*60), (20*60), (4*60) }
#define MANUAL_X_HOME_POS                        4
#define MANUAL_Y_HOME_POS                        2
#define NO_MOTION_BEFORE_HOMING
#define QUICK_HOME
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER

//
// Endstops
//
#define ENDSTOPPULLUPS
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Probes
//
#define BLTOUCH
#define MULTIPLE_PROBING                         2
#define NOZZLE_TO_PROBE_OFFSET                   { 10, 10, 0 }
#define PROBE_OFFSET_ZMAX                        20
#define PROBE_OFFSET_ZMIN                        -20
#define PROBING_MARGIN                           25
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_AFTER_PROBING                          10
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_CLEARANCE_MULTI_PROBE                  5
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_PROBE_LOW_POINT                        -2

//
// LCD
//
#define AUTO_REPORT_SD_STATUS
#define BABYSTEPPING
#define BABYSTEP_ALWAYS_AVAILABLE
#define BABYSTEP_DISPLAY_TOTAL
#define BABYSTEP_MILLIMETER_UNITS
#define BABYSTEP_MULTIPLICATOR_XY                0.05
#define BABYSTEP_MULTIPLICATOR_Z                 0.05
#define BABYSTEP_WITHOUT_HOMING
#define BABYSTEP_ZPROBE_OFFSET
#define BOOTSCREEN_TIMEOUT                       3000
#define BOOT_MARLIN_LOGO_SMALL
#define BROWSE_MEDIA_ON_INSERT
#define CUSTOM_STATUS_SCREEN_IMAGE
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define EVENT_GCODE_SD_ABORT                     "G27"
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define LCD_INFO_MENU
#define LONG_FILENAME_HOST_SUPPORT
#define MANUAL_E_MOVES_RELATIVE
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define MEDIA_MENU_AT_TOP
#define MENU_HOLLOW_FRAME
#define PROBE_DEPLOY_STOW_MENU
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
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
#define SDSORT_USES_STACK                        true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_MENU_CONFIRM_START
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_BOOTSCREEN
#define SHOW_CUSTOM_BOOTSCREEN
#define SHOW_ELAPSED_TIME
#define SHOW_PROGRESS_PERCENT
#define SOUND_ON_DEFAULT
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define STATUS_BED_ANIM
#define STATUS_CHAMBER_ANIM
#define STATUS_HOTEND_ANIM
#define STATUS_HOTEND_INVERTED
#define STATUS_MESSAGE_SCROLLING
#define ULTIPANEL_FEEDMULTIPLY
#define UTF_FILENAME_SUPPORT
#define XYZ_HOLLOW_FRAME

//
// Interface
//
#define LCD_LANGUAGE                             en
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
#define M114_DETAIL

//
// Safety
//
#define EXTRUDE_MAXLENGTH                        1000
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED
#define THERMAL_PROTECTION_HOTENDS
#define USE_WATCHDOG

//
// Temperature
//
#define AUTOTEMP
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define BED_MAXTEMP                              120
#define BED_MINTEMP                              5
#define BED_OVERSHOOT                            10
#define HEATER_0_MAXTEMP                         250
#define HEATER_0_MINTEMP                         5
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_1_TEMP_HOTEND                    205
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       80
#define PREHEAT_2_TEMP_HOTEND                    235
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_SENSOR_0                            1
#define TEMP_SENSOR_BED                          5
#define TEMP_WINDOW                              1
#define THERMAL_PROTECTION_BED_HYSTERESIS        4
#define THERMAL_PROTECTION_BED_PERIOD            40
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    600
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40

//
// Calibrate
//
#define AUTO_BED_LEVELING_BILINEAR
#define DEFAULT_LEVELING_FADE_HEIGHT             2.0
#define ENABLE_LEVELING_AFTER_G28
#define ENABLE_LEVELING_FADE_HEIGHT
#define G26_MESH_VALIDATION
#define G26_RETRACT_MULTIPLIER                   1.0
#define G26_XY_FEEDRATE                          20
#define G26_XY_FEEDRATE_TRAVEL                   100
#define GRID_MAX_POINTS_X                        5
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define MESH_TEST_BED_TEMP                       60
#define MESH_TEST_HOTEND_TEMP                    205
#define MESH_TEST_LAYER_HEIGHT                   0.2
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define SEGMENT_LEVELED_MOVES

//
// Servos
//
#define SERVO_DELAY                              { 50 }

//
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_ACCELERATION                     575
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 93 }
#define DEFAULT_MAX_ACCELERATION                 { 300, 300, 100, 5000 }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 5, 25 }
#define DEFAULT_MINIMUMFEEDRATE                  10.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                10.0
#define DEFAULT_RETRACT_ACCELERATION             575
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define JD_HANDLE_SMALL_SEGMENTS
#define JUNCTION_DEVIATION_MM                    0.02
#define MIN_STEPS_PER_SEGMENT                    6
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         4
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH

//
// Serial
//
#define ADVANCED_OK
#define BAUDRATE                                 115200
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "CR-10 S5"
#define EMERGENCY_PARSER
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define RX_BUFFER_MONITOR
#define RX_BUFFER_SIZE                           128
#define SERIAL_FLOAT_PRECISION                   4
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              0
#define SERIAL_STATS_DROPPED_RX
#define SERIAL_STATS_MAX_RX_QUEUED
#define TX_BUFFER_SIZE                           128

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     10

//
// Nozzle Park
//
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 20), (Y_MAX_POS - 20), 20 }
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
#define FIL_RUNOUT_PIN                           2
#define FIL_RUNOUT_PULLUP
#define FIL_RUNOUT_STATE                         HIGH
#define NUM_RUNOUT_SENSORS                       1

//
// Hotend Temp
//
#define DEFAULT_Kd                               68.97
#define DEFAULT_Ki                               1.59
#define DEFAULT_Kp                               20.91
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Media
//
#define SDSUPPORT
#define SD_CHECK_AND_RETRY

//
// Advanced Pause
//
#define ADVANCED_PAUSE_CONTINUOUS_PURGE
#define ADVANCED_PAUSE_FEATURE
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define ADVANCED_PAUSE_PURGE_LENGTH              150
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              6
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       41
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         600
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          41
#define FILAMENT_CHANGE_UNLOAD_LENGTH            750
#define FILAMENT_UNLOAD_PURGE_DELAY              5000
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_UNLOAD_PURGE_LENGTH             0
#define FILAMENT_UNLOAD_PURGE_RETRACT            10
#define HOME_BEFORE_FILAMENT_CHANGE
#define PARK_HEAD_ON_PAUSE
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_RETRACT_LENGTH                10

//
// Extras
//
#define ARC_P_CIRCLES
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25

//
// BLTouch
//
#define BLTOUCH_LCD_VOLTAGE_MENU
#define BLTOUCH_SET_5V_MODE

//
// Leveling
//
#define G29_FAILURE_COMMANDS                     "M117 Bed leveling failed.\nG0 Z10\nM300 P25 S880\nM300 P50 S0\nM300 P25 S880\nM300 P50 S0\nM300 P25 S880\nM300 P50 S0\nG4 S1"
#define G29_HALT_ON_FAILURE
#define G29_MAX_RETRIES                          3
#define G29_RECOVER_COMMANDS                     "M117 Probe failed. Rewiping.\nG28\nG12 P0 S12 T0"
#define G29_RETRY_AND_RECOVER
#define G29_SUCCESS_COMMANDS                     "M117 Bed leveling done."

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER
#define GCODE_CASE_INSENSITIVE
