/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-12-16 at 06:33:28.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(AJMartel)"
#define WEBSITE_URL                              "http://3DFabXYZ.com"

//
// Machine
//
#define MOTHERBOARD                              BOARD_MKS_BASE_14

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
#define CONTROLLERFAN_IDLE_TIME                  60
#define CONTROLLERFAN_SPEED_ACTIVE               127
#define CONTROLLERFAN_SPEED_IDLE                 0
#define CONTROLLERFAN_SPEED_MIN                  0
#define CONTROLLER_FAN_BED_HEATING
#define CONTROLLER_FAN_PIN                       7
#define E0_AUTO_FAN_PIN                          -1
#define USE_CONTROLLER_FAN

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
#define X_BED_SIZE                               219
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               280
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                200
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (4*60) }
#define MANUAL_X_HOME_POS                        0
#define MANUAL_Y_HOME_POS                        0
#define MANUAL_Z_HOME_POS                        0
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
#define ENDSTOPPULLUP_XMIN
#define ENDSTOPPULLUP_YMIN
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            LOW

//
// Probes
//
#define FIX_MOUNTED_PROBE
#define NOZZLE_TO_PROBE_OFFSET                   { 21, 61, 0 }
#define PROBE_OFFSET_YMAX                        65
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (125*60)
#define Z_CLEARANCE_BETWEEN_PROBES               3
#define Z_CLEARANCE_DEPLOY_PROBE                 5
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_PROBE_LOW_POINT                        -2

//
// LCD
//
#define BOOTSCREEN_TIMEOUT                       3000
#define ENCODER_100X_STEPS_PER_SEC               160
#define ENCODER_10X_STEPS_PER_SEC                75
#define ENCODER_RATE_MULTIPLIER
#define EVENT_GCODE_SD_ABORT                     "G27"
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define LCD_INFO_MENU
#define MANUAL_E_MOVES_RELATIVE
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define REPRAP_DISCOUNT_SMART_CONTROLLER
#define SCROLL_LONG_FILENAMES
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
#define STATUS_MESSAGE_SCROLLING
#define ULTIPANEL_FEEDMULTIPLY

//
// Interface
//
#define DISPLAY_CHARSET_HD44780                  JAPANESE
#define LCD_INFO_SCREEN_STYLE                    0

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
// Safety
//
#define EXTRUDE_MAXLENGTH                        200
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
#define BED_MAXTEMP                              150
#define BED_MINTEMP                              5
#define BED_OVERSHOOT                            10
#define HEATER_0_MAXTEMP                         275
#define HEATER_0_MINTEMP                         5
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_1_TEMP_HOTEND                    205
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       100
#define PREHEAT_2_TEMP_HOTEND                    255
#define PREHEAT_3_FAN_SPEED                      0
#define PREHEAT_3_LABEL                          "HIPS"
#define PREHEAT_3_TEMP_BED                       100
#define PREHEAT_3_TEMP_CHAMBER                   35
#define PREHEAT_3_TEMP_HOTEND                    220
#define PREHEAT_4_FAN_SPEED                      0
#define PREHEAT_4_LABEL                          "PP"
#define PREHEAT_4_TEMP_BED                       100
#define PREHEAT_4_TEMP_CHAMBER                   35
#define PREHEAT_4_TEMP_HOTEND                    254
#define PREHEAT_5_FAN_SPEED                      0
#define PREHEAT_5_LABEL                          "PET"
#define PREHEAT_5_TEMP_BED                       90
#define PREHEAT_5_TEMP_CHAMBER                   35
#define PREHEAT_5_TEMP_HOTEND                    240
#define PREHEAT_6_FAN_SPEED                      0
#define PREHEAT_6_LABEL                          "FLEX"
#define PREHEAT_6_TEMP_BED                       50
#define PREHEAT_6_TEMP_CHAMBER                   35
#define PREHEAT_6_TEMP_HOTEND                    230
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  5
#define TEMP_BED_WINDOW                          1
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      5
#define TEMP_SENSOR_0                            1
#define TEMP_SENSOR_BED                          1
#define TEMP_WINDOW                              1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define THERMAL_PROTECTION_BED_PERIOD            20
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40

//
// Calibrate
//
#define AUTO_BED_LEVELING_BILINEAR
#define BED_TRAMMING_HEIGHT                      0.0
#define BED_TRAMMING_INSET_LFRB                  { 30, 30, 30, 30 }
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define BED_TRAMMING_Z_HOP                       4.0
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define ENABLE_LEVELING_FADE_HEIGHT
#define G26_MESH_VALIDATION
#define G26_RETRACT_MULTIPLIER                   1.0
#define G26_XY_FEEDRATE                          20
#define G26_XY_FEEDRATE_TRAVEL                   100
#define GRID_MAX_POINTS_X                        3
#define GRID_MAX_POINTS_Y                        4
#define LCD_BED_LEVELING
#define LCD_BED_TRAMMING
#define LCD_PROBE_Z_RANGE                        4
#define LEVELED_SEGMENT_LENGTH                   5.0
#define MESH_EDIT_Z_STEP                         0.025
#define MESH_TEST_BED_TEMP                       60
#define MESH_TEST_HOTEND_TEMP                    205
#define MESH_TEST_LAYER_HEIGHT                   0.2
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define RESTORE_LEVELING_AFTER_G28
#define SEGMENT_LEVELED_MOVES

//
// Motion
//
#define ADAPTIVE_STEP_SMOOTHING
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_ACCELERATION                     1590
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 79.9738621, 80.2429911, 399.7264854 , 99.4696994 }
#define DEFAULT_MAX_ACCELERATION                 { 1590, 1590, 100, 10000 }
#define DEFAULT_MAX_FEEDRATE                     { 225, 225, 3, 25 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              1590
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define JD_HANDLE_SMALL_SEGMENTS
#define JUNCTION_DEVIATION_MM                    0.016
#define MICROSTEP_MODES                          { 16, 16, 16, 16, 16, 16 }
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
// Serial
//
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "3DFabXYZ i3"
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              0
#define TX_BUFFER_SIZE                           0

//
// Lights
//
#define RGB_LED_B_PIN                            52
#define RGB_LED_G_PIN                            51
#define RGB_LED_R_PIN                            50

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

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLUP
#define FIL_RUNOUT_STATE                         LOW
#define NUM_RUNOUT_SENSORS                       1

//
// Hotend Temp
//
#define DEFAULT_Kd                               65.83
#define DEFAULT_Ki                               3.22
#define DEFAULT_Kp                               29.12
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Media
//
#define SDSUPPORT
#define SD_CHECK_AND_RETRY

//
// Custom Main Menu
//
#define CUSTOM_MENU_MAIN
#define CUSTOM_MENU_MAIN_ONLY_IDLE
#define CUSTOM_MENU_MAIN_SCRIPT_AUDIBLE_FEEDBACK
#define CUSTOM_MENU_MAIN_SCRIPT_DONE             "M117 Done"
#define CUSTOM_MENU_MAIN_TITLE                   "Tools"
#define MAIN_MENU_ITEM_1_DESC                    "Probe Mesh&Save"
#define MAIN_MENU_ITEM_1_GCODE                   "G28\nG29 P1\nG29 P3 T0\nG29 S0 A F10\nG29 J2\nM500"
#define MAIN_MENU_ITEM_2_DESC                    "Manual Mesh&Save"
#define MAIN_MENU_ITEM_2_GCODE                   "G28\nG29 P4 R999 T\nG29 S0 A F10\nM500"
#define MAIN_MENU_ITEM_3_DESC                    "Print Test Pattern"
#define MAIN_MENU_ITEM_3_GCODE                   "G26 C P O2.25"
#define MAIN_MENU_ITEM_4_DESC                    "Move Bed Forward"
#define MAIN_MENU_ITEM_4_GCODE                   "G28 X0 Y0\nG1 X0 Y180 F3000\nM84"

//
// Photo
//
#define CHDK_PIN                                 12
#define PHOTO_GCODE
#define PHOTO_SWITCH_MS                          50

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
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          10
#define FILAMENT_CHANGE_UNLOAD_LENGTH            100
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_PURGE_DELAY              5000
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_UNLOAD_PURGE_RETRACT            13
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_RETRACT_LENGTH                2

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25

//
// Caselight
//
#define CASE_LIGHT_DEFAULT_BRIGHTNESS            105
#define CASE_LIGHT_DEFAULT_ON                    false
#define CASE_LIGHT_ENABLE
#define CASE_LIGHT_MENU
#define CASE_LIGHT_PIN                           11
#define INVERT_CASE_LIGHT                        false

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER
