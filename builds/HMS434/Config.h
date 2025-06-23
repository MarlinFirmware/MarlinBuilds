/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 11:52:38.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Scheepers, MaukCC)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_CNCONTROLS_15

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
#define INVERT_E0_DIR                            false
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define LIN_ADVANCE
#define ADVANCE_K                                0.02

//
// Geometry
//
#define X_BED_SIZE                               450
#define X_MIN_POS                                -72
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               325
#define Y_MIN_POS                                -84
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                400
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
#define HOMING_FEEDRATE_MM_M                     { (6000), (6000), (900) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define Z_CLEARANCE_FOR_HOMING                   4
#define HOME_Y_BEFORE_X

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 53.45, 71.19, 160, 169.05 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 1000, 1000, 40, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 500, 500, 100, 10000 }
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.08
#define DEFAULT_ACCELERATION                     500
#define DEFAULT_TRAVEL_ACCELERATION              3000
#define DEFAULT_RETRACT_ACCELERATION             3000
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
#define EDITABLE_STEPS_PER_UNIT
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define ENDSTOPPULLUPS
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            LOW

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_STATE                         LOW
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FIL_RUNOUT_PULLUP
#define NUM_RUNOUT_SENSORS                       1

//
// Probes
//
#define PROBING_MARGIN                           20
#define XY_PROBE_FEEDRATE                        (200*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 5
#define Z_CLEARANCE_MULTI_PROBE                  1
#define Z_AFTER_PROBING                          5
#define MULTIPLE_PROBING                         2
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -2
#define Z_PROBE_FEEDRATE_SLOW                    100
#define FIX_MOUNTED_PROBE
#define NOZZLE_TO_PROBE_OFFSET                   { -21, 22, -1.54 }
#define Z_PROBE_FEEDRATE_FAST                    900

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            -1
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         410
#define PREHEAT_1_TEMP_HOTEND                    180
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       70
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define TEMP_SENSOR_BED                          331
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define PREHEAT_1_TEMP_CHAMBER                   35
#define TEMP_CHAMBER_HYSTERESIS                  2
#define CHAMBER_MINTEMP                          18
#define PREHEAT_2_FAN_SPEED                      0
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              150
#define CHAMBER_MAXTEMP                          75
#define TEMP_SENSOR_CHAMBER                      331
#define PREHEAT_2_TEMP_CHAMBER                   35
#define TEMP_CHAMBER_RESIDENCY_TIME              10
#define TEMP_CHAMBER_WINDOW                      1
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       110
#define PREHEAT_2_TEMP_HOTEND                    240
#define WATCH_CHAMBER_TEMP_PERIOD                900
#define CHAMBER_CHECK_INTERVAL                   5000
#define AUTOTEMP_MIN                             210
#define THERMAL_PROTECTION_CHAMBER_HYSTERESIS    2
#define TEMP_SENSOR_AD595_OFFSET                 0.0
#define TEMP_SENSOR_AD595_GAIN                   2.0
#define AUTOTEMP_MAX                             250
#define WATCH_CHAMBER_TEMP_INCREASE              2
#define AUTOTEMP_FACTOR                          0.1f
#define THERMAL_PROTECTION_CHAMBER_PERIOD        900
#define THERMAL_PROTECTION_BED_PERIOD            20

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  170
#define DEFAULT_Kp                               11.30
#define DEFAULT_Kd                               52.77
#define DEFAULT_Ki                               0.61

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20

//
// Bed Temp
//
#define MAX_BED_POWER                            255

//
// Chamber Temp
//
#define MAX_CHAMBER_POWER                        255

//
// Fans
//
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            35
#define E1_AUTO_FAN_PIN                          AUTO_FAN_PIN
#define E3_AUTO_FAN_PIN                          AUTO_FAN_PIN
#define CHAMBER_AUTO_FAN_PIN                     -1
#define E2_AUTO_FAN_PIN                          AUTO_FAN_PIN

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                2
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_RETRACT_FEEDRATE              30
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_LENGTH            0
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          30
#define ADVANCED_PAUSE_PURGE_LENGTH              50
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_UNLOAD_PURGE_RETRACT            13
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define GRID_MAX_POINTS_X                        5
#define AUTO_BED_LEVELING_LINEAR
#define GRID_MAX_POINTS_Y                        3

//
// Media
//
#define SDSUPPORT

//
// LCD
//
#define BABYSTEPPING
#define SDCARD_RATHERRECENTFIRST
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define BABYSTEP_MULTIPLICATOR_Z                 16
#define SD_PROCEDURE_DEPTH                       1
#define BABYSTEP_MULTIPLICATOR_XY                16
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"

//
// Lights
//
#define TEMP_STAT_LEDS

//
// Interface
//
#define SPEAKER

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { 225, -50, 5 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  150
#define NOZZLE_PARK_Z_FEEDRATE                   15

//
// Nozzle Clean
//
#define NOZZLE_CLEAN_CIRCLE_FN                   10
#define NOZZLE_CLEAN_STROKES                     4
#define NOZZLE_CLEAN_FEATURE
#define NOZZLE_CLEAN_PATTERN_ZIGZAG
#define NOZZLE_CLEAN_MIN_TEMP                    170
#define NOZZLE_CLEAN_END_POINT                   { 100, 60, (Z_MIN_POS + 1) }
#define NOZZLE_CLEAN_PATTERN_CIRCLE
#define NOZZLE_CLEAN_CIRCLE_RADIUS               8
#define NOZZLE_CLEAN_GOBACK
#define NOZZLE_CLEAN_PATTERN_LINE
#define NOZZLE_CLEAN_START_POINT                 { -37, -67 }
#define NOZZLE_CLEAN_DEFAULT_PATTERN             0
#define NOZZLE_CLEAN_CIRCLE_MIDDLE               NOZZLE_CLEAN_START_POINT
#define NOZZLE_CLEAN_TRIANGLES                   2
#define NOZZLE_CLEAN_NO_Z

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        8
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
#define TX_BUFFER_SIZE                           32
#define MACHINE_UUID                             "75083866-86ea-42b2-b475-7b3a7855e716"
#define RX_BUFFER_SIZE                           1024
#define SERIAL_XON_XOFF
#define EMERGENCY_PARSER
#define ADVANCED_OK

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
#define EXTRUDE_MINTEMP                          18
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED
#define THERMAL_PROTECTION_CHAMBER

//
// Stats
//
#define PRINTCOUNTER
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define SERVICE_WARNING_BUZZES                   3
#define SERVICE_NAME_1                           "Lubricate axis"
#define SERVICE_NAME_2                           "Change X an Y belt"
#define SERVICE_NAME_3                           "Change Z belt"
#define SERVICE_INTERVAL_1                       100
#define SERVICE_INTERVAL_2                       300
#define SERVICE_INTERVAL_3                       1000

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
