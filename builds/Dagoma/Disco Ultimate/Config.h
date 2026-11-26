/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2026-11-26 at 07:59:36.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Dagoma)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_DAGOMA_F5

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
#define X_DRIVER_TYPE                            A5984
#define Y_DRIVER_TYPE                            A5984
#define Z_DRIVER_TYPE                            A5984
#define E0_DRIVER_TYPE                           A5984
#define X_ENABLE_ON                              LOW
#define Y_ENABLE_ON                              LOW
#define Z_ENABLE_ON                              LOW
#define E_ENABLE_ON                              LOW
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             false
#define INVERT_E0_DIR                            false
#define INVERT_E1_DIR                            true

//
// Extruder
//
#define EXTRUDERS                                2
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define DISABLE_OTHER_EXTRUDERS
#define SINGLENOZZLE

//
// Geometry
//
#define X_BED_SIZE                               205
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               205
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                200
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
#define Y_HOME_DIR                               1
#define Z_HOME_DIR                               -1
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (4*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER
#define Z_SAFE_HOMING
#define HOMING_BACKOFF_POST_MM                   { 2, 2, 2 }

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 160, 160, 1600, 196 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 4, 170 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 1000, 20, 10000 }
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
#define S_CURVE_ACCELERATION
#define EDITABLE_STEPS_PER_UNIT
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define ENDSTOPPULLUPS
#define Y_MAX_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            LOW

//
// Filament Runout Sensors
//
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLUP
#define FILAMENT_RUNOUT_SCRIPT                   "M600 T%c"
#define FILAMENT_RUNOUT_SENSOR
#define NUM_RUNOUT_SENSORS                       2
#define FIL_RUNOUT_STATE                         HIGH

//
// Probes
//
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_CLEARANCE_MULTI_PROBE                  5
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define NOZZLE_TO_PROBE_OFFSET                   { 0, 21, -1.5 }
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define FIX_MOUNTED_PROBE
#define PROBING_TOOL                             0
#define MULTIPLE_PROBING                         2
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -2

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define HOTEND_OVERSHOOT                         15
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define AUTOTEMP_MIN                             210
#define ADAPTIVE_FAN_SLOWING
#define AUTOTEMP_FACTOR                          0.1f
#define TEMP_TUNING_MAINTAIN_FAN
#define AUTOTEMP_MAX                             250

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_KP                               32.48
#define DEFAULT_KI                               6.40
#define DEFAULT_KD                               41.25

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20
#define PID_AUTOTUNE_MENU

//
// Fans
//
#define E0_AUTO_FAN_PIN                          7
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_SOFT_PWM
#define NUM_M106_FANS                            1
#define FAN_KICKSTART_TIME                       100

//
// Tool Change
//
#define TOOLCHANGE_ZRAISE                        2
#define TOOLCHANGE_FS_EXTRA_PRIME                0

//
// Advanced Pause
//
#define ADVANCED_PAUSE_PURGE_LENGTH              30
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define PAUSE_PARK_RETRACT_LENGTH                2
#define FILAMENT_UNLOAD_PURGE_RETRACT            13
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         940
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          100
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_UNLOAD_LENGTH            950
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define ADVANCED_PAUSE_FANS_PAUSE
#define HOME_BEFORE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         10
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       100
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define MESH_INSET                               0
#define SEGMENT_LEVELED_MOVES
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define ENABLE_LEVELING_FADE_HEIGHT
#define AUTO_BED_LEVELING_UBL
#define LCD_PROBE_Z_RANGE                        4
#define MESH_EDIT_GFX_OVERLAY
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define G26_XY_FEEDRATE_TRAVEL                   100
#define MESH_TEST_BED_TEMP                       60
#define G26_RETRACT_MULTIPLIER                   5
#define MESH_TEST_HOTEND_TEMP                    190
#define GRID_MAX_POINTS_X                        5
#define G26_MESH_VALIDATION
#define LEVELED_SEGMENT_LENGTH                   5.0
#define G26_XY_FEEDRATE                          20
#define MESH_EDIT_Z_STEP                         0.025
#define MAX_SAVED_MESHES                         100
#define RESTORE_LEVELING_AFTER_G28
#define MESH_TEST_LAYER_HEIGHT                   0.26
#define UBL_SAVE_ACTIVE_ON_M500
#define MANUAL_PROBE_START_Z                     0.2
#define MESH_EDIT_MENU

//
// Media
//
#define SDSUPPORT

//
// LCD
//
#define SHOW_BOOTSCREEN
#define ENCODER_100X_STEPS_PER_SEC               160
#define ENCODER_10X_STEPS_PER_SEC                75
#define ENCODER_RATE_MULTIPLIER
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define SOUND_ON_DEFAULT
#define SHOW_CUSTOM_BOOTSCREEN
#define FINE_MANUAL_MOVE                         0.025
#define SD_PROCEDURE_DEPTH                       1
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define MENU_HOLLOW_FRAME
#define SET_PROGRESS_MANUALLY
#define FLOW_EDIT_MAX                            999
#define STATUS_CHAMBER_ANIM
#define FLOW_EDIT_MIN                            10
#define SCROLL_LONG_FILENAMES
#define BOOT_MARLIN_LOGO_SMALL
#define STATUS_BED_ANIM
#define STATUS_HOTEND_INVERTED
#define AUTO_REPORT_SD_STATUS
#define SHOW_ELAPSED_TIME
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define LONG_FILENAME_HOST_SUPPORT
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SD_MAX_READ_ERRORS                       5
#define MANUAL_E_MOVES_RELATIVE
#define XYZ_HOLLOW_FRAME
#define REINIT_NOISY_LCD
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define LCD_TIMEOUT_TO_STATUS                    15000
#define BOOTSCREEN_TIMEOUT                       3000
#define SET_PROGRESS_PERCENT
#define LCD_LANGUAGE_2                           fr
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define STATUS_HOTEND_ANIM
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define SDCARD_RATHERRECENTFIRST

//
// Interface
//
#define LCD_LANGUAGE                             en
#define INDIVIDUAL_AXIS_HOMING_MENU

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
#define CUSTOM_MACHINE_NAME                      "DiscoUltimate"
#define NO_TIMEOUTS                              1000
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
#define EXTRUDE_MAXLENGTH                        950
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE

//
// Temperature Presets
//
#define PREHEAT_1_TEMP_HOTEND                    190
#define PREHEAT_1_FAN_SPEED                      200
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_TEMP_HOTEND                    240

//
// Temperature Sensors
//
#define TEMP_SENSOR_0                            18
#define TEMP_HYSTERESIS                          4
#define TEMP_RESIDENCY_TIME                      15
#define TEMP_WINDOW                              3

//
// Baby-Stepping
//
#define BABYSTEP_XY
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define BABYSTEP_ZPROBE_OFFSET
#define BABYSTEPPING
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_ALWAYS_AVAILABLE
#define BABYSTEP_GFX_OVERLAY

//
// Stepper Motor Current
//
#define DAC_MOTOR_CURRENT_DEFAULT                { 30, 30, 25, 30 }
