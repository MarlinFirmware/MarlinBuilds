/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 11:28:39.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Team Overlord/TimMoore)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_OVERLORD

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
#define INVERT_E0_DIR                            false
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
#define SOFT_ENDSTOPS_MENU_ITEM

//
// Homing
//
#define X_HOME_DIR                               1
#define Y_HOME_DIR                               1
#define Z_HOME_DIR                               1
#define HOMING_FEEDRATE_MM_M                     { (100*60), (100*60), (100*60) }
#define HOMING_BUMP_DIVISOR                      { 10, 10, 10 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 5 }
#define MANUAL_Z_HOME_POS                        DELTA_HEIGHT
#define BED_CENTER_AT_0_0

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { DEFAULT_XYZ_STEPS_PER_UNIT, DEFAULT_XYZ_STEPS_PER_UNIT, DEFAULT_XYZ_STEPS_PER_UNIT, 67.394}
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 100, 100, 100, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 1000, 1000, 1000, 3000 }
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             true
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
#define XYZ_BELT_PITCH                           2.03
#define XYZ_FULL_STEPS_PER_ROTATION              100
#define CLASSIC_JERK
#define EDITABLE_STEPS_PER_UNIT
#define XYZ_PULLEY_TEETH                         20
#define DEFAULT_YJERK                            DEFAULT_XJERK
#define XYZ_MICROSTEPS                           32
#define DEFAULT_XJERK                            10.0
#define DEFAULT_XYZ_STEPS_PER_UNIT               ((XYZ_FULL_STEPS_PER_ROTATION) * (XYZ_MICROSTEPS) / double(XYZ_BELT_PITCH) / double(XYZ_PULLEY_TEETH))
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define ENDSTOPPULLUPS
#define Y_MAX_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            LOW
#define X_MAX_ENDSTOP_HIT_STATE                  LOW
#define Z_MAX_ENDSTOP_HIT_STATE                  LOW

//
// Probes
//
#define PROBING_MARGIN                           5
#define XY_PROBE_FEEDRATE                        (66*60)
#define Z_CLEARANCE_BETWEEN_PROBES               15
#define Z_CLEARANCE_DEPLOY_PROBE                 15
#define Z_CLEARANCE_MULTI_PROBE                  15
#define Z_AFTER_PROBING                          15
#define MULTIPLE_PROBING                         2
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -4
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 10)
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define FIX_MOUNTED_PROBE
#define NOZZLE_TO_PROBE_OFFSET                   { 0, 0, 0.65 }
#define Z_PROBE_FEEDRATE_FAST                    (100/2*60)

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            201
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         245
#define PREHEAT_1_TEMP_HOTEND                    180
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define TEMP_SENSOR_REDUNDANT                    201
#define PREHEAT_2_FAN_SPEED                      0
#define TEMP_SENSOR_REDUNDANT_MAX_DIFF           10
#define PREHEAT_2_LABEL                          "ABS"
#define TEMP_SENSOR_REDUNDANT_SOURCE             E1
#define PREHEAT_2_TEMP_HOTEND                    230
#define TEMP_SENSOR_REDUNDANT_TARGET             E0
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_FACTOR                          0.1f

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  160
#define DEFAULT_Kd                               33.89
#define DEFAULT_Ki                               0.55
#define DEFAULT_Kp                               8.62

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20
#define PID_AUTOTUNE_MENU

//
// Bed Temp
//
#define DEFAULT_bedKi                            24.14
#define DEFAULT_bedKd                            663.66
#define DEFAULT_bedKp                            253.16

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1
#define FAN_KICKSTART_TIME                       100

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                2
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define HOME_BEFORE_FILAMENT_CHANGE
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_LENGTH            100
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          10
#define ADVANCED_PAUSE_FANS_PAUSE
#define ADVANCED_PAUSE_PURGE_LENGTH              50
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
#define DEBUG_LEVELING_FEATURE

//
// Media
//
#define SDSUPPORT

