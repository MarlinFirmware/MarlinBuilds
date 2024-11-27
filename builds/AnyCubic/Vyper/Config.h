/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-11-26 at 19:52:20.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Bob Kuhn)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_TRIGORILLA_V006

//
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define HOTEND_IDLE_BED_TARGET                   20
#define HOTEND_IDLE_MIN_TRIGGER                  80
#define HOTEND_IDLE_NOZZLE_TARGET                20
#define HOTEND_IDLE_TIMEOUT
#define HOTEND_IDLE_TIMEOUT_SEC                  (15*60)
#define INVERT_E0_DIR                            true

//
// Bed Temp
//
#define DEFAULT_bedKd                            604.82
#define DEFAULT_bedKi                            3.51
#define DEFAULT_bedKp                            56.42
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define CHAMBER_AUTO_FAN_PIN                     -1
#define CONTROLLERFAN_IDLE_TIME                  60
#define CONTROLLERFAN_SPEED_ACTIVE               255
#define CONTROLLERFAN_SPEED_IDLE                 0
#define CONTROLLERFAN_SPEED_MIN                  0
#define CONTROLLER_FAN_BED_HEATING
#define COOLER_AUTO_FAN_PIN                      -1
#define E0_AUTO_FAN_PIN                          PB1
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            47
#define FAN_KICKSTART_POWER                      180
#define FAN_KICKSTART_TIME                       100
#define FAN_SOFT_PWM
#define SOFT_PWM_SCALE                           1
#define USE_CONTROLLER_FAN

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           A4988
#define E_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            A4988
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            A4988
#define Y_ENABLE_ON                              LOW
#define Z2_DRIVER_TYPE                           A4988
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
#define X_BED_SIZE                               246
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               255
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                265
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (5*60) }
#define MANUAL_X_HOME_POS                        +0.5
#define MANUAL_Y_HOME_POS                        -4.2
#define MANUAL_Z_HOME_POS                        0
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_AFTER_HOMING                           2
#define Z_CLEARANCE_FOR_HOMING                   6
#define Z_HOME_DIR                               -1

//
// Endstops
//
#define ENDSTOPPULLUPS
#define X_MAX_ENDSTOP_HIT_STATE                  HIGH
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            LOW

//
// Probes
//
#define DELAY_BEFORE_PROBING                     500
#define MULTIPLE_PROBING                         2
#define NOZZLE_AS_PROBE
#define NOZZLE_TO_PROBE_OFFSET                   { 0, 0, 0 }
#define PROBE_TARE
#define PROBE_TARE_DELAY                         100
#define PROBE_TARE_PIN                           AUTO_LEVEL_TX_PIN
#define PROBE_TARE_STATE                         LOW
#define PROBE_TARE_TIME                          300
#define PROBING_ESTEPPERS_OFF
#define PROBING_MARGIN                           10
#define PROBING_STEPPERS_OFF
#define XY_PROBE_FEEDRATE                        6500
#define Z_CLEARANCE_BETWEEN_PROBES               2
#define Z_CLEARANCE_DEPLOY_PROBE                 6
#define Z_CLEARANCE_MULTI_PROBE                  2
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_FEEDRATE_FAST                    150
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST >> 2)
#define Z_PROBE_LOW_POINT                        -10

//
// LCD
//
#define ANYCUBIC_LCD_VYPER
#define BABYSTEPPING
#define BABYSTEP_DISPLAY_TOTAL
#define BABYSTEP_MILLIMETER_UNITS
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_MULTIPLICATOR_Z                 0.02
#define BABYSTEP_ZPROBE_OFFSET
#define BOOTSCREEN_TIMEOUT                       3000
#define DGUS_RX_BUFFER_SIZE                      128
#define DGUS_TX_BUFFER_SIZE                      48
#define DGUS_UPDATE_INTERVAL_MS                  500
#define EVENT_GCODE_SD_ABORT                     "G28R5XY"
#define FINE_MANUAL_MOVE                         0.025
#define LCD_BAUDRATE                             115200
#define LCD_LANGUAGE_2                           zh_CN
#define LONG_FILENAME_HOST_SUPPORT
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define PLR_ENABLED_DEFAULT                      true
#define POWER_LOSS_MIN_Z_CHANGE                  0.05
#define POWER_LOSS_RECOVERY
#define SDCARD_RATHERRECENTFIRST
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_BOOTSCREEN
#define SHOW_ELAPSED_TIME
#define SHOW_PROGRESS_PERCENT
#define SOUND_ON_DEFAULT

