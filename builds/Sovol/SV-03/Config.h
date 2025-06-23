/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 12:18:22.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(ils15)"

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

//
// Extruder
//
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            true
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define LIN_ADVANCE
#define ADVANCE_K                                0.0

//
// Geometry
//
#define X_BED_SIZE                               360
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               360
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                410
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
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (4*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80.00, 80.00, 400.00, 415.00 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 5, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 2000, 2000, 100, 1000 }
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.08
#define DEFAULT_ACCELERATION                     750
#define DEFAULT_TRAVEL_ACCELERATION              750
#define DEFAULT_RETRACT_ACCELERATION             750
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
#define S_CURVE_ACCELERATION
#define MULTISTEPPING_LIMIT                      16
#define ADAPTIVE_STEP_SMOOTHING

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

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
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        3000
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_CLEARANCE_MULTI_PROBE                  5
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define MULTIPLE_PROBING                         2
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -2
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define BLTOUCH
#define NOZZLE_TO_PROBE_OFFSET                   { -31, -10, 0 }
#define Z_PROBE_FEEDRATE_FAST                    (30*60)

//
// BLTouch
//
#define BLTOUCH_HS_MODE                          true
#define BLTOUCH_HS_EXTRA_CLEARANCE               7

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define PREHEAT_1_TEMP_HOTEND                    195
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      255
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define TEMP_SENSOR_BED                          1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define PREHEAT_2_FAN_SPEED                      255
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              150
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       70
#define PREHEAT_2_TEMP_HOTEND                    240
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
#define DEFAULT_Kd                               71.20
#define DEFAULT_Ki                               3.44
#define DEFAULT_Kp                               31.30

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
#define DEFAULT_bedKi                            44.56
#define PIDTEMPBED
#define DEFAULT_bedKd                            62.30
#define DEFAULT_bedKp                            266.50

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1
#define FAN_SOFT_PWM

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                2
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
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
#define LCD_PROBE_Z_RANGE                        4
#define MESH_TEST_BED_TEMP                       60
#define BED_TRAMMING_PROBE_TOLERANCE             0.1
#define BED_TRAMMING_VERIFY_RAISED
#define AUTO_BED_LEVELING_BILINEAR
#define RESTORE_LEVELING_AFTER_G28
#define BED_TRAMMING_Z_HOP                       4.0
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define G26_XY_FEEDRATE_TRAVEL                   100
#define BED_TRAMMING_HEIGHT                      0.0
#define BED_TRAMMING_USE_PROBE
#define MESH_EDIT_Z_STEP                         0.025
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define LCD_BED_LEVELING
#define G26_RETRACT_MULTIPLIER                   1.0
#define EVENT_GCODE_AFTER_G29                    "G1 Z10 F12000\nG1 X15 Y330\nG1 Z0.5\nG1 Z10"
#define MESH_TEST_HOTEND_TEMP                    205
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define G26_XY_FEEDRATE                          20
#define BED_TRAMMING_INSET_LFRB                  { 50, 30, 50, 30 }
#define MESH_TEST_LAYER_HEIGHT                   0.2
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define LCD_BED_TRAMMING
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
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define SPEED_EDIT_MAX                           999
#define PROBE_DEPLOY_STOW_MENU
#define SPEED_EDIT_MIN                           10
#define PLR_ENABLED_DEFAULT                      false
#define STATUS_HOTEND_ANIM
#define SHOW_CUSTOM_BOOTSCREEN
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define MENU_HOLLOW_FRAME
#define BOOT_MARLIN_LOGO_SMALL
#define BABYSTEPPING
#define POWER_LOSS_RECOVERY
#define MANUAL_E_MOVES_RELATIVE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define SHOW_ELAPSED_TIME
#define SOUND_ON_DEFAULT
#define SD_PROCEDURE_DEPTH                       1
#define FLOW_EDIT_MAX                            999
#define BABYSTEP_ZPROBE_OFFSET
#define STATUS_CHAMBER_ANIM
#define FLOW_EDIT_MIN                            10
#define STATUS_BED_ANIM
#define STATUS_HOTEND_INVERTED
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define CUSTOM_STATUS_SCREEN_IMAGE
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                1
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SET_PROGRESS_MANUALLY
#define XYZ_HOLLOW_FRAME
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SET_PROGRESS_PERCENT
#define POWER_LOSS_MIN_Z_CHANGE                  0.05

//
// Interface
//
#define LCD_LANGUAGE                             en
#define SPEAKER

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
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define RETRACT_RECOVER_FEEDRATE_SWAP            8
#define RETRACT_RECOVER_FEEDRATE                 8
#define RETRACT_RECOVER_LENGTH                   0
#define RETRACT_ZRAISE                           0
#define FWRETRACT_AUTORETRACT
#define RETRACT_FEEDRATE                         45
#define RETRACT_RECOVER_LENGTH_SWAP              0
#define RETRACT_LENGTH                           3
#define MAX_AUTORETRACT                          10.0
#define FWRETRACT
#define RETRACT_LENGTH_SWAP                      13
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
#define CUSTOM_MACHINE_NAME                      "SOVOL SV03"

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
#define PSU_NAME                                 "Mean Well"

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
#define THERMAL_PROTECTION_BED

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
