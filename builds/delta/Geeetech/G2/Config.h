/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 11:32:15.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(@Vertabreak)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_GT2560_REV_A_PLUS

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
#define LIN_ADVANCE
#define ADVANCE_K_EXTRA
#define ADVANCE_K                                0.0

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
#define HOMING_FEEDRATE_MM_M                     { HOMING_FEEDRATE_Z, HOMING_FEEDRATE_Z, HOMING_FEEDRATE_Z }
#define HOMING_BUMP_DIVISOR                      { 10, 10, 10 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 5 }
#define MANUAL_Z_HOME_POS                        DELTA_HEIGHT
#define BED_CENTER_AT_0_0
#define Z_CLEARANCE_FOR_HOMING                   4
#define HOMING_FEEDRATE_Z                        (60*60)

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { DEFAULT_XYZ_STEPS_PER_UNIT, DEFAULT_XYZ_STEPS_PER_UNIT, DEFAULT_XYZ_STEPS_PER_UNIT, 100 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 200, 200, 200, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 3000, 10000 }
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             true
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define DEFAULT_ACCELERATION                     1000
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_RETRACT_ACCELERATION             1000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    1
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_EJERK                            5.0
#define DEFAULT_STEPPER_TIMEOUT_SEC              60
#define DISABLE_IDLE_E
#define DEFAULT_ZJERK                            DEFAULT_XJERK
#define XYZ_BELT_PITCH                           2
#define XYZ_FULL_STEPS_PER_ROTATION              200
#define CLASSIC_JERK
#define EDITABLE_STEPS_PER_UNIT
#define XYZ_PULLEY_TEETH                         20
#define DEFAULT_YJERK                            DEFAULT_XJERK
#define XYZ_MICROSTEPS                           16
#define S_CURVE_ACCELERATION
#define DEFAULT_XJERK                            8.0
#define DEFAULT_XYZ_STEPS_PER_UNIT               ((XYZ_FULL_STEPS_PER_ROTATION) * (XYZ_MICROSTEPS) / double(XYZ_BELT_PITCH) / double(XYZ_PULLEY_TEETH))
#define MULTISTEPPING_LIMIT                      16
#define ADAPTIVE_STEP_SMOOTHING

//
// Endstops
//
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define ENDSTOP_NOISE_THRESHOLD                  2
#define Y_MAX_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            Z_MIN_ENDSTOP_HIT_STATE
#define X_MAX_ENDSTOP_HIT_STATE                  HIGH
#define Z_MAX_ENDSTOP_HIT_STATE                  HIGH

