/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2026-11-23 at 22:41:56.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(thisiskeithb, Prusa MINI)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_PRUSA_BUDDY

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
#define X_DRIVER_TYPE                            TMC2209
#define Y_DRIVER_TYPE                            TMC2209
#define Z_DRIVER_TYPE                            TMC2209
#define E0_DRIVER_TYPE                           TMC2209
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
#define HOTEND_IDLE_TIMEOUT_SEC                  (5*60)
#define HOTEND_IDLE_MIN_TRIGGER                  180
#define LIN_ADVANCE
#define HOTEND_IDLE_NOZZLE_TARGET                0
#define HOTEND_IDLE_TIMEOUT
#define ADVANCE_K                                0
#define HOTEND_IDLE_BED_TARGET                   0

//
// Geometry
//
#define X_BED_SIZE                               180
#define X_MIN_POS                                -2
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               180
#define Y_MIN_POS                                -3
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                185
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
#define X_HOME_DIR                               1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1
#define HOMING_FEEDRATE_MM_M                     { 3000, 3000, (6*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 0, 0, 2 }
#define Z_SAFE_HOMING_X_POINT                    147.4
#define HOME_AFTER_DEACTIVATE
#define Z_SAFE_HOMING
#define Z_CLEARANCE_FOR_HOMING                   4
#define Z_SAFE_HOMING_Y_POINT                    21.1
#define MANUAL_X_HOME_POS                        180.4

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 100, 100, 400, 325 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 180, 180, 12, 80 }
#define DEFAULT_MAX_ACCELERATION                 { 1250, 1250, 400, 4000 }
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.013
#define DEFAULT_ACCELERATION                     1250
#define DEFAULT_TRAVEL_ACCELERATION              1250
#define DEFAULT_RETRACT_ACCELERATION             1250
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
#define EDITABLE_STEPS_PER_UNIT
#define MULTISTEPPING_LIMIT                      16
#define ADAPTIVE_STEP_SMOOTHING

//
// Motion Control
//
#define INPUT_SHAPING_Y
#define SHAPING_ZETA_X                           0.15
#define SHAPING_ZETA_Y                           0.15
#define INPUT_SHAPING_X
#define SHAPING_FREQ_X                           118.2
#define SHAPING_FREQ_Y                           32.8
#define SHAPING_MENU

//
// Endstops
//
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define ENDSTOP_INTERRUPTS_FEATURE
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH
#define X_MAX_ENDSTOP_HIT_STATE                  HIGH

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_STATE                         LOW
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLUP
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define NUM_RUNOUT_SENSORS                       1

//
// Probes
//
#define PROBING_MARGIN                           5
#define XY_PROBE_FEEDRATE                        5000
#define Z_CLEARANCE_BETWEEN_PROBES               1
#define Z_CLEARANCE_DEPLOY_PROBE                 0
#define Z_CLEARANCE_MULTI_PROBE                  0.5
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define Z_AFTER_PROBING                          2
#define MULTIPLE_PROBING                         2
#define Z_PROBE_ERROR_TOLERANCE                  3
#define FIX_MOUNTED_PROBE
#define PROBING_NOZZLE_TEMP                      0
#define Z_PROBE_LOW_POINT                        -2
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 3)
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define NOZZLE_TO_PROBE_OFFSET                   { -29, -3, 0 }
#define Z_PROBE_FEEDRATE_FAST                    (6*60)
#define PROBING_BED_TEMP                         0

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            6
#define THERMAL_PROTECTION_PERIOD                20
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         305
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define THERMAL_PROTECTION_BED_HYSTERESIS        25
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    240
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        20
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              110
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_FACTOR                          0.1f
#define THERMAL_PROTECTION_BOARD
#define THERMAL_PROTECTION_BED_PERIOD            45
#define THERMAL_PROTECTION_VARIANCE_MONITOR

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_KP                               7.00
#define DEFAULT_KI                               0.50
#define DEFAULT_KD                               45.00

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
#define PIDTEMPBED
#define DEFAULT_BED_KD                           600.00
#define DEFAULT_BED_KI                           1.50
#define DEFAULT_BED_KP                           120.00

