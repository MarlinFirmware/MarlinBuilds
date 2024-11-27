/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-11-26 at 20:48:52.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Mr.Pond)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_SOVOL_V131

//
// Extruder
//
#define ADVANCE_K                                0.04
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            true
#define LIN_ADVANCE

//
// Bed Temp
//
#define DEFAULT_bedKd                            497.3
#define DEFAULT_bedKi                            6.12
#define DEFAULT_bedKp                            110.38
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define CHAMBER_AUTO_FAN_PIN                     -1
#define COOLER_AUTO_FAN_PIN                      -1
#define E0_AUTO_FAN_PIN                          -1
#define FAN_SOFT_PWM
#define SOFT_PWM_SCALE                           5

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           TMC2209
#define E_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            TMC2209
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            TMC2209
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            TMC2209
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
#define X_BED_SIZE                               220
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               220
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                250
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 2, 2, 2 }
#define HOMING_FEEDRATE_MM_M                     { (40*60), (40*60), (4*60) }
#define SENSORLESS_BACKOFF_MM                    { 2, 2, 0 }
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_AFTER_HOMING                           10
#define Z_CLEARANCE_FOR_HOMING                   10
#define Z_HOME_DIR                               -1
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER

//
// Endstops
//
#define ENDSTOPPULLUPS
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Probes
//
#define FIX_MOUNTED_PROBE
#define NOZZLE_TO_PROBE_OFFSET                   { 27, -20, 0 }
#define PROBING_MARGIN                           0
#define USE_PROBE_FOR_Z_HOMING
#define XY_PROBE_FEEDRATE                        (60*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 5
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_PROBE_LOW_POINT                        -3

//
// LCD
//
#define BABYSTEPPING
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_MULTIPLICATOR_Z                 8
#define BABYSTEP_ZPROBE_OFFSET
#define BOOTSCREEN_TIMEOUT                       3000
#define BOOT_MARLIN_LOGO_SMALL
#define CR10_STOCKDISPLAY
#define CUSTOM_STATUS_SCREEN_IMAGE
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define EVENT_GCODE_SD_ABORT                     "G27"
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define LCD_INFO_MENU
#define LCD_TIMEOUT_TO_STATUS                    15000
#define LONG_FILENAME_HOST_SUPPORT
#define MANUAL_E_MOVES_RELATIVE
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define MENU_HOLLOW_FRAME
#define PLR_ENABLED_DEFAULT                      true
#define POWER_LOSS_MIN_Z_CHANGE                  0.01
#define POWER_LOSS_PIN                           PC13
#define POWER_LOSS_RECOVERY
#define POWER_LOSS_STATE                         LOW
#define PRINT_PROGRESS_SHOW_DECIMALS
#define RET6_12864_LCD
#define SCROLL_LONG_FILENAMES
#define SDCARD_RATHERRECENTFIRST
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_MENU_CONFIRM_START
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_BOOTSCREEN
#define SHOW_CUSTOM_BOOTSCREEN
#define SHOW_ELAPSED_TIME
#define SHOW_PROGRESS_PERCENT
#define SOUND_MENU_ITEM
#define SOUND_ON_DEFAULT
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define TURBO_BACK_MENU_ITEM
#define ULTIPANEL_FEEDMULTIPLY
#define XYZ_HOLLOW_FRAME

//
// Interface
//
#define LCD_LANGUAGE                             en

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_ACTION_COMMANDS
#define HOST_KEEPALIVE_FEATURE
#define PRINTJOB_TIMER_AUTOSTART

//
// Reporting
//
#define AUTO_REPORT_TEMPERATURES
#define CAPABILITIES_REPORT
#define EXTENDED_CAPABILITIES_REPORT

