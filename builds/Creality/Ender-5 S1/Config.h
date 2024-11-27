/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-11-26 at 20:27:23.
 */

//
// Info
//
#define CORP_WEBSITE_C                           "www.creality.cn "
#define CORP_WEBSITE_E                           "www.creality.com"
#define FIRMWARE_VERSION                         "1.0.6T13"
#define HARDWARE_VERSION                         "CR4NS200141C13"
#define MACHINE_NAME                             "Ender-5 S1"
#define PRINT_SIZE                               "220 X 220 X 280mm"
#define SCREEN_HW_VERSION                        "DWIN20220915"
#define SCREEN_VERSION                           "U23"
#define STRING_CONFIG_H_AUTHOR                   "(Creality)"

//
// User
//
#define VERY_HIGH_SPEED

//
// Machine
//
#define MOTHERBOARD                              BOARD_CREALITY_F401RE

//
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            false

//
// Bed Temp
//
#define DEFAULT_bedKd                            305.4
#define DEFAULT_bedKi                            .023
#define DEFAULT_bedKp                            10.00
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define CHAMBER_AUTO_FAN_PIN                     -1
#define COOLER_AUTO_FAN_PIN                      -1
#define E0_AUTO_FAN_PIN                          PC0
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_MIN_PWM                              50

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           TMC2208_STANDALONE
#define E_ENABLE_INIT_STATE                      LOW
#define E_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            TMC2208_STANDALONE
#define X_ENABLE_INIT_STATE                      LOW
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            TMC2208_STANDALONE
#define Y_ENABLE_INIT_STATE                      LOW
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            TMC2208_STANDALONE
#define Z_ENABLE_INIT_STATE                      LOW
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
#define SOFT_ENDSTOPS_MENU_ITEM
#define X_BED_SIZE                               220
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               220
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                280
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BUMP_DIVISOR                      { 10, 10, 4 }
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (10*60) }
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               1
#define Y_HOME_DIR                               1
#define Z_CLEARANCE_FOR_HOMING                   5
#define Z_HOME_DIR                               -1
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER

//
// Endstops
//
#define ENDSTOPPULLUPS
#define ENDSTOPPULLUP_ZMIN
#define ENDSTOP_INTERRUPTS_FEATURE
#define X_MAX_ENDSTOP_HIT_STATE                  LOW
#define Y_MAX_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Probes
//
#define BLTOUCH
#define DELAY_BEFORE_PROBING                     200
#define MULTIPLE_PROBING                         2
#define NOZZLE_TO_PROBE_OFFSET                   { -12.5, 26.5, 0 }
#define PROBE_OFFSET_ZMAX                        10
#define PROBE_OFFSET_ZMIN                        -10
#define PROBING_FANS_OFF
#define PROBING_HEATERS_OFF
#define PROBING_MARGIN                           5
#define USE_PROBE_FOR_Z_HOMING
#define XY_PROBE_FEEDRATE                        (400*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_CLEARANCE_MULTI_PROBE                  5
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_PROBE_LOW_POINT                        -5

//
// LCD
//
#define BABYSTEPPING
#define BABYSTEP_MILLIMETER_UNITS
#define BABYSTEP_MULTIPLICATOR_XY                8
#define BABYSTEP_MULTIPLICATOR_Z                 0.05
#define BABYSTEP_ZPROBE_OFFSET
#define CREALITY_CLOUD
#define CREALITY_RTS
#define EVENT_GCODE_SD_ABORT                     "G1 X220 Y220 F3000\nM84"
#define LCD_BAUDRATE                             115200
#define LCD_SERIAL_PORT                          2
#define OTA_FIRMWARE_UPDATE
#define PLR_ENABLED_DEFAULT                      true
#define POWER_LOSS_MIN_Z_CHANGE                  0.1
#define POWER_LOSS_RECOVERY
#define POWER_LOSS_ZRAISE                        5
#define SDCARD_RATHERRECENTFIRST
#define SD_FINISHED_RELEASECOMMAND               "G1 X220 Y220 F3000\nM84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_PROCEDURE_DEPTH                       1
#define USB_HOST_SERIAL                          MYSERIAL2

