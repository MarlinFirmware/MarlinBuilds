/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-12-16 at 08:46:49.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(MasterofNull)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_RAMPS_14_EFB

//
// Extruder
//
#define ADVANCE_K                                0.22
#define ADVANCE_K_EXTRA
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            false
#define LIN_ADVANCE

//
// Bed Temp
//
#define DEFAULT_bedKd                            886.89
#define DEFAULT_bedKi                            3.56
#define DEFAULT_bedKp                            68.81
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           A4988
#define E_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            A4988
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            A4988
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            A4988
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
#define X_BED_SIZE                               300
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               300
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                380
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BACKOFF_POST_MM                   { 6, 6, 6 }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (4*60) }
#define QUICK_HOME
#define VALIDATE_HOMING_ENDSTOPS
#define XY_COUNTERPART_BACKOFF_MM                6
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1

//
// Endstops
//
#define ENDSTOPPULLUPS
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW

//
// LCD
//
#define BOOTSCREEN_TIMEOUT                       3000
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define MANUAL_E_MOVES_RELATIVE
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define REPRAP_DISCOUNT_SMART_CONTROLLER
#define SDCARD_RATHERRECENTFIRST
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_MENU_CONFIRM_START
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_BOOTSCREEN
#define SHOW_ELAPSED_TIME
#define SHOW_PROGRESS_PERCENT
#define SOUND_ON_DEFAULT
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define ULTIPANEL_FEEDMULTIPLY

//
// Interface
//
#define DISPLAY_CHARSET_HD44780                  JAPANESE
#define INDIVIDUAL_AXIS_HOMING_MENU
#define INDIVIDUAL_AXIS_HOMING_SUBMENU
#define LCD_INFO_SCREEN_STYLE                    0

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
// Safety
//
#define EXTRUDE_MAXLENGTH                        200
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED
#define THERMAL_PROTECTION_HOTENDS
#define USE_WATCHDOG

//
// MPC Temp
//
#define FILAMENT_HEAT_CAPACITY_PERMM             { 5.6e-3f }
#define MPC_AMBIENT_XFER_COEFF                   { 0.068f }
#define MPC_AMBIENT_XFER_COEFF_FAN255            { 0.097f }
#define MPC_AUTOTUNE
#define MPC_AUTOTUNE_MENU
#define MPC_BLOCK_HEAT_CAPACITY                  { 16.7f }
#define MPC_EDIT_MENU
#define MPC_HEATER_POWER                         { 40.0f }
#define MPC_INCLUDE_FAN
#define MPC_MAX                                  255
#define MPC_MIN_AMBIENT_CHANGE                   1.0f
#define MPC_SENSOR_RESPONSIVENESS                { 0.22f }
#define MPC_SMOOTHING_FACTOR                     0.5f
#define MPC_STEADYSTATE                          0.5f
#define MPC_TUNING_END_Z                         10.0f
#define MPC_TUNING_POS                           { X_CENTER, Y_CENTER, 1.0f }

//
// Temperature
//
#define AUTOTEMP
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_MAXTEMP                              150
#define BED_MINTEMP                              5
#define BED_OVERSHOOT                            10
#define HEATER_0_MAXTEMP                         300
#define HEATER_0_MINTEMP                         5
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       70
#define PREHEAT_1_TEMP_HOTEND                    180
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       110
#define PREHEAT_2_TEMP_HOTEND                    240
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      10
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
#define ADAPTIVE_STEP_SMOOTHING
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_ACCELERATION                     3000
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 95 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 1000, 3000 }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 20, 120 }
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
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define JD_HANDLE_SMALL_SEGMENTS
#define JUNCTION_DEVIATION_MM                    0.15
#define MINIMUM_STEPPER_PULSE_NS                 1000
#define MIN_STEPS_PER_SEGMENT                    1
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define S_CURVE_ACCELERATION

//
// Serial
//
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define EMERGENCY_PARSER
#define FULL_REPORT_TO_HOST_FEATURE
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define REALTIME_REPORTING_COMMANDS
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              0
#define TX_BUFFER_SIZE                           0

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     10

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT

//
// Hotend Temp
//
#define BANG_MAX                                 255
#define MPCTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Media
//
#define SDSUPPORT
#define SD_CHECK_AND_RETRY

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER
#define G0_FEEDRATE                              3000
#define GCODE_MOTION_MODES

//
// Extras
//
#define ARC_P_CIRCLES
#define ARC_SUPPORT
#define BEZIER_CURVE_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.01
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
