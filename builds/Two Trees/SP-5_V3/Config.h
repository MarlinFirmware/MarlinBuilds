/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 12:38:10.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(anonymous)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_MKS_ROBIN_NANO_V3_1

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_AUTO_INIT
#define EEPROM_INIT_NOW
#define EEPROM_SETTINGS

//
// Stepper Drivers
//
#define X_DRIVER_TYPE                            TMC2209
#define Y_DRIVER_TYPE                            TMC2209
#define Z_DRIVER_TYPE                            TMC2209
#define E0_DRIVER_TYPE                           TMC2209
#define X_ENABLE_ON                              LOW
#define Y_ENABLE_ON                              LOW
#define Z_ENABLE_ON                              LOW
#define E_ENABLE_ON                              LOW

//
// Extruder
//
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            false
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define LIN_ADVANCE
#define ADVANCE_K                                0.12

//
// Geometry
//
#define X_BED_SIZE                               297
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               297
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                300
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
#define Y_HOME_DIR                               1
#define Z_HOME_DIR                               -1
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (4*60) }
#define HOMING_BUMP_DIVISOR                      { 1, 1, 2 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define QUICK_HOME

//
// Kinematics
//
#define COREXY

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 562 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 10, 100 }
#define DEFAULT_MAX_ACCELERATION                 { 6000, 6000, 200, 20000 }
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             true
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.013
#define DEFAULT_ACCELERATION                     6000
#define DEFAULT_TRAVEL_ACCELERATION              6000
#define DEFAULT_RETRACT_ACCELERATION             6000
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
#define EDITABLE_STEPS_PER_UNIT
#define MULTISTEPPING_LIMIT                      16

//
// Motion Control
//
#define SHAPING_ZETA_X                           0.15
#define SHAPING_ZETA_Y                           0.15
#define INPUT_SHAPING_X
#define INPUT_SHAPING_Y
#define SHAPING_FREQ_X                           55
#define SHAPING_FREQ_Y                           55
#define SHAPING_MENU

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define ENDSTOPPULLUPS
#define Y_MAX_ENDSTOP_HIT_STATE                  LOW

//
// Filament Runout Sensors
//
#define FIL_RUNOUT_STATE                         LOW

//
// Probes
//
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_CLEARANCE_BETWEEN_PROBES               5
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define PROBE_OFFSET_ZMAX                        20
#define PROBE_OFFSET_ZMIN                        -20

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            6
#define THERMAL_PROTECTION_PERIOD                60
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define PREHEAT_1_TEMP_HOTEND                    180
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       70
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define TEMP_SENSOR_BED                          1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define PREHEAT_2_FAN_SPEED                      0
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              110
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       90
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
#define DEFAULT_Kp                               20.36
#define DEFAULT_Kd                               60.26
#define DEFAULT_Ki                               1.72

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20

//
// Bed Temp
//
#define MAX_BED_POWER                            255

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1
#define FAN_SOFT_PWM

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             5.0
#define MESH_INSET                               10
#define GRID_MAX_POINTS_X                        2
#define MESH_BED_LEVELING
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define MANUAL_PROBE_START_Z                     0.2

//
// Media
//
#define SD_CHECK_AND_RETRY
#define SDSUPPORT

//
// LCD
//
#define SHOW_BOOTSCREEN
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define TOUCH_SCREEN
#define BUTTON_DELAY_EDIT                        50
#define COMPACT_MARLIN_BOOT_LOGO
#define TFT_COLOR_UI
#define TOUCH_CALIBRATION_AUTO_SAVE
#define TOUCH_SCREEN_CALIBRATION
#define TFT_THEME                                BLACK_MARLIN
#define BUTTON_DELAY_MENU                        250
#define TFT_FONT                                 NOTOSANS
#define MKS_TS35_V2_0
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define BABYSTEP_XY
#define ULTIPANEL_FEEDMULTIPLY
#define BABYSTEP_WITHOUT_HOMING
#define BOOT_MARLIN_LOGO_SMALL
#define BABYSTEP_MILLIMETER_UNITS
#define BABYSTEPPING
#define MANUAL_E_MOVES_RELATIVE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       4000
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define BABYSTEP_MULTIPLICATOR_Z                 0.01
#define SHOW_ELAPSED_TIME
#define SOUND_ON_DEFAULT
#define SD_PROCEDURE_DEPTH                       1
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                0.01
#define BABYSTEP_ALWAYS_AVAILABLE
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"

//
// Interface
//
#define LCD_LANGUAGE                             en

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
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
#define HOLD_MULTIPLIER                          0.5
#define K_HYBRID_THRESHOLD                       3
#define X_CHAIN_POS                              -1
#define Y_RSENSE                                 0.11
#define U_HYBRID_THRESHOLD                       3
#define E3_HYBRID_THRESHOLD                      30
#define Z_MICROSTEPS                             16
#define STEALTHCHOP_E
#define STEALTHCHOP_Z
#define Z_CURRENT_HOME                           Z_CURRENT
#define X_RSENSE                                 0.11
#define Y_CHAIN_POS                              -1
#define X_HYBRID_THRESHOLD                       100
#define E6_HYBRID_THRESHOLD                      30
#define X_CURRENT_HOME                           X_CURRENT
#define Z4_HYBRID_THRESHOLD                      3
#define Z_CHAIN_POS                              -1
#define J_HYBRID_THRESHOLD                       3
#define E0_RSENSE                                0.11
#define Z_CURRENT                                800
#define E2_HYBRID_THRESHOLD                      30
#define Y_MICROSTEPS                             16
#define W_HYBRID_THRESHOLD                       3
#define E5_HYBRID_THRESHOLD                      30
#define E0_CHAIN_POS                             -1
#define Z3_HYBRID_THRESHOLD                      3
#define X2_HYBRID_THRESHOLD                      100
#define Z_HYBRID_THRESHOLD                       3
#define X_CURRENT                                800
#define I_HYBRID_THRESHOLD                       3
#define EDGE_STEPPING
#define Y_CURRENT                                1100
#define E1_HYBRID_THRESHOLD                      30
#define STEALTHCHOP_XY
#define Y2_HYBRID_THRESHOLD                      100
#define E0_MICROSTEPS                            16
#define Y_CURRENT_HOME                           Y_CURRENT
#define X_MICROSTEPS                             16
#define V_HYBRID_THRESHOLD                       3
#define E4_HYBRID_THRESHOLD                      30
#define Z2_HYBRID_THRESHOLD                      3
#define E0_CURRENT                               800
#define Y_HYBRID_THRESHOLD                       100
#define E7_HYBRID_THRESHOLD                      30
