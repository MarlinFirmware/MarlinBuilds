/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2026-11-26 at 08:08:45.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(SaddFox)"
#define MARLINVERSION                            "2.1.x"
#define CORP_WEBSITE_E                           "sovol3d.com"
#define SOFTVERSION                              SHORT_BUILD_VERSION
#define MACVERSION                               MACHINE_NAME

//
// Machine
//
#define MOTHERBOARD                              BOARD_SOVOL_V131

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Stepper Drivers
//
#define X_DRIVER_TYPE                            TMC2209
#define Y_DRIVER_TYPE                            TMC2209
#define Z_DRIVER_TYPE                            TMC2209
#define E0_DRIVER_TYPE                           TMC2209
#define X_ENABLE_ON                              LOW
#define Y_ENABLE_ON                              LOW
#define Z_ENABLE_ON                              LOW
#define E_ENABLE_ON                              LOW
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define INVERT_E0_DIR                            true

//
// Extruder
//
#define EXTRUDERS                                1
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define LIN_ADVANCE
#define ADVANCE_K                                0.03

//
// Geometry
//
#define X_BED_SIZE                               300
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               300
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                340
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
#define HOMING_BUMP_DIVISOR                      { 4, 4, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 2, 2, 2 }
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define Z_AFTER_HOMING                           10
#define Z_SAFE_HOMING
#define Z_CLEARANCE_FOR_HOMING                   10
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER
#define SENSORLESS_BACKOFF_MM                    { 2, 2, 0 }

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 800, 691.5 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 10, 50 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 100, 5000 }
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define DEFAULT_ACCELERATION                     3000
#define DEFAULT_TRAVEL_ACCELERATION              3000
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_EJERK                            10.0
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
#define DEFAULT_ZJERK                            0.4
#define CLASSIC_JERK
#define EDITABLE_STEPS_PER_UNIT
#define DEFAULT_YJERK                            8.0
#define DEFAULT_XJERK                            8.0
#define MULTISTEPPING_LIMIT                      16
#define ADAPTIVE_STEP_SMOOTHING

//
// Motion Control
//
#define INPUT_SHAPING_Y
#define SHAPING_ZETA_X                           0.15
#define SHAPING_ZETA_Y                           0.15
#define INPUT_SHAPING_X
#define SHAPING_FREQ_X                           40.0
#define SHAPING_FREQ_Y                           40.0

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_STATE                         LOW
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLUP
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define NUM_RUNOUT_SENSORS                       1

//
// Probes
//
#define XY_PROBE_FEEDRATE                        (100*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 5
#define PROBE_OFFSET_ZMAX                        5
#define PROBE_OFFSET_ZMIN                        -5
#define Z_PROBE_ERROR_TOLERANCE                  3
#define FIX_MOUNTED_PROBE
#define PROBING_NOZZLE_TEMP                      0
#define Z_PROBE_LOW_POINT                        -3
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define NOZZLE_TO_PROBE_OFFSET                   { 25, -25, 0 }
#define USE_PROBE_FOR_Z_HOMING
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define PROBING_BED_TEMP                         0

//
// Leveling
//
#define PROBING_MARGIN_FRONT                     20
#define PROBING_MARGIN_BACK                      25
#define PROBING_MARGIN_RIGHT                     20
#define PROBING_MARGIN_LEFT                      25

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         315
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              110
#define HOTEND0_SH_C_COEFF                       0
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_MAX                             250
#define HOTEND0_RESISTANCE_25C_OHMS              94162
#define AUTOTEMP_FACTOR                          0.1f
#define HOTEND0_PULLUP_RESISTOR_OHMS             4700
#define THERMAL_PROTECTION_BED_PERIOD            20
#define HOTEND0_BETA                             4160

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_KP                               15.66
#define DEFAULT_KI                               1.49
#define DEFAULT_KD                               41.96

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
#define PIDTEMPBED
#define DEFAULT_BED_KD                           637.3
#define DEFAULT_BED_KI                           36.12
#define DEFAULT_BED_KP                           186.38
#define PID_BED_DEBUG

//
// Fans
//
#define SOFT_PWM_SCALE                           5
#define E0_AUTO_FAN_PIN                          -1
#define FAN_SOFT_PWM

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                2
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           14
#define PAUSE_PARK_NOZZLE_TIMEOUT                60
#define PAUSE_PARK_RETRACT_FEEDRATE              10
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             20
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       6
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       5
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          5
#define FILAMENT_CHANGE_UNLOAD_LENGTH            50
#define ADVANCED_PAUSE_PURGE_LENGTH              40
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_UNLOAD_PURGE_RETRACT            10
#define FILAMENT_UNLOAD_PURGE_LENGTH             6
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define GRID_MAX_POINTS_X                        5
#define LEVELING_BED_TEMP                        60
#define MESH_TEST_BED_TEMP                       60
#define AUTO_BED_LEVELING_BILINEAR
#define RESTORE_LEVELING_AFTER_G28
#define MAX_SAVED_MESHES                         100
#define EVENT_GCODE_AFTER_G29                    "G28 Z\nG1 F200 Z0"
#define LEVELING_NOZZLE_TEMP                     120
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define EXTRAPOLATE_BEYOND_GRID
#define G26_XY_FEEDRATE_TRAVEL                   100
#define BILINEAR_SUBDIVISIONS                    3
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define G26_RETRACT_MULTIPLIER                   1.0
#define MESH_TEST_HOTEND_TEMP                    205
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define G26_XY_FEEDRATE                          20
#define DEBUG_LEVELING_FEATURE
#define ABL_BILINEAR_SUBDIVISION
#define MESH_TEST_LAYER_HEIGHT                   0.2
#define PREHEAT_BEFORE_LEVELING
#define G26_MESH_VALIDATION
#define MECHANICAL_GANTRY_CALIBRATION
#define GANTRY_CALIBRATION_COMMANDS_POST         "G28 Z"
#define GANTRY_CALIBRATION_CURRENT               850
#define GANTRY_CALIBRATION_FEEDRATE              240
#define GANTRY_CALIBRATION_EXTRA_HEIGHT          10

