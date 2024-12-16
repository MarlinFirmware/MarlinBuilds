/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-12-16 at 07:22:08.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(@JoeEn)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_RAMPS_CREALITY

//
// Extruder
//
#define ADVANCE_K                                0.0
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define HOTEND_IDLE_BED_TARGET                   0
#define HOTEND_IDLE_MIN_TRIGGER                  180
#define HOTEND_IDLE_NOZZLE_TARGET                0
#define HOTEND_IDLE_TIMEOUT
#define HOTEND_IDLE_TIMEOUT_SEC                  (5*60)
#define INVERT_E0_DIR                            false
#define LIN_ADVANCE

//
// Bed Temp
//
#define DEFAULT_bedKd                            408.11
#define DEFAULT_bedKi                            22.27
#define DEFAULT_bedKp                            116.76
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1
#define FAN_KICKSTART_TIME                       100
#define FAN_SOFT_PWM

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           TMC2208_STANDALONE
#define E_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            TMC2208_STANDALONE
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            TMC2208_STANDALONE
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            TMC2208_STANDALONE
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
#define SOFT_ENDSTOPS_MENU_ITEM
#define X_BED_SIZE                               300
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               300
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                400
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BACKOFF_POST_MM                   { 8, 8, 2 }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 8, 8, 2 }
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (10*60) }
#define QUICK_HOME
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_AFTER_HOMING                           10
#define Z_CLEARANCE_FOR_HOMING                   4
#define Z_HOME_DIR                               -1
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_X_POINT                    (X_BED_SIZE / 2)
#define Z_SAFE_HOMING_Y_POINT                    (Y_BED_SIZE / 2)

//
// Endstops
//
#define ENDSTOPPULLUPS
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Probes
//
#define FIX_MOUNTED_PROBE
#define MULTIPLE_PROBING                         2
#define NOZZLE_TO_PROBE_OFFSET                   { -27, 0, 0 }
#define PROBE_OFFSET_ZMAX                        9
#define PROBE_OFFSET_ZMIN                        -9
#define PROBING_MARGIN                           10
#define USE_PROBE_FOR_Z_HOMING
#define XY_PROBE_FEEDRATE                        (200*60)
#define Z_AFTER_PROBING                          5
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_CLEARANCE_MULTI_PROBE                  5
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_FEEDRATE_FAST                    (12*60)
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_PROBE_LOW_POINT                        -5

//
// LCD
//
#define AUTO_REPORT_SD_STATUS
#define BABYSTEPPING
#define BABYSTEP_ALWAYS_AVAILABLE
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_MULTIPLICATOR_Z                 10
#define BABYSTEP_XY
#define BABYSTEP_ZPROBE_OFFSET
#define BOOTSCREEN_TIMEOUT                       3000
#define DGUS_LCD_UI                              RELOADED
#define DGUS_RX_BUFFER_SIZE                      128
#define DGUS_TX_BUFFER_SIZE                      48
#define DGUS_UPDATE_INTERVAL_MS                  500
#define EVENT_GCODE_SD_ABORT                     "G91\nG1Z5\nG90\nM84\nM104S0\nM140S0"
#define FINE_MANUAL_MOVE                         0.025
#define LCD_BAUDRATE                             115200
#define LCD_SERIAL_PORT                          2
#define LONG_FILENAME_HOST_SUPPORT
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define NO_SD_HOST_DRIVE
#define PLR_ENABLED_DEFAULT                      true
#define POWER_LOSS_MIN_Z_CHANGE                  0.05
#define POWER_LOSS_RECOVERY
#define SCROLL_LONG_FILENAMES
#define SDCARD_RATHERRECENTFIRST
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_PROCEDURE_DEPTH                       1
#define SET_PROGRESS_MANUALLY
#define SET_PROGRESS_PERCENT
#define SET_REMAINING_TIME
#define SHOW_BOOTSCREEN
#define SHOW_ELAPSED_TIME
#define SHOW_PROGRESS_PERCENT
#define SHOW_REMAINING_TIME
#define SOUND_ON_DEFAULT
#define UTF_FILENAME_SUPPORT

