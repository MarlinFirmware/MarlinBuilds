/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 12:06:15.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Stephen Hawes)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_OPULO_LUMEN_REV3

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT

//
// Stepper Drivers
//
#define X_DRIVER_TYPE                            TMC2209
#define Y_DRIVER_TYPE                            TMC2209
#define Z_DRIVER_TYPE                            TMC2209
#define X_ENABLE_ON                              LOW
#define Y_ENABLE_ON                              LOW
#define Z_ENABLE_ON                              LOW
#define E_ENABLE_ON                              LOW
#define I_ENABLE_ON                              LOW
#define AXIS6_ROTATES
#define AXIS6_NAME                               'C'
#define J_DRIVER_TYPE                            TMC2209
#define AXIS5_ROTATES
#define AXIS5_NAME                               'B'
#define AXIS4_ROTATES
#define AXIS4_NAME                               'A'
#define K_DRIVER_TYPE                            TMC2209
#define K_ENABLE_ON                              LOW
#define I_DRIVER_TYPE                            TMC2209
#define J_ENABLE_ON                              LOW

//
// Extruder
//
#define EXTRUDERS                                0
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75

//
// Geometry
//
#define X_BED_SIZE                               435
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               485
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                59
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
#define MAX_SOFTWARE_ENDSTOP_K
#define K_MIN_POS                                0
#define J_MIN_POS                                0
#define K_MAX_POS                                50
#define I_MIN_POS                                0
#define J_MAX_POS                                50
#define I_MAX_POS                                50
#define MIN_SOFTWARE_ENDSTOP_J
#define MIN_SOFTWARE_ENDSTOP_I
#define MIN_SOFTWARE_ENDSTOP_K

//
// Homing
//
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (50*60), (50*60), (50*60), (50*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4, 4, 4, 2 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2, 2, 2, 5 }
#define Z_AFTER_HOMING                           31.5
#define K_HOME_DIR                               0
#define J_HOME_DIR                               0
#define I_HOME_DIR                               0
#define QUICK_HOME

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 1280, 1280, 40, 4.44, 4.44, 40 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 250, 50000, 50000, 5000 }
#define DEFAULT_MAX_ACCELERATION                 { 1000, 1000, 2000, 3000, 3000, 3000 }
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             false
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.013
#define DEFAULT_ACCELERATION                     1000
#define DEFAULT_TRAVEL_ACCELERATION              3000
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    1
#define DEFAULT_MINSEGMENTTIME                   20000
#define JD_HANDLE_SMALL_SEGMENTS
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_K_DIR                             false
#define INVERT_J_DIR                             true
#define INVERT_I_DIR                             true
#define DISABLE_IDLE_I
#define DISABLE_IDLE_J
#define DISABLE_IDLE_K
#define STEP_STATE_J                             HIGH
#define STEP_STATE_K                             HIGH
#define STEP_STATE_I                             HIGH
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define ENDSTOPPULLUPS

//
// Temperature
//
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
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
// Fans
//
#define FAN_SOFT_PWM

//
// Lights
//
#define NEOPIXEL2_TYPE                           NEOPIXEL_TYPE
#define NEOPIXEL_TYPE                            NEO_GRB
#define NEOPIXEL_BRIGHTNESS                      255
#define NEOPIXEL2_STARTUP_TEST
#define NEOPIXEL_STARTUP_TEST
#define NEOPIXEL2_SEPARATE
#define NEOPIXEL_IS_SEQUENTIAL
#define NEOPIXEL_M150_DEFAULT                    -1
#define NEOPIXEL_LED
#define NEOPIXEL_PIXELS                          8
#define NEOPIXEL2_PIXELS                         8
#define NEOPIXEL2_BRIGHTNESS                     255

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define GCODE_QUOTED_STRINGS
#define DEBUG_FLAGS_GCODE

//
// Serial
//
#define SERIAL_PORT                              -1
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           0
#define RS485_SERIAL_PORT                        1
#define M485_PROTOCOL                            1
#define RS485_BUS_BUFFER_SIZE                    128

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_KEEPALIVE_FEATURE
#define PRINTJOB_TIMER_AUTOSTART

//
// I2Cbus
//
#define I2C_SLAVE_ADDRESS                        0
#define EXPERIMENTAL_I2CBUS

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

//
// TMC_Smart
//
#define CHOPPER_TIMING                           CHOPPER_DEFAULT_12V
#define INTERPOLATE                              true
#define E0_HYBRID_THRESHOLD                      30
#define Z_RSENSE                                 0.11
#define J_CHAIN_POS                              -1
#define HOLD_MULTIPLIER                          0.5
#define K_HYBRID_THRESHOLD                       3
#define X_CHAIN_POS                              -1
#define Y_RSENSE                                 0.11
#define U_HYBRID_THRESHOLD                       3
#define E3_HYBRID_THRESHOLD                      30
#define Z_MICROSTEPS                             8
#define STEALTHCHOP_I
#define STEALTHCHOP_J
#define STEALTHCHOP_K
#define STEALTHCHOP_Z
#define Z_CURRENT_HOME                           Z_CURRENT
#define K_MICROSTEPS                             16
#define X_RSENSE                                 0.11
#define Y_CHAIN_POS                              -1
#define I_CHAIN_POS                              -1
#define X_HYBRID_THRESHOLD                       100
#define E6_HYBRID_THRESHOLD                      30
#define X_CURRENT_HOME                           X_CURRENT
#define Z4_HYBRID_THRESHOLD                      3
#define K_CURRENT                                800
#define Z_CHAIN_POS                              -1
#define J_HYBRID_THRESHOLD                       3
#define I_CURRENT_HOME                           I_CURRENT
#define K_RSENSE                                 0.11
#define Z_CURRENT                                800
#define E2_HYBRID_THRESHOLD                      30
#define K_CURRENT_HOME                           K_CURRENT
#define J_CURRENT                                700
#define Y_MICROSTEPS                             256
#define J_RSENSE                                 0.11
#define W_HYBRID_THRESHOLD                       3
#define E5_HYBRID_THRESHOLD                      30
#define J_MICROSTEPS                             8
#define Z3_HYBRID_THRESHOLD                      3
#define I_RSENSE                                 0.11
#define J_CURRENT_HOME                           J_CURRENT
#define I_CURRENT                                700
#define X2_HYBRID_THRESHOLD                      100
#define Z_HYBRID_THRESHOLD                       3
#define TMC_USE_SW_SPI
#define X_CURRENT                                800
#define I_HYBRID_THRESHOLD                       3
#define EDGE_STEPPING
#define Y_CURRENT                                800
#define I_MICROSTEPS                             8
#define E1_HYBRID_THRESHOLD                      30
#define STEALTHCHOP_XY
#define Y2_HYBRID_THRESHOLD                      100
#define Y_CURRENT_HOME                           Y_CURRENT
#define TMC_DEBUG
#define X_MICROSTEPS                             256
#define V_HYBRID_THRESHOLD                       3
#define E4_HYBRID_THRESHOLD                      30
#define Z2_HYBRID_THRESHOLD                      3
#define K_CHAIN_POS                              -1
#define Y_HYBRID_THRESHOLD                       100
#define E7_HYBRID_THRESHOLD                      30
