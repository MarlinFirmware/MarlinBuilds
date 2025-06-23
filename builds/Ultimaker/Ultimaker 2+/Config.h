/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 12:39:02.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Anson Liu, UM2+)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_ULTIMAIN_2

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
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

//
// Extruder
//
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            true
#define DEFAULT_NOMINAL_FILAMENT_DIA             2.85

//
// Geometry
//
#define X_BED_SIZE                               210
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               210
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                205
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
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (50*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define Z_AFTER_HOMING                           10

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 200.0, 369.0 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 30, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 9000,9000,100,10000 }
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
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
#define DEFAULT_EJERK                            5.0
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define DISABLE_IDLE_E
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define DEFAULT_ZJERK                            0.4
#define CLASSIC_JERK
#define EDITABLE_STEPS_PER_UNIT
#define DEFAULT_YJERK                            20.0
#define LIMITED_JERK_EDITING
#define S_CURVE_ACCELERATION
#define DEFAULT_XJERK                            20.0
#define MAX_JERK_EDIT_VALUES                     { 20, 20, 0.6, 10 }
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define ENDSTOPPULLUPS

//
// Probes
//
#define PROBING_MARGIN                           5
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define PROBE_OFFSET_ZMAX                        20
#define PROBE_OFFSET_ZMIN                        -20

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            20
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define PREHEAT_1_TEMP_HOTEND                    210
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      3
#define TEMP_WINDOW                              2
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define TEMP_SENSOR_BED                          20
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define PREHEAT_3_TEMP_CHAMBER                   50
#define PREHEAT_3_FAN_SPEED                      0
#define PREHEAT_3_TEMP_BED                       110
#define PREHEAT_3_LABEL                          "PC"
#define PREHEAT_3_TEMP_HOTEND                    260
#define PREHEAT_2_FAN_SPEED                      0
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              150
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       110
#define PREHEAT_2_TEMP_HOTEND                    240
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_FACTOR                          0.1f
#define THERMAL_PROTECTION_BED_PERIOD            20
#define SHOW_TEMP_ADC_VALUES

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.99
#define PID_MAX                                  255
#define DEFAULT_Kp                               8.86
#define DEFAULT_Kd                               28.86
#define DEFAULT_Ki                               0.68

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     30

//
// Bed Temp
//
#define MAX_BED_POWER                            255
#define PIDTEMPBED
#define DEFAULT_bedKd                            165.29
#define DEFAULT_bedKi                            23.46
#define DEFAULT_bedKp                            124.55

//
// Fans
//
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            40
#define FAN_MIN_PWM                              20
#define FAN_KICKSTART_TIME                       200
#define FAST_PWM_FAN
#define FAST_PWM_FAN_FREQUENCY                   1000U

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                2
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_UNLOAD_ALL_EXTRUDERS
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         10
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_LENGTH            705+35
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          25
#define ADVANCED_PAUSE_PURGE_LENGTH              25
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
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define MESH_INSET                               10
#define GRID_MAX_POINTS_X                        3
#define LCD_PROBE_Z_RANGE                        4
#define MESH_BED_LEVELING
#define BED_TRAMMING_Z_HOP                       4.0
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define BED_TRAMMING_HEIGHT                      0.0
#define MESH_EDIT_Z_STEP                         0.025
#define LCD_BED_LEVELING
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define BED_TRAMMING_INSET_LFRB                  { 30, 30, 30, 30 }
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF }
#define MANUAL_PROBE_START_Z                     0.2
#define MESH_EDIT_MENU
#define LCD_BED_TRAMMING

//
// Media
//
#define SDSUPPORT

