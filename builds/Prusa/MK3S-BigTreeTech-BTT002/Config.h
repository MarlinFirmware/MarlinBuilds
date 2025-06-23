/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 12:08:32.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(thisiskeithb & codiac2600: BTT002 MK3S/TMC2209s)"
#define MK3_FAN_PINS

//
// Machine
//
#define MOTHERBOARD                              BOARD_BTT_BTT002_V1_0

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

//
// Extruder
//
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            false
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define LIN_ADVANCE
#define ADVANCE_K                                0.0

//
// Geometry
//
#define X_BED_SIZE                               255
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               212.5
#define Y_MIN_POS                                -4
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                210
#define MIN_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_X
#define MIN_SOFTWARE_ENDSTOP_Y
#define MIN_SOFTWARE_ENDSTOP_Z
#define MAX_SOFTWARE_ENDSTOP_X
#define MAX_SOFTWARE_ENDSTOP_Y
#define MAX_SOFTWARE_ENDSTOP_Z
#define SOFT_ENDSTOPS_MENU_ITEM

//
// Homing
//
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (5*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 0, 0, 2 }
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define MANUAL_Y_HOME_POS                        -2.2
#define EDITABLE_HOMING_FEEDRATE
#define Z_SAFE_HOMING
#define MANUAL_Z_HOME_POS                        0.2
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER
#define MANUAL_X_HOME_POS                        0
#define HOMING_BACKOFF_POST_MM                   { 2, 2, 2 }

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 100, 100, 3200/8, 280 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 200, 200, 30, 80 }
#define DEFAULT_MAX_ACCELERATION                 { 1250, 1250, 400, 4000 }
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.02
#define DEFAULT_ACCELERATION                     1250
#define DEFAULT_TRAVEL_ACCELERATION              1250
#define DEFAULT_RETRACT_ACCELERATION             1250
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define JD_HANDLE_SMALL_SEGMENTS
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_E
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define EDITABLE_STEPS_PER_UNIT
#define S_CURVE_ACCELERATION
#define MULTISTEPPING_LIMIT                      16
#define ADAPTIVE_STEP_SMOOTHING

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define ENDSTOP_INTERRUPTS_FEATURE
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_DISTANCE_MM              2
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_STATE                         HIGH
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FIL_RUNOUT_PULLUP
#define NUM_RUNOUT_SENSORS                       1

//
// Probes
//
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_CLEARANCE_BETWEEN_PROBES               2
#define Z_CLEARANCE_DEPLOY_PROBE                 0
#define Z_CLEARANCE_MULTI_PROBE                  1
#define EXTRA_PROBING                            1
#define MULTIPLE_PROBING                         2
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -2
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define FIX_MOUNTED_PROBE
#define NOZZLE_TO_PROBE_OFFSET                   { 23, 5, 0 }
#define Z_PROBE_FEEDRATE_FAST                    (5*4*60)
#define PTC_PROBE
#define PTC_PROBE_COUNT                          10
#define PTC_PROBE_ZOFFS                          { 0 }
#define PTC_BED_ZOFFS                            { 0 }
#define PTC_BED
#define PTC_PARK_POS                             { 245, 6, 105 }
#define PTC_BED_RES                              5
#define PTC_PROBE_HEATING_OFFSET                 0.5
#define PTC_PROBE_POS                            { 127.5, 106.3 }
#define PTC_PROBE_START                          30
#define PTC_PROBE_TEMP                           30
#define PTC_BED_START                            60
#define PTC_PROBE_RES                            5
#define PTC_BED_COUNT                            10

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            8
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            5
#define TEMP_HYSTERESIS                          8
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         310
#define PREHEAT_1_TEMP_HOTEND                    200
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      255
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define TEMP_BED_HYSTERESIS                      8
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          3
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              3
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define TEMP_SENSOR_BED                          1
#define THERMAL_PROTECTION_BED_HYSTERESIS        8
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define TEMP_SENSOR_PROBE                        1
#define PREHEAT_2_FAN_SPEED                      255
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              135
#define PREHEAT_2_LABEL                          "PETG"
#define PREHEAT_2_TEMP_BED                       80
#define PREHEAT_2_TEMP_HOTEND                    240
#define AUTOTEMP_MIN                             210
#define TEMP_TUNING_MAINTAIN_FAN
#define AUTOTEMP_MAX                             250
#define ADAPTIVE_FAN_SLOWING
#define AUTOTEMP_FACTOR                          0.1f
#define THERMAL_PROTECTION_BED_PERIOD            20

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_Kd                               56.2300
#define DEFAULT_Ki                               1.1625
#define DEFAULT_Kp                               16.1300

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
#define DEFAULT_bedKi                            4.30
#define PIDTEMPBED
#define DEFAULT_bedKd                            924.76
#define DEFAULT_bedKp                            126.13