//
// LCD
//
#define SHOW_BOOTSCREEN
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                3
#define ENCODER_RATE_MULTIPLIER
#define OVERLORD_OLED
#define SPEED_EDIT_MAX                           999
#define USE_SMALL_INFOFONT
#define SPEED_EDIT_MIN                           10
#define PLR_ENABLED_DEFAULT                      false
#define MANUAL_FEEDRATE_XYZ                      50*60
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define STATUS_HOTEND_ANIM
#define SHOW_CUSTOM_BOOTSCREEN
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define MENU_HOLLOW_FRAME
#define SCROLL_LONG_FILENAMES
#define BOOT_MARLIN_LOGO_SMALL
#define BABYSTEPPING
#define AUTO_REPORT_SD_STATUS
#define BABYSTEP_DISPLAY_TOTAL
#define POWER_LOSS_STATE                         LOW
#define LCD_DECIMAL_SMALL_XY
#define POWER_LOSS_RECOVERY
#define LED_USER_PRESET_GREEN                    35
#define MANUAL_E_MOVES_RELATIVE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28"
#define BABYSTEP_MULTIPLICATOR_Z                 10
#define SHOW_ELAPSED_TIME
#define SOUND_ON_DEFAULT
#define LED_USER_PRESET_RED                      35
#define LED_USER_PRESET_STARTUP
#define SD_PROCEDURE_DEPTH                       1
#define LED_USER_PRESET_BLUE                     35
#define FLOW_EDIT_MAX                            999
#define STATUS_CHAMBER_ANIM
#define FLOW_EDIT_MIN                            10
#define STATUS_BED_ANIM
#define STATUS_HOTEND_INVERTED
#define MANUAL_FEEDRATE                          { MANUAL_FEEDRATE_XYZ, MANUAL_FEEDRATE_XYZ, MANUAL_FEEDRATE_XYZ, 60 }
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                10
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define PE_LEDS_COMPLETED_TIME                   (30*60)
#define SET_PROGRESS_MANUALLY
#define XYZ_HOLLOW_FRAME
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define LCD_TIMEOUT_TO_STATUS                    15000
#define SET_PROGRESS_PERCENT
#define LED_USER_PRESET_WHITE                    255
#define LED_USER_PRESET_BRIGHTNESS               255
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define POWER_LOSS_MIN_Z_CHANGE                  0.05
#define LED_CONTROL_MENU
#define LED_COLOR_PRESETS

//
// Lights
//
#define PRINTER_EVENT_LEDS
#define PCA9632

//
// Interface
//
#define LCD_LANGUAGE                             en

//
// Delta
//
#define DELTA_DIAGONAL_ROD                       206.0
#define DELTA_TOWER_ANGLE_TRIM                   { 0.69, 0.0, -0.70 }
#define DELTA_CALIBRATION_DEFAULT_POINTS         4
#define DELTA_RADIUS_TRIM_TOWER                  { 0.0, 0.0, 0.0 }
#define DELTA_AUTO_CALIBRATION
#define DELTA_HEIGHT                             286.14
#define DELTA_RADIUS                             100.63
#define DELTA_DIAGONAL_ROD_TRIM_TOWER            { 0.0, 0.0, 0.0 }
#define DELTA_HOME_TO_SAFE_ZONE
#define DELTA_CALIBRATION_MENU
#define DELTA_ENDSTOP_ADJ                        { 0.0, 0.0, 0.0 }
#define DELTA
#define PROBE_MANUALLY_STEP                      0.05

//
// Polar
//
#define DEFAULT_SEGMENTS_PER_SECOND              200
#define PRINTABLE_RADIUS                         85.0

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 }
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
#define SERIAL_PORT                              0
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           0
#define CUSTOM_MACHINE_NAME                      "Overlord Pro"

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_KEEPALIVE_FEATURE
#define PRINTJOB_TIMER_AUTOSTART

//
// PSU Control
//
#define PSU_NAME                                 "OVERLORD"
#define PSU_DEFAULT_OFF
#define PS_EDM_RESPONSE                          250
#define AUTO_POWER_CONTROL
#define POWER_TIMEOUT                            30
#define AUTO_POWER_CONTROLLERFAN
#define AUTO_POWER_E_FANS
#define AUTO_POWER_E_TEMP                        50
#define PSU_ACTIVE_STATE                         HIGH
#define AUTO_POWER_FANS
#define PSU_CONTROL

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
