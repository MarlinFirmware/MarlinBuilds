/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2026-11-26 at 07:51:23.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Creality)"
#define CORP_WEBSITE_C                           "www.creality.cn "
#define HARDWARE_VERSION                         "CR4NS200141C13"
#define PRINT_SIZE                               "220 X 220 X 280mm"
#define MACHINE_NAME                             "Ender-5 S1"
#define SCREEN_HW_VERSION                        "DWIN20220915"
#define CORP_WEBSITE_E                           "www.creality.com"
#define FIRMWARE_VERSION                         "1.0.6T10"
#define SCREEN_VERSION                           "U23"

//
// Machine
//
#define MOTHERBOARD                              BOARD_CREALITY_F401RE

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
#define X_DRIVER_TYPE                            TMC2208_STANDALONE
#define Y_DRIVER_TYPE                            TMC2208_STANDALONE
#define Z_DRIVER_TYPE                            TMC2208_STANDALONE
#define E0_DRIVER_TYPE                           TMC2208_STANDALONE
#define X_ENABLE_ON                              LOW
#define Y_ENABLE_ON                              LOW
#define Z_ENABLE_ON                              LOW
#define E_ENABLE_ON                              LOW
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             false
#define INVERT_E0_DIR                            false
#define E_ENABLE_INIT_STATE                      LOW
#define X_ENABLE_INIT_STATE                      LOW
#define Y_ENABLE_INIT_STATE                      LOW
#define Z_ENABLE_INIT_STATE                      LOW

//
// Extruder
//
#define EXTRUDERS                                1
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define ADVANCE_K                                0.0

//
// Geometry
//
#define X_BED_SIZE                               220
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               220
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                280
#define MIN_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_X
#define MIN_SOFTWARE_ENDSTOP_Y
#define MAX_SOFTWARE_ENDSTOP_X
#define MAX_SOFTWARE_ENDSTOP_Y
#define MAX_SOFTWARE_ENDSTOP_Z
#define SOFT_ENDSTOPS_MENU_ITEM

//
// Homing
//
#define X_HOME_DIR                               1
#define Y_HOME_DIR                               1
#define Z_HOME_DIR                               -1
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (10*60) }
#define HOMING_BUMP_DIVISOR                      { 10, 10, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define Z_SAFE_HOMING
#define Z_CLEARANCE_FOR_HOMING                   5
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 409.50 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 20, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 100, 3000 }
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define DEFAULT_ACCELERATION                     2000
#define DEFAULT_TRAVEL_ACCELERATION              2500
#define DEFAULT_RETRACT_ACCELERATION             1000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_EJERK                            5.0
#define ARC_SUPPORT
#define DEFAULT_STEPPER_TIMEOUT_SEC              300
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_E
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define DEFAULT_ZJERK                            0.4
#define MAX_FEEDRATE_EDIT_VALUES                 { 600, 600, 20, 50 }
#define CLASSIC_JERK
#define EDITABLE_STEPS_PER_UNIT
#define DEFAULT_YJERK                            10.0
#define LIMITED_JERK_EDITING
#define S_CURVE_ACCELERATION
#define DEFAULT_XJERK                            10.0
#define LIMITED_MAX_FR_EDITING
#define LIMITED_MAX_ACCEL_EDITING
#define MAX_JERK_EDIT_VALUES                     { 10, 10, 0.6, 10 }
#define MULTISTEPPING_LIMIT                      16

