/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-12-16 at 06:50:39.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(thisiskeithb, Artillery 3D)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_ARTILLERY_RUBY

//
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            false

//
// Bed Temp
//
#define DEFAULT_bedKd                            279.43
#define DEFAULT_bedKi                            9.39
#define DEFAULT_bedKp                            62.75
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define CONTROLLERFAN_IDLE_TIME                  60
#define CONTROLLERFAN_SPEED_ACTIVE               255
#define CONTROLLERFAN_SPEED_IDLE                 0
#define CONTROLLERFAN_SPEED_MIN                  0
#define CONTROLLER_FAN_BED_HEATING
#define CONTROLLER_FAN_PIN                       FAN2_PIN
#define E0_AUTO_FAN_PIN                          FAN1_PIN
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_KICKSTART_TIME                       100
#define FAN_MIN_PWM                              50
#define FAN_SOFT_PWM
#define SOFT_PWM_DITHER
#define SOFT_PWM_SCALE                           2
#define USE_CONTROLLER_FAN

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           TMC2100
#define E_ENABLE_ON                              LOW
#define X_DRIVER_TYPE                            TMC2100
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            TMC2100
#define Y_ENABLE_ON                              LOW
#define Z2_DRIVER_TYPE                           TMC2100
#define Z_DRIVER_TYPE                            TMC2100
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
#define X_MIN_POS                                -2
#define Y_BED_SIZE                               300
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                -5
#define Z_MAX_POS                                400
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define HOMING_FEEDRATE_MM_M                     { (100*60), (100*60), (25*60) }
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER

//
// Endstops
//
#define ENDSTOPPULLUPS
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Probes
//
#define BLTOUCH
#define NOZZLE_TO_PROBE_OFFSET                   { 27.25, -12.8, -2 }
#define PROBE_OFFSET_ZMAX                        2.5
#define PROBE_OFFSET_ZMIN                        -2.5
#define PROBING_MARGIN                           10
#define USE_PROBE_FOR_Z_HOMING
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_MIN_PROBE_PIN                          PC2
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_FEEDRATE_FAST                    (10*60)
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_PROBE_LOW_POINT                        -2

//
// LCD
//
#define BABYSTEPPING
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define BABYSTEP_ZPROBE_OFFSET
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define PE_LEDS_COMPLETED_TIME                   (30*60)
#define SDCARD_RATHERRECENTFIRST
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_PROCEDURE_DEPTH                       1

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
#define HEATER_0_MAXTEMP                         275
#define HEATER_0_MINTEMP                         5
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       70
#define PREHEAT_1_TEMP_HOTEND                    200
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "PETG"
#define PREHEAT_2_TEMP_BED                       80
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
// Calibrate
//
#define AUTO_BED_LEVELING_BILINEAR
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define ENABLE_LEVELING_FADE_HEIGHT
#define G34_MAX_GRADE                            5
#define GRID_MAX_POINTS_X                        5
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define HOME_AFTER_G34
#define LEVELED_SEGMENT_LENGTH                   5.0
#define RESTORE_LEVELING_AFTER_G34
#define SEGMENT_LEVELED_MOVES
#define Z_STEPPER_ALIGN_ACC                      0.02
#define Z_STEPPER_ALIGN_AMP                      1.0
#define Z_STEPPER_ALIGN_ITERATIONS               5
#define Z_STEPPER_AUTO_ALIGN

//
// Servos
//
#define NUM_SERVOS                               1
#define SERVO_DELAY                              { 50 }

//
// Motion
//
#define ADAPTIVE_STEP_SMOOTHING
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_ACCELERATION                     800
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 445 }
#define DEFAULT_MAX_ACCELERATION                 { 2000, 2000, 100, 10000 }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 50, 60 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             10000
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              2000
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define JD_HANDLE_SMALL_SEGMENTS
#define JUNCTION_DEVIATION_MM                    0.032
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
// EEPROM
//
#define EEPROM_AUTO_INIT
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Serial
//
#define BAUDRATE                                 250000
#define BAUDRATE_2                               115200
#define BUFSIZE                                  4
#define CUSTOM_MACHINE_NAME                      "Sidewinder X2"
#define EMERGENCY_PARSER
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define RX_BUFFER_SIZE                           128
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              -1
#define SERIAL_PORT_2                            1
#define TX_BUFFER_SIZE                           32

//
// Lights
//
#define NEOPIXEL_BRIGHTNESS                      127
#define NEOPIXEL_IS_SEQUENTIAL
#define NEOPIXEL_LED
#define NEOPIXEL_PIN                             PB7
#define NEOPIXEL_PIXELS                          1
#define NEOPIXEL_TYPE                            NEO_GRB
#define PRINTER_EVENT_LEDS

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     25

//
// Hotend Temp
//
#define DEFAULT_Kd                               46.57
#define DEFAULT_Ki                               1.14
#define DEFAULT_Kp                               14.58
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Media
//
#define SDSUPPORT
#define SD_CHECK_AND_RETRY

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