//
// Fans
//
#define E0_AUTO_FAN_PIN                          FAN1_PIN
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                2
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         320
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           66
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_RETRACT_FEEDRATE              66
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             1250
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         40
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       80
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       10
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          80
#define HOME_BEFORE_FILAMENT_CHANGE
#define ADVANCED_PAUSE_PURGE_LENGTH              50
#define FILAMENT_CHANGE_UNLOAD_LENGTH            420
#define ADVANCED_PAUSE_FANS_PAUSE
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_PURGE_RETRACT            30
#define FILAMENT_UNLOAD_PURGE_LENGTH             16
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          625
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define GRID_MAX_POINTS_X                        4
#define LEVELING_BED_TEMP                        50
#define MESH_TEST_BED_TEMP                       60
#define AUTO_BED_LEVELING_BILINEAR
#define MAX_SAVED_MESHES                         100
#define LEVELING_NOZZLE_TEMP                     120
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define EXTRAPOLATE_BEYOND_GRID
#define G26_XY_FEEDRATE_TRAVEL                   100
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define G26_RETRACT_MULTIPLIER                   1.0
#define MESH_TEST_HOTEND_TEMP                    205
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define G26_XY_FEEDRATE                          20
#define MESH_TEST_LAYER_HEIGHT                   0.2
#define PREHEAT_BEFORE_LEVELING
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
#define COMPACT_MARLIN_BOOT_LOGO
#define TFT_COLOR_UI
#define PRUSA_MINI_LCD
#define TFT_DRIVER                               ST7789
#define TFT_THEME                                BLACK_MARLIN
#define TFT_FONT                                 NOTOSANS
#define SPEED_EDIT_MAX                           999
#define SET_INTERACTION_TIME
#define SPEED_EDIT_MIN                           10
#define SOUND_MENU_ITEM
#define USB_FLASH_DRIVE_SUPPORT
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define SDCARD_SORT_ALPHA
#define SCROLL_LONG_FILENAMES
#define BOOT_MARLIN_LOGO_SMALL
#define GCODE_REPEAT_MARKERS
#define POWER_LOSS_RECOVERY
#define DISABLE_DUE_SD_MMC
#define SDSORT_USES_STACK                        false
#define FINE_MANUAL_MOVE                         0.025
#define SD_MAX_READ_ERRORS                       5
#define SDSORT_REVERSE                           false
#define MANUAL_E_MOVES_RELATIVE
#define POWER_LOSS_MIN_Z_CHANGE                  0.05
#define USE_OTG_USB_HOST
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SDSORT_LIMIT                             40
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define SHOW_ELAPSED_TIME
#define PREHEAT_SHORTCUT_MENU_ITEM
#define SHOW_INTERACTION_TIME
#define SOUND_ON_DEFAULT
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_REMAINING_TIME
#define SET_REMAINING_TIME
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define PLR_ENABLED_DEFAULT                      false
#define PROBE_OFFSET_WIZARD
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 6*60, 3*60 }
#define LONG_FILENAME_HOST_SUPPORT
#define SDSORT_GCODE                             false
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SET_PROGRESS_MANUALLY
#define SDSORT_QUICK                             true
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define SDSORT_USES_RAM                          false
#define SET_PROGRESS_PERCENT
#define SDSORT_FOLDERS                           -1
#define SDCARD_RATHERRECENTFIRST