//
// Motion Control
//
#define FTM_TRAJECTORY_TYPE                      TRAPEZOIDAL
#define FTM_SHAPING_DEFAULT_FREQ_Z               21.0f
#define FTM_SHAPING_V_TOL_E                      0.05f
#define FTM_SHAPING_V_TOL_X                      0.05f
#define FTM_SHAPING_V_TOL_Y                      0.05f
#define FTM_SHAPING_V_TOL_Z                      0.05f
#define FTM_DIR_CHANGE_HOLD_E
#define FTM_DIR_CHANGE_HOLD_Y
#define FTM_DIR_CHANGE_HOLD_Z
#define FTM_POLY6_ACCELERATION_OVERSHOOT         1.875f
#define FTM_SHAPER_2HEI
#define FTM_DEFAULT_SHAPER_E                     ftMotionShaper_NONE
#define FTM_DEFAULT_SHAPER_Y                     ftMotionShaper_NONE
#define FTM_DEFAULT_SHAPER_Z                     ftMotionShaper_NONE
#define FTM_SHAPER_ZVDD
#define FTM_SHAPER_EI
#define FTM_SMOOTHING_TIME_E                     0.00f
#define FTM_SMOOTHING_TIME_Y                     0.00f
#define FTM_SMOOTHING_TIME_Z                     0.00f
#define FTM_SHAPER_ZV
#define FTM_SMOOTHING
#define FTM_SHAPER_E
#define FTM_SHAPER_Z
#define FTM_SHAPER_3HEI
#define FTM_SHAPING_ZETA_E                       0.03f
#define FTM_SHAPING_ZETA_X                       0.1f
#define FTM_SHAPING_ZETA_Y                       0.1f
#define FTM_SHAPING_ZETA_Z                       0.03f
#define FTM_SHAPING_DEFAULT_FREQ_E               21.0f
#define FTM_SHAPING_DEFAULT_FREQ_X               37.0f
#define FTM_SHAPING_DEFAULT_FREQ_Y               37.0f
#define FTM_DIR_CHANGE_HOLD_X
#define RESONANCE_TEST
#define FTM_BUFFER_SIZE                          128
#define FTM_POLYS
#define FTM_FS                                   1000
#define FT_MOTION
#define FTM_DEFAULT_DYNFREQ_MODE                 dynFreqMode_DISABLED
#define SHAPING_ZETA_X                           0.15
#define SHAPING_ZETA_Y                           0.15
#define INPUT_SHAPING_X
#define INPUT_SHAPING_Y
#define SHAPING_FREQ_X                           0.0
#define SHAPING_FREQ_Y                           0.0
#define FTM_SHAPER_ZVD
#define FTM_SMOOTHING_TIME_X                     0.00f
#define FTM_DYNAMIC_FREQ
#define FTM_MAX_SMOOTHING_TIME                   0.10f
#define FTM_MINIMUM_CRUISE_RATIO                 0.5f
#define FTM_SHAPER_ZVDDD
#define FTM_MIN_SHAPE_FREQ                       20
#define FTM_SHAPER_MZV
#define FTM_DEFAULT_SHAPER_X                     ftMotionShaper_NONE
#define SHAPING_MIN_FREQ                         20.0

//
// Endstops
//
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define ENDSTOPPULLUP_ZMIN
#define ENDSTOP_INTERRUPTS_FEATURE
#define Y_MAX_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH
#define X_MAX_ENDSTOP_HIT_STATE                  LOW

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_STATE                         HIGH
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLDOWN
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define NUM_RUNOUT_SENSORS                       1

//
// Probes
//
#define PROBING_MARGIN                           5
#define XY_PROBE_FEEDRATE                        (300*60)
#define Z_CLEARANCE_BETWEEN_PROBES               3
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_CLEARANCE_MULTI_PROBE                  2
#define PROBE_OFFSET_ZMAX                        10
#define PROBE_OFFSET_ZMIN                        -10
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define MULTIPLE_PROBING                         2
#define PROBING_HEATERS_OFF
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -5
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define NOZZLE_TO_PROBE_OFFSET                   { -12.5, 26.5, 0 }
#define DELAY_BEFORE_PROBING                     200
#define BLTOUCH
#define PROBING_FANS_OFF
#define USE_PROBE_FOR_Z_HOMING
#define Z_PROBE_FEEDRATE_FAST                    (4*60)