//
// LCD
//
#define LCD_LANGUAGE                             en
#define SHOW_BOOTSCREEN
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define LCD_FEEDBACK_FREQUENCY_HZ                2730
#define ULTI_CONTROLLER
#define REVERSE_ENCODER_DIRECTION
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS       100
#define ENCODER_PULSES_PER_STEP                  2
#define INDIVIDUAL_AXIS_HOMING_MENU
#define INDIVIDUAL_AXIS_HOMING_SUBMENU
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define STATUS_HOTEND_ANIM
#define SOUND_MENU_ITEM
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define MENU_HOLLOW_FRAME
#define BINARY_FILE_TRANSFER
#define SCROLL_LONG_FILENAMES
#define BOOT_MARLIN_LOGO_SMALL
#define BABYSTEPPING
#define BEEP_ON_FEEDRATE_CHANGE
#define AUTO_REPORT_SD_STATUS
#define FEEDRATE_CHANGE_BEEP_FREQUENCY           2730
#define LCD_DECIMAL_SMALL_XY
#define LED_USER_PRESET_GREEN                    48
#define MANUAL_E_MOVES_RELATIVE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       250
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G92 E0\nG1 E-3\nG28XY"
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define STATUS_HEAT_PERCENT
#define SHOW_ELAPSED_TIME
#define PREHEAT_SHORTCUT_MENU_ITEM
#define SOUND_ON_DEFAULT
#define LED_USER_PRESET_RED                      48
#define LED_USER_PRESET_STARTUP
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_REMAINING_TIME
#define SET_REMAINING_TIME
#define LED_USER_PRESET_BLUE                     60
#define FLOW_EDIT_MAX                            999
#define STATUS_CHAMBER_ANIM
#define FLOW_EDIT_MIN                            10
#define STATUS_BED_ANIM
#define STATUS_HOTEND_INVERTED
#define PRINT_PROGRESS_SHOW_DECIMALS
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 50*60, 2*60 }
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                1
#define LONG_FILENAME_HOST_SUPPORT
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define PE_LEDS_COMPLETED_TIME                   (30*60)
#define SET_PROGRESS_MANUALLY
#define XYZ_HOLLOW_FRAME
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define LCD_TIMEOUT_TO_STATUS                    20000
#define SET_PROGRESS_PERCENT
#define STATUS_FAN_FRAMES                        4
#define LED_USER_PRESET_WHITE                    0
#define FEEDRATE_CHANGE_BEEP_DURATION            100
#define LED_USER_PRESET_BRIGHTNESS               255
#define LCD_SHOW_E_TOTAL
#define BROWSE_MEDIA_ON_INSERT
#define LED_CONTROL_MENU
#define LED_COLOR_PRESETS
#define TURBO_BACK_MENU_ITEM

//
// Lights
//
#define PRINTER_EVENT_LEDS
#define PCA9632

//
// Caselight
//
#define INVERT_CASE_LIGHT                        false
#define CASE_LIGHT_DEFAULT_BRIGHTNESS            105
#define CASE_LIGHT_DEFAULT_ON                    false
#define CASE_LIGHT_MENU
#define CASE_LIGHT_ENABLE

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 3), (Y_MAX_POS - 3), 20 }
#define NOZZLE_PARK_Z_RAISE_MIN                  10
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
#define SERIAL_PORT                              0
#define BAUDRATE                                 250000
#define BUFSIZE                                  16
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           128
#define CUSTOM_MACHINE_NAME                      "Ultimaker 2+"
#define BAUD_RATE_GCODE
#define RX_BUFFER_SIZE                           128
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
#define HOST_START_MENU_ITEM
#define HOST_SHUTDOWN_MENU_ITEM

//
// I2Cbus
//
#define I2C_SLAVE_ADDRESS                        0
#define EXPERIMENTAL_I2CBUS

//
// Reporting
//
#define AUTO_REPORT_TEMPERATURES
#define EXTENDED_CAPABILITIES_REPORT
#define CAPABILITIES_REPORT
#define AUTO_REPORT_POSITION

//
// Safety
//
#define USE_WATCHDOG
#define THERMAL_PROTECTION_HOTENDS
#define EXTRUDE_MAXLENGTH                        705+35
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
#define CANCEL_OBJECTS_REPORTING
#define CANCEL_OBJECTS

//
// Stepper Motor Current
//
#define PWM_MOTOR_CURRENT                        { 1200, 1200, 1250 }