//
// Temperature
//
#define AUTOTEMP
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_MAXTEMP                              110
#define BED_MINTEMP                              5
#define BED_OVERSHOOT                            10
#define CHAMBER_CHECK_INTERVAL                   5000
#define COOLER_OVERSHOOT                         2
#define HEATER_0_MAXTEMP                         315
#define HEATER_0_MINTEMP                         5
#define HOTEND0_BETA                             4160
#define HOTEND0_PULLUP_RESISTOR_OHMS             4700
#define HOTEND0_RESISTANCE_25C_OHMS              94162
#define HOTEND0_SH_C_COEFF                       0
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      255
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_1_TEMP_CHAMBER                   35
#define PREHEAT_1_TEMP_HOTEND                    185
#define PREHEAT_2_FAN_SPEED                      255
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       80
#define PREHEAT_2_TEMP_CHAMBER                   35
#define PREHEAT_2_TEMP_HOTEND                    240
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_SENSOR_0                            1000
#define TEMP_SENSOR_BED                          1
#define TEMP_WINDOW                              1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define THERMAL_PROTECTION_BED_PERIOD            20
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40

//
// Safety
//
#define EXTRUDE_MAXLENGTH                        500
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED
#define THERMAL_PROTECTION_HOTENDS
#define USE_WATCHDOG

//
// EEPROM
//
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
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define ENABLE_LEVELING_FADE_HEIGHT
#define EVENT_GCODE_AFTER_G29                    "G28XY\nM500"
#define EXTRAPOLATE_BEYOND_GRID
#define G26_MESH_VALIDATION
#define G26_RETRACT_MULTIPLIER                   1.0
#define G26_XY_FEEDRATE                          20
#define G26_XY_FEEDRATE_TRAVEL                   100
#define GANTRY_CALIBRATION_COMMANDS_POST         "G28 Z"
#define GANTRY_CALIBRATION_CURRENT               850
#define GANTRY_CALIBRATION_EXTRA_HEIGHT          15
#define GANTRY_CALIBRATION_FEEDRATE              240
#define GANTRY_CALIBRATION_SAFE_POSITION         { X_CENTER + 3, Y_CENTER }
#define GANTRY_CALIBRATION_XY_PARK_FEEDRATE      3000
#define GRID_MAX_POINTS_X                        5
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LCD_BED_LEVELING
#define LCD_PROBE_Z_RANGE                        8
#define LEVELED_SEGMENT_LENGTH                   5.0
#define LEVELING_BED_TEMP                        60
#define LEVELING_NOZZLE_TEMP                     120
#define MECHANICAL_GANTRY_CALIBRATION
#define MESH_EDIT_Z_STEP                         0.01
#define MESH_TEST_BED_TEMP                       60
#define MESH_TEST_HOTEND_TEMP                    205
#define MESH_TEST_LAYER_HEIGHT                   0.2
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define PREHEAT_BEFORE_LEVELING
#define RESTORE_LEVELING_AFTER_G28
#define SEGMENT_LEVELED_MOVES

//
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define CLASSIC_JERK
#define DEFAULT_ACCELERATION                     3000
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 800, 691.5 }
#define DEFAULT_EJERK                            10.0
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 100, 5000 }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 10, 100 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              3000
#define DEFAULT_XJERK                            5.0
#define DEFAULT_YJERK                            5.0
#define DEFAULT_ZJERK                            0.4
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define MIN_STEPS_PER_SEGMENT                    6
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_ENABLED_DEFAULT               false
#define FIL_RUNOUT_PULLUP
#define FIL_RUNOUT_STATE                         LOW
#define NUM_RUNOUT_SENSORS                       1

//
// Media
//
#define SDSUPPORT

//
// PID Temp
//
#define PID_AUTOTUNE_MENU
#define PID_EDIT_MENU
#define PID_FUNCTIONAL_RANGE                     10

//
// Hotend Temp
//
#define DEFAULT_Kd                               48.96
#define DEFAULT_Ki                               1.30
#define DEFAULT_Kp                               15.95
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Serial
//
#define BAUDRATE                                 115200
#define BUFSIZE                                  4
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
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 }
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5
#define NOZZLE_PARK_Z_RAISE_MIN                  2

