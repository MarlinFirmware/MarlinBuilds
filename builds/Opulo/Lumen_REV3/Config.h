/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-11-26 at 20:43:08.
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
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                0

//
// Fans
//
#define CHAMBER_AUTO_FAN_PIN                     -1
#define COOLER_AUTO_FAN_PIN                      -1
#define FAN_SOFT_PWM

//
// Stepper Drivers
//
#define AXIS4_NAME                               'A'
#define AXIS4_ROTATES
#define AXIS5_NAME                               'B'
#define AXIS5_ROTATES
#define AXIS6_NAME                               'C'
#define AXIS6_ROTATES
#define E_ENABLE_ON                              LOW
#define I_DRIVER_TYPE                            TMC2209
#define I_ENABLE_ON                              LOW
#define J_DRIVER_TYPE                            TMC2209
#define J_ENABLE_ON                              LOW
#define K_DRIVER_TYPE                            TMC2209
#define K_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            TMC2209
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            TMC2209
#define Y_ENABLE_ON                              LOW
#define Z_DRIVER_TYPE                            TMC2209
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
#define MAX_SOFTWARE_ENDSTOP_X
#define MAX_SOFTWARE_ENDSTOP_Y
#define MAX_SOFTWARE_ENDSTOP_Z
#define MIN_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_I
#define MIN_SOFTWARE_ENDSTOP_J
#define MIN_SOFTWARE_ENDSTOP_K
#define MIN_SOFTWARE_ENDSTOP_X
#define MIN_SOFTWARE_ENDSTOP_Y
#define MIN_SOFTWARE_ENDSTOP_Z
#define X_BED_SIZE                               435
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               485
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                59
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4, 4, 4, 2 }
#define HOMING_BUMP_MM                           { 5, 5, 2, 2, 2, 5 }
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (50*60), (50*60), (50*60), (50*60) }
#define I_HOME_DIR                               0
#define J_HOME_DIR                               0
#define K_HOME_DIR                               0
#define QUICK_HOME
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_AFTER_HOMING                           31.5
#define Z_HOME_DIR                               -1

//
// Endstops
//
#define ENDSTOPPULLUPS
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

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
// Lights
//
#define NEOPIXEL2_BRIGHTNESS                     255
#define NEOPIXEL2_PIXELS                         8
#define NEOPIXEL2_SEPARATE
#define NEOPIXEL2_STARTUP_TEST
#define NEOPIXEL2_TYPE                           NEOPIXEL_TYPE
#define NEOPIXEL_BRIGHTNESS                      255
#define NEOPIXEL_IS_SEQUENTIAL
#define NEOPIXEL_LED
#define NEOPIXEL_M150_DEFAULT                    -1
#define NEOPIXEL_PIXELS                          8
#define NEOPIXEL_STARTUP_TEST
#define NEOPIXEL_TYPE                            NEO_GRB

//
// Temperature
//
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define BED_OVERSHOOT                            10
#define CHAMBER_CHECK_INTERVAL                   5000
#define COOLER_OVERSHOOT                         2
#define DUMMY_THERMISTOR_998_VALUE               25
#define DUMMY_THERMISTOR_999_VALUE               100
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       70
#define PREHEAT_1_TEMP_CHAMBER                   35
#define PREHEAT_1_TEMP_HOTEND                    180
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       110
#define PREHEAT_2_TEMP_CHAMBER                   35
#define PREHEAT_2_TEMP_HOTEND                    240

//
// Safety
//
#define EXTRUDE_MAXLENGTH                        200
#define EXTRUDE_MINTEMP                          170
#define USE_WATCHDOG

//
// Serial
//
#define BAUDRATE                                 250000
#define BUFSIZE                                  4
#define M485_PROTOCOL                            1
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define RS485_BUS_BUFFER_SIZE                    128
#define RS485_SERIAL_PORT                        1
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              -1
#define TX_BUFFER_SIZE                           0

