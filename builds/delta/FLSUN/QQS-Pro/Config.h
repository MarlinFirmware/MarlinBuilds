/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 11:31:52.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Foxies-CSTL, QQS-Pro)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_FLSUN_HISPEED

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

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

//
// Extruder
//
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            true
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75

//
// Geometry
//
#define X_BED_SIZE                               ((PRINTABLE_RADIUS) * 2)
#define X_MIN_POS                                -(PRINTABLE_RADIUS)
#define X_MAX_POS                                PRINTABLE_RADIUS
#define Y_BED_SIZE                               ((PRINTABLE_RADIUS) * 2)
#define Y_MIN_POS                                -(PRINTABLE_RADIUS)
#define Y_MAX_POS                                PRINTABLE_RADIUS
#define Z_MIN_POS                                0
#define Z_MAX_POS                                DELTA_HEIGHT
#define MIN_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_Z
#define MAX_SOFTWARE_ENDSTOP_Z
#define SOFT_ENDSTOPS_MENU_ITEM

//
// Homing
//
#define X_HOME_DIR                               1
#define Y_HOME_DIR                               1
#define Z_HOME_DIR                               1
#define HOMING_FEEDRATE_MM_M                     { (70*60), (70*60), (70*60) }
#define HOMING_BUMP_DIVISOR                      { 10, 10, 10 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 5 }
#define MANUAL_Z_HOME_POS                        DELTA_HEIGHT
#define BED_CENTER_AT_0_0

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { DEFAULT_XYZ_STEPS_PER_UNIT, DEFAULT_XYZ_STEPS_PER_UNIT, DEFAULT_XYZ_STEPS_PER_UNIT, 396 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 250, 250, 250, 210 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 3000, 3000 }
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             false
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define DEFAULT_ACCELERATION                     3000
#define DEFAULT_TRAVEL_ACCELERATION              3000
#define DEFAULT_RETRACT_ACCELERATION             1500
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    1
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_EJERK                            5.0
#define DEFAULT_STEPPER_TIMEOUT_SEC              (2*60)
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_E
#define DEFAULT_ZJERK                            DEFAULT_XJERK
#define XYZ_BELT_PITCH                           2
#define XYZ_FULL_STEPS_PER_ROTATION              200
#define CLASSIC_JERK
#define EDITABLE_STEPS_PER_UNIT
#define XYZ_PULLEY_TEETH                         16
#define DEFAULT_YJERK                            DEFAULT_XJERK
#define XYZ_MICROSTEPS                           16
#define S_CURVE_ACCELERATION
#define DEFAULT_XJERK                            10.0
#define DEFAULT_XYZ_STEPS_PER_UNIT               ((XYZ_FULL_STEPS_PER_ROTATION) * (XYZ_MICROSTEPS) / double(XYZ_BELT_PITCH) / double(XYZ_PULLEY_TEETH))
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define ENDSTOPPULLUPS
#define Y_MAX_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            LOW
#define X_MAX_ENDSTOP_HIT_STATE                  HIGH
#define Z_MAX_ENDSTOP_HIT_STATE                  HIGH

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_STATE                         LOW
#define FIL_RUNOUT_ENABLED_DEFAULT               false
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FIL_RUNOUT_PULLUP
#define NUM_RUNOUT_SENSORS                       1

//
// Probes
//
#define PROBING_MARGIN                           15
#define XY_PROBE_FEEDRATE                        (66*60)
#define Z_CLEARANCE_BETWEEN_PROBES               15
#define Z_CLEARANCE_DEPLOY_PROBE                 20
#define Z_CLEARANCE_MULTI_PROBE                  5
#define PROBE_OFFSET_ZMAX                        20
#define PROBE_OFFSET_ZMIN                        -20
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define MULTIPLE_PROBING                         2
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -4
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 4)
#define FIX_MOUNTED_PROBE
#define NOZZLE_TO_PROBE_OFFSET                   { 0, 0, -16.2 }
#define Z_PROBE_FEEDRATE_FAST                    (40*60)
#define PROBING_BED_TEMP                         60
#define PAUSE_BEFORE_DEPLOY_STOW
#define PREHEAT_BEFORE_PROBING

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            6
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define PREHEAT_1_TEMP_HOTEND                    200
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      200
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define TEMP_SENSOR_BED                          1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define PREHEAT_3_TEMP_CHAMBER                   35
#define PREHEAT_4_TEMP_CHAMBER                   35
#define PREHEAT_3_FAN_SPEED                      0
#define PREHEAT_4_TEMP_HOTEND                    250
#define PREHEAT_3_TEMP_BED                       80
#define PREHEAT_4_LABEL                          "ABS"
#define PREHEAT_3_LABEL                          "PETG"
#define PREHEAT_3_TEMP_HOTEND                    240
#define PREHEAT_4_FAN_SPEED                      0
#define PREHEAT_2_FAN_SPEED                      0
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              120
#define PREHEAT_4_TEMP_BED                       90
#define PREHEAT_2_LABEL                          "TPU"
#define PREHEAT_2_TEMP_BED                       50
#define PREHEAT_2_TEMP_HOTEND                    230
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
#define DEFAULT_Kd                               93.8127
#define DEFAULT_Ki                               1.2515
#define DEFAULT_Kp                               21.6708

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     30
#define PID_AUTOTUNE_MENU
#define PID_EDIT_MENU