//
// TMC_Smart
//
#define CHOPPER_TIMING                           CHOPPER_DEFAULT_24V
#define CURRENT_STEP_DOWN                        50
#define E0_CHAIN_POS                             -1
#define E0_CURRENT                               550
#define E0_HYBRID_THRESHOLD                      60
#define E0_MICROSTEPS                            16
#define E0_RSENSE                                0.15
#define E0_SLAVE_ADDRESS                         3
#define E1_HYBRID_THRESHOLD                      30
#define E2_HYBRID_THRESHOLD                      30
#define E3_HYBRID_THRESHOLD                      30
#define E4_HYBRID_THRESHOLD                      30
#define E5_HYBRID_THRESHOLD                      30
#define E6_HYBRID_THRESHOLD                      30
#define E7_HYBRID_THRESHOLD                      30
#define EDGE_STEPPING
#define HOLD_MULTIPLIER                          0.5
#define HYBRID_THRESHOLD
#define INTERPOLATE                              true
#define I_HYBRID_THRESHOLD                       3
#define J_HYBRID_THRESHOLD                       3
#define K_HYBRID_THRESHOLD                       3
#define MONITOR_DRIVER_STATUS
#define REPORT_CURRENT_CHANGE
#define SENSORLESS_HOMING
#define STEALTHCHOP_E
#define STEALTHCHOP_XY
#define STEALTHCHOP_Z
#define STOP_ON_ERROR
#define TMC_DEBUG
#define U_HYBRID_THRESHOLD                       3
#define V_HYBRID_THRESHOLD                       3
#define W_HYBRID_THRESHOLD                       3
#define X2_HYBRID_THRESHOLD                      150
#define X2_STALL_SENSITIVITY                     X_STALL_SENSITIVITY
#define X_CHAIN_POS                              -1
#define X_CURRENT                                860
#define X_CURRENT_HOME                           (X_CURRENT - 20)
#define X_HYBRID_THRESHOLD                       180
#define X_MICROSTEPS                             16
#define X_RSENSE                                 0.15
#define X_SLAVE_ADDRESS                          3
#define X_STALL_SENSITIVITY                      68
#define Y2_HYBRID_THRESHOLD                      150
#define Y2_STALL_SENSITIVITY                     Y_STALL_SENSITIVITY
#define Y_CHAIN_POS                              -1
#define Y_CURRENT                                900
#define Y_CURRENT_HOME                           (Y_CURRENT - 20)
#define Y_HYBRID_THRESHOLD                       180
#define Y_MICROSTEPS                             16
#define Y_RSENSE                                 0.15
#define Y_SLAVE_ADDRESS                          3
#define Y_STALL_SENSITIVITY                      70
#define Z2_HYBRID_THRESHOLD                      3
#define Z3_HYBRID_THRESHOLD                      3
#define Z4_HYBRID_THRESHOLD                      3
#define Z_CHAIN_POS                              -1
#define Z_CURRENT                                800
#define Z_CURRENT_HOME                           (Z_CURRENT - 20)
#define Z_HYBRID_THRESHOLD                       40
#define Z_MICROSTEPS                             16
#define Z_RSENSE                                 0.15
#define Z_SLAVE_ADDRESS                          3

//
// Advanced Pause
//
#define ADVANCED_PAUSE_FEATURE
#define ADVANCED_PAUSE_PURGE_FEEDRATE            2
#define ADVANCED_PAUSE_PURGE_LENGTH              40
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       5
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       5
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_UNLOAD_ACCEL             20
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          5
#define FILAMENT_CHANGE_UNLOAD_LENGTH            50
#define FILAMENT_UNLOAD_PURGE_DELAY              5000
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           14
#define FILAMENT_UNLOAD_PURGE_LENGTH             6
#define FILAMENT_UNLOAD_PURGE_RETRACT            10
#define PARK_HEAD_ON_PAUSE
#define PAUSE_PARK_NOZZLE_TIMEOUT                60
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PAUSE_PARK_RETRACT_FEEDRATE              10
#define PAUSE_PARK_RETRACT_LENGTH                2

//
// Motion Control
//
#define INPUT_SHAPING_X
#define INPUT_SHAPING_Y
#define SHAPING_FREQ_X                           55.0
#define SHAPING_FREQ_Y                           45.0
#define SHAPING_MENU
#define SHAPING_ZETA_X                           0.15
#define SHAPING_ZETA_Y                           0.15

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
#define SAVED_POSITIONS                          1

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER
#define STARTUP_COMMANDS                         "M420 S1"

//
// Leveling
//
#define PROBING_MARGIN_BACK                      25
#define PROBING_MARGIN_FRONT                     10
#define PROBING_MARGIN_LEFT                      25
#define PROBING_MARGIN_RIGHT                     10
