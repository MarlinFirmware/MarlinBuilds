/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 11:38:16.
 */

//
// Custom
//
#define FIRMWARE_BIN                             elegoo.bin

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(just-trey, EvilGremlin)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_MKS_ROBIN_NANO

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_INIT_NOW
#define EEPROM_SETTINGS

//
// Stepper Drivers
//
#define X_DRIVER_TYPE                            TMC2208_STANDALONE
#define Y_DRIVER_TYPE                            TMC2208_STANDALONE
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
#define HOTEND_IDLE_TIMEOUT_SEC                  (2*60)
#define HOTEND_IDLE_MIN_TRIGGER                  180
#define LIN_ADVANCE
#define HOTEND_IDLE_NOZZLE_TARGET                0
#define HOTEND_IDLE_TIMEOUT
#define ADVANCE_K                                0.0
#define HOTEND_IDLE_BED_TARGET                   0

//
// Geometry
//
#define X_BED_SIZE                               235
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               235
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                250
#define MIN_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_X
#define MIN_SOFTWARE_ENDSTOP_Y
#define MIN_SOFTWARE_ENDSTOP_Z
#define MAX_SOFTWARE_ENDSTOP_X
#define MAX_SOFTWARE_ENDSTOP_Y
#define MAX_SOFTWARE_ENDSTOP_Z
#define SOFT_ENDSTOPS_MENU_ITEM

//
// Homing
//
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (10*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define Z_CLEARANCE_FOR_HOMING                   5
#define QUICK_HOME

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 95 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 150, 150, 40, 70 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 100, 10000 }
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.04
#define DEFAULT_ACCELERATION                     1500
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_RETRACT_ACCELERATION             1000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define JD_HANDLE_SMALL_SEGMENTS
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_E
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define EDITABLE_STEPS_PER_UNIT
#define S_CURVE_ACCELERATION
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS

//
// Filament Runout Sensors
//
#define WATCH_ALL_RUNOUT_SENSORS
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_STATE                         LOW
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLUP
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define NUM_RUNOUT_SENSORS                       1

//
// Probes
//
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_MIN_PROBE_PIN                          Z_MAX_PIN

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          10
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         260
#define PREHEAT_1_TEMP_HOTEND                    200
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       55
#define TEMP_BED_HYSTERESIS                      10
#define TEMP_BED_RESIDENCY_TIME                  3
#define TEMP_BED_WINDOW                          10
#define TEMP_RESIDENCY_TIME                      3
#define TEMP_WINDOW                              10
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define TEMP_SENSOR_BED                          1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define PREHEAT_3_TEMP_CHAMBER                   35
#define PREHEAT_3_FAN_SPEED                      0
#define PREHEAT_3_TEMP_BED                       90
#define PREHEAT_3_LABEL                          "ABS"
#define PREHEAT_3_TEMP_HOTEND                    240
#define PREHEAT_2_FAN_SPEED                      0
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              110
#define PREHEAT_2_LABEL                          "PETG"
#define PREHEAT_2_TEMP_BED                       75
#define PREHEAT_2_TEMP_HOTEND                    235
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_FACTOR                          0.1f
#define THERMAL_PROTECTION_BED_PERIOD            20

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_Kp                               25.47
#define DEFAULT_Kd                               76.90
#define DEFAULT_Ki                               2.11

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20
#define PID_AUTOTUNE_MENU

//
// Bed Temp
//
#define MAX_BED_POWER                            255
#define DEFAULT_bedKi                            6.02
#define PIDTEMPBED
#define DEFAULT_bedKd                            108.50
#define DEFAULT_bedKp                            31.30

