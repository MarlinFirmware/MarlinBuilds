/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-12-16 at 08:21:12.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(anonymous)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_BTT_SKR_MINI_E3_V3_0

//
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            false

//
// Bed Temp
//
#define DEFAULT_bedKd                            624.59
#define DEFAULT_bedKi                            85.47
#define DEFAULT_bedKp                            462.10
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define CONTROLLERFAN_IDLE_TIME                  60
#define CONTROLLERFAN_SPEED_ACTIVE               255
#define CONTROLLERFAN_SPEED_IDLE                 0
#define CONTROLLERFAN_SPEED_MIN                  0
#define CONTROLLER_FAN_BED_HEATING
#define CONTROLLER_FAN_EDITABLE
#define CONTROLLER_FAN_MENU
#define CONTROLLER_FAN_PIN                       FAN2_PIN
#define E0_AUTO_FAN_PIN                          FAN1_PIN
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_MIN_PWM                              50
#define FAN_SOFT_PWM
#define USE_CONTROLLER_FAN

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           TMC2209
#define E_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            TMC2209
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            TMC2209
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            TMC2209
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
#define X_BED_SIZE                               235
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               235
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                250
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (4*60) }
#define QUICK_HOME
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_X_POINT                    ((X_BED_SIZE - 10) / 2)
#define Z_SAFE_HOMING_Y_POINT                    ((Y_BED_SIZE - 10) / 2)

//
// Endstops
//
#define ENDSTOPPULLUPS
#define ENDSTOP_INTERRUPTS_FEATURE
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Probes
//
#define BLTOUCH
#define NOZZLE_TO_PROBE_OFFSET                   { -39, -12, 0 }
#define PROBE_OFFSET_ZMAX                        10
#define PROBE_OFFSET_ZMIN                        -10
#define PROBING_MARGIN                           10
#define USE_PROBE_FOR_Z_HOMING
#define XY_PROBE_FEEDRATE                        (50*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_MIN_PROBE_REPEATABILITY_TEST
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
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define BABYSTEP_WITHOUT_HOMING
#define BABYSTEP_ZPROBE_OFFSET
#define BOOTSCREEN_TIMEOUT                       3000
#define BOOT_MARLIN_LOGO_SMALL
#define CR10_STOCKDISPLAY
#define ENCODER_100X_STEPS_PER_SEC               130
#define ENCODER_10X_STEPS_PER_SEC                80
#define ENCODER_5X_STEPS_PER_SEC                 30
#define ENCODER_RATE_MULTIPLIER
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define LONG_FILENAME_HOST_SUPPORT
#define M73_REPORT
#define M73_REPORT_SD_ONLY
#define MANUAL_E_MOVES_RELATIVE
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define MENU_HOLLOW_FRAME
#define NO_SD_HOST_DRIVE
#define PLR_ENABLED_DEFAULT                      false
#define POWER_LOSS_MIN_Z_CHANGE                  0.05
#define POWER_LOSS_RECOVERY
#define PROBE_DEPLOY_STOW_MENU
#define PROBE_OFFSET_WIZARD
#define SCROLL_LONG_FILENAMES
#define SDCARD_CONNECTION                        ONBOARD
#define SDCARD_RATHERRECENTFIRST
#define SDCARD_SORT_ALPHA
#define SDSORT_CACHE_NAMES                       true
#define SDSORT_CACHE_VFATS                       2
#define SDSORT_DYNAMIC_RAM                       true
#define SDSORT_FOLDERS                           -1
#define SDSORT_GCODE                             false
#define SDSORT_LIMIT                             40
#define SDSORT_REVERSE                           false
#define SDSORT_USES_RAM                          true
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
#define SOUND_ON_DEFAULT
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define STATUS_BED_ANIM
#define STATUS_CHAMBER_ANIM
#define STATUS_HOTEND_ANIM
#define STATUS_HOTEND_INVERTED
#define ULTIPANEL_FEEDMULTIPLY
#define XYZ_HOLLOW_FRAME

//
// Interface
//
#define ENCODER_PULSES_PER_STEP                  4
#define ENCODER_STEPS_PER_MENU_ITEM              1
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS       2
#define LCD_FEEDBACK_FREQUENCY_HZ                5000
#define LCD_LANGUAGE                             en

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_ACTION_COMMANDS
#define HOST_KEEPALIVE_FEATURE
#define HOST_PROMPT_SUPPORT
#define HOST_STATUS_NOTIFICATIONS
#define PRINTJOB_TIMER_AUTOSTART

//
// Reporting
//
#define AUTO_REPORT_POSITION
#define AUTO_REPORT_TEMPERATURES
#define CAPABILITIES_REPORT
#define EXTENDED_CAPABILITIES_REPORT
#define M114_DETAIL
#define M115_GEOMETRY_REPORT
#define REPORT_FAN_CHANGE

//
// Safety
//
#define EXTRUDE_MAXLENGTH                        1000
#define EXTRUDE_MINTEMP                          180
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
#define BED_MAXTEMP                              120
#define BED_MINTEMP                              0
#define BED_OVERSHOOT                            10
#define HEATER_0_MAXTEMP                         275
#define HEATER_0_MINTEMP                         0
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      255
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       45
#define PREHEAT_1_TEMP_HOTEND                    185
#define PREHEAT_2_FAN_SPEED                      255
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       70
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
#define THERMAL_PROTECTION_BED_PERIOD            180
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    180
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40

//
// Motion
//
#define ADAPTIVE_STEP_SMOOTHING
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define CLASSIC_JERK
#define DEFAULT_ACCELERATION                     500
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 93 }
#define DEFAULT_EJERK                            5.0
#define DEFAULT_MAX_ACCELERATION                 { 500, 500, 100, 1000 }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 5, 25 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             500
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_XJERK                            10.0
#define DEFAULT_YJERK                            10.0
#define DEFAULT_ZJERK                            0.3
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define MIN_STEPS_PER_SEGMENT                    6
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH

//
// Calibrate
//
#define AUTO_BED_LEVELING_BILINEAR
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define ENABLE_LEVELING_FADE_HEIGHT
#define EXTRAPOLATE_BEYOND_GRID
#define G26_MESH_VALIDATION
#define G26_RETRACT_MULTIPLIER                   1.0
#define G26_XY_FEEDRATE                          20
#define G26_XY_FEEDRATE_TRAVEL                   100
#define GRID_MAX_POINTS_X                        3
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
// EEPROM
//
#define EEPROM_AUTO_INIT
#define EEPROM_BOOT_SILENT
#define EEPROM_INIT_NOW
#define EEPROM_SETTINGS

//
// Serial
//
#define ADVANCED_OK
#define BAUDRATE                                 115200
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "Ender-3 V2 Neo BTT SKR Mini E3 3.0"
#define EMERGENCY_PARSER
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_FLOAT_PRECISION                   4
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              2
#define SERIAL_PORT_2                            -1
#define TX_BUFFER_SIZE                           0

//
// PID Temp
//
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
// Hotend Temp
//
#define DEFAULT_Kd                               78.81
#define DEFAULT_Ki                               2.62
#define DEFAULT_Kp                               28.72
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Media
//
#define SDSUPPORT

//
// TMC_Smart
//
#define CHOPPER_TIMING                           CHOPPER_DEFAULT_12V
#define E0_CHAIN_POS                             -1
#define E0_CURRENT                               650
#define E0_HYBRID_THRESHOLD                      30
#define E0_MICROSTEPS                            16
#define E0_RSENSE                                0.11
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
#define STEALTHCHOP_E
#define STEALTHCHOP_XY
#define STEALTHCHOP_Z
#define U_HYBRID_THRESHOLD                       3
#define V_HYBRID_THRESHOLD                       3
#define W_HYBRID_THRESHOLD                       3
#define X2_HYBRID_THRESHOLD                      100
#define X_CHAIN_POS                              -1
#define X_CURRENT                                580
#define X_CURRENT_HOME                           X_CURRENT
#define X_HYBRID_THRESHOLD                       100
#define X_MICROSTEPS                             16
#define X_RSENSE                                 0.11
#define Y2_HYBRID_THRESHOLD                      100
#define Y_CHAIN_POS                              -1
#define Y_CURRENT                                580
#define Y_CURRENT_HOME                           Y_CURRENT
#define Y_HYBRID_THRESHOLD                       100
#define Y_MICROSTEPS                             16
#define Y_RSENSE                                 0.11
#define Z2_HYBRID_THRESHOLD                      3
#define Z3_HYBRID_THRESHOLD                      3
#define Z4_HYBRID_THRESHOLD                      3
#define Z_CHAIN_POS                              -1
#define Z_CURRENT                                580
#define Z_CURRENT_HOME                           Z_CURRENT
#define Z_HYBRID_THRESHOLD                       3
#define Z_MICROSTEPS                             16
#define Z_RSENSE                                 0.11

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
#define PARK_HEAD_ON_PAUSE
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
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER