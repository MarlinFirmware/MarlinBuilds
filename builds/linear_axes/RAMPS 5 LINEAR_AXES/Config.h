/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 12:00:04.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(anonymous)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_RAMPS_14_EFB
#define I_STOP_PIN                               65
#define J_STOP_PIN                               66

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT

//
// Stepper Drivers
//
#define X_DRIVER_TYPE                            A4988
#define Y_DRIVER_TYPE                            A4988
#define Z_DRIVER_TYPE                            A4988
#define X_ENABLE_ON                              LOW
#define Y_ENABLE_ON                              LOW
#define Z_ENABLE_ON                              LOW
#define E_ENABLE_ON                              LOW
#define I_ENABLE_ON                              LOW
#define J_DRIVER_TYPE                            A4988
#define AXIS5_NAME                               'V'
#define AXIS4_NAME                               'U'
#define I_DRIVER_TYPE                            A4988
#define J_ENABLE_ON                              LOW

//
// Extruder
//
#define EXTRUDERS                                0
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75

//
// Geometry
//
#define X_BED_SIZE                               200
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               200
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                200
#define MIN_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_X
#define MIN_SOFTWARE_ENDSTOP_Y
#define MIN_SOFTWARE_ENDSTOP_Z
#define MAX_SOFTWARE_ENDSTOP_X
#define MAX_SOFTWARE_ENDSTOP_Y
#define MAX_SOFTWARE_ENDSTOP_Z
#define MAX_SOFTWARE_ENDSTOP_I
#define MAX_SOFTWARE_ENDSTOP_J
#define J_MIN_POS                                0
#define I_MIN_POS                                0
#define J_MAX_POS                                200
#define I_MAX_POS                                200
#define MIN_SOFTWARE_ENDSTOP_J
#define MIN_SOFTWARE_ENDSTOP_I

//
// Homing
//
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (50*60), (50*60), (50*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 2, 2, 2 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 5, 5, 5 }
#define J_HOME_DIR                               -1
#define I_HOME_DIR                               -1

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 80, 80, 80 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 300, 300, 300 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 3000, 3000, 3000 }
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             false
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.013
#define DEFAULT_ACCELERATION                     3000
#define DEFAULT_TRAVEL_ACCELERATION              3000
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
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_J_DIR                             false
#define INVERT_I_DIR                             false
#define DISABLE_IDLE_I
#define DISABLE_IDLE_J
#define STEP_STATE_J                             HIGH
#define STEP_STATE_I                             HIGH
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define J_MIN_ENDSTOP_HIT_STATE                  HIGH
#define I_MIN_ENDSTOP_HIT_STATE                  HIGH

//
// Temperature
//
#define TEMP_HYSTERESIS                          3
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "ABS"
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_FACTOR                          0.1f

//
// Hotend Temp
//
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_Kp                               22.20
#define DEFAULT_Kd                               114.00
#define DEFAULT_Ki                               1.08

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20

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
#define BUFSIZE                                  4
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           0

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
#define EXTENDED_CAPABILITIES_REPORT
#define CAPABILITIES_REPORT

//
// Safety
//
#define USE_WATCHDOG
#define EXTRUDE_MAXLENGTH                        200
#define EXTRUDE_MINTEMP                          170

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