//
// Fans
//
#define SOFT_PWM_SCALE                           1
#define E0_AUTO_FAN_PIN                          FAN1_PIN
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define SOFT_PWM_DITHER
#define FAN_SOFT_PWM
#define FAN_KICKSTART_TIME                       200

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                5
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         400
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           5
#define PAUSE_PARK_NOZZLE_TIMEOUT                60
#define PAUSE_PARK_RETRACT_FEEDRATE              40
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define FILAMENT_CHANGE_ALERT_BEEPS              3
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       40
#define FILAMENT_CHANGE_UNLOAD_LENGTH            400
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          40
#define ADVANCED_PAUSE_FANS_PAUSE
#define ADVANCED_PAUSE_PURGE_LENGTH              30
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_PURGE_RETRACT            12
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define MESH_INSET                               1
#define GRID_MAX_POINTS_X                        5
#define UBL_SAVE_ACTIVE_ON_M500
#define LCD_PROBE_Z_RANGE                        4
#define UBL_MESH_WIZARD
#define LCD_BED_TRAMMING
#define RESTORE_LEVELING_AFTER_G28
#define BED_TRAMMING_Z_HOP                       2
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define BED_TRAMMING_HEIGHT                      0.2
#define AUTO_BED_LEVELING_UBL
#define MESH_EDIT_Z_STEP                         0.025
#define EVENT_GCODE_AFTER_G29                    "G1 X0 Y113 Z10 F2400"
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define BED_TRAMMING_INSET_LFRB                  { 33, 33, 33, 33 }
#define UBL_MESH_EDIT_MOVES_Z
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define MANUAL_PROBE_START_Z                     0.2
#define BED_TRAMMING_INCLUDE_CENTER

//
// Media
//
#define SD_CHECK_AND_RETRY
#define SDSUPPORT

//
// LCD
//
#define SHOW_BOOTSCREEN
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define MKS_ROBIN_TFT35
#define TOUCH_SCREEN
#define BUTTON_DELAY_EDIT                        50
#define COMPACT_MARLIN_BOOT_LOGO
#define TFT_COLOR_UI
#define TOUCH_CALIBRATION_AUTO_SAVE
#define TOUCH_SCREEN_CALIBRATION
#define SINGLE_TOUCH_NAVIGATION
#define NO_BACK_MENU_ITEM
#define TFT_THEME                                BLACK_MARLIN
#define BUTTON_DELAY_MENU                        250
#define TFT_FONT                                 NOTOSANS
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define BINARY_FILE_TRANSFER
#define SCROLL_LONG_FILENAMES
#define BOOT_MARLIN_LOGO_SMALL
#define EDITABLE_DISPLAY_TIMEOUT
#define BABYSTEPPING
#define LONG_FILENAME_WRITE_SUPPORT
#define CUSTOM_FIRMWARE_UPLOAD
#define MANUAL_E_MOVES_RELATIVE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define BABYSTEP_MULTIPLICATOR_Z                 0.01
#define STATUS_MESSAGE_TIMEOUT_SEC               30
#define SHOW_ELAPSED_TIME
#define SOUND_ON_DEFAULT
#define SD_PROCEDURE_DEPTH                       1
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 10*60, 5*60 }
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                1
#define LONG_FILENAME_HOST_SUPPORT
#define UTF_FILENAME_SUPPORT
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SET_PROGRESS_MANUALLY
#define DISPLAY_SLEEP_MINUTES                    5
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define SET_PROGRESS_PERCENT
#define BABYSTEP_MILLIMETER_UNITS

//
// Interface
//
#define LCD_LANGUAGE                             en

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { 0, 113, 5 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
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
#define SERIAL_PORT                              3
#define BAUDRATE                                 115200
#define BUFSIZE                                  16
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           128
#define CUSTOM_MACHINE_NAME                      "Elegoo Neptune 2"
#define RX_BUFFER_SIZE                           1024
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
#define HOST_STATUS_NOTIFICATIONS
#define HOST_START_MENU_ITEM
#define HOST_SHUTDOWN_MENU_ITEM
#define HOST_PAUSE_M76

//
// Reporting
//
#define AUTO_REPORT_TEMPERATURES
#define EXTENDED_CAPABILITIES_REPORT
#define CAPABILITIES_REPORT
#define M115_GEOMETRY_REPORT
#define AUTO_REPORT_POSITION

//
// Safety
//
#define USE_WATCHDOG
#define THERMAL_PROTECTION_HOTENDS
#define EXTRUDE_MAXLENGTH                        600
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