//
// Interface
//
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS       2
#define LCD_FEEDBACK_FREQUENCY_HZ                5000
#define SPEAKER

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_ACTION_COMMANDS
#define HOST_KEEPALIVE_FEATURE
#define HOST_PROMPT_SUPPORT
#define HOST_START_MENU_ITEM
#define HOST_STATUS_NOTIFICATIONS
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
#define EXTRUDE_MAXLENGTH                        750
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED
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
#define BED_MAXTEMP                              150
#define BED_MINTEMP                              5
#define BED_OVERSHOOT                            10
#define HEATER_0_MAXTEMP                         250
#define HEATER_0_MINTEMP                         5
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_1_TEMP_HOTEND                    215
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       110
#define PREHEAT_2_TEMP_HOTEND                    240
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  5
#define TEMP_BED_WINDOW                          2
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      5
#define TEMP_SENSOR_0                            1
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
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define CLASSIC_JERK
#define DEFAULT_ACCELERATION                     750
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 140 }
#define DEFAULT_EJERK                            5.0
#define DEFAULT_MAX_ACCELERATION                 { 1000, 1000, 100, 2000 }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 10, 70 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             1000
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              2000
#define DEFAULT_XJERK                            10.0
#define DEFAULT_YJERK                            5.0
#define DEFAULT_ZJERK                            0.3
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             true
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
// Calibrate
//
#define AUTO_BED_LEVELING_BILINEAR
#define BED_TRAMMING_HEIGHT                      0.0
#define BED_TRAMMING_INSET_LFRB                  { 22, 22, 22, 22 }
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define BED_TRAMMING_Z_HOP                       4.0
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define ENABLE_LEVELING_FADE_HEIGHT
#define EXTRAPOLATE_BEYOND_GRID
#define GRID_MAX_POINTS_X                        5
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LCD_BED_TRAMMING
#define LEVELED_SEGMENT_LENGTH                   5.0
#define RESTORE_LEVELING_AFTER_G28
#define SEGMENT_LEVELED_MOVES

//
// EEPROM
//
#define EEPROM_AUTO_INIT
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Stats
//
#define PRINTCOUNTER
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define SERVICE_WARNING_BUZZES                   3

//
// Serial
//
#define ADVANCED_OK
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "CR-10S Pro"
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
#define PID_EDIT_MENU
#define PID_FUNCTIONAL_RANGE                     10

//
// Nozzle Park
//
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_POINT                        { (50), (10), 10 }
#define NOZZLE_PARK_XY_FEEDRATE                  50
#define NOZZLE_PARK_Z_FEEDRATE                   5
#define NOZZLE_PARK_Z_RAISE_MIN                  2

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_DISTANCE_MM              10
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FIL_RUNOUT_PULLUP
#define FIL_RUNOUT_STATE                         LOW
#define NUM_RUNOUT_SENSORS                       1

//
// Hotend Temp
//
#define DEFAULT_Kd                               68.36
#define DEFAULT_Ki                               1.32
#define DEFAULT_Kp                               18.97
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
#define ADVANCED_PAUSE_PURGE_LENGTH              20
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          15
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       20
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          20
#define FILAMENT_CHANGE_UNLOAD_LENGTH            100
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_ALL_EXTRUDERS
#define FILAMENT_UNLOAD_PURGE_DELAY              5000
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_UNLOAD_PURGE_LENGTH             0
#define FILAMENT_UNLOAD_PURGE_RETRACT            4
#define PARK_HEAD_ON_PAUSE
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_RETRACT_LENGTH                4

//
// Leveling
//
#define PROBING_MARGIN_BACK                      PROBING_MARGIN
#define PROBING_MARGIN_FRONT                     PROBING_MARGIN

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