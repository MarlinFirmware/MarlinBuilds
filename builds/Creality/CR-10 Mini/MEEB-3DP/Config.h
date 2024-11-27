/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-11-26 at 21:31:40.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(ccrobot-online, MEEB_3DP)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_CCROBOT_MEEB_3DP

//
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define HOTEND_IDLE_BED_TARGET                   0
#define HOTEND_IDLE_MIN_TRIGGER                  100
#define HOTEND_IDLE_NOZZLE_TARGET                0
#define HOTEND_IDLE_TIMEOUT
#define HOTEND_IDLE_TIMEOUT_SEC                  (3*60)
#define INVERT_E0_DIR                            true

//
// Bed Temp
//
#define DEFAULT_bedKd                            452.51
#define DEFAULT_bedKi                            70.15
#define DEFAULT_bedKp                            356.34
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define CHAMBER_AUTO_FAN_PIN                     -1
#define CONTROLLERFAN_IDLE_TIME                  60
#define CONTROLLERFAN_SPEED_ACTIVE               255
#define CONTROLLERFAN_SPEED_IDLE                 127
#define CONTROLLERFAN_SPEED_MIN                  0
#define CONTROLLER_FAN_BED_HEATING
#define CONTROLLER_FAN_EDITABLE
#define CONTROLLER_FAN_MENU
#define CONTROLLER_FAN_PIN                       FAN2_PIN
#define COOLER_AUTO_FAN_PIN                      -1
#define E0_AUTO_FAN_PIN                          FAN1_PIN
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_KICKSTART_TIME                       200
#define USE_CONTROLLER_FAN

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           TMC2208
#define E_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            TMC2208
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            TMC2208
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            TMC2208
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
#define Y_BED_SIZE                               225
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                290
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (25*60) }
#define NO_MOTION_BEFORE_HOMING
#define QUICK_HOME
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_CLEARANCE_FOR_HOMING                   0
#define Z_HOME_DIR                               -1
#define Z_IDLE_HEIGHT                            Z_MAX_POS
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER

//
// Endstops
//
#define ENDSTOPPULLUPS
#define ENDSTOP_INTERRUPTS_FEATURE
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// LCD
//
#define BABYSTEPPING
#define BABYSTEP_DISPLAY_TOTAL
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_MULTIPLICATOR_Z                 10
#define BEEP_ON_FEEDRATE_CHANGE
#define BOOTSCREEN_TIMEOUT                       500
#define BOOT_MARLIN_LOGO_ANIMATED
#define BOOT_MARLIN_LOGO_SMALL
#define CR10_STOCKDISPLAY
#define CUSTOM_STATUS_SCREEN_IMAGE
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define FEEDRATE_CHANGE_BEEP_DURATION            10
#define FEEDRATE_CHANGE_BEEP_FREQUENCY           440
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define LCD_DECIMAL_SMALL_XY
#define LCD_INFO_MENU
#define LCD_SHOW_E_TOTAL
#define LCD_TIMEOUT_TO_STATUS                    15000
#define MANUAL_E_MOVES_RELATIVE
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define MARLIN_BRICKOUT
#define MARLIN_INVADERS
#define MARLIN_SNAKE
#define MENU_HOLLOW_FRAME
#define MOVE_Z_IDLE_MULTIPLICATOR                10
#define MOVE_Z_WHEN_IDLE
#define PRINT_PROGRESS_SHOW_DECIMALS
#define SET_PROGRESS_MANUALLY
#define SET_PROGRESS_PERCENT
#define SET_REMAINING_TIME
#define SHOW_BOOTSCREEN
#define SHOW_CUSTOM_BOOTSCREEN
#define SHOW_ELAPSED_TIME
#define SHOW_PROGRESS_PERCENT
#define SHOW_REMAINING_TIME
#define SOUND_ON_DEFAULT
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define STATUS_BED_ANIM
#define STATUS_CHAMBER_ANIM
#define STATUS_FAN_FRAMES                        4
#define STATUS_HEAT_PERCENT
#define STATUS_HOTEND_ANIM
#define STATUS_HOTEND_INVERTED
#define STATUS_MESSAGE_SCROLLING
#define TURBO_BACK_MENU_ITEM
#define ULTIPANEL_FEEDMULTIPLY
#define USE_BIG_EDIT_FONT
#define XYZ_HOLLOW_FRAME

//
// Interface
//
#define INDIVIDUAL_AXIS_HOMING_MENU
#define LCD_LANGUAGE                             en

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
#define M115_GEOMETRY_REPORT

//
// Temperature
//
#define AUTOTEMP
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_MAXTEMP                              100
#define BED_MINTEMP                              5
#define BED_OVERSHOOT                            10
#define CHAMBER_CHECK_INTERVAL                   5000
#define COOLER_OVERSHOOT                         2
#define DUMMY_THERMISTOR_998_VALUE               25
#define DUMMY_THERMISTOR_999_VALUE               100
#define HEATER_0_MAXTEMP                         275
#define HEATER_0_MINTEMP                         5
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       70
#define PREHEAT_1_TEMP_CHAMBER                   35
#define PREHEAT_1_TEMP_HOTEND                    180
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       110
#define PREHEAT_2_TEMP_CHAMBER                   35
#define PREHEAT_2_TEMP_HOTEND                    240
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      10
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
// Safety
//
#define EXTRUDE_MAXLENGTH                        500
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED
#define THERMAL_PROTECTION_HOTENDS
#define USE_WATCHDOG

//
// EEPROM
//
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Motion
//
#define ADAPTIVE_STEP_SMOOTHING
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_ACCELERATION                     3000
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 100, 97.5 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 100, 10000 }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 75, 300 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              3000
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             false
#define JD_HANDLE_SMALL_SEGMENTS
#define JUNCTION_DEVIATION_MM                    0.013
#define MIN_STEPS_PER_SEGMENT                    6
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         8
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define S_CURVE_ACCELERATION

//
// Stats
//
#define PRINTCOUNTER
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define SERVICE_WARNING_BUZZES                   3

//
// Calibrate
//
#define BED_TRAMMING_HEIGHT                      0.0
#define BED_TRAMMING_INCLUDE_CENTER
#define BED_TRAMMING_INSET_LFRB                  { 30, 30, 30, 30 }
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define BED_TRAMMING_Z_HOP                       4.0
#define LCD_BED_TRAMMING

//
// Serial
//
#define BAUDRATE                                 115200
#define BAUD_RATE_GCODE
#define BUFSIZE                                  32
#define CUSTOM_MACHINE_NAME                      "CR-10 Mini"
#define MACHINE_UUID                             "9cddc618-9fca-11ea-bb37-0242ac130002"
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define RX_BUFFER_SIZE                           32
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              -1
#define SERIAL_PORT_2                            1
#define TX_BUFFER_SIZE                           32

//
// PID Temp
//
#define PID_AUTOTUNE_MENU
#define PID_EDIT_MENU
#define PID_FUNCTIONAL_RANGE                     10

//
// Hotend Temp
//
#define DEFAULT_Kd                               75.35
#define DEFAULT_Ki                               2.11
#define DEFAULT_Kp                               25.20
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Nozzle Park
//
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 0), (Y_MIN_POS + 0), 40 }
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   25
#define NOZZLE_PARK_Z_RAISE_MIN                  2

//
// Custom Main Menu
//
#define CUSTOM_MENU_MAIN
#define CUSTOM_MENU_MAIN_ONLY_IDLE
#define CUSTOM_MENU_MAIN_SCRIPT_AUDIBLE_FEEDBACK
#define CUSTOM_MENU_MAIN_SCRIPT_DONE             "M117 User Script Done"
#define MAIN_MENU_ITEM_1_DESC                    "Home & UBL Info"
#define MAIN_MENU_ITEM_1_GCODE                   "G28\nG29 W"
#define MAIN_MENU_ITEM_2_DESC                    "Preheat for " PREHEAT_1_LABEL
#define MAIN_MENU_ITEM_2_GCODE                   "M140 S" STRINGIFY(PREHEAT_1_TEMP_BED) "\nM104 S" STRINGIFY(PREHEAT_1_TEMP_HOTEND)
#define MAIN_MENU_ITEM_3_DESC                    "Preheat for " PREHEAT_2_LABEL
#define MAIN_MENU_ITEM_3_GCODE                   "M140 S" STRINGIFY(PREHEAT_2_TEMP_BED) "\nM104 S" STRINGIFY(PREHEAT_2_TEMP_HOTEND)
#define MAIN_MENU_ITEM_4_DESC                    "Heat Bed/Home/Level"
#define MAIN_MENU_ITEM_4_GCODE                   "M140 S" STRINGIFY(PREHEAT_2_TEMP_BED) "\nG28\nG29"
#define MAIN_MENU_ITEM_5_DESC                    "Home & Info"
#define MAIN_MENU_ITEM_5_GCODE                   "G28\nM503"

//
// TMC_Smart
//
#define CHOPPER_TIMING                           CHOPPER_DEFAULT_12V
#define CURRENT_STEP_DOWN                        50
#define E0_CHAIN_POS                             -1
#define E0_CURRENT                               1000
#define E0_HYBRID_THRESHOLD                      35
#define E0_MICROSTEPS                            16
#define E0_RSENSE                                0.1
#define E1_HYBRID_THRESHOLD                      30
#define E2_HYBRID_THRESHOLD                      30
#define E3_HYBRID_THRESHOLD                      30
#define E4_HYBRID_THRESHOLD                      30
#define E5_HYBRID_THRESHOLD                      30
#define E6_HYBRID_THRESHOLD                      30
#define E7_HYBRID_THRESHOLD                      30
#define EDGE_STEPPING
#define HOLD_MULTIPLIER                          0.5
#define INTERPOLATE                              true
#define I_HYBRID_THRESHOLD                       3
#define J_HYBRID_THRESHOLD                       3
#define K_HYBRID_THRESHOLD                       3
#define MONITOR_DRIVER_STATUS
#define REPORT_CURRENT_CHANGE
#define STEALTHCHOP_XY
#define STEALTHCHOP_Z
#define STOP_ON_ERROR
#define TMC_DEBUG
#define TMC_HOME_PHASE                           { 896, 896, 896 }
#define U_HYBRID_THRESHOLD                       3
#define V_HYBRID_THRESHOLD                       3
#define W_HYBRID_THRESHOLD                       3
#define X2_HYBRID_THRESHOLD                      100
#define X_CHAIN_POS                              -1
#define X_CURRENT                                1000
#define X_CURRENT_HOME                           X_CURRENT
#define X_HYBRID_THRESHOLD                       130
#define X_MICROSTEPS                             16
#define X_RSENSE                                 0.1
#define Y2_HYBRID_THRESHOLD                      100
#define Y_CHAIN_POS                              -1
#define Y_CURRENT                                1000
#define Y_CURRENT_HOME                           Y_CURRENT
#define Y_HYBRID_THRESHOLD                       130
#define Y_MICROSTEPS                             16
#define Y_RSENSE                                 0.1
#define Z2_HYBRID_THRESHOLD                      3
#define Z3_HYBRID_THRESHOLD                      3
#define Z4_HYBRID_THRESHOLD                      3
#define Z_CHAIN_POS                              -1
#define Z_CURRENT                                1000
#define Z_CURRENT_HOME                           Z_CURRENT
#define Z_HYBRID_THRESHOLD                       35
#define Z_MICROSTEPS                             4
#define Z_RSENSE                                 0.1

//
// Advanced Pause
//
#define ADVANCED_PAUSE_CONTINUOUS_PURGE
#define ADVANCED_PAUSE_FANS_PAUSE
#define ADVANCED_PAUSE_FEATURE
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define ADVANCED_PAUSE_PURGE_LENGTH              50
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         200
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          30
#define FILAMENT_CHANGE_UNLOAD_LENGTH            450
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
// Extras
//
#define ARC_SUPPORT
#define BEZIER_CURVE_SUPPORT
#define CANCEL_OBJECTS
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
#define SAVED_POSITIONS                          12

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER
#define GCODE_MACROS
#define GCODE_MACROS_SLOTS                       5
#define GCODE_MACROS_SLOT_SIZE                   50
#define STARTUP_COMMANDS                         "M300 S5000 P300"

//
// Security
//
#define EXPECTED_PRINTER_CHECK

//
// Photo
//
#define PHOTO_GCODE
#define PHOTO_SWITCH_MS                          50