//
// Interface
//
#define LCD_LANGUAGE_2                           zh_CN

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
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
#define BED_MAXTEMP                              120
#define BED_MINTEMP                              0
#define BED_OVERSHOOT                            10
#define COOLER_OVERSHOOT                         2
#define DUMMY_THERMISTOR_998_VALUE               25
#define DUMMY_THERMISTOR_999_VALUE               100
#define HEATER_0_MAXTEMP                         305
#define HEATER_0_MINTEMP                         0
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_1_TEMP_CHAMBER                   35
#define PREHEAT_1_TEMP_HOTEND                    205
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       90
#define PREHEAT_2_TEMP_CHAMBER                   35
#define PREHEAT_2_TEMP_HOTEND                    260
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  3
#define TEMP_BED_WINDOW                          1
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      3
#define TEMP_SENSOR_0                            1
#define TEMP_SENSOR_BED                          14
#define TEMP_WINDOW                              1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define THERMAL_PROTECTION_BED_PERIOD            180
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    180
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40

//
// Safety
//
#define EXTRUDE_MAXLENGTH                        1000
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED
#define THERMAL_PROTECTION_HOTENDS
#define USE_WATCHDOG

//
// EEPROM
//
#define EEPROM_AUTO_INIT
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Calibrate
//
#define ABL_BILINEAR_SUBDIVISION
#define AUTO_BED_LEVELING_BILINEAR
#define BILINEAR_SUBDIVISIONS                    5
#define DEFAULT_LEVELING_FADE_HEIGHT             50.0
#define ENABLE_LEVELING_AFTER_G28
#define ENABLE_LEVELING_FADE_HEIGHT
#define EXTRAPOLATE_BEYOND_GRID
#define G26_MESH_VALIDATION
#define G26_RETRACT_MULTIPLIER                   1.0
#define G26_XY_FEEDRATE                          20
#define G26_XY_FEEDRATE_TRAVEL                   100
#define GRID_MAX_POINTS_X                        5
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define MESH_TEST_BED_TEMP                       60
#define MESH_TEST_HOTEND_TEMP                    205
#define MESH_TEST_LAYER_HEIGHT                   0.2
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define SEGMENT_LEVELED_MOVES

//
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define CLASSIC_JERK
#define DEFAULT_ACCELERATION                     2000
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 409.50 }
#define DEFAULT_EJERK                            5.0
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 100, 3000}
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 20, 25 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             2000
#define DEFAULT_STEPPER_TIMEOUT_SEC              300
#define DEFAULT_TRAVEL_ACCELERATION              2000
#define DEFAULT_XJERK                            TERN(VERY_HIGH_SPEED, 15.0, 10.0)
#define DEFAULT_YJERK                            TERN(VERY_HIGH_SPEED, 15.0, 10.0)
#define DEFAULT_ZJERK                            0.4
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             false
#define LIMITED_JERK_EDITING
#define LIMITED_MAX_ACCEL_EDITING
#define LIMITED_MAX_FR_EDITING
#define MAX_ACCEL_EDIT_VALUES                    { 2000, 2000, 200, 2000 }
#define MAX_FEEDRATE_EDIT_VALUES                 { 600, 600, 20, 50 }
#define MAX_JERK_EDIT_VALUES                     { 10, 10, 0.6, 10 }
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
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLDOWN
#define FIL_RUNOUT_STATE                         HIGH
#define NUM_RUNOUT_SENSORS                       1

//
// Stats
//
#define PRINTCOUNTER
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define SERVICE_WARNING_BUZZES                   3

//
// Servos
//
#define CREALITY_WIFI
#define MENU_RESET_WIFI
#define NUM_SERVOS                               1
#define SERVO_DELAY                              { 50 }

//
// Chamber Temp
//
#define DEFAULT_chamberKd                        655.17
#define DEFAULT_chamberKi                        1.40
#define DEFAULT_chamberKp                        37.04
#define MIN_CHAMBER_POWER                        0

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
#define DEFAULT_Kd                               47.74
#define DEFAULT_Ki                               0.9
#define DEFAULT_Kp                               13.13
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Serial
//
#define BAUDRATE                                 115200
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "Ender-5 S1"
#define EMERGENCY_PARSER
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
#define NOZZLE_PARK_POINT                        { 220, 220, 0 }
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5
#define NOZZLE_PARK_Z_RAISE_MIN                  5

//
// Advanced Pause
//
#define ADVANCED_PAUSE_FEATURE
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define ADVANCED_PAUSE_PURGE_LENGTH              0
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          10
#define FILAMENT_CHANGE_UNLOAD_LENGTH            0
#define FILAMENT_UNLOAD_PURGE_DELAY              5000
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_UNLOAD_PURGE_RETRACT            13
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_RETRACT_LENGTH                2

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
// BLTouch
//
#define BLTOUCH_AND_Z_LIMIT
#define BLTOUCH_DELAY                            500
#define BLTOUCH_HS_EXTRA_CLEARANCE               7
#define BLTOUCH_HS_MODE                          true
