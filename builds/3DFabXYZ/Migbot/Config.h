/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2026-11-26 at 07:28:46.
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
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT

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
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define INVERT_E0_DIR                            false

//
// Extruder
//
#define EXTRUDERS                                1
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75

//
// Geometry
//
#define X_BED_SIZE                               219
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               280
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                200
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
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (4*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define MANUAL_Z_HOME_POS                        0
#define MANUAL_Y_HOME_POS                        0
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER
#define MANUAL_X_HOME_POS                        0
#define Z_SAFE_HOMING

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 79.9738621, 80.2429911, 399.7264854 , 99.4696994 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 225, 225, 3, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 1590, 1590, 100, 10000 }
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.016
#define DEFAULT_ACCELERATION                     1590
#define DEFAULT_TRAVEL_ACCELERATION              1590
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define JD_HANDLE_SMALL_SEGMENTS
#define ARC_SUPPORT
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define DISABLE_IDLE_E
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define S_CURVE_ACCELERATION
#define EDITABLE_STEPS_PER_UNIT
#define MICROSTEP_MODES                          { 16, 16, 16, 16, 16, 16 }
#define ADAPTIVE_STEP_SMOOTHING
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define ENDSTOPPULLUPS
#define ENDSTOPPULLUP_XMIN
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            LOW
#define ENDSTOPPULLUP_YMIN

//
// Filament Runout Sensors
//
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLUP
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FILAMENT_RUNOUT_SENSOR
#define NUM_RUNOUT_SENSORS                       1
#define FIL_RUNOUT_STATE                         LOW

//
// Probes
//
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (125*60)
#define Z_CLEARANCE_BETWEEN_PROBES               3
#define Z_CLEARANCE_DEPLOY_PROBE                 5
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define NOZZLE_TO_PROBE_OFFSET                   { 21, 61, 0 }
#define FIX_MOUNTED_PROBE
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define Z_PROBE_ERROR_TOLERANCE                  3
#define PROBE_OFFSET_YMAX                        65
#define Z_PROBE_LOW_POINT                        -2

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              150
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_FACTOR                          0.1f
#define THERMAL_PROTECTION_BED_PERIOD            20
#define AUTOTEMP_MAX                             250

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_KP                               29.12
#define DEFAULT_KI                               3.22
#define DEFAULT_KD                               65.83

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

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1
#define CONTROLLERFAN_SPEED_MIN                  0
#define CONTROLLER_FAN_PIN                       7
#define CONTROLLER_FAN_BED_HEATING
#define CONTROLLERFAN_IDLE_TIME                  60
#define USE_CONTROLLER_FAN
#define CONTROLLERFAN_SPEED_ACTIVE               127
#define CONTROLLERFAN_SPEED_IDLE                 0

//
// Advanced Pause
//
#define ADVANCED_PAUSE_PURGE_LENGTH              50
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define PAUSE_PARK_RETRACT_LENGTH                2
#define FILAMENT_UNLOAD_PURGE_RETRACT            13
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          10
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_UNLOAD_LENGTH            100
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define SEGMENT_LEVELED_MOVES
#define GRID_MAX_POINTS_Y                        4
#define ENABLE_LEVELING_FADE_HEIGHT
#define BED_TRAMMING_HEIGHT                      0.0
#define LCD_PROBE_Z_RANGE                        4
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define G26_XY_FEEDRATE_TRAVEL                   100
#define MESH_TEST_BED_TEMP                       60
#define LCD_BED_LEVELING
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define G26_RETRACT_MULTIPLIER                   1.0
#define MESH_TEST_HOTEND_TEMP                    205
#define GRID_MAX_POINTS_X                        3
#define G26_MESH_VALIDATION
#define LEVELED_SEGMENT_LENGTH                   5.0
#define G26_XY_FEEDRATE                          20
#define AUTO_BED_LEVELING_BILINEAR
#define BED_TRAMMING_INSET_LFRB                  { 30, 61, 30, 30 }
#define MESH_EDIT_Z_STEP                         0.025
#define MAX_SAVED_MESHES                         100
#define RESTORE_LEVELING_AFTER_G28
#define MESH_TEST_LAYER_HEIGHT                   0.2
#define LCD_BED_TRAMMING
#define BED_TRAMMING_Z_HOP                       4.0

//
// Media
//
#define SDSUPPORT
#define SD_CHECK_AND_RETRY

//
// LCD
//
#define SHOW_BOOTSCREEN
#define ENCODER_100X_STEPS_PER_SEC               160
#define ENCODER_10X_STEPS_PER_SEC                75
#define ENCODER_RATE_MULTIPLIER
#define REPRAP_DISCOUNT_SMART_CONTROLLER
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define SOUND_ON_DEFAULT
#define FINE_MANUAL_MOVE                         0.025
#define SD_PROCEDURE_DEPTH                       1
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define SCROLL_LONG_FILENAMES
#define SHOW_ELAPSED_TIME
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SD_MAX_READ_ERRORS                       5
#define MANUAL_E_MOVES_RELATIVE
#define REINIT_NOISY_LCD
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G27"
#define SDCARD_RATHERRECENTFIRST

//
// Lights
//
#define RGB_LED_G_PIN                            51
#define RGB_LED_R_PIN                            50
#define RGB_LED_B_PIN                            52

//
// Caselight
//
#define CASE_LIGHT_DEFAULT_ON                    false
#define CASE_LIGHT_PIN                           11
#define INVERT_CASE_LIGHT                        false
#define CASE_LIGHT_DEFAULT_BRIGHTNESS            105
#define CASE_LIGHT_MENU
#define CASE_LIGHT_ENABLE

//
// Interface
//
#define DISPLAY_CHARSET_HD44780                  JAPANESE
#define LCD_INFO_SCREEN_STYLE                    0
#define LCD_LANGUAGE                             en

//
// Custom Main Menu
//
#define MAIN_MENU_ITEM_2_GCODE                   "G28\nG29 P4 R999 T\nG29 S0 A F10\nM500"
#define MAIN_MENU_ITEM_2_DESC                    "Manual Mesh&Save"
#define MAIN_MENU_ITEM_3_DESC                    "Print Test Pattern"
#define CUSTOM_MENU_MAIN_TITLE                   "Tools"
#define CUSTOM_MENU_MAIN
#define MAIN_MENU_ITEM_1_DESC                    "Probe Mesh&Save"
#define MAIN_MENU_ITEM_3_GCODE                   "G26 C P O2.25"
#define MAIN_MENU_ITEM_4_DESC                    "Move Bed Forward"
#define MAIN_MENU_ITEM_1_GCODE                   "G28\nG29 P1\nG29 P3 T0\nG29 S0 A F10\nG29 J2\nM500"
#define CUSTOM_MENU_MAIN_SCRIPT_AUDIBLE_FEEDBACK
#define CUSTOM_MENU_MAIN_ONLY_IDLE
#define MAIN_MENU_ITEM_4_GCODE                   "G28 X0 Y0\nG1 X0 Y180 F3000\nM84"
#define CUSTOM_MENU_MAIN_SCRIPT_DONE             "M117 Done"

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 }
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
#define CUSTOM_MACHINE_NAME                      "3DFabXYZ i3"

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

//
// Photo
//
#define CHDK_PIN                                 12
#define PHOTO_SWITCH_MS                          50
#define PHOTO_GCODE

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
// Temperature Presets
//
#define PREHEAT_1_TEMP_HOTEND                    205
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_5_TEMP_HOTEND                    240
#define PREHEAT_5_LABEL                          "PET"
#define PREHEAT_6_TEMP_CHAMBER                   35
#define PREHEAT_3_LABEL                          "HIPS"
#define PREHEAT_3_TEMP_CHAMBER                   35
#define PREHEAT_6_TEMP_BED                       50
#define PREHEAT_4_FAN_SPEED                      0
#define PREHEAT_5_TEMP_CHAMBER                   35
#define PREHEAT_5_TEMP_BED                       90
#define PREHEAT_4_TEMP_CHAMBER                   35
#define PREHEAT_4_LABEL                          "PP"
#define PREHEAT_4_TEMP_BED                       100
#define PREHEAT_3_FAN_SPEED                      0
#define PREHEAT_4_TEMP_HOTEND                    254
#define PREHEAT_6_LABEL                          "FLEX"
#define PREHEAT_3_TEMP_BED                       100
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_3_TEMP_HOTEND                    220
#define PREHEAT_6_FAN_SPEED                      0
#define PREHEAT_6_TEMP_HOTEND                    230
#define PREHEAT_2_TEMP_BED                       100
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_TEMP_HOTEND                    255
#define PREHEAT_5_FAN_SPEED                      0

//
// Temperature Sensors
//
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  5
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      5
#define TEMP_WINDOW                              1
#define TEMP_SENSOR_BED                          1