//
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false, false, false }
#define DEFAULT_ACCELERATION                     1000
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 1280, 1280, 40, 4.44, 4.44, 40 }
#define DEFAULT_MAX_ACCELERATION                 { 1000, 1000, 2000, 3000, 3000, 3000 }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 250, 50000, 50000, 5000 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              3000
#define DISABLE_IDLE_I
#define DISABLE_IDLE_J
#define DISABLE_IDLE_K
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_I_DIR                             true
#define INVERT_J_DIR                             true
#define INVERT_K_DIR                             false
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             false
#define JD_HANDLE_SMALL_SEGMENTS
#define JUNCTION_DEVIATION_MM                    0.013
#define MIN_STEPS_PER_SEGMENT                    1
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define STEP_STATE_E                             HIGH
#define STEP_STATE_I                             HIGH
#define STEP_STATE_J                             HIGH
#define STEP_STATE_K                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     10

//
// Hotend Temp
//
#define DEFAULT_Kd                               114.00
#define DEFAULT_Ki                               1.08
#define DEFAULT_Kp                               22.20
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT

//
// TMC_Smart
//
#define CHOPPER_TIMING                           CHOPPER_DEFAULT_12V
#define E0_HYBRID_THRESHOLD                      30
#define E1_HYBRID_THRESHOLD                      30
#define E2_HYBRID_THRESHOLD                      30
#define E3_HYBRID_THRESHOLD                      30
#define E4_HYBRID_THRESHOLD                      30
#define E5_HYBRID_THRESHOLD                      30
#define E6_HYBRID_THRESHOLD                      30
#define E7_HYBRID_THRESHOLD                      30
#define EDGE_STEPPING
#define HOLD_MULTIPLIER                          0.5
#define INTERPOLATE                              true
#define I_CHAIN_POS                              -1
#define I_CURRENT                                700
#define I_CURRENT_HOME                           I_CURRENT
#define I_HYBRID_THRESHOLD                       3
#define I_MICROSTEPS                             8
#define I_RSENSE                                 0.11
#define J_CHAIN_POS                              -1
#define J_CURRENT                                700
#define J_CURRENT_HOME                           J_CURRENT
#define J_HYBRID_THRESHOLD                       3
#define J_MICROSTEPS                             8
#define J_RSENSE                                 0.11
#define K_CHAIN_POS                              -1
#define K_CURRENT                                800
#define K_CURRENT_HOME                           K_CURRENT
#define K_HYBRID_THRESHOLD                       3
#define K_MICROSTEPS                             16
#define K_RSENSE                                 0.11
#define STEALTHCHOP_I
#define STEALTHCHOP_J
#define STEALTHCHOP_K
#define STEALTHCHOP_XY
#define STEALTHCHOP_Z
#define TMC_DEBUG
#define TMC_USE_SW_SPI
#define U_HYBRID_THRESHOLD                       3
#define V_HYBRID_THRESHOLD                       3
#define W_HYBRID_THRESHOLD                       3
#define X2_HYBRID_THRESHOLD                      100
#define X_CHAIN_POS                              -1
#define X_CURRENT                                800
#define X_CURRENT_HOME                           X_CURRENT
#define X_HYBRID_THRESHOLD                       100
#define X_MICROSTEPS                             256
#define X_RSENSE                                 0.11
#define Y2_HYBRID_THRESHOLD                      100
#define Y_CHAIN_POS                              -1
#define Y_CURRENT                                800
#define Y_CURRENT_HOME                           Y_CURRENT
#define Y_HYBRID_THRESHOLD                       100
#define Y_MICROSTEPS                             256
#define Y_RSENSE                                 0.11
#define Z2_HYBRID_THRESHOLD                      3
#define Z3_HYBRID_THRESHOLD                      3
#define Z4_HYBRID_THRESHOLD                      3
#define Z_CHAIN_POS                              -1
#define Z_CURRENT                                800
#define Z_CURRENT_HOME                           Z_CURRENT
#define Z_HYBRID_THRESHOLD                       3
#define Z_MICROSTEPS                             8
#define Z_RSENSE                                 0.11

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
#define GCODE_QUOTED_STRINGS

//
// I2Cbus
//
#define EXPERIMENTAL_I2CBUS
#define I2C_SLAVE_ADDRESS                        0