//
// Interface
//
#define LCD_LANGUAGE                             en
#define INDIVIDUAL_AXIS_HOMING_MENU
#define SPEAKER

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { (X_MAX_POS - 10), (Y_MAX_POS - 10), 20 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define GCODE_MACROS_SLOTS                       5
#define GCODE_MACROS_SLOT_SIZE                   50
#define GCODE_MACROS
#define DEBUG_FLAGS_GCODE

//
// Serial
//
#define SERIAL_PORT                              -1
#define BAUDRATE                                 250000
#define BUFSIZE                                  16
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           0
#define CUSTOM_MACHINE_NAME                      "Prusa MINI"
#define EMERGENCY_PARSER

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
// Reporting
//
#define AUTO_REPORT_TEMPERATURES
#define EXTENDED_CAPABILITIES_REPORT
#define CAPABILITIES_REPORT
#define REPORT_FAN_CHANGE
#define AUTO_REPORT_FANS
#define M115_GEOMETRY_REPORT
#define AUTO_REPORT_POSITION

//
// Safety
//
#define USE_WATCHDOG
#define THERMAL_PROTECTION_HOTENDS
#define EXTRUDE_MAXLENGTH                        1000
#define EXTRUDE_MINTEMP                          170
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
#define CANCEL_OBJECTS_REPORTING
#define CANCEL_OBJECTS

//
// Temperature Sensors
//
#define TEMP_SENSOR_0                            5
#define TEMP_HYSTERESIS                          3
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define TEMP_SENSOR_BED                          1
#define TEMP_SENSOR_BOARD                        1000

//
// Temperature Presets
//
#define PREHEAT_1_TEMP_HOTEND                    215
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_5_TEMP_HOTEND                    215
#define PREHEAT_9_LABEL                          "FLEX"
#define PREHEAT_5_LABEL                          "PVB"
#define PREHEAT_8_TEMP_HOTEND                    240
#define PREHEAT_3_TEMP_CHAMBER                   35
#define PREHEAT_5_TEMP_CHAMBER                   35
#define PREHEAT_5_TEMP_BED                       75
#define PREHEAT_7_TEMP_CHAMBER                   35
#define PREHEAT_4_TEMP_CHAMBER                   35
#define PREHEAT_9_TEMP_CHAMBER                   35
#define PREHEAT_3_FAN_SPEED                      0
#define PREHEAT_4_TEMP_HOTEND                    275
#define PREHEAT_8_LABEL                          "PP"
#define PREHEAT_3_TEMP_BED                       100
#define PREHEAT_4_LABEL                          "PC"
#define PREHEAT_3_LABEL                          "ASA"
#define PREHEAT_3_TEMP_HOTEND                    260
#define PREHEAT_4_FAN_SPEED                      0
#define PREHEAT_6_TEMP_HOTEND                    255
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_9_FAN_SPEED                      0
#define PREHEAT_9_TEMP_HOTEND                    240
#define PREHEAT_8_TEMP_BED                       100
#define PREHEAT_7_LABEL                          "HIPS"
#define PREHEAT_8_FAN_SPEED                      0
#define PREHEAT_6_TEMP_BED                       100
#define PREHEAT_2_TEMP_HOTEND                    230
#define PREHEAT_6_TEMP_CHAMBER                   35
#define PREHEAT_7_FAN_SPEED                      0
#define PREHEAT_8_TEMP_CHAMBER                   35
#define PREHEAT_7_TEMP_BED                       100
#define PREHEAT_7_TEMP_HOTEND                    220
#define PREHEAT_5_FAN_SPEED                      0
#define PREHEAT_4_TEMP_BED                       100
#define PREHEAT_6_LABEL                          "ABS"
#define PREHEAT_2_LABEL                          "PETG"
#define PREHEAT_6_FAN_SPEED                      0
#define PREHEAT_2_TEMP_BED                       85
#define PREHEAT_9_TEMP_BED                       50

//
// User
//
#define NO_HOMING_CURRENT_WARNING

//
// TMC_Smart
//
#define CHOPPER_TIMING                           CHOPPER_PRUSAMK3_24V
#define Y_STALL_SENSITIVITY                      8
#define X2_STALL_SENSITIVITY                     X_STALL_SENSITIVITY
#define INTERPOLATE                              true
#define E0_HYBRID_THRESHOLD                      30
#define Z_RSENSE                                 0.22
#define HOLD_MULTIPLIER                          0.5
#define K_HYBRID_THRESHOLD                       3
#define X_CHAIN_POS                              -1
#define Y_RSENSE                                 0.22
#define U_HYBRID_THRESHOLD                       3
#define E3_HYBRID_THRESHOLD                      30
#define Z_MICROSTEPS                             8
#define STEALTHCHOP_E
#define STEALTHCHOP_Z
#define REPORT_CURRENT_CHANGE
#define X_RSENSE                                 0.22
#define Y_CHAIN_POS                              -1
#define X_HYBRID_THRESHOLD                       100
#define E6_HYBRID_THRESHOLD                      30
#define X_CURRENT_HOME                           X_CURRENT
#define Z4_HYBRID_THRESHOLD                      3
#define HYBRID_THRESHOLD
#define X_STALL_SENSITIVITY                      8
#define Z_CURRENT_HOME                           Z_CURRENT
#define STOP_ON_ERROR
#define Z_CHAIN_POS                              -1
#define J_HYBRID_THRESHOLD                       3
#define MONITOR_DRIVER_STATUS
#define Z_CURRENT                                350
#define E2_HYBRID_THRESHOLD                      30
#define Y_MICROSTEPS                             16
#define W_HYBRID_THRESHOLD                       3
#define SENSORLESS_HOMING
#define E5_HYBRID_THRESHOLD                      30
#define Z3_HYBRID_THRESHOLD                      3
#define CURRENT_STEP_DOWN                        50
#define X2_HYBRID_THRESHOLD                      100
#define Z_HYBRID_THRESHOLD                       3
#define X_CURRENT                                350
#define E0_CHAIN_POS                             -1
#define I_HYBRID_THRESHOLD                       3
#define EDGE_STEPPING
#define E1_HYBRID_THRESHOLD                      30
#define STEALTHCHOP_XY
#define Y2_STALL_SENSITIVITY                     Y_STALL_SENSITIVITY
#define Y2_HYBRID_THRESHOLD                      100
#define E0_MICROSTEPS                            16
#define Y_CURRENT_HOME                           Y_CURRENT
#define E0_RSENSE                                0.22
#define Y_CURRENT                                350
#define X_MICROSTEPS                             16
#define V_HYBRID_THRESHOLD                       3
#define E4_HYBRID_THRESHOLD                      30
#define Z2_HYBRID_THRESHOLD                      3
#define E0_CURRENT                               400
#define Y_HYBRID_THRESHOLD                       100
#define E7_HYBRID_THRESHOLD                      30

//
// Baby-Stepping
//
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define BABYSTEP_WITHOUT_HOMING
#define BABYSTEPPING
#define BABYSTEP_DISPLAY_TOTAL
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define BABYSTEP_ZPROBE_OFFSET
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_ALWAYS_AVAILABLE
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
