/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-11-26 at 20:18:23.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(tiagofreire-pt, Ender-3 S1 F4)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_CREALITY_V24S1_301F4

//
// Extruder
//
#define ADVANCE_K                                0.0
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define HOTEND_IDLE_BED_TARGET                   0
#define HOTEND_IDLE_MIN_TRIGGER                  180
#define HOTEND_IDLE_NOZZLE_TARGET                0
#define HOTEND_IDLE_TIMEOUT
#define HOTEND_IDLE_TIMEOUT_SEC                  (30*60)
#define INVERT_E0_DIR                            false
#define LIN_ADVANCE

//
// Bed Temp
//
#define DEFAULT_bedKd                            415.79
#define DEFAULT_bedKi                            20.55
#define DEFAULT_bedKp                            113.22
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define CHAMBER_AUTO_FAN_PIN                     -1
#define COOLER_AUTO_FAN_PIN                      -1
#define E0_AUTO_FAN_PIN                          FAN1_PIN
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_KICKSTART_TIME                       200
#define FAN_MIN_PWM                              25
#define FAN_SOFT_PWM

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           TMC2208_STANDALONE
#define E_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            TMC2208_STANDALONE
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            TMC2208_STANDALONE
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            TMC2208_STANDALONE
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
#define Z_MAX_POS                                275
#define Z_MIN_POS                                0

//
// Homing
//
#define HOME_AFTER_DEACTIVATE
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (4*60) }
#define QUICK_HOME
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_AFTER_HOMING                           30
#define Z_HOME_DIR                               -1
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER

//
// Endstops
//
#define DETECT_BROKEN_ENDSTOP
#define ENDSTOPPULLUPS
#define ENDSTOP_INTERRUPTS_FEATURE
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Probes
//
#define BLTOUCH
#define DELAY_BEFORE_PROBING                     200
#define MULTIPLE_PROBING                         2
#define NOZZLE_TO_PROBE_OFFSET                   { -37, -39, -2.75 }
#define PROBING_FANS_OFF
#define PROBING_MARGIN                           20
#define USE_PROBE_FOR_Z_HOMING
#define XY_PROBE_FEEDRATE                        (50*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_CLEARANCE_MULTI_PROBE                  5
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_PROBE_LOW_POINT                        -4

//
// LCD
//
#define BABYSTEPPING
#define BABYSTEP_ALWAYS_AVAILABLE
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_MULTIPLICATOR_Z                 40
#define BABYSTEP_WITHOUT_HOMING
#define BABYSTEP_ZPROBE_OFFSET
#define BEEP_ON_FEEDRATE_CHANGE
#define BINARY_FILE_TRANSFER
#define BOOTSCREEN_TIMEOUT                       3000
#define CONFIGURATION_EMBEDDING
#define CUSTOM_FIRMWARE_UPLOAD
#define DWIN_CREALITY_LCD_JYERSUI
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define EVENT_GCODE_SD_ABORT                     "G28XY\nM84"
#define FEEDRATE_CHANGE_BEEP_DURATION            10
#define FEEDRATE_CHANGE_BEEP_FREQUENCY           440
#define FINE_MANUAL_MOVE                         0.025
#define LONG_FILENAME_HOST_SUPPORT
#define LONG_FILENAME_WRITE_SUPPORT
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define NO_SD_HOST_DRIVE
#define PLR_ENABLED_DEFAULT                      false
#define POWER_LOSS_MIN_Z_CHANGE                  0.05
#define POWER_LOSS_RECOVERY
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
#define SDSORT_USES_RAM                          true
#define SDSORT_USES_STACK                        false
#define SD_ABORT_ON_ENDSTOP_HIT
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_PROCEDURE_DEPTH                       1
#define SET_PROGRESS_MANUALLY
#define SET_PROGRESS_PERCENT
#define SHOW_BOOTSCREEN
#define SHOW_ELAPSED_TIME
#define SHOW_PROGRESS_PERCENT
#define SOUND_MENU_ITEM
#define SOUND_ON_DEFAULT
#define STATUS_MESSAGE_SCROLLING
#define STATUS_MESSAGE_TIMEOUT_SEC               30