//
// Interface
//
#define SPEAKER

//
// Host
//
#define HOST_ACTION_COMMANDS
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
#define TEMP_SENSOR_0                            5
#define TEMP_SENSOR_BED                          1
#define TEMP_WINDOW                              1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define THERMAL_PROTECTION_BED_PERIOD            20
#define THERMAL_PROTECTION_HYSTERESIS            8
#define THERMAL_PROTECTION_PERIOD                20
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        20

//
// Safety
//
#define EXTRUDE_MAXLENGTH                        600
#define EXTRUDE_MINTEMP                          170
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
#define EEPROM_SETTINGS

//
// Calibrate
//
#define ABL_BILINEAR_SUBDIVISION
#define AUTO_BED_LEVELING_BILINEAR
#define BILINEAR_SUBDIVISIONS                    3
#define DEBUG_LEVELING_FEATURE
#define DEFAULT_LEVELING_FADE_HEIGHT             0.0
#define ENABLE_LEVELING_AFTER_G28
#define ENABLE_LEVELING_FADE_HEIGHT
#define EVENT_GCODE_AFTER_G29                    "G28"
#define GRID_MAX_POINTS_X                        7
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define LEVELING_BED_TEMP                        60
#define LEVELING_NOZZLE_TEMP                     140
#define PREHEAT_BEFORE_LEVELING
#define SEGMENT_LEVELED_MOVES

//
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define CLASSIC_JERK
#define DEFAULT_ACCELERATION                     900
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 100, 400, 407 }
#define DEFAULT_EJERK                            7.0
#define DEFAULT_MAX_ACCELERATION                 { 1500, 1000, 50, 3000 }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 40, 80 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             1000
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              1500
#define DEFAULT_XJERK                            7.0
#define DEFAULT_YJERK                            7.0
#define DEFAULT_ZJERK                            0.3
#define DISABLE_IDLE_E
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define LIMITED_JERK_EDITING
#define LIMITED_MAX_ACCEL_EDITING
#define MAX_ACCEL_EDIT_VALUES                    { 6000, 6000, 200, 20000 }
#define MAX_JERK_EDIT_VALUES                     { 20, 20, 0.6, 10 }
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
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_DISTANCE_MM              15
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLUP
#define FIL_RUNOUT_STATE                         LOW
#define NUM_RUNOUT_SENSORS                       1

//
// Media
//
#define SDSUPPORT
#define SD_CHECK_AND_RETRY

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     10

//
// Hotend Temp
//
#define DEFAULT_Kd                               117.51
#define DEFAULT_Ki                               3.31
#define DEFAULT_Kp                               39.43
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Serial
//
#define BAUDRATE                                 115200
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "Anycubic Vyper"
#define EMERGENCY_PARSER
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              1
#define TX_BUFFER_SIZE                           0

//
// Nozzle Park
//
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 2), (Y_MIN_POS + 2), 10 }
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5
#define NOZZLE_PARK_Z_RAISE_MIN                  2

//
// Caselight
//
#define CASE_LIGHT_DEFAULT_BRIGHTNESS            105
#define CASE_LIGHT_DEFAULT_ON                    false
#define CASE_LIGHT_ENABLE
#define CASE_LIGHT_NO_BRIGHTNESS
#define INVERT_CASE_LIGHT                        false

//
// Advanced Pause
//
#define ADVANCED_PAUSE_CONTINUOUS_PURGE
#define ADVANCED_PAUSE_FEATURE
#define ADVANCED_PAUSE_PURGE_FEEDRATE            5
#define ADVANCED_PAUSE_PURGE_LENGTH              50
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          15
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       10
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         400
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          40
#define FILAMENT_CHANGE_UNLOAD_LENGTH            600
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_PURGE_DELAY              3000
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           10
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_UNLOAD_PURGE_RETRACT            6
#define PARK_HEAD_ON_PAUSE
#define PAUSE_PARK_NOZZLE_TIMEOUT                360
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PAUSE_PARK_RETRACT_FEEDRATE              40
#define PAUSE_PARK_RETRACT_LENGTH                2

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      24
#define N_ARC_CORRECTION                         25

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER

//
// Power
//
#define POWER_MONITOR_VOLTAGE
#define POWER_MONITOR_VOLTAGE_OFFSET             0
#define POWER_MONITOR_VOLTS_PER_VOLT             0.09090909

//
// Multi Stepper
//
#define Z2_ENDSTOP_ADJUSTMENT                    0
#define Z2_STOP_PIN                              X_MAX_PIN
#define Z_MULTI_ENDSTOPS