//
// Probes
//
#define PROBING_MARGIN                           1
#define XY_PROBE_FEEDRATE                        HOMING_FEEDRATE_Z
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_PROBE_ALLEN_KEY_DEPLOY_1_FEEDRATE      XY_PROBE_FEEDRATE
#define Z_PROBE_ALLEN_KEY_DEPLOY_1               { 30.0, PRINTABLE_RADIUS, 100.0 }
#define Z_PROBE_ALLEN_KEY_DEPLOY_2               { 0.0, PRINTABLE_RADIUS, 100.0 }
#define Z_PROBE_ALLEN_KEY_STOW_2_FEEDRATE        (XY_PROBE_FEEDRATE)/10
#define Z_PROBE_ALLEN_KEY_DEPLOY_3               { 0.0, (PRINTABLE_RADIUS) * 0.75, 100.0 }
#define Z_PROBE_ALLEN_KEY
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -2
#define Z_PROBE_ALLEN_KEY_STOW_2                 { -64.0, 56.0, 3.0 }
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define Z_PROBE_ALLEN_KEY_STOW_1_FEEDRATE        XY_PROBE_FEEDRATE
#define Z_PROBE_ALLEN_KEY_STOW_4_FEEDRATE        XY_PROBE_FEEDRATE
#define Z_PROBE_ALLEN_KEY_STOW_1                 { -64.0, 56.0, 23.0 }
#define Z_PROBE_ALLEN_KEY_STOW_3                 { -64.0, 56.0, 50.0 }
#define Z_PROBE_ALLEN_KEY_STOW_4                 { 0.0, 0.0, 50.0 }
#define NOZZLE_TO_PROBE_OFFSET                   { 19, -11, -2 }
#define Z_PROBE_FEEDRATE_FAST                    (60*60)
#define Z_PROBE_ALLEN_KEY_STOW_3_FEEDRATE        XY_PROBE_FEEDRATE
#define Z_PROBE_ALLEN_KEY_DEPLOY_3_FEEDRATE      XY_PROBE_FEEDRATE
#define Z_PROBE_ALLEN_KEY_DEPLOY_2_FEEDRATE      (XY_PROBE_FEEDRATE)/10

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define PREHEAT_1_TEMP_HOTEND                    200
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define TEMP_SENSOR_BED                          1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define PREHEAT_2_FAN_SPEED                      0
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              150
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       100
#define PREHEAT_2_TEMP_HOTEND                    250
#define LPQ_MAX_LEN                              50
#define AUTOTEMP_MIN                             210
#define PREHEAT_TIME_HOTEND_MS                   30000
#define PID_EXTRUSION_SCALING
#define AUTOTEMP_MAX                             250
#define MAX_CONSECUTIVE_LOW_TEMPERATURE_ERROR_ALLOWED 10
#define AUTOTEMP_FACTOR                          0.1f
#define DEFAULT_Kc                               (100)
#define THERMAL_PROTECTION_BED_PERIOD            20
#define SHOW_TEMP_ADC_VALUES

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_Kp                               22.20
#define DEFAULT_Kd                               114.00
#define DEFAULT_Ki                               1.08

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

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1
#define FAN_SOFT_PWM
#define FAN_MIN_PWM                              50

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                2
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_UNLOAD_ALL_EXTRUDERS
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
#define MESH_INSET                               1
#define GRID_MAX_POINTS_X                        5
#define UBL_SAVE_ACTIVE_ON_M500
#define RESTORE_LEVELING_AFTER_G28
#define UBL_Z_RAISE_WHEN_OFF_MESH                0
#define SEGMENT_LEVELED_MOVES
#define AUTO_BED_LEVELING_UBL
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
#define ENCODER_10X_STEPS_PER_SEC                40
#define ENCODER_RATE_MULTIPLIER
#define REPRAP_DISCOUNT_SMART_CONTROLLER
#define SPEED_EDIT_MAX                           999
#define PROBE_DEPLOY_STOW_MENU
#define SPEED_EDIT_MIN                           10
#define MANUAL_FEEDRATE_XYZ                      50*60
#define DOUBLECLICK_MAX_INTERVAL                 2000
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define PROGRESS_MSG_EXPIRE                      0
#define SCROLL_LONG_FILENAMES
#define BABYSTEPPING
#define BEEP_ON_FEEDRATE_CHANGE
#define AUTO_REPORT_SD_STATUS
#define FEEDRATE_CHANGE_BEEP_FREQUENCY           50
#define SD_FINISHED_RELEASECOMMAND               "M84 E"
#define LCD_DECIMAL_SMALL_XY
#define MANUAL_E_MOVES_RELATIVE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G27"
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define SHOW_ELAPSED_TIME
#define PROGRESS_BAR_BAR_TIME                    5000
#define SOUND_ON_DEFAULT
#define MENU_ADDAUTOSTART
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_REMAINING_TIME
#define SET_REMAINING_TIME
#define LCD_PROGRESS_BAR
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define PRINT_PROGRESS_SHOW_DECIMALS
#define MANUAL_FEEDRATE                          { MANUAL_FEEDRATE_XYZ, MANUAL_FEEDRATE_XYZ, MANUAL_FEEDRATE_XYZ, 60 }
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_ALWAYS_AVAILABLE
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SET_PROGRESS_MANUALLY
#define SD_FINISHED_STEPPERRELEASE               true
#define LCD_INFO_MENU
#define LCD_TIMEOUT_TO_STATUS                    60000
#define SET_PROGRESS_PERCENT
#define FEEDRATE_CHANGE_BEEP_DURATION            10
#define PROGRESS_BAR_MSG_TIME                    3500
#define LCD_SHOW_E_TOTAL
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define TURBO_BACK_MENU_ITEM

//
// Interface
//
#define DISPLAY_CHARSET_HD44780                  JAPANESE
#define LCD_INFO_SCREEN_STYLE                    0
#define LCD_LANGUAGE                             en
#define LCD_FEEDBACK_FREQUENCY_HZ                50
#define SPEAKER
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS       10

//
// Delta
//
#define DELTA_DIAGONAL_ROD                       196.0
#define DELTA
#define DELTA_TOWER_ANGLE_TRIM                   { 0.70, 0.05, -0.74 }
#define DELTA_CALIBRATION_DEFAULT_POINTS         2
#define DELTA_AUTO_CALIBRATION
#define DELTA_HEIGHT                             200
#define DELTA_RADIUS                             90.0
#define DELTA_HOME_TO_SAFE_ZONE
#define DELTA_CALIBRATION_MENU
#define DELTA_ENDSTOP_ADJ                        { 0.0, 0.0, 0.0 }
#define PROBE_MANUALLY_STEP                      0.05

//
// Polar
//
#define DEFAULT_SEGMENTS_PER_SECOND              160
#define PRINTABLE_RADIUS                         90.0

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { 0, 0, 20 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   NOZZLE_PARK_XY_FEEDRATE

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define GCODE_MACROS_SLOT_SIZE                   50
#define GCODE_MACROS_SLOTS                       5
#define GCODE_MACROS
#define NO_WORKSPACE_OFFSETS
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
#define CUSTOM_MACHINE_NAME                      "3D Printer"
#define EMERGENCY_PARSER
#define ADVANCED_OK

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_KEEPALIVE_FEATURE
#define PRINTJOB_TIMER_AUTOSTART
#define HOST_PROMPT_SUPPORT
#define HOST_ACTION_COMMANDS

//
// PSU Control
//
#define PSU_NAME                                 "Power Supply"

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
#define EXTRUDE_MAXLENGTH                        200
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED

//
// Volumetrics
//
#define NO_VOLUMETRICS

//
// Extras
//
#define CANCEL_OBJECTS