//
// BLTouch
//
#define BLTOUCH_HS_MODE                          true
#define BLTOUCH_DELAY                            500
#define BLTOUCH_HS_EXTRA_CLEARANCE               0

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define HEATER_0_MINTEMP                         0
#define HEATER_0_MAXTEMP                         305
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    180
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define BED_MINTEMP                              0
#define BED_MAXTEMP                              120
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_FACTOR                          0.1f
#define THERMAL_PROTECTION_BED_PERIOD            180

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_KP                               13.13
#define DEFAULT_KI                               0.9
#define DEFAULT_KD                               47.74

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
#define DEFAULT_BED_KD                           1162.40
#define DEFAULT_BED_KI                           27.80
#define DEFAULT_BED_KP                           220.15

//
// Chamber Temp
//
#define DEFAULT_CHAMBER_KD                       655.17
#define DEFAULT_CHAMBER_KI                       1.40
#define DEFAULT_CHAMBER_KP                       37.04

//
// Fans
//
#define E0_AUTO_FAN_PIN                          PC0
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_MIN_PWM                              50

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
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          10
#define ADVANCED_PAUSE_PURGE_LENGTH              0
#define FILAMENT_CHANGE_UNLOAD_LENGTH            0
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_UNLOAD_PURGE_RETRACT            13
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             2.0
#define GRID_MAX_POINTS_X                        5
#define ENABLE_LEVELING_AFTER_G28
#define MESH_TEST_BED_TEMP                       60
#define AUTO_BED_LEVELING_BILINEAR
#define MAX_SAVED_MESHES                         100
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define EXTRAPOLATE_BEYOND_GRID
#define G26_XY_FEEDRATE_TRAVEL                   100
#define BILINEAR_SUBDIVISIONS                    5
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define G26_RETRACT_MULTIPLIER                   1.0
#define MESH_TEST_HOTEND_TEMP                    205
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define G26_XY_FEEDRATE                          20
#define ABL_BILINEAR_SUBDIVISION
#define MESH_TEST_LAYER_HEIGHT                   0.2
#define G26_MESH_VALIDATION

//
// Media
//
#define SDSUPPORT

//
// LCD
//
#define CREALITY_RTS
#define MENU_RESET_WIFI
#define LCD_BAUDRATE                             115200
#define CREALITY_WIFI
#define OTA_FIRMWARE_UPDATE
#define POWER_LOSS_RECOVERY
#define SD_MAX_READ_ERRORS                       5
#define POWER_LOSS_MIN_Z_CHANGE                  0.1
#define EVENT_GCODE_SD_ABORT                     "G1 X220 Y220 F3000\nM84"
#define SD_PROCEDURE_DEPTH                       1
#define LCD_SERIAL_PORT                          2
#define PLR_ENABLED_DEFAULT                      false
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "G1 X220 Y220 F3000\nM84"
#define REINIT_NOISY_LCD
#define POWER_LOSS_ZRAISE                        5
#define SDCARD_RATHERRECENTFIRST

//
// Interface
//
#define LCD_LANGUAGE                             en
#define LCD_LANGUAGE_2                           zh_CN

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { 220, 220, 0 }
#define NOZZLE_PARK_Z_RAISE_MIN                  5
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
#define SERIAL_PORT                              1
#define BAUDRATE                                 115200
#define BUFSIZE                                  4
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           0
#define CUSTOM_MACHINE_NAME                      "Ender-5 S1"
#define EMERGENCY_PARSER

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
#define EXTRUDE_MAXLENGTH                        1000
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
// Temperature Sensors
//
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  3
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      3
#define TEMP_WINDOW                              1
#define TEMP_SENSOR_BED                          14

//
// Temperature Presets
//
#define PREHEAT_1_TEMP_HOTEND                    205
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_TEMP_HOTEND                    260
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       90

//
// Baby-Stepping
//
#define BABYSTEP_MILLIMETER_UNITS
#define BABYSTEPPING
#define BABYSTEP_MULTIPLICATOR_Z                 0.05
#define BABYSTEP_ZPROBE_OFFSET
#define BABYSTEP_MULTIPLICATOR_XY                8
