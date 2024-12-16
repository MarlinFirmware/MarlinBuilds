/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-12-16 at 08:06:30.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Sebastiaan Dammann)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_CREALITY_V24S1_301

//
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define HOTEND_IDLE_BED_TARGET                   0
#define HOTEND_IDLE_MIN_TRIGGER                  180
#define HOTEND_IDLE_NOZZLE_TARGET                0
#define HOTEND_IDLE_TIMEOUT
#define HOTEND_IDLE_TIMEOUT_SEC                  (30*60)
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
#define X_BED_SIZE                               220
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                -5
#define Y_BED_SIZE                               220
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                -5
#define Z_MAX_POS                                270
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
#define Z_AFTER_HOMING                           10
#define Z_HOME_DIR                               -1
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER

//
// Endstops
//
#define ENDSTOPPULLUPS
#define ENDSTOP_INTERRUPTS_FEATURE
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Probes
//
#define BLTOUCH
#define DELAY_BEFORE_PROBING                     200
#define MULTIPLE_PROBING                         2
#define NOZZLE_TO_PROBE_OFFSET                   { -37, -39, -3.25 }
#define PROBING_FANS_OFF
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (200*60)
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
#define DWIN_CREALITY_LCD
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define EVENT_GCODE_SD_ABORT                     "G28XY\nM84"
#define FEEDRATE_CHANGE_BEEP_DURATION            10
#define FEEDRATE_CHANGE_BEEP_FREQUENCY           440
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
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
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10

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
#define PRINTJOB_TIMER_AUTOSTART

//
// Reporting
//
#define AUTO_REPORT_TEMPERATURES
#define CAPABILITIES_REPORT
#define EXTENDED_CAPABILITIES_REPORT
#define M115_GEOMETRY_REPORT

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
#define HEATER_0_MAXTEMP                         275
#define HEATER_0_MINTEMP                         5
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_1_TEMP_HOTEND                    195
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "TPU"
#define PREHEAT_2_TEMP_BED                       30
#define PREHEAT_2_TEMP_HOTEND                    220
#define PREHEAT_3_FAN_SPEED                      0
#define PREHEAT_3_LABEL                          "PETG"
#define PREHEAT_3_TEMP_BED                       85
#define PREHEAT_3_TEMP_CHAMBER                   35
#define PREHEAT_3_TEMP_HOTEND                    230
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
// Calibrate
//
#define AUTO_BED_LEVELING_BILINEAR
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define ENABLE_LEVELING_AFTER_G28
#define ENABLE_LEVELING_FADE_HEIGHT
#define GRID_MAX_POINTS_X                        5
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define LEVELING_BED_TEMP                        50
#define LEVELING_NOZZLE_TEMP                     0
#define PREHEAT_BEFORE_LEVELING
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
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Serial
//
#define ADVANCED_OK
#define BAUDRATE                                 115200
#define BUFSIZE                                  4
#define EMERGENCY_PARSER
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              1
#define TX_BUFFER_SIZE                           32

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
// Hotend Temp
//
#define DEFAULT_Kd                               70.18
#define DEFAULT_Ki                               1.87
#define DEFAULT_Kp                               22.20
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Media
//
#define SDSUPPORT

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
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER
#define FWRETRACT
#define FWRETRACT_AUTORETRACT
#define MAX_AUTORETRACT                          10.0
#define MIN_AUTORETRACT                          0.1
#define RETRACT_FEEDRATE                         40
#define RETRACT_LENGTH                           0.5
#define RETRACT_LENGTH_SWAP                      13
#define RETRACT_RECOVER_FEEDRATE                 8
#define RETRACT_RECOVER_FEEDRATE_SWAP            8
#define RETRACT_RECOVER_LENGTH                   0
#define RETRACT_RECOVER_LENGTH_SWAP              0
#define RETRACT_ZRAISE                           0

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