//
// Fans
//
#define E0_AUTO_FAN_PIN                          FAN1_PIN
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_SOFT_PWM
#define FAN_MIN_PWM                              80
#define FAN_KICKSTART_TIME                       100

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                2
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         60
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define HOME_BEFORE_FILAMENT_CHANGE
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         40
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_LENGTH            120
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       2
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          20
#define ADVANCED_PAUSE_PURGE_LENGTH              60
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_PURGE_RETRACT            2
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define GRID_MAX_POINTS_X                        7
#define LCD_PROBE_Z_RANGE                        4
#define AUTO_BED_LEVELING_BILINEAR
#define RESTORE_LEVELING_AFTER_G28
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define EXTRAPOLATE_BEYOND_GRID
#define BILINEAR_SUBDIVISIONS                    3
#define MESH_EDIT_Z_STEP                         0.025
#define LCD_BED_LEVELING
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define ABL_BILINEAR_SUBDIVISION
#define MESH_EDIT_MENU
#define MECHANICAL_GANTRY_CALIBRATION
#define GANTRY_CALIBRATION_COMMANDS_POST         "G28"
#define GANTRY_CALIBRATION_CURRENT               (Z_CURRENT/2)
#define GANTRY_CALIBRATION_FEEDRATE              500
#define GANTRY_CALIBRATION_EXTRA_HEIGHT          15

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
#define REPRAP_DISCOUNT_SMART_CONTROLLER
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define DOUBLECLICK_MAX_INTERVAL                 800
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define SDCARD_SORT_ALPHA
#define SCROLL_LONG_FILENAMES
#define BABYSTEPPING
#define POWER_LOSS_STATE                         LOW
#define POWER_LOSS_RECOVERY
#define SDCARD_CONNECTION                        LCD
#define SDSORT_USES_STACK                        false
#define SDSORT_REVERSE                           false
#define MANUAL_E_MOVES_RELATIVE
#define MOVE_Z_WHEN_IDLE
#define SD_DETECT_STATE                          HIGH
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SDSORT_LIMIT                             40
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XYE"
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define SDSORT_DYNAMIC_RAM                       false
#define SHOW_ELAPSED_TIME
#define SOUND_ON_DEFAULT
#define SD_PROCEDURE_DEPTH                       1
#define FLOW_EDIT_MAX                            999
#define BABYSTEP_ZPROBE_OFFSET
#define FLOW_EDIT_MIN                            10
#define PLR_ENABLED_DEFAULT                      false
#define PROBE_OFFSET_WIZARD
#define SDSORT_CACHE_VFATS                       2
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define SDSORT_CACHE_NAMES                       true
#define MOVE_Z_IDLE_MULTIPLICATOR                1
#define FINE_MANUAL_MOVE                         0.025
#define POWER_LOSS_PURGE_LEN                     20
#define BABYSTEP_MULTIPLICATOR_XY                1
#define LONG_FILENAME_HOST_SUPPORT
#define SDSORT_GCODE                             false
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define SDSORT_USES_RAM                          true
#define LCD_TIMEOUT_TO_STATUS                    15000
#define SDSORT_FOLDERS                           -1
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define POWER_LOSS_MIN_Z_CHANGE                  0.05

