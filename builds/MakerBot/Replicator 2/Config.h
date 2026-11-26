/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2026-11-26 at 08:16:30.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Axel Sepulveda, gh: chepo92)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_MIGHTYBOARD_REVG

//
// EEPROM
//
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
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             true
#define INVERT_E0_DIR                            false

//
// Extruder
//
#define EXTRUDERS                                1
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define HOTEND_IDLE_TIMEOUT_SEC                  (5*60)
#define HOTEND_IDLE_MIN_TRIGGER                  180
#define HOTEND_IDLE_BED_TARGET                   0
#define HOTEND_IDLE_TIMEOUT
#define HOTEND_IDLE_NOZZLE_TARGET                0

//
// Geometry
//
#define X_BED_SIZE                               230
#define X_MIN_POS                                -8
#define X_MAX_POS                                264
#define Y_BED_SIZE                               150
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
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.013
#define DEFAULT_ACCELERATION                     1000
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_RETRACT_ACCELERATION             3000
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
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define ENDSTOPPULLUPS
#define X_MAX_ENDSTOP_HIT_STATE                  LOW
#define Y_MAX_ENDSTOP_HIT_STATE                  LOW

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         280
#define HOTEND_OVERSHOOT                         15
#define BED_CHECK_INTERVAL                       5000
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define TEMP_SENSOR_ADS1118_GAIN                 1.5f
#define TEMP_SENSOR_ADS1118_OFFSET               0.0f

//
// Hotend Temp
//
#define BANG_MAX                                 255
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Fans
//
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50

//
// Calibrate
//
#define BED_TRAMMING_HEIGHT                      0.0
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define BED_TRAMMING_INSET_LFRB                  { 60, 10, 60, 10 }
#define BED_TRAMMING_INCLUDE_CENTER
#define LCD_BED_TRAMMING
#define BED_TRAMMING_Z_HOP                       4.0

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
#define MIGHTYBOARD_LCD
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define SOUND_ON_DEFAULT
#define FINE_MANUAL_MOVE                         0.025
#define SD_PROCEDURE_DEPTH                       1
#define ULTIPANEL_FEEDMULTIPLY
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define BOOT_MARLIN_LOGO_SMALL
#define SHOW_ELAPSED_TIME
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define PE_LEDS_COMPLETED_TIME                   (30*60)
#define SD_MAX_READ_ERRORS                       5
#define NO_SD_AUTOSTART
#define MANUAL_E_MOVES_RELATIVE
#define REINIT_NOISY_LCD
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SDCARD_READONLY
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define SD_SPI_SPEED                             SPI_HALF_SPEED
#define SDCARD_RATHERRECENTFIRST

//
// Lights
//
#define PCA9632
#define RGB_STARTUP_TEST
#define RGB_STARTUP_TEST_INNER_MS                10
#define PRINTER_EVENT_LEDS

//
// Interface
//
#define DISPLAY_CHARSET_HD44780                  JAPANESE
#define LCD_INFO_SCREEN_STYLE                    0
#define LCD_LANGUAGE                             en
#define INDIVIDUAL_AXIS_HOMING_MENU
#define SLIM_LCD_MENUS
#define REVERSE_MENU_DIRECTION

//
// Develop
//
#define MARLIN_SMALL_BUILD

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define STARTUP_COMMANDS                         "M150 RUB255"
#define NO_WORKSPACE_OFFSETS

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
#define HOST_PROMPT_SUPPORT
#define HOST_ACTION_COMMANDS
#define HOST_STATUS_NOTIFICATIONS

//
// Reporting
//
#define AUTO_REPORT_TEMPERATURES

//
// Safety
//
#define USE_WATCHDOG
#define THERMAL_PROTECTION_HOTENDS
#define EXTRUDE_MAXLENGTH                        200
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE

//
// Volumetrics
//
#define NO_VOLUMETRICS

//
// Temperature Presets
//
#define PREHEAT_1_TEMP_HOTEND                    200
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_TEMP_HOTEND                    240

//
// Temperature Sensors
//
#define TEMP_SENSOR_0                            -18
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1

//
// Baby-Stepping
//
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define BABYSTEPPING
#define BABYSTEP_DISPLAY_TOTAL
#define BABYSTEP_MULTIPLICATOR_XY                1

//
// Stepper Motor Current
//
#define DIGIPOT_I2C_MOTOR_CURRENTS               { 0.81, 0.81, 0.28, 0.81, 0.81 }
#define DIGIPOT_I2C_NUM_CHANNELS                 5
#define DIGIPOT_MCP4018
