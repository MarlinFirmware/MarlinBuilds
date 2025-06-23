/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 11:36:23.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(sgparry, Vertex Delta K8800)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_K8800

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Stepper Drivers
//
#define X_DRIVER_TYPE                            DRV8825
#define Y_DRIVER_TYPE                            DRV8825
#define Z_DRIVER_TYPE                            DRV8825
#define E0_DRIVER_TYPE                           DRV8825
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
#define Z_MAX_POS                                MANUAL_Z_HOME_POS
#define MIN_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_Z
#define MAX_SOFTWARE_ENDSTOP_Z

//
// Homing
//
#define X_HOME_DIR                               1
#define Y_HOME_DIR                               1
#define Z_HOME_DIR                               1
#define HOMING_FEEDRATE_MM_M                     { (120*60), (120*60), (120*60) }
#define HOMING_BUMP_DIVISOR                      { 5, 5, 5 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 5 }
#define HOME_AFTER_DEACTIVATE
#define MANUAL_Z_HOME_POS                        DELTA_HEIGHT
#define BED_CENTER_AT_0_0

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { DEFAULT_XYZ_STEPS_PER_UNIT, DEFAULT_XYZ_STEPS_PER_UNIT, DEFAULT_XYZ_STEPS_PER_UNIT, ESTEPS_P_MM }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     {_MXYZFR , _MXYZFR, _MXYZFR, _MEFR }
#define DEFAULT_MAX_ACCELERATION                 { 9000, 9000, 9000, 10000 }
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             false
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define DEFAULT_ACCELERATION                     3000
#define DEFAULT_TRAVEL_ACCELERATION              3000
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    1
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_EJERK                            5.0
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define DISABLE_IDLE_E
#define DEFAULT_ZJERK                            DEFAULT_XJERK
#define XYZ_BELT_PITCH                           2.5
#define _MEFR                                    (MAX_STEPRATE / (ESTEPS_P_MM))
#define ESTEPS_P_MM                              154.3
#define XYZ_FULL_STEPS_PER_ROTATION              200
#define CLASSIC_JERK
#define _MXYZFR                                  (MAX_STEPRATE / DEFAULT_XYZ_STEPS_PER_UNIT)
#define EDITABLE_STEPS_PER_UNIT
#define XYZ_PULLEY_TEETH                         22
#define MAX_STEPRATE                             40000
#define DEFAULT_YJERK                            DEFAULT_XJERK
#define XYZ_MICROSTEPS                           32
#define S_CURVE_ACCELERATION
#define DEFAULT_XJERK                            15.0
#define DEFAULT_XYZ_STEPS_PER_UNIT               ((XYZ_FULL_STEPS_PER_ROTATION) * (XYZ_MICROSTEPS) / double(XYZ_BELT_PITCH) / double(XYZ_PULLEY_TEETH))
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define ENDSTOPPULLUPS
#define ENDSTOP_INTERRUPTS_FEATURE
#define Y_MAX_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH
#define X_MAX_ENDSTOP_HIT_STATE                  LOW
#define Z_MAX_ENDSTOP_HIT_STATE                  LOW

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
#define PROBING_MARGIN                           15
#define XY_PROBE_FEEDRATE                        4000
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 0
#define Z_CLEARANCE_MULTI_PROBE                  5
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define MULTIPLE_PROBING                         3
#define PROBING_ESTEPPERS_OFF
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -5
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 4)
#define DELAY_BEFORE_PROBING                     500
#define NOZZLE_AS_PROBE
#define PROBING_FANS_OFF
#define NOZZLE_TO_PROBE_OFFSET                   { 0, 0, 0 }
#define Z_PROBE_FEEDRATE_FAST                    HOMING_FEEDRATE_Z
#define HOMING_FEEDRATE_Z                        (100*60)

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            7
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         295
#define PREHEAT_1_TEMP_HOTEND                    200
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      255
#define PREHEAT_1_LABEL                          "PLA (200)"
#define TEMP_RESIDENCY_TIME                      5
#define TEMP_WINDOW                              1
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        60
#define PREHEAT_2_FAN_SPEED                      255
#define PREHEAT_2_LABEL                          "ABS (250)"
#define PREHEAT_2_TEMP_HOTEND                    250
#define AUTOTEMP_MIN                             210
#define TEMP_TUNING_MAINTAIN_FAN
#define AUTOTEMP_MAX                             250
#define ADAPTIVE_FAN_SLOWING
#define AUTOTEMP_FACTOR                          0.1f

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_Kp                               15.20
#define DEFAULT_Kd                               50.42
#define DEFAULT_Ki                               1.75

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1
#define CONTROLLERFAN_SPEED_MIN                  0
#define CONTROLLERFAN_SPEED_ACTIVE               204
#define CONTROLLERFAN_IDLE_TIME                  60
#define FAN_MIN_PWM                              100
#define FAN_KICKSTART_TIME                       300
#define USE_CONTROLLER_FAN
#define CONTROLLERFAN_SPEED_IDLE                 0

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                6
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         650
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define PAUSE_PARK_NOZZLE_TIMEOUT                120
#define PAUSE_PARK_RETRACT_FEEDRATE              120
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       25
#define FILAMENT_CHANGE_UNLOAD_LENGTH            700
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          25
#define ADVANCED_PAUSE_PURGE_LENGTH              55
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_PURGE_RETRACT            13
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define MESH_INSET                               1
#define GRID_MAX_POINTS_X                        9
#define UBL_SAVE_ACTIVE_ON_M500
#define MESH_TEST_BED_TEMP                       60
#define RESTORE_LEVELING_AFTER_G28
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define G26_XY_FEEDRATE_TRAVEL                   100
#define AUTO_BED_LEVELING_UBL
#define MESH_TEST_NOZZLE_SIZE                    0.35
#define G26_RETRACT_MULTIPLIER                   1.0
#define MESH_TEST_HOTEND_TEMP                    PREHEAT_1_TEMP_HOTEND
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define G26_XY_FEEDRATE                          20
#define UBL_MESH_EDIT_MOVES_Z
#define MESH_TEST_LAYER_HEIGHT                   0.2
#define MANUAL_PROBE_START_Z                     0.2
#define G26_MESH_VALIDATION

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
#define AZSMZ_12864
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define MANUAL_FEEDRATE_XYZ                      120*60
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define STATUS_HOTEND_ANIM
#define SHOW_CUSTOM_BOOTSCREEN
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define MENU_HOLLOW_FRAME
#define SCROLL_LONG_FILENAMES
#define BOOT_MARLIN_LOGO_SMALL
#define BABYSTEPPING
#define LCD_DECIMAL_SMALL_XY
#define MANUAL_E_MOVES_RELATIVE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define SDCARD_READONLY
#define SHOW_ELAPSED_TIME
#define SOUND_ON_DEFAULT
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_REMAINING_TIME
#define FLOW_EDIT_MAX                            999
#define BABYSTEP_ZPROBE_OFFSET
#define FLOW_EDIT_MIN                            10
#define STATUS_BED_ANIM
#define STATUS_HOTEND_INVERTED
#define PRINT_PROGRESS_SHOW_DECIMALS
#define MANUAL_FEEDRATE                          { MANUAL_FEEDRATE_XYZ, MANUAL_FEEDRATE_XYZ, MANUAL_FEEDRATE_XYZ, 80 }
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                1
#define LONG_FILENAME_HOST_SUPPORT
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define XYZ_HOLLOW_FRAME
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define LCD_TIMEOUT_TO_STATUS                    15000
#define DOUBLECLICK_FOR_Z_BABYSTEPPING

//
// Caselight
//
#define INVERT_CASE_LIGHT                        false
#define CASE_LIGHT_DEFAULT_BRIGHTNESS            100
#define CASE_LIGHT_DEFAULT_ON                    true
#define CASE_LIGHT_MENU
#define CASE_LIGHT_PIN                           7
#define CASE_LIGHT_ENABLE

//
// Interface
//
#define LCD_LANGUAGE                             en
#define LCD_FEEDBACK_FREQUENCY_HZ                4000
#define SPEAKER
#define REVERSE_MENU_DIRECTION
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS       150
#define ENCODER_PULSES_PER_STEP                  2
#define ENCODER_FEEDRATE_DEADZONE                2

//
// Delta
//
#define DELTA_DIAGONAL_ROD                       207.0
#define DELTA_SMOOTH_ROD_OFFSET                  157.804
#define DELTA
#define DELTA_TOWER_ANGLE_TRIM                   { 0.0, 0.0, 0.0 }
#define DELTA_CALIBRATION_DEFAULT_POINTS         5
#define DELTA_AUTO_CALIBRATION
#define DELTA_HEIGHT                             308.00
#define DELTA_RADIUS                             (DELTA_SMOOTH_ROD_OFFSET - DELTA_EFFECTOR_OFFSET - DELTA_CARRIAGE_OFFSET)
#define DELTA_HOME_TO_SAFE_ZONE
#define DELTA_CALIBRATION_MENU
#define DELTA_ENDSTOP_ADJ                        { 0.0, 0.0, 0.0 }
#define DELTA_EFFECTOR_OFFSET                    23.816
#define DELTA_CARRIAGE_OFFSET                    23.777
#define PROBE_MANUALLY_STEP                      (2 * 0.0086)

//
// Polar
//
#define DEFAULT_SEGMENTS_PER_SECOND              100
#define PRINTABLE_RADIUS                         100.0

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { 0, 0, 50 }
#define NOZZLE_PARK_Z_RAISE_MIN                  50
#define NOZZLE_PARK_XY_FEEDRATE                  120
#define NOZZLE_PARK_Z_FEEDRATE                   NOZZLE_PARK_XY_FEEDRATE

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define NO_WORKSPACE_OFFSETS
#define DEBUG_FLAGS_GCODE

//
// Serial
//
#define SERIAL_PORT                              0
#define BAUDRATE                                 250000
#define BUFSIZE                                  9
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           0
#define MACHINE_UUID                             "096ca084-14f6-4c40-ac17-530a8286043a"
#define CUSTOM_MACHINE_NAME                      "Vertex Delta"
#define SERIAL_FLOAT_PRECISION                   4
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
#define M114_DETAIL
#define CAPABILITIES_REPORT

//
// Safety
//
#define USE_WATCHDOG
#define THERMAL_PROTECTION_HOTENDS
#define EXTRUDE_MAXLENGTH                        1000
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE

//
// Stats
//
#define PRINTCOUNTER
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define SERVICE_WARNING_BUZZES                   3

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
#define ARC_SEGMENTS_PER_SEC                     50
#define CNC_WORKSPACE_PLANES
#define ARC_P_CIRCLES

//
// User
//
#define K8800_UBL
