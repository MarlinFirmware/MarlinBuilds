/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2026-11-23 at 22:32:04.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(anonymous)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_RAMPS_CREALITY

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
#define X_DRIVER_TYPE                            TMC2208_STANDALONE
#define Y_DRIVER_TYPE                            TMC2208_STANDALONE
#define Z_DRIVER_TYPE                            TMC2208_STANDALONE
#define E0_DRIVER_TYPE                           TMC2208_STANDALONE
#define X_ENABLE_ON                              LOW
#define Y_ENABLE_ON                              LOW
#define Z_ENABLE_ON                              LOW
#define E_ENABLE_ON                              LOW
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             true
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
#define X_BED_SIZE                               470
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               470
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                470
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
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER
#define Z_CLEARANCE_FOR_HOMING                   4
#define Z_SAFE_HOMING

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 140 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 500, 400, 15, 75 }
#define DEFAULT_MAX_ACCELERATION                 { 1000, 700, 100, 75 }
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define DEFAULT_ACCELERATION                     500
#define DEFAULT_TRAVEL_ACCELERATION              300
#define DEFAULT_RETRACT_ACCELERATION             1000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_EJERK                            5.0
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
#define DEFAULT_ZJERK                            0.3
#define DEFAULT_YJERK                            5.0
#define S_CURVE_ACCELERATION
#define DEFAULT_XJERK                            10.0
#define EDITABLE_STEPS_PER_UNIT
#define CLASSIC_JERK
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Filament Runout Sensors
//
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLUP
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FILAMENT_RUNOUT_DISTANCE_MM              10
#define FILAMENT_RUNOUT_SENSOR
#define NUM_RUNOUT_SENSORS                       1
#define FIL_RUNOUT_STATE                         LOW

//
// Probes
//
#define PROBING_MARGIN                           3
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define PROBE_OFFSET_ZMAX                        9
#define NOZZLE_TO_PROBE_OFFSET                   { -27, 0, 0 }
#define USE_PROBE_FOR_Z_HOMING
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_MIN_PROBE_PIN                          19
#define Z_PROBE_LOW_POINT                        -5
#define PROBE_OFFSET_ZMIN                        -9
#define BLTOUCH

//
// Leveling
//
#define PROBING_MARGIN_FRONT                     (PROBING_MARGIN + 15)
#define PROBING_MARGIN_BACK                      (PROBING_MARGIN + 15)

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
#define DEFAULT_KP                               25.25
#define DEFAULT_KI                               2.17
#define DEFAULT_KD                               73.44

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20

//
// Bed Temp
//
#define MAX_BED_POWER                            255
#define PIDTEMPBED
#define DEFAULT_BED_KD                           1068.83
#define DEFAULT_BED_KI                           111.47
#define DEFAULT_BED_KP                           690.34

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1

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
#define FILAMENT_CHANGE_UNLOAD_LENGTH            700
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define CONFIGURE_FILAMENT_CHANGE
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
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define ENABLE_LEVELING_FADE_HEIGHT
#define BED_TRAMMING_HEIGHT                      0.0
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define GRID_MAX_POINTS_X                        5
#define LEVELED_SEGMENT_LENGTH                   5.0
#define AUTO_BED_LEVELING_BILINEAR
#define BED_TRAMMING_INSET_LFRB                  { 22, 22, 27, 22 }
#define MAX_SAVED_MESHES                         100
#define RESTORE_LEVELING_AFTER_G28
#define LCD_BED_TRAMMING
#define BED_TRAMMING_Z_HOP                       4.0

//
// Media
//
#define SDSUPPORT

//
// LCD
//
#define SHOW_BOOTSCREEN
#define DGUS_LCD_UI                              RELOADED
#define DGUS_UPDATE_INTERVAL_MS                  500
#define SOUND_ON_DEFAULT
#define FINE_MANUAL_MOVE                         0.025
#define SD_PROCEDURE_DEPTH                       1
#define SET_REMAINING_TIME
#define SET_PROGRESS_MANUALLY
#define DGUS_RX_BUFFER_SIZE                      128
#define AUTO_REPORT_SD_STATUS
#define SHOW_ELAPSED_TIME
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define DGUS_TX_BUFFER_SIZE                      48
#define LONG_FILENAME_HOST_SUPPORT
#define UTF_FILENAME_SUPPORT
#define SD_MAX_READ_ERRORS                       5
#define REINIT_NOISY_LCD
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define BOOTSCREEN_TIMEOUT                       3000
#define SET_PROGRESS_PERCENT
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define SDCARD_RATHERRECENTFIRST
#define LCD_SERIAL_PORT                          2
#define LCD_BAUDRATE                             115200

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
#define CUSTOM_MACHINE_NAME                      "CR-10 Max"
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

//
// Safety
//
#define USE_WATCHDOG
#define THERMAL_PROTECTION_HOTENDS
#define EXTRUDE_MAXLENGTH                        750
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED

//
// Servos
//
#define SERVO_DELAY                              { 50 }

//
// Temperature Presets
//
#define PREHEAT_1_TEMP_HOTEND                    180
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       70
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       110
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_TEMP_HOTEND                    240

//
// Temperature Sensors
//
#define TEMP_SENSOR_0                            1
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
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define BABYSTEP_MULTIPLICATOR_Z                 10
#define BABYSTEP_ZPROBE_OFFSET
#define BABYSTEPPING
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_ALWAYS_AVAILABLE
