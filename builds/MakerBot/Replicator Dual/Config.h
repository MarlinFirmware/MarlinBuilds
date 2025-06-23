/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 12:00:47.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(RainMotorsports)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_MIGHTYBOARD_REVE

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
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
#define E1_DRIVER_TYPE                           A4988

//
// Extruder
//
#define EXTRUDERS                                2
#define INVERT_E0_DIR                            true
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define DISABLE_OTHER_EXTRUDERS
#define INVERT_E1_DIR                            false
#define HOTEND_OFFSET_Y                          { 0.0, -33.00 }
#define HOTEND_IDLE_TIMEOUT_SEC                  (5*60)
#define HOTEND_IDLE_MIN_TRIGGER                  180
#define HOTEND_IDLE_NOZZLE_TARGET                0
#define HOTEND_IDLE_TIMEOUT
#define HOTEND_IDLE_BED_TARGET                   0

//
// Geometry
//
#define X_BED_SIZE                               227
#define X_MIN_POS                                -8
#define X_MAX_POS                                264
#define Y_BED_SIZE                               148
#define Y_MIN_POS                                -2
#define Y_MAX_POS                                152
#define Z_MIN_POS                                0
#define Z_MAX_POS                                150
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
#define X_HOME_DIR                               1
#define Y_HOME_DIR                               1
#define Z_HOME_DIR                               -1
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (4*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 94.139704, 94.139704, 400, 96.275202}
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 19, 30 }
#define DEFAULT_MAX_ACCELERATION                 { 1000, 1000, 150, 4000 }
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             true
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define DEFAULT_ACCELERATION                     1000
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_EJERK                            5.0
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define DISABLE_IDLE_E
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define DEFAULT_ZJERK                            0.3
#define CLASSIC_JERK
#define EDITABLE_STEPS_PER_UNIT
#define DEFAULT_YJERK                            10.0
#define DEFAULT_XJERK                            10.0
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define ENDSTOPPULLUPS
#define Y_MAX_ENDSTOP_HIT_STATE                  LOW
#define X_MAX_ENDSTOP_HIT_STATE                  LOW

//
// Probes
//
#define PROBING_TOOL                             0

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            -2
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         280
#define PREHEAT_1_TEMP_HOTEND                    200
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define TEMP_SENSOR_BED                          1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define THERMOCOUPLE_MAX_ERRORS                  15
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define MAX31865_CALIBRATION_OHMS_1              430
#define MAX31865_CALIBRATION_OHMS_0              430
#define MAX31865_SENSOR_OHMS_1                   100
#define TEMP_SENSOR_1                            -2
#define PREHEAT_2_FAN_SPEED                      0
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              130
#define HEATER_1_MINTEMP                         5
#define HEATER_1_MAXTEMP                         280
#define PREHEAT_2_LABEL                          "ABS"
#define MAX31865_SENSOR_OHMS_0                   100
#define PREHEAT_2_TEMP_BED                       110
#define PREHEAT_2_TEMP_HOTEND                    240
#define THERMAL_PROTECTION_BED_PERIOD            20

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_Kp                               36.67
#define DEFAULT_Kd                               87.11
#define DEFAULT_Ki                               3.86

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20
#define PID_AUTOTUNE_MENU

//
// Bed Temp
//
#define MAX_BED_POWER                            255
#define DEFAULT_bedKi                            6.92
#define PIDTEMPBED
#define DEFAULT_bedKd                            250.85
#define DEFAULT_bedKp                            51.04

//
// Fans
//
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50

//
// Tool Change
//
#define TOOLCHANGE_ZRAISE                        2
#define TOOLCHANGE_FS_EXTRA_PRIME                0

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
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         80
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_LENGTH            80
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          10
#define ADVANCED_PAUSE_PURGE_LENGTH              50
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
#define BED_TRAMMING_Z_HOP                       4.0
#define BED_TRAMMING_HEIGHT                      0.0
#define BED_TRAMMING_INSET_LFRB                  { 60, 10, 60, 10 }
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define LCD_BED_TRAMMING
#define BED_TRAMMING_INCLUDE_CENTER

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
#define FF_INTERFACEBOARD
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define ULTIPANEL_FEEDMULTIPLY
#define BABYSTEPPING
#define BABYSTEP_DISPLAY_TOTAL
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define MANUAL_E_MOVES_RELATIVE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define NO_SD_AUTOSTART
#define SDCARD_READONLY
#define SHOW_ELAPSED_TIME
#define SOUND_ON_DEFAULT
#define SD_PROCEDURE_DEPTH                       1
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                1
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define PE_LEDS_COMPLETED_TIME                   (30*60)
#define SD_FINISHED_STEPPERRELEASE               true
#define DOUBLECLICK_FOR_Z_BABYSTEPPING

//
// Lights
//
#define PRINTER_EVENT_LEDS
#define PCA9533

//
// Interface
//
#define DISPLAY_CHARSET_HD44780                  JAPANESE
#define LCD_INFO_SCREEN_STYLE                    0
#define LCD_LANGUAGE                             en
#define REVERSE_MENU_DIRECTION
#define INDIVIDUAL_AXIS_HOMING_MENU

//
// Develop
//
#define MARLIN_SMALL_BUILD

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 5), (Y_MAX_POS - 5), 20 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define STARTUP_COMMANDS                         "M150 RUB255"
#define NO_WORKSPACE_OFFSETS
#define DEBUG_FLAGS_GCODE

//
// Serial
//
#define SERIAL_PORT                              0
#define BAUDRATE                                 115200
#define BUFSIZE                                  4
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           0
#define CUSTOM_MACHINE_NAME                      "MakerBot Replicator"

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
#define EXTENDED_CAPABILITIES_REPORT

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
// Volumetrics
//
#define NO_VOLUMETRICS

//
// Stepper Motor Current
//
#define DIGIPOT_MCP4018
#define DIGIPOT_I2C_MOTOR_CURRENTS               { 0.81, 0.81, 0.28, 0.81, 0.81 }
#define DIGIPOT_I2C_NUM_CHANNELS                 5