//
// Interface
//
#define ENCODER_PULSES_PER_STEP                  4
#define ENCODER_STEPS_PER_MENU_ITEM              1
#define INDIVIDUAL_AXIS_HOMING_MENU
#define INDIVIDUAL_AXIS_HOMING_SUBMENU
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS       2
#define LCD_FEEDBACK_FREQUENCY_HZ                5000

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_ACTION_COMMANDS
#define HOST_KEEPALIVE_FEATURE
#define HOST_PAUSE_M76
#define HOST_PROMPT_SUPPORT
#define HOST_SHUTDOWN_MENU_ITEM
#define HOST_START_MENU_ITEM
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
#define BED_MAXTEMP                              120
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
#define PREHEAT_1_LABEL                          "Bed Warmup"
#define PREHEAT_1_TEMP_BED                       45
#define PREHEAT_1_TEMP_CHAMBER                   35
#define PREHEAT_1_TEMP_HOTEND                    0
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "PLA"
#define PREHEAT_2_TEMP_BED                       45
#define PREHEAT_2_TEMP_CHAMBER                   35
#define PREHEAT_2_TEMP_HOTEND                    200
#define PREHEAT_3_FAN_SPEED                      0
#define PREHEAT_3_LABEL                          "PETG"
#define PREHEAT_3_TEMP_BED                       70
#define PREHEAT_3_TEMP_CHAMBER                   35
#define PREHEAT_3_TEMP_HOTEND                    225
#define PREHEAT_4_FAN_SPEED                      0
#define PREHEAT_4_LABEL                          "TPU"
#define PREHEAT_4_TEMP_BED                       60
#define PREHEAT_4_TEMP_CHAMBER                   35
#define PREHEAT_4_TEMP_HOTEND                    220
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
// Safety
//
#define EXTRUDE_MAXLENGTH                        1000
#define EXTRUDE_MINTEMP                          160
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED
#define THERMAL_PROTECTION_HOTENDS
#define USE_WATCHDOG

//
// EEPROM
//
#define EEPROM_AUTO_INIT
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_INIT_NOW
#define EEPROM_SETTINGS

//
// Calibrate
//
#define ABL_BILINEAR_SUBDIVISION
#define AUTO_BED_LEVELING_BILINEAR
#define BED_TRAMMING_HEIGHT                      0.0
#define BED_TRAMMING_INSET_LFRB                  { 30, 30, 30, 30 }
#define BED_TRAMMING_LEVELING_ORDER              { LF, RB, RF, LB }
#define BED_TRAMMING_Z_HOP                       4.0
#define BILINEAR_SUBDIVISIONS                    3
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define ENABLE_LEVELING_FADE_HEIGHT
#define GRID_MAX_POINTS_X                        5
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LCD_BED_TRAMMING
#define LEVELED_SEGMENT_LENGTH                   5.0
#define RESTORE_LEVELING_AFTER_G28
#define SEGMENT_LEVELED_MOVES

//
// Motion
//
#define ADAPTIVE_STEP_SMOOTHING
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define CLASSIC_JERK
#define DEFAULT_ACCELERATION                     500
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 430 }
#define DEFAULT_EJERK                            5.0
#define DEFAULT_MAX_ACCELERATION                 { 1000, 1000, 200, 2500 }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 5, 50 }
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
#define LIMITED_MAX_ACCEL_EDITING
#define MAX_ACCEL_EDIT_VALUES                    { 6000, 6000, 200, 20000 }
#define MIN_STEPS_PER_SEGMENT                    4
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define S_CURVE_ACCELERATION

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_DISTANCE_MM              25
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLDOWN
#define FIL_RUNOUT_STATE                         HIGH
#define NUM_RUNOUT_SENSORS                       1

//
// Stats
//
#define PRINTCOUNTER
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define SERVICE_WARNING_BUZZES                   3

//
// Servos
//
#define SERVO_DELAY                              { 50 }

//
// Media
//
#define SDSUPPORT

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     10

//
// Hotend Temp
//
#define DEFAULT_Kd                               54.63
#define DEFAULT_Ki                               1.69
#define DEFAULT_Kp                               19.54
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Serial
//
#define ADVANCED_OK
#define BAUDRATE                                 115200
#define BAUD_RATE_GCODE
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "Ender-3 S1 - ABL F4"
#define EMERGENCY_PARSER
#define MACHINE_UUID                             " 797cc6c3-b54a-4eae-974d-6529ab992d79"
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define REALTIME_REPORTING_COMMANDS
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              1
#define TX_BUFFER_SIZE                           32

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
// Advanced Pause
//
#define ADVANCED_PAUSE_FEATURE
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define ADVANCED_PAUSE_PURGE_LENGTH              50
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       12
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          20
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
#define PAUSE_REHEAT_FAST_RESUME

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
// Calibration
//
#define ASSISTED_TRAMMING
#define ASSISTED_TRAMMING_WIZARD
#define REPORT_TRAMMING_MM
#define RESTORE_LEVELING_AFTER_G35
#define TRAMMING_POINT_NAME_1                    "Front-Left"
#define TRAMMING_POINT_NAME_2                    "Back-Right"
#define TRAMMING_POINT_NAME_3                    "Front-Right"
#define TRAMMING_POINT_NAME_4                    "Back-Left"
#define TRAMMING_POINT_XY                        { { 20, 20 }, { 180, 180 }, { 180, 20 }, { 20, 180 } }
#define TRAMMING_SCREW_THREAD                    M4_CW

//
// Extras
//
#define ARC_P_CIRCLES
#define ARC_SUPPORT
#define CANCEL_OBJECTS
#define CANCEL_OBJECTS_REPORTING
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
#define GCODE_MACROS
#define GCODE_MACROS_SLOTS                       5
#define GCODE_MACROS_SLOT_SIZE                   50

//
// BLTouch
//
#define BLTOUCH_DELAY                            300
#define BLTOUCH_HS_EXTRA_CLEARANCE               7
#define BLTOUCH_HS_MODE                          true
