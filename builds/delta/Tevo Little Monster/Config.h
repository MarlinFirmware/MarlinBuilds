/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 11:36:16.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(lemmingDev, community)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_MKS_SBASE

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Stepper Drivers
//
#define X_DRIVER_TYPE                            DRV8825
#define Y_DRIVER_TYPE                            DRV8825
#define Z_DRIVER_TYPE                            DRV8825
#define E0_DRIVER_TYPE                           DRV8825
#define X_ENABLE_ON                              LOW
#define Y_ENABLE_ON                              LOW
#define Z_ENABLE_ON                              LOW
#define E_ENABLE_ON                              LOW

//
// Extruder
//
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            true
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define LIN_ADVANCE
#define ADVANCE_K                                0.0

//
// Geometry
//
#define X_BED_SIZE                               ((PRINTABLE_RADIUS) * 2)
#define X_MIN_POS                                -(PRINTABLE_RADIUS)
#define X_MAX_POS                                PRINTABLE_RADIUS
#define Y_BED_SIZE                               ((PRINTABLE_RADIUS) * 2)
#define Y_MIN_POS                                -(PRINTABLE_RADIUS)
#define Y_MAX_POS                                PRINTABLE_RADIUS
#define Z_MIN_POS                                0
#define Z_MAX_POS                                MANUAL_Z_HOME_POS
#define MIN_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_Z
#define MAX_SOFTWARE_ENDSTOP_Z

//
// Homing
//
#define X_HOME_DIR                               1
#define Y_HOME_DIR                               1
#define Z_HOME_DIR                               1
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (50*60) }
#define HOMING_BUMP_DIVISOR                      { 10, 10, 10 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 5 }
#define MANUAL_Z_HOME_POS                        DELTA_HEIGHT
#define BED_CENTER_AT_0_0

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 159.53, 159.53, 159.53, 800 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 500, 25 }
#define DEFAULT_MAX_ACCELERATION                 { 9000, 9000, 9000, 10000 }
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
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
#define MIN_STEPS_PER_SEGMENT                    1
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_EJERK                            5.0
#define DEFAULT_STEPPER_TIMEOUT_SEC              60
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define DISABLE_IDLE_E
#define DEFAULT_ZJERK                            DEFAULT_XJERK
#define XYZ_BELT_PITCH                           2
#define XYZ_FULL_STEPS_PER_ROTATION              200
#define CLASSIC_JERK
#define EDITABLE_STEPS_PER_UNIT
#define XYZ_PULLEY_TEETH                         20
#define DEFAULT_YJERK                            DEFAULT_XJERK
#define XYZ_MICROSTEPS                           32
#define S_CURVE_ACCELERATION
#define DEFAULT_XJERK                            10.0
#define DEFAULT_XYZ_STEPS_PER_UNIT               ((XYZ_FULL_STEPS_PER_ROTATION) * (XYZ_MICROSTEPS) / double(XYZ_BELT_PITCH) / double(XYZ_PULLEY_TEETH))
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define Y_MAX_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUP_ZMIN_PROBE
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH
#define ENDSTOPPULLDOWN_XMAX
#define X_MAX_ENDSTOP_HIT_STATE                  HIGH
#define Z_MAX_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLDOWN_YMAX
#define ENDSTOPPULLDOWN_ZMAX

//
// Probes
//
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (66*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 15
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -2
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define BLTOUCH
#define NOZZLE_TO_PROBE_OFFSET                   { 20, -10, -1.05 }
#define Z_PROBE_FEEDRATE_FAST                    (50*60)
#define Z_MIN_PROBE_PIN                          P1_28

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define PREHEAT_1_TEMP_HOTEND                    180
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      255
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       70
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  0
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define TEMP_SENSOR_BED                          1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define PREHEAT_3_TEMP_CHAMBER                   35
#define PREHEAT_3_FAN_SPEED                      255
#define PREHEAT_3_TEMP_BED                       85
#define PREHEAT_3_LABEL                          "PETG"
#define PREHEAT_3_TEMP_HOTEND                    230
#define PREHEAT_2_FAN_SPEED                      255
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              150
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       100
#define PREHEAT_2_TEMP_HOTEND                    240
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_FACTOR                          0.1f
#define THERMAL_PROTECTION_BED_PERIOD            20

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_Kp                               24.99
#define DEFAULT_Kd                               52.81
#define DEFAULT_Ki                               2.96

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20
#define PID_AUTOTUNE_MENU

//
// Bed Temp
//
#define MAX_BED_POWER                            255
#define PIDTEMPBED
#define DEFAULT_bedKd                            354.49
#define DEFAULT_bedKi                            6.86
#define DEFAULT_bedKp                            60.40

//
// Fans
//
#define E0_AUTO_FAN_PIN                          P2_06
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50

//
// Calibrate
//
#define GRID_MAX_POINTS_X                        9
#define AUTO_BED_LEVELING_BILINEAR
#define SEGMENT_LEVELED_MOVES
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0

//
// LCD
//
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define BABYSTEP_MILLIMETER_UNITS
#define BABYSTEPPING
#define BABYSTEP_MULTIPLICATOR_Z                 0.01
#define BABYSTEP_MULTIPLICATOR_XY                0.1
#define BABYSTEP_ALWAYS_AVAILABLE
#define DOUBLECLICK_FOR_Z_BABYSTEPPING

//
// Delta
//
#define DELTA_DIAGONAL_ROD                       397.19
#define DELTA
#define DELTA_TOWER_ANGLE_TRIM                   { -0.12, 0.11, 0.01 }
#define DELTA_CALIBRATION_DEFAULT_POINTS         4
#define DELTA_AUTO_CALIBRATION
#define DELTA_HEIGHT                             523.81
#define DELTA_RADIUS                             157.25
#define DELTA_ENDSTOP_ADJ                        { 0.0, -2.54, -0.53 }
#define PROBE_MANUALLY_STEP                      0.05

//
// Polar
//
#define DEFAULT_SEGMENTS_PER_SECOND              200
#define PRINTABLE_RADIUS                         165.0

//
// Nozzle Park
//
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 10), 0, 20 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   NOZZLE_PARK_XY_FEEDRATE

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
#define SERIAL_PORT_2                            -1
#define BAUDRATE_2                               250000
#define CUSTOM_MACHINE_NAME                      "TEVO Little Monster"

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
#define CAPABILITIES_REPORT

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
// Servos
//
#define SERVO_DELAY                              { 50 }

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25

//
// Stepper Motor Current
//
#define DIGIPOT_MCP4451
#define DIGIPOT_I2C_ADDRESS_A                    0x2C
#define DIGIPOT_I2C_ADDRESS_B                    0x2D
#define DIGIPOT_I2C_MOTOR_CURRENTS               { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f }
#define DIGIPOT_I2C_NUM_CHANNELS                 5
