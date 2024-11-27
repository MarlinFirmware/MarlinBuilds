/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-11-26 at 20:28:22.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(@Vertabreak)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_RAMPS_13_EEB

//
// Extruder
//
#define ADVANCE_K                                0.0
#define ADVANCE_K_EXTRA
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            true
#define LIN_ADVANCE

//
// Bed Temp
//
#define MAX_BED_POWER                            255

//
// Fans
//
#define CHAMBER_AUTO_FAN_PIN                     -1
#define COOLER_AUTO_FAN_PIN                      -1
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
#define SOFT_ENDSTOPS_MENU_ITEM
#define X_BED_SIZE                               300
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               210
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                185
#define Z_MIN_POS                                0

//
// Homing
//
#define HOME_Y_BEFORE_X
#define HOMING_BUMP_DIVISOR                      { 4, 4, 4 }
#define HOMING_BUMP_MM                           { 4, 4, 4 }
#define HOMING_FEEDRATE_MM_M                     { (40*60), (40*60), (4*60) }
#define QUICK_HOME
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               1
#define Z_CLEARANCE_FOR_HOMING                   4
#define Z_HOME_DIR                               -1
#define Z_IDLE_HEIGHT                            Z_MAX_POS
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER

//
// Endstops
//
#define ENDSTOPPULLUPS
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MAX_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            LOW

//
// Probes
//
#define FIX_MOUNTED_PROBE
#define NOZZLE_TO_PROBE_OFFSET                   { -25, -29, -12.35 }
#define PROBE_OFFSET_ZMAX                        0
#define PROBE_OFFSET_ZMIN                        -20
#define PROBING_MARGIN                           0
#define XY_PROBE_FEEDRATE                        (40*60)
#define Z_AFTER_PROBING                          4
#define Z_CLEARANCE_BETWEEN_PROBES               4
#define Z_CLEARANCE_DEPLOY_PROBE                 4
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define Z_PROBE_FEEDRATE_SLOW                    Z_PROBE_FEEDRATE_FAST
#define Z_PROBE_LOW_POINT                        -2

//
// LCD
//
#define AUTO_REPORT_SD_STATUS
#define BABYSTEPPING
#define BABYSTEP_ALWAYS_AVAILABLE
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define BINARY_FILE_TRANSFER
#define BOOTSCREEN_TIMEOUT                       3000
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define DOUBLECLICK_MAX_INTERVAL                 2000
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                40
#define ENCODER_RATE_MULTIPLIER
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define LCD_DECIMAL_SMALL_XY
#define LCD_INFO_MENU
#define LCD_PROGRESS_BAR
#define LCD_SHOW_E_TOTAL
#define LCD_TIMEOUT_TO_STATUS                    60000
#define LONG_FILENAME_HOST_SUPPORT
#define MANUAL_E_MOVES_RELATIVE
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_IN                  0.100, 0.010, 0.001
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define MENU_ADDAUTOSTART
#define PROGRESS_BAR_BAR_TIME                    0
#define PROGRESS_BAR_MSG_TIME                    3500
#define PROGRESS_MSG_EXPIRE                      0
#define REPRAP_DISCOUNT_SMART_CONTROLLER
#define SCROLL_LONG_FILENAMES
#define SDCARD_RATHERRECENTFIRST
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
#define TURBO_BACK_MENU_ITEM
#define ULTIPANEL_FEEDMULTIPLY

