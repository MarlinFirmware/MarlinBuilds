/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2026-11-26 at 07:31:30.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Boris Sedov)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_ANET_10

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS
#define EEPROM_AUTO_INIT

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
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             true
#define INVERT_E0_DIR                            true

//
// Extruder
//
#define EXTRUDERS                                1
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75

//
// Geometry
//
#define X_BED_SIZE                               220
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               270
#define Y_MIN_POS                                -5
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                290
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
#define HOMING_FEEDRATE_MM_M                     { (40*60), (40*60), (4*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define Z_CLEARANCE_FOR_HOMING                   10
#define HOME_Y_BEFORE_X
#define QUICK_HOME

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 95 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 5, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 100, 10000 }
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.04
#define DEFAULT_ACCELERATION                     1000
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_RETRACT_ACCELERATION             1000
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
#define S_CURVE_ACCELERATION
#define EDITABLE_STEPS_PER_UNIT
#define ADAPTIVE_STEP_SMOOTHING
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
#define XY_PROBE_FEEDRATE                        (40*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            12
#define THERMAL_PROTECTION_PERIOD                20
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         305
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define BED_CHECK_INTERVAL                       5000
#define THERMAL_PROTECTION_BED_HYSTERESIS        5
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    80
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        30
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              120
#define ADAPTIVE_FAN_SLOWING
#define TEMP_TUNING_MAINTAIN_FAN
#define THERMAL_PROTECTION_BED_PERIOD            40

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_KP                               22.20
#define DEFAULT_KI                               1.08
#define DEFAULT_KD                               114.00

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

//
// Calibrate
//
#define MESH_INSET                               10
#define SEGMENT_LEVELED_MOVES
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define BED_TRAMMING_HEIGHT                      0.0
#define LCD_PROBE_Z_RANGE                        5
#define LCD_BED_LEVELING
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define GRID_MAX_POINTS_X                        3
#define LEVELED_SEGMENT_LENGTH                   5.0
#define BED_TRAMMING_INSET_LFRB                  { 30, 30, 30, 30 }
#define MESH_EDIT_Z_STEP                         0.025
#define MAX_SAVED_MESHES                         100
#define MESH_BED_LEVELING
#define RESTORE_LEVELING_AFTER_G28
#define BED_TRAMMING_INCLUDE_CENTER
#define MANUAL_PROBE_START_Z                     0.2
#define MESH_EDIT_MENU
#define LCD_BED_TRAMMING
#define BED_TRAMMING_Z_HOP                       5.0

//
// Media
//
#define SDSUPPORT

//
// LCD
//
#define SHOW_BOOTSCREEN
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                40
#define ENCODER_RATE_MULTIPLIER
#define ANET_FULL_GRAPHICS_LCD
#define ST7920_DELAY_1                           DELAY_NS(250)
#define ST7920_DELAY_3                           DELAY_NS(250)
#define ST7920_DELAY_2                           DELAY_NS(250)
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define SOUND_ON_DEFAULT
#define FINE_MANUAL_MOVE                         0.025
#define SD_PROCEDURE_DEPTH                       1
#define ULTIPANEL_FEEDMULTIPLY
#define MENU_HOLLOW_FRAME
#define FLOW_EDIT_MAX                            999
#define STATUS_CHAMBER_ANIM
#define FLOW_EDIT_MIN                            10
#define BOOT_MARLIN_LOGO_SMALL
#define STATUS_BED_ANIM
#define STATUS_HOTEND_INVERTED
#define SHOW_ELAPSED_TIME
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SD_MAX_READ_ERRORS                       5
#define MANUAL_E_MOVES_RELATIVE
#define XYZ_HOLLOW_FRAME
#define REINIT_NOISY_LCD
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define TURBO_BACK_MENU_ITEM
#define LCD_TIMEOUT_TO_STATUS                    60000
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define STATUS_HOTEND_ANIM
#define EVENT_GCODE_SD_ABORT                     "G27"
#define SDCARD_RATHERRECENTFIRST

//
// Interface
//
#define LCD_LANGUAGE                             en
#define SLIM_LCD_MENUS

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_POINT                        { (X_MIN_POS), (Y_MAX_POS), 10 }
#define NOZZLE_PARK_Z_FEEDRATE                   5

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define NO_HOME_OFFSETS
#define NO_WORKSPACE_OFFSETS
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
#define HOST_STATUS_NOTIFICATIONS

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
#define EXTRUDE_MAXLENGTH                        400
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED

//
// Volumetrics
//
#define NO_VOLUMETRICS

//
// Temperature Presets
//
#define PREHEAT_1_TEMP_HOTEND                    200
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       100
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_TEMP_HOTEND                    250

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
#define TEMP_SENSOR_BED                          5

//
// Baby-Stepping
//
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define DOUBLECLICK_MAX_INTERVAL                 2000
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define BABYSTEPPING
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_ALWAYS_AVAILABLE
