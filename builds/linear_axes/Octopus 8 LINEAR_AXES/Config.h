/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-12-16 at 09:55:30.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(anonymous)"

//
// Machine
//
#define E4_DIR_PIN                               PC1
#define E4_ENABLE_PIN                            PA0
#define E4_STEP_PIN                              PG4
#define I_MIN_PIN                                PG11
#define J_MIN_PIN                                PG12
#define K_MIN_PIN                                PG13
#define MOTHERBOARD                              BOARD_BTT_OCTOPUS_V1_1
#define U_MIN_PIN                                PG14
#define V_MIN_PIN                                PG15

//
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                0

//
// Stepper Drivers
//
#define AXIS4_NAME                               'A'
#define AXIS5_NAME                               'B'
#define AXIS6_NAME                               'C'
#define AXIS7_NAME                               'U'
#define AXIS8_NAME                               'V'
#define E_ENABLE_ON                              LOW
#define I_DRIVER_TYPE                            A4988
#define I_ENABLE_ON                              LOW
#define J_DRIVER_TYPE                            A4988
#define J_ENABLE_ON                              LOW
#define K_DRIVER_TYPE                            A4988
#define K_ENABLE_ON                              LOW
#define U_DRIVER_TYPE                            A4988
#define U_ENABLE_ON                              LOW
#define V_DRIVER_TYPE                            A4988
#define V_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            A4988
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            A4988
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            A4988
#define Z_ENABLE_ON                              LOW

//
// Geometry
//
#define I_MAX_POS                                50
#define I_MIN_POS                                0
#define J_MAX_POS                                50
#define J_MIN_POS                                0
#define K_MAX_POS                                50
#define K_MIN_POS                                0
#define MAX_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOP_I
#define MAX_SOFTWARE_ENDSTOP_J
#define MAX_SOFTWARE_ENDSTOP_K
#define MAX_SOFTWARE_ENDSTOP_U
#define MAX_SOFTWARE_ENDSTOP_V
#define MAX_SOFTWARE_ENDSTOP_X
#define MAX_SOFTWARE_ENDSTOP_Y
#define MAX_SOFTWARE_ENDSTOP_Z
#define MIN_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_I
#define MIN_SOFTWARE_ENDSTOP_J
#define MIN_SOFTWARE_ENDSTOP_K
#define MIN_SOFTWARE_ENDSTOP_U
#define MIN_SOFTWARE_ENDSTOP_V
#define MIN_SOFTWARE_ENDSTOP_X
#define MIN_SOFTWARE_ENDSTOP_Y
#define MIN_SOFTWARE_ENDSTOP_Z
#define U_MAX_POS                                50
#define U_MIN_POS                                0
#define V_MAX_POS                                50
#define V_MIN_POS                                0
#define X_BED_SIZE                               200
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               200
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                200
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BUMP_DIVISOR                      { 2, 2, 2, 2, 2, 2, 2, 2 }
#define HOMING_BUMP_MM                           { 5, 5, 5, 5, 5, 5, 5, 5 }
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (50*60), (50*60), (50*60), (50*60), (50*60), (50*60) }
#define I_HOME_DIR                               -1
#define J_HOME_DIR                               -1
#define K_HOME_DIR                               -1
#define U_HOME_DIR                               -1
#define VALIDATE_HOMING_ENDSTOPS
#define V_HOME_DIR                               -1
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1

//
// Endstops
//
#define ENDSTOPPULLUPS
#define I_MIN_ENDSTOP_HIT_STATE                  HIGH
#define J_MIN_ENDSTOP_HIT_STATE                  HIGH
#define K_MIN_ENDSTOP_HIT_STATE                  HIGH
#define U_MIN_ENDSTOP_HIT_STATE                  HIGH
#define V_MIN_ENDSTOP_HIT_STATE                  HIGH
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH

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
#define CAPABILITIES_REPORT
#define EXTENDED_CAPABILITIES_REPORT

//
// Safety
//
#define EXTRUDE_MAXLENGTH                        200
#define EXTRUDE_MINTEMP                          170
#define USE_WATCHDOG

//
// Temperature
//
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_HOTEND                    180
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_HOTEND                    240

//
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false, false, false, false, false }
#define DEFAULT_ACCELERATION                     3000
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 80, 80, 80, 80, 80, 80 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 3000, 3000, 3000, 3000, 3000, 3000 }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 300, 300, 300, 300, 300, 300}
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              3000
#define DISABLE_IDLE_I
#define DISABLE_IDLE_J
#define DISABLE_IDLE_K
#define DISABLE_IDLE_U
#define DISABLE_IDLE_V
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_I_DIR                             false
#define INVERT_J_DIR                             false
#define INVERT_K_DIR                             false
#define INVERT_U_DIR                             false
#define INVERT_V_DIR                             false
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             false
#define JD_HANDLE_SMALL_SEGMENTS
#define JUNCTION_DEVIATION_MM                    0.013
#define MIN_STEPS_PER_SEGMENT                    6
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define STEP_STATE_E                             HIGH
#define STEP_STATE_I                             HIGH
#define STEP_STATE_J                             HIGH
#define STEP_STATE_K                             HIGH
#define STEP_STATE_U                             HIGH
#define STEP_STATE_V                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH

//
// Serial
//
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              -1
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
#define DEFAULT_Kd                               114.00
#define DEFAULT_Ki                               1.08
#define DEFAULT_Kp                               22.20
#define PID_K1                                   0.95
#define PID_MAX                                  255

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