//
// Interface
//
#define DISPLAY_CHARSET_HD44780                  JAPANESE
#define INDIVIDUAL_AXIS_HOMING_MENU
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS       50
#define LCD_FEEDBACK_FREQUENCY_HZ                10
#define LCD_INFO_SCREEN_STYLE                    0
#define SPEAKER

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
#define AUTOTEMP
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define BED_MAXTEMP                              150
#define BED_MINTEMP                              0
#define BED_OVERSHOOT                            10
#define CHAMBER_CHECK_INTERVAL                   5000
#define COOLER_OVERSHOOT                         2
#define DEFAULT_Kc                               (100)
#define DEFAULT_Kf                               10
#define DUMMY_THERMISTOR_998_VALUE               25
#define DUMMY_THERMISTOR_999_VALUE               100
#define HEATER_0_MAXTEMP                         275
#define HEATER_0_MINTEMP                         0
#define HOTEND_OVERSHOOT                         15
#define LPQ_MAX_LEN                              50
#define MAX_CONSECUTIVE_LOW_TEMPERATURE_ERROR_ALLOWED 10
#define PID_EXTRUSION_SCALING
#define PID_FAN_SCALING
#define PID_FAN_SCALING_LIN_FACTOR               (0)
#define PID_FAN_SCALING_MIN_SPEED                10
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_1_TEMP_CHAMBER                   35
#define PREHEAT_1_TEMP_HOTEND                    200
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       70
#define PREHEAT_2_TEMP_CHAMBER                   35
#define PREHEAT_2_TEMP_HOTEND                    250
#define PREHEAT_TIME_HOTEND_MS                   30000
#define SHOW_TEMP_ADC_VALUES
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  5
#define TEMP_BED_WINDOW                          1
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      5
#define TEMP_SENSOR_0                            1
#define TEMP_SENSOR_BED                          1
#define TEMP_WINDOW                              1
#define THERMAL_PROTECTION_BED_HYSTERESIS        5
#define THERMAL_PROTECTION_BED_PERIOD            60
#define THERMAL_PROTECTION_HYSTERESIS            5
#define THERMAL_PROTECTION_PERIOD                60
#define WATCH_BED_TEMP_INCREASE                  5
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      5
#define WATCH_TEMP_PERIOD                        60

//
// Safety
//
#define EXTRUDE_MAXLENGTH                        1000
#define EXTRUDE_MINTEMP                          100
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED
#define THERMAL_PROTECTION_HOTENDS
#define USE_WATCHDOG

//
// Nozzle Clean
//
#define NOZZLE_CLEAN_CIRCLE_FN                   10
#define NOZZLE_CLEAN_CIRCLE_MIDDLE               NOZZLE_CLEAN_START_POINT
#define NOZZLE_CLEAN_CIRCLE_RADIUS               6.5
#define NOZZLE_CLEAN_DEFAULT_PATTERN             0
#define NOZZLE_CLEAN_END_POINT                   { { 100, 60, (Z_MIN_POS + 1) } }
#define NOZZLE_CLEAN_FEATURE
#define NOZZLE_CLEAN_GOBACK
#define NOZZLE_CLEAN_MIN_TEMP                    170
#define NOZZLE_CLEAN_PATTERN_CIRCLE
#define NOZZLE_CLEAN_PATTERN_LINE
#define NOZZLE_CLEAN_PATTERN_ZIGZAG
#define NOZZLE_CLEAN_START_POINT                 { { 30, 30, (Z_MIN_POS + 1) } }
#define NOZZLE_CLEAN_STROKES                     12
#define NOZZLE_CLEAN_TRIANGLES                   3

//
// EEPROM
//
#define EEPROM_AUTO_INIT
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Calibrate
//
#define AUTO_BED_LEVELING_BILINEAR
#define BED_TRAMMING_HEIGHT                      0.0
#define BED_TRAMMING_INCLUDE_CENTER
#define BED_TRAMMING_INSET_LFRB                  { 30, 30, 30, 30 }
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define BED_TRAMMING_Z_HOP                       4.0
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define ENABLE_LEVELING_FADE_HEIGHT
#define EXTRAPOLATE_BEYOND_GRID
#define GRID_MAX_POINTS_X                        3
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LCD_BED_LEVELING
#define LCD_BED_TRAMMING
#define LCD_PROBE_Z_RANGE                        4
#define LEVELED_SEGMENT_LENGTH                   5.0
#define MESH_EDIT_Z_STEP                         0.025
#define RESTORE_LEVELING_AFTER_G28
#define SEGMENT_LEVELED_MOVES
#define SKEW_CORRECTION

