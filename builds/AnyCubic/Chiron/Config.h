/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2026-11-23 at 22:16:13.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Nick Wells, Chiron Build)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_TRIGORILLA_14
#define TRIGORILLA_MAPPING_CHIRON
#define MINIMAL_CAP_LINES

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
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             true
#define INVERT_E0_DIR                            false
#define Z2_DRIVER_TYPE                           A4988

//
// Multi Stepper
//
#define Z_MULTI_ENDSTOPS
#define Z2_ENDSTOP_ADJUSTMENT                    0

//
// Extruder
//
#define EXTRUDERS                                1
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define HOTEND_IDLE_TIMEOUT_SEC                  (5*60)
#define HOTEND_IDLE_MIN_TRIGGER                  180
#define LIN_ADVANCE
#define ADVANCE_K                                0.00
#define HOTEND_IDLE_BED_TARGET                   0
#define HOTEND_IDLE_TIMEOUT
#define HOTEND_IDLE_NOZZLE_TARGET                0

//
// Geometry
//
#define X_BED_SIZE                               400
#define X_MIN_POS                                -10
#define X_MAX_POS                                X_BED_SIZE + 10
#define Y_BED_SIZE                               400
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE + 10
#define Z_MIN_POS                                0
#define Z_MAX_POS                                455
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
#define HOMING_FEEDRATE_MM_M                     { (70*60), (70*60), (20*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 8 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 3 }
#define Z_AFTER_HOMING                           5
#define QUICK_HOME

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 100, 400, 405 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 200, 200, 25, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 500, 500, 80, 10000 }
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.028
#define DEFAULT_ACCELERATION                     350
#define DEFAULT_TRAVEL_ACCELERATION              500
#define DEFAULT_RETRACT_ACCELERATION             2000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define JD_HANDLE_SMALL_SEGMENTS
#define ARC_SUPPORT
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_E
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define S_CURVE_ACCELERATION
#define EDITABLE_STEPS_PER_UNIT
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define X_MAX_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Filament Runout Sensors
//
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLUP
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FILAMENT_RUNOUT_DISTANCE_MM              25
#define FILAMENT_RUNOUT_SENSOR
#define NUM_RUNOUT_SENSORS                       1
#define FIL_RUNOUT_STATE                         HIGH

//
// Probes
//
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_CLEARANCE_BETWEEN_PROBES               4
#define Z_CLEARANCE_DEPLOY_PROBE                 24
#define Z_CLEARANCE_MULTI_PROBE                  2
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define PROBE_OFFSET_ZMAX                        -1
#define NOZZLE_TO_PROBE_OFFSET                   { 0, 0, -15 }
#define PROBING_BED_TEMP                         60
#define FIX_MOUNTED_PROBE
#define PROBING_NOZZLE_TEMP                      0
#define MULTIPLE_PROBING                         2
#define Z_PROBE_FEEDRATE_FAST                    (6*60)
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -2
#define PROBE_OFFSET_ZMIN                        -20
#define PREHEAT_BEFORE_PROBING

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            10
#define THERMAL_PROTECTION_PERIOD                40
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define THERMAL_PROTECTION_BED_HYSTERESIS        4
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    40
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              150
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_FACTOR                          0.1f
#define THERMAL_PROTECTION_BED_PERIOD            40
#define AUTOTEMP_MAX                             250

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_KP                               14.51
#define DEFAULT_KI                               0.86
#define DEFAULT_KD                               60.97

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20

//
// Bed Temp
//
#define MAX_BED_POWER                            255
#define PIDTEMPBED
#define DEFAULT_BED_KD                           146.74
#define DEFAULT_BED_KI                           11.78
#define DEFAULT_BED_KP                           83.15

//
// Fans
//
#define E0_AUTO_FAN_PIN                          44
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            80
#define FAN_SOFT_PWM
#define CONTROLLERFAN_SPEED_MIN                  0
#define CONTROLLER_FAN_BED_HEATING
#define CONTROLLERFAN_IDLE_TIME                  60
#define CONTROLLER_FAN_PIN                       FAN1_PIN
#define USE_CONTROLLER_FAN
#define CONTROLLERFAN_SPEED_ACTIVE               255
#define CONTROLLERFAN_SPEED_IDLE                 0

//
// Advanced Pause
//
#define ADVANCED_PAUSE_PURGE_LENGTH              50
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define PAUSE_PARK_RETRACT_LENGTH                2
#define FILAMENT_UNLOAD_PURGE_RETRACT            5
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         500
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          20
#define PAUSE_PARK_NOZZLE_TIMEOUT                180
#define ADVANCED_PAUSE_PURGE_FEEDRATE            5
#define FILAMENT_CHANGE_UNLOAD_LENGTH            560
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          20
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define ADVANCED_PAUSE_FANS_PAUSE
#define HOME_BEFORE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              0
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define ADVANCED_PAUSE_CONTINUOUS_PURGE
#define FILAMENT_UNLOAD_PURGE_LENGTH             0
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       15
#define FILAMENT_CHANGE_UNLOAD_ACCEL             20
#define FILAMENT_UNLOAD_PURGE_DELAY              3000

//
// Calibrate
//
#define SEGMENT_LEVELED_MOVES
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELING_BED_TEMP                        PROBING_BED_TEMP
#define GRID_MAX_POINTS_X                        5
#define LEVELED_SEGMENT_LENGTH                   5.0
#define AUTO_BED_LEVELING_BILINEAR
#define ENABLE_LEVELING_AFTER_G28
#define MAX_SAVED_MESHES                         100
#define EVENT_GCODE_AFTER_G29                    "G27\nG1 Y0 F5000"
#define LEVELING_NOZZLE_TEMP                     PROBING_NOZZLE_TEMP
#define HOME_AFTER_G34
#define Z_STEPPER_ALIGN_ITERATIONS               5
#define Z_STEPPER_ALIGN_ACC                      0.02
#define G34_MAX_GRADE                            5
#define Z_STEPPER_AUTO_ALIGN
#define RESTORE_LEVELING_AFTER_G34
#define Z_STEPPER_ALIGN_AMP                      1.0

//
// Media
//
#define SDSUPPORT

//
// LCD
//
#define ANYCUBIC_LCD_CHIRON
#define POWER_LOSS_PIN                           OUTAGETEST_PIN
#define SOUND_ON_DEFAULT
#define FINE_MANUAL_MOVE                         0.025
#define SD_PROCEDURE_DEPTH                       1
#define SDCARD_SORT_ALPHA
#define SET_PROGRESS_MANUALLY
#define AC_SD_FOLDER_VIEW
#define PLR_ENABLED_DEFAULT                      false
#define POWER_LOSS_PULLUP
#define SHOW_ELAPSED_TIME
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define POWER_LOSS_STATE                         LOW
#define POWER_LOSS_RECOVERY
#define POWER_LOSS_PURGE_LEN                     1
#define POWER_LOSS_RECOVER_ZHOME
#define SDSORT_GCODE                             false
#define SDSORT_USES_STACK                        false
#define SD_MAX_READ_ERRORS                       5
#define SDSORT_QUICK                             true
#define REINIT_NOISY_LCD
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84XYE"
#define SET_PROGRESS_PERCENT
#define SDSORT_LIMIT                             40
#define SHOW_PROGRESS_PERCENT
#define SDSORT_FOLDERS                           1
#define EVENT_GCODE_SD_ABORT                     "G27"
#define SDSORT_USES_RAM                          false
#define SDSORT_REVERSE                           false
#define POWER_LOSS_ZHOME_POS                     { 0, 0 }
#define POWER_LOSS_MIN_Z_CHANGE                  0.05

//
// Interface
//
#define SPEAKER

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 5), (Y_MAX_POS - 5), 5 }
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
#define CUSTOM_MACHINE_NAME                      "Anycubic Chiron"
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
#define M115_GEOMETRY_REPORT

//
// Safety
//
#define USE_WATCHDOG
#define THERMAL_PROTECTION_HOTENDS
#define EXTRUDE_MAXLENGTH                        700
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED

//
// Stats
//
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define PRINTCOUNTER
#define SERVICE_WARNING_BUZZES                   3

//
// Temperature Presets
//
#define PREHEAT_1_TEMP_HOTEND                    190
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_2_LABEL                          "PETG"
#define PREHEAT_2_TEMP_BED                       75
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_TEMP_HOTEND                    235

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
#define TEMP_SENSOR_BED                          1

//
// Baby-Stepping
//
#define BABYSTEP_MULTIPLICATOR_Z                 0.02
#define BABYSTEPPING
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_MILLIMETER_UNITS