//
// Bed Temp
//
#define MAX_BED_POWER                            255
#define DEFAULT_bedKi                            15.93
#define PIDTEMPBED
#define DEFAULT_bedKd                            288.25
#define DEFAULT_bedKp                            82.98

//
// Fans
//
#define SOFT_PWM_SCALE                           1
#define E0_AUTO_FAN_PIN                          -1
#define FAN_SOFT_PWM

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                3
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         730
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             30
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       20
#define FILAMENT_CHANGE_UNLOAD_LENGTH            850
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          20
#define ADVANCED_PAUSE_PURGE_LENGTH              50
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_PURGE_RETRACT            13
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          30
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define MESH_INSET                               15
#define GRID_MAX_POINTS_X                        8
#define UBL_SAVE_ACTIVE_ON_M500
#define RESTORE_LEVELING_AFTER_G28
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define AUTO_BED_LEVELING_UBL
#define EVENT_GCODE_AFTER_G29                    "G28"
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define UBL_MESH_EDIT_MOVES_Z
#define MANUAL_PROBE_START_Z                     0.2

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
#define TOUCH_OFFSET_X                           -30
#define TOUCH_OFFSET_Y                           254
#define TOUCH_SCREEN
#define BUTTON_DELAY_EDIT                        50
#define COMPACT_MARLIN_BOOT_LOGO
#define TFT_COLOR_UI
#define TOUCH_CALIBRATION_AUTO_SAVE
#define MKS_ROBIN_TFT32
#define TOUCH_SCREEN_CALIBRATION
#define TOUCH_CALIBRATION_X                      12033
#define TOUCH_CALIBRATION_Y                      -9047
#define TFT_THEME                                BLACK_MARLIN
#define BUTTON_DELAY_MENU                        250
#define TFT_FONT                                 NOTOSANS
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define PLR_ENABLED_DEFAULT                      false
#define MANUAL_FEEDRATE_XYZ                      50*60
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define LCD_LANGUAGE_3                           de
#define LCD_LANGUAGE_4                           es
#define LCD_LANGUAGE_5                           it
#define SCROLL_LONG_FILENAMES
#define BABYSTEPPING
#define POWER_LOSS_RECOVERY
#define MANUAL_E_MOVES_RELATIVE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define LCD_LANGUAGE_2                           fr
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28"
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define SHOW_ELAPSED_TIME
#define POWER_LOSS_PIN                           -1
#define SOUND_ON_DEFAULT
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_REMAINING_TIME
#define SET_REMAINING_TIME
#define FLOW_EDIT_MAX                            999
#define BABYSTEP_ZPROBE_OFFSET
#define FLOW_EDIT_MIN                            10
#define PROBE_OFFSET_WIZARD
#define MANUAL_FEEDRATE                          { MANUAL_FEEDRATE_XYZ, MANUAL_FEEDRATE_XYZ, MANUAL_FEEDRATE_XYZ, 60 }
#define PROBE_OFFSET_WIZARD_START_Z              -15.2
#define FINE_MANUAL_MOVE                         0.025
#define LONG_FILENAME_HOST_SUPPORT
#define BABYSTEP_ALWAYS_AVAILABLE
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SET_PROGRESS_MANUALLY
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84XYE"
#define LCD_INFO_MENU
#define LCD_TIMEOUT_TO_STATUS                    15000
#define SET_PROGRESS_PERCENT
#define LCD_LANGUAGE_AUTO_SAVE
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define POWER_LOSS_MIN_Z_CHANGE                  0.05

//
// Interface
//
#define LCD_LANGUAGE                             en

//
// Delta
//
#define DELTA_DIAGONAL_ROD                       280.00
#define DELTA
#define DELTA_TOWER_ANGLE_TRIM                   { 0.0, 0.0, 0.0 }
#define DELTA_CALIBRATION_DEFAULT_POINTS         4
#define DELTA_AUTO_CALIBRATION
#define DELTA_HEIGHT                             370.00
#define DELTA_RADIUS                             140.8
#define DELTA_DIAGONAL_ROD_TRIM_TOWER            { 0.0, 0.0, 0.0 }
#define DELTA_CALIBRATION_MENU
#define DELTA_ENDSTOP_ADJ                        { 0.0, 0.0, 0.0 }
#define PROBE_MANUALLY_STEP                      0.05

//
// Polar
//
#define DEFAULT_SEGMENTS_PER_SECOND              80
#define PRINTABLE_RADIUS                         130.0

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { 0, (Y_MAX_POS - 10), 50 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   NOZZLE_PARK_XY_FEEDRATE

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define DEBUG_FLAGS_GCODE

//
// Serial
//
#define SERIAL_PORT                              3
#define BAUDRATE                                 250000
#define BUFSIZE                                  16
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           16
#define SERIAL_PORT_2                            1
#define CUSTOM_MACHINE_NAME                      "FLSUN QQS-Pro"

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
#define M115_GEOMETRY_REPORT

//
// Safety
//
#define USE_WATCHDOG
#define THERMAL_PROTECTION_HOTENDS
#define EXTRUDE_MAXLENGTH                        950
#define EXTRUDE_MINTEMP                          170
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