//
// Motion
//
#define ADAPTIVE_STEP_SMOOTHING
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define BACKLASH_COMPENSATION
#define BACKLASH_CORRECTION                      0.0
#define BACKLASH_DISTANCE_MM                     { 0, 0, 0 }
#define BACKLASH_GCODE
#define BACKLASH_MEASUREMENT_FEEDRATE            Z_PROBE_FEEDRATE_SLOW
#define BACKLASH_MEASUREMENT_LIMIT               0.5
#define BACKLASH_MEASUREMENT_RESOLUTION          0.005
#define BACKLASH_SMOOTHING_MM                    10
#define DEFAULT_ACCELERATION                     500
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 800, 140 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 100, 10000 }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 5, 25 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   60000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             500
#define DEFAULT_STEPPER_TIMEOUT_SEC              600
#define DEFAULT_TRAVEL_ACCELERATION              500
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define JD_HANDLE_SMALL_SEGMENTS
#define JUNCTION_DEVIATION_MM                    0.01
#define MEASURE_BACKLASH_WHEN_PROBING
#define MIN_STEPS_PER_SEGMENT                    6
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define S_CURVE_ACCELERATION
#define XY_FREQUENCY_LIMIT                       15
#define XY_FREQUENCY_MIN_PERCENT                 5

//
// Stats
//
#define PRINTCOUNTER
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define SERVICE_WARNING_BUZZES                   3

//
// Servos
//
#define NUM_SERVOS                               3
#define SERVO_DELAY                              { 300, 300, 300 }

//
// Media
//
#define SDSUPPORT

//
// PID Temp
//
#define PID_AUTOTUNE_MENU
#define PID_FUNCTIONAL_RANGE                     10

//
// Hotend Temp
//
#define DEFAULT_Kd                               71.37
#define DEFAULT_Ki                               0.44
#define DEFAULT_Kp                               11.21
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Serial
//
#define ADVANCED_OK
#define BAUDRATE                                 250000
#define BAUD_RATE_GCODE
#define BUFSIZE                                  4
#define EMERGENCY_PARSER
#define MACHINE_UUID                             "00000000-1337-1337-1337-000000000000"
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
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 0), (Y_MIN_POS + 0), 20 }
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5
#define NOZZLE_PARK_Z_RAISE_MIN                  2

//
// Units
//
#define INCH_MODE_SUPPORT
#define TEMPERATURE_UNITS_SUPPORT

//
// Custom Main Menu
//
#define CUSTOM_MENU_MAIN
#define CUSTOM_MENU_MAIN_ONLY_IDLE
#define CUSTOM_MENU_MAIN_SCRIPT_AUDIBLE_FEEDBACK
#define CUSTOM_MENU_MAIN_SCRIPT_DONE             "M117 Set & Saved"
#define CUSTOM_MENU_MAIN_SCRIPT_RETURN
#define CUSTOM_MENU_MAIN_TITLE                   "Lin Adv Presets"
#define MAIN_MENU_ITEM_1_DESC                    "K0 Off"
#define MAIN_MENU_ITEM_1_GCODE                   "M900 K0\nM500"
#define MAIN_MENU_ITEM_2_DESC                    "K0.2"
#define MAIN_MENU_ITEM_2_GCODE                   "M900 K0.2\nM500"
#define MAIN_MENU_ITEM_3_DESC                    "K0.3"
#define MAIN_MENU_ITEM_3_GCODE                   "M900 K0.3\nM500"
#define MAIN_MENU_ITEM_4_DESC                    "K0.4"
#define MAIN_MENU_ITEM_4_GCODE                   "M900 K0.4\nM500"
#define MAIN_MENU_ITEM_5_DESC                    "K0.5"
#define MAIN_MENU_ITEM_5_GCODE                   "M900 K0.5\nM500"

//
// Advanced Pause
//
#define ADVANCED_PAUSE_FANS_PAUSE
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
#define FILAMENT_UNLOAD_ALL_EXTRUDERS
#define FILAMENT_UNLOAD_PURGE_DELAY              5000
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_UNLOAD_PURGE_RETRACT            13
#define HOME_BEFORE_FILAMENT_CHANGE
#define PARK_HEAD_ON_PAUSE
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_RETRACT_LENGTH                2

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
// Extras
//
#define ARC_P_CIRCLES
#define ARC_SUPPORT
#define BEZIER_CURVE_SUPPORT
#define CANCEL_OBJECTS
#define CNC_WORKSPACE_PLANES
#define EXTRA_FAN_SPEED
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER

//
// Cnc
//
#define CNC_COORDINATE_SYSTEMS
