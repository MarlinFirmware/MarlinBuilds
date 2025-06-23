/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 12:12:58.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Chris Pepper)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_SIMULATED

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
#define ADVANCE_K                                0.0

//
// Geometry
//
#define X_BED_SIZE                               400
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               400
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                500
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
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER
#define QUICK_HOME

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 500 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 5, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 100, 10000 }
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             false
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.013
#define DEFAULT_ACCELERATION                     3000
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
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Probes
//
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -2
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define BLTOUCH
#define NOZZLE_TO_PROBE_OFFSET                   { -20, 0, -2 }
#define Z_PROBE_FEEDRATE_FAST                    (4*60)

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
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
#define TEMP_SENSOR_BED                          1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define BED_MINTEMP                              5
#define PREHEAT_2_FAN_SPEED                      0
#define BED_MAXTEMP                              150
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       110
#define PREHEAT_2_TEMP_HOTEND                    240
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MIN                             210
#define THERMAL_PROTECTION_BED_PERIOD            20

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_Kd                               114.00
#define DEFAULT_Ki                               1.08
#define DEFAULT_Kp                               22.20

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20

//
// Bed Temp
//
#define MAX_BED_POWER                            255

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                2
#define ADVANCED_PAUSE_PURGE_LENGTH              50
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
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          10
#define FILAMENT_CHANGE_UNLOAD_LENGTH            100
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
#define GRID_MAX_POINTS_X                        5
#define AUTO_BED_LEVELING_BILINEAR
#define BILINEAR_SUBDIVISIONS                    3
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define ABL_BILINEAR_SUBDIVISION

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
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define BABYSTEP_XY
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define PROBE_DEPLOY_STOW_MENU
#define STATUS_HOTEND_ANIM
#define ULTIPANEL_FEEDMULTIPLY
#define BABYSTEP_WITHOUT_HOMING
#define BOOT_MARLIN_LOGO_ANIMATED
#define BOOT_MARLIN_LOGO_SMALL
#define BABYSTEPPING
#define BABYSTEP_DISPLAY_TOTAL
#define MANUAL_E_MOVES_RELATIVE
#define MOVE_Z_WHEN_IDLE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define STATUS_HEAT_PERCENT
#define SHOW_ELAPSED_TIME
#define SOUND_ON_DEFAULT
#define SD_PROCEDURE_DEPTH                       1
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define STATUS_ALT_BED_BITMAP
#define STATUS_HOTEND_INVERTED
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MOVE_Z_IDLE_MULTIPLICATOR                1
#define STATUS_CHAMBER_ANIM
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                1
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define XYZ_HOLLOW_FRAME
#define STATUS_BED_ANIM
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define STATUS_FAN_FRAMES                        3
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define USE_BIG_EDIT_FONT
#define STATUS_ALT_FAN_BITMAP

//
// Interface
//
#define DISPLAY_CHARSET_HD44780                  JAPANESE
#define LCD_LANGUAGE                             en
#define REVERSE_MENU_DIRECTION

//
// Develop
//
#define PINS_DEBUGGING

//
// Cnc
//
#define CNC_COORDINATE_SYSTEMS

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5

//
// Nozzle Clean
//
#define NOZZLE_CLEAN_CIRCLE_FN                   10
#define NOZZLE_CLEAN_STROKES                     12
#define NOZZLE_CLEAN_FEATURE
#define NOZZLE_CLEAN_PATTERN_ZIGZAG
#define NOZZLE_CLEAN_MIN_TEMP                    170
#define NOZZLE_CLEAN_PATTERN_CIRCLE
#define NOZZLE_CLEAN_CIRCLE_RADIUS               6.5
#define NOZZLE_CLEAN_GOBACK
#define NOZZLE_CLEAN_END_POINT                   { { 100, 60, (Z_MIN_POS + 1) } }
#define NOZZLE_CLEAN_PATTERN_LINE
#define NOZZLE_CLEAN_START_POINT                 { { 30, 30, (Z_MIN_POS + 1) } }
#define NOZZLE_CLEAN_DEFAULT_PATTERN             0
#define NOZZLE_CLEAN_CIRCLE_MIDDLE               NOZZLE_CLEAN_START_POINT
#define NOZZLE_CLEAN_TRIANGLES                   3

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define GCODE_MOTION_MODES
#define GCODE_QUOTED_STRINGS
#define REPETIER_GCODE_M360
#define RETRACT_LENGTH                           3
#define RETRACT_RECOVER_FEEDRATE_SWAP            8
#define STARTUP_COMMANDS                         "M118 Sim Startup!"
#define GCODE_MACROS_SLOT_SIZE                   50
#define RETRACT_RECOVER_LENGTH                   0
#define RETRACT_ZRAISE                           0
#define FWRETRACT_AUTORETRACT
#define MAX_AUTORETRACT                          10.0
#define VARIABLE_G0_FEEDRATE
#define PAREN_COMMENTS
#define FWRETRACT
#define RETRACT_RECOVER_FEEDRATE                 8
#define GCODE_MACROS_SLOTS                       5
#define RETRACT_LENGTH_SWAP                      13
#define G0_FEEDRATE                              3000
#define GCODE_CASE_INSENSITIVE
#define RETRACT_FEEDRATE                         45
#define GCODE_MACROS
#define RETRACT_RECOVER_LENGTH_SWAP              0
#define DEBUG_FLAGS_GCODE
#define MIN_AUTORETRACT                          0.1

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
// Photo
//
#define PHOTO_GCODE
#define PHOTO_POSITION                           { X_MAX_POS - 5, Y_MAX_POS, 0 }
#define PHOTO_DELAY_MS                           100

//
// Reporting
//
#define AUTO_REPORT_TEMPERATURES
#define EXTENDED_CAPABILITIES_REPORT
#define CAPABILITIES_REPORT
#define M114_DETAIL

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
// Security
//
#define PASSWORD_CHANGE_GCODE
#define PASSWORD_FEATURE
#define PASSWORD_UNLOCK_GCODE
#define PASSWORD_LENGTH                          4
#define PASSWORD_ON_STARTUP

//
// Servos
//
#define SERVO_DELAY                              { 50 }

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
#define CNC_WORKSPACE_PLANES
#define BEZIER_CURVE_SUPPORT
#define ARC_P_CIRCLES
#define CANCEL_OBJECTS_REPORTING
#define CANCEL_OBJECTS
#define SAVED_POSITIONS                          1

//
// User
//
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