//
// Interface
//
#define DISPLAY_CHARSET_HD44780                  JAPANESE
#define LCD_INFO_SCREEN_STYLE                    1
#define LCD_LANGUAGE                             en
#define ENCODER_STEPS_PER_MENU_ITEM              1
#define SPEAKER
#define ENCODER_PULSES_PER_STEP                  4
#define INDIVIDUAL_AXIS_HOMING_MENU

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { (X_MAX_POS - 10), (Y_MIN_POS + 10), 20 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        32
#define FASTER_GCODE_PARSER
#define STARTUP_COMMANDS                         "M17 Z"
#define DEBUG_FLAGS_GCODE

//
// Serial
//
#define SERIAL_PORT                              3
#define BAUDRATE                                 115200
#define BUFSIZE                                  32
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           32
#define SERIAL_PORT_2                            -1
#define CUSTOM_MACHINE_NAME                      "MK3S"
#define EMERGENCY_PARSER

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
#define EXTRUDE_MAXLENGTH                        200
#define EXTRUDE_MINTEMP                          175
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25

//
// TMC_Smart
//
#define CHOPPER_TIMING                           CHOPPER_DEFAULT_24V
#define Y_STALL_SENSITIVITY                      100
#define X2_STALL_SENSITIVITY                     X_STALL_SENSITIVITY
#define INTERPOLATE                              true
#define IMPROVE_HOMING_RELIABILITY
#define E0_HYBRID_THRESHOLD                      30
#define Z_RSENSE                                 0.11
#define HOLD_MULTIPLIER                          0.5
#define K_HYBRID_THRESHOLD                       3
#define X_CHAIN_POS                              -1
#define Y_RSENSE                                 0.11
#define U_HYBRID_THRESHOLD                       3
#define E3_HYBRID_THRESHOLD                      30
#define Z_MICROSTEPS                             16
#define STEALTHCHOP_E
#define STEALTHCHOP_Z
#define Z_CURRENT_HOME                           Z_CURRENT
#define X_RSENSE                                 0.11
#define Y_CHAIN_POS                              -1
#define X_HYBRID_THRESHOLD                       100
#define E6_HYBRID_THRESHOLD                      30
#define X_CURRENT_HOME                           ((X_CURRENT) / 2)
#define Z4_HYBRID_THRESHOLD                      3
#define X_STALL_SENSITIVITY                      90
#define Z_CHAIN_POS                              -1
#define J_HYBRID_THRESHOLD                       3
#define E0_RSENSE                                0.11
#define EDITABLE_HOMING_CURRENT
#define Z_CURRENT                                600
#define E2_HYBRID_THRESHOLD                      30
#define Y_MICROSTEPS                             16
#define W_HYBRID_THRESHOLD                       3
#define SENSORLESS_HOMING
#define E5_HYBRID_THRESHOLD                      30
#define E0_CHAIN_POS                             -1
#define Z3_HYBRID_THRESHOLD                      3
#define X2_HYBRID_THRESHOLD                      100
#define Z_HYBRID_THRESHOLD                       3
#define X_CURRENT                                500
#define I_HYBRID_THRESHOLD                       3
#define EDGE_STEPPING
#define Y_CURRENT                                600
#define E1_HYBRID_THRESHOLD                      30
#define STEALTHCHOP_XY
#define Y2_STALL_SENSITIVITY                     Y_STALL_SENSITIVITY
#define Y2_HYBRID_THRESHOLD                      100
#define E0_MICROSTEPS                            32
#define Y_CURRENT_HOME                           ((Y_CURRENT) / 2)
#define X_MICROSTEPS                             16
#define V_HYBRID_THRESHOLD                       3
#define E4_HYBRID_THRESHOLD                      30
#define Z2_HYBRID_THRESHOLD                      3
#define E0_CURRENT                               550
#define Y_HYBRID_THRESHOLD                       100
#define E7_HYBRID_THRESHOLD                      30
