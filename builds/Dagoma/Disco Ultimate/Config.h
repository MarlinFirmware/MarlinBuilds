/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-12-16 at 08:40:46.
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
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define DISABLE_OTHER_EXTRUDERS
#define EXTRUDERS                                2
#define INVERT_E0_DIR                            false
#define INVERT_E1_DIR                            true
#define SINGLENOZZLE

//
// Fans
//
#define E0_AUTO_FAN_PIN                          7
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_KICKSTART_TIME                       100
#define FAN_SOFT_PWM
#define NUM_M106_FANS                            1

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           A5984
#define E_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            A5984
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            A5984
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            A5984
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
#define X_BED_SIZE                               205
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               205
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                200
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BACKOFF_POST_MM                   { 2, 2, 2 }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (4*60) }
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               1
#define Z_HOME_DIR                               -1
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER

//
// Endstops
//
#define ENDSTOPPULLUPS
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MAX_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            LOW

//
// Probes
//
#define FIX_MOUNTED_PROBE
#define MULTIPLE_PROBING                         2
#define NOZZLE_TO_PROBE_OFFSET                   { 0, 21, -1.5 }
#define PROBING_MARGIN                           10
#define PROBING_TOOL                             0
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_CLEARANCE_MULTI_PROBE                  5
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_PROBE_LOW_POINT                        -2

//
// LCD
//
#define AUTO_REPORT_SD_STATUS
#define BABYSTEPPING
#define BABYSTEP_ALWAYS_AVAILABLE
#define BABYSTEP_GFX_OVERLAY
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define BABYSTEP_XY
#define BABYSTEP_ZPROBE_OFFSET
#define BOOTSCREEN_TIMEOUT                       3000
#define BOOT_MARLIN_LOGO_SMALL
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define ENCODER_100X_STEPS_PER_SEC               160
#define ENCODER_10X_STEPS_PER_SEC                75
#define ENCODER_RATE_MULTIPLIER
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define LCD_INFO_MENU
#define LCD_LANGUAGE_2                           fr
#define LCD_TIMEOUT_TO_STATUS                    15000
#define LONG_FILENAME_HOST_SUPPORT
#define MANUAL_E_MOVES_RELATIVE
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define MENU_HOLLOW_FRAME
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define SCROLL_LONG_FILENAMES
#define SDCARD_RATHERRECENTFIRST
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_MENU_CONFIRM_START
#define SD_PROCEDURE_DEPTH                       1
#define SET_PROGRESS_MANUALLY
#define SET_PROGRESS_PERCENT
#define SHOW_BOOTSCREEN
#define SHOW_CUSTOM_BOOTSCREEN
#define SHOW_ELAPSED_TIME
#define SHOW_PROGRESS_PERCENT
#define SOUND_ON_DEFAULT
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define STATUS_BED_ANIM
#define STATUS_CHAMBER_ANIM
#define STATUS_HOTEND_ANIM
#define STATUS_HOTEND_INVERTED
#define STATUS_MESSAGE_SCROLLING
#define ULTIPANEL_FEEDMULTIPLY
#define XYZ_HOLLOW_FRAME

//
// Interface
//
#define INDIVIDUAL_AXIS_HOMING_MENU
#define LCD_LANGUAGE                             en

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_ACTION_COMMANDS
#define HOST_KEEPALIVE_FEATURE
#define HOST_PROMPT_SUPPORT
#define PRINTJOB_TIMER_AUTOSTART

//
// Reporting
//
#define AUTO_REPORT_TEMPERATURES
#define CAPABILITIES_REPORT
#define EXTENDED_CAPABILITIES_REPORT

//
// Safety
//
#define EXTRUDE_MAXLENGTH                        950
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_HOTENDS
#define USE_WATCHDOG

//
// Temperature
//
#define ADAPTIVE_FAN_SLOWING
#define AUTOTEMP
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define HEATER_0_MAXTEMP                         275
#define HEATER_0_MINTEMP                         5
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      200
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_HOTEND                    190
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_HOTEND                    240
#define TEMP_HYSTERESIS                          4
#define TEMP_RESIDENCY_TIME                      15
#define TEMP_SENSOR_0                            18
#define TEMP_TUNING_MAINTAIN_FAN
#define TEMP_WINDOW                              3
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40

//
// Calibrate
//
#define AUTO_BED_LEVELING_UBL
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define ENABLE_LEVELING_FADE_HEIGHT
#define G26_MESH_VALIDATION
#define G26_RETRACT_MULTIPLIER                   5
#define G26_XY_FEEDRATE                          20
#define G26_XY_FEEDRATE_TRAVEL                   100
#define GRID_MAX_POINTS_X                        5
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LCD_PROBE_Z_RANGE                        4
#define LEVELED_SEGMENT_LENGTH                   5.0
#define MANUAL_PROBE_START_Z                     0.2
#define MESH_EDIT_GFX_OVERLAY
#define MESH_EDIT_MENU
#define MESH_EDIT_Z_STEP                         0.025
#define MESH_INSET                               0
#define MESH_TEST_BED_TEMP                       60
#define MESH_TEST_HOTEND_TEMP                    190
#define MESH_TEST_LAYER_HEIGHT                   0.26
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define RESTORE_LEVELING_AFTER_G28
#define SEGMENT_LEVELED_MOVES
#define UBL_SAVE_ACTIVE_ON_M500

//
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_ACCELERATION                     3000
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 160, 160, 1600, 196 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 1000, 20, 10000 }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 4, 170 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              3000
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             false
#define JD_HANDLE_SMALL_SEGMENTS
#define JUNCTION_DEVIATION_MM                    0.013
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
// EEPROM
//
#define EEPROM_AUTO_INIT
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Serial
//
#define ADVANCED_OK
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "DiscoUltimate"
#define EMERGENCY_PARSER
#define MAX_CMD_SIZE                             96
#define NO_TIMEOUTS                              1000
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              0
#define TX_BUFFER_SIZE                           0

//
// PID Temp
//
#define PID_AUTOTUNE_MENU
#define PID_FUNCTIONAL_RANGE                     10

//
// Nozzle Park
//
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 }
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5
#define NOZZLE_PARK_Z_RAISE_MIN                  2

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SCRIPT                   "M600 T%c"
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLUP
#define FIL_RUNOUT_STATE                         HIGH
#define NUM_RUNOUT_SENSORS                       2

//
// Hotend Temp
//
#define DEFAULT_Kd                               41.25
#define DEFAULT_Ki                               6.40
#define DEFAULT_Kp                               32.48
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Media
//
#define SDSUPPORT

//
// Advanced Pause
//
#define ADVANCED_PAUSE_FANS_PAUSE
#define ADVANCED_PAUSE_FEATURE
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define ADVANCED_PAUSE_PURGE_LENGTH              30
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       100
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         940
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          100
#define FILAMENT_CHANGE_UNLOAD_LENGTH            950
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_PURGE_DELAY              5000
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_UNLOAD_PURGE_RETRACT            13
#define HOME_BEFORE_FILAMENT_CHANGE
#define PARK_HEAD_ON_PAUSE
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_RETRACT_LENGTH                2

//
// Stepper Motor Current
//
#define DAC_MOTOR_CURRENT_DEFAULT                { 30, 30, 25, 30 }

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER

//
// Tool Change
//
#define TOOLCHANGE_FS_EXTRA_PRIME                0
#define TOOLCHANGE_ZRAISE                        2