//
// Media
//
#define SDSUPPORT

//
// LCD
//
#define SOVOL_SV06_RTS
#define M73_REPORT
#define POWER_LOSS_STATE                         LOW
#define POWER_LOSS_RECOVERY
#define M73_REPORT_SD_ONLY
#define FINE_MANUAL_MOVE                         0.025
#define SD_MAX_READ_ERRORS                       5
#define POWER_LOSS_MIN_Z_CHANGE                  0.05
#define EVENT_GCODE_SD_ABORT                     "G27"
#define POWER_LOSS_PIN                           PC13
#define SD_PROCEDURE_DEPTH                       1
#define SET_REMAINING_TIME
#define PLR_ENABLED_DEFAULT                      true
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define SET_PROGRESS_MANUALLY
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define REINIT_NOISY_LCD
#define SET_PROGRESS_PERCENT
#define SDCARD_RATHERRECENTFIRST

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
#define STARTUP_COMMANDS                         "M420 S1"
#define SAVED_POSITIONS                          1
#define DEBUG_FLAGS_GCODE

//
// Serial
//
#define SERIAL_PORT                              1
#define BAUDRATE                                 115200
#define BUFSIZE                                  4
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           0
#define CUSTOM_MACHINE_NAME                      "Sovol SV06 Plus"

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
// Temperature Sensors
//
#define TEMP_SENSOR_0                            1000
#define TEMP_HYSTERESIS                          3
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define TEMP_SENSOR_BED                          1

//
// Temperature Presets
//
#define PREHEAT_1_TEMP_HOTEND                    185
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_TEMP_HOTEND                    240
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       80

//
// TMC_Smart
//
#define CHOPPER_TIMING                           CHOPPER_DEFAULT_24V
#define Y_STALL_SENSITIVITY                      110
#define X2_STALL_SENSITIVITY                     X_STALL_SENSITIVITY
#define INTERPOLATE                              true
#define E0_HYBRID_THRESHOLD                      80
#define Z_RSENSE                                 0.15
#define HOLD_MULTIPLIER                          0.5
#define K_HYBRID_THRESHOLD                       3
#define X_CHAIN_POS                              -1
#define Y_RSENSE                                 0.15
#define U_HYBRID_THRESHOLD                       3
#define E3_HYBRID_THRESHOLD                      30
#define Z_MICROSTEPS                             16
#define STEALTHCHOP_E
#define STEALTHCHOP_Z
#define REPORT_CURRENT_CHANGE
#define X_RSENSE                                 0.15
#define Y_CHAIN_POS                              -1
#define X_HYBRID_THRESHOLD                       250
#define E6_HYBRID_THRESHOLD                      30
#define X_CURRENT_HOME                           (X_CURRENT - 20)
#define Z4_HYBRID_THRESHOLD                      3
#define HYBRID_THRESHOLD
#define X_STALL_SENSITIVITY                      86
#define Z_CURRENT_HOME                           (Z_CURRENT - 20)
#define STOP_ON_ERROR
#define Z_CHAIN_POS                              -1
#define J_HYBRID_THRESHOLD                       3
#define MONITOR_DRIVER_STATUS
#define Z_CURRENT                                800
#define E2_HYBRID_THRESHOLD                      30
#define Y_MICROSTEPS                             16
#define E0_SLAVE_ADDRESS                         3
#define W_HYBRID_THRESHOLD                       3
#define SENSORLESS_HOMING
#define E5_HYBRID_THRESHOLD                      30
#define E0_CHAIN_POS                             -1
#define Z3_HYBRID_THRESHOLD                      3
#define CURRENT_STEP_DOWN                        50
#define X2_HYBRID_THRESHOLD                      180
#define Z_HYBRID_THRESHOLD                       60
#define X_CURRENT                                820
#define I_HYBRID_THRESHOLD                       3
#define X_SLAVE_ADDRESS                          3
#define EDGE_STEPPING
#define E1_HYBRID_THRESHOLD                      30
#define STEALTHCHOP_XY
#define Y2_STALL_SENSITIVITY                     Y_STALL_SENSITIVITY
#define Y2_HYBRID_THRESHOLD                      180
#define E0_MICROSTEPS                            16
#define Y_CURRENT_HOME                           (Y_CURRENT - 20)
#define TMC_DEBUG
#define Y_SLAVE_ADDRESS                          3
#define E0_RSENSE                                0.15
#define Y_CURRENT                                880
#define X_MICROSTEPS                             16
#define V_HYBRID_THRESHOLD                       3
#define E4_HYBRID_THRESHOLD                      30
#define Z2_HYBRID_THRESHOLD                      3
#define E0_CURRENT                               550
#define Z_SLAVE_ADDRESS                          3
#define Y_HYBRID_THRESHOLD                       250
#define E7_HYBRID_THRESHOLD                      30

//
// Baby-Stepping
//
#define BABYSTEPPING
#define BABYSTEP_MULTIPLICATOR_Z                 8
#define BABYSTEP_MULTIPLICATOR_XY                1
