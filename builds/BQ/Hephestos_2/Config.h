/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2026-11-26 at 07:41:13.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(@jbrazio)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_BQ_ZUM_MEGA_3D

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
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             true
#define INVERT_E0_DIR                            true

//
// Extruder
//
#define EXTRUDERS                                1
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75

//
// Geometry
//
#define X_BED_SIZE                               210
#define X_MIN_POS                                0
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               297
#define Y_MIN_POS                                0
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                210
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
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (4*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 1 }
#define Z_SAFE_HOMING_X_POINT                    X_CENTER
#define NO_MOTION_BEFORE_HOMING
#define HOME_AFTER_DEACTIVATE
#define Z_SAFE_HOMING_Y_POINT                    Y_CENTER
#define Z_SAFE_HOMING
#define HOME_Y_BEFORE_X
#define QUICK_HOME

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 160, 160, 8000, 218.77 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 3, 120 }
#define DEFAULT_MAX_ACCELERATION                 { 3000, 3000, 100, 3000 }
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.011
#define DEFAULT_ACCELERATION                     900
#define DEFAULT_TRAVEL_ACCELERATION              1500
#define DEFAULT_RETRACT_ACCELERATION             1300
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define JD_HANDLE_SMALL_SEGMENTS
#define DEFAULT_STEPPER_TIMEOUT_SEC              300
#define DISABLE_IDLE_E
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define EDITABLE_STEPS_PER_UNIT
#define MULTISTEPPING_LIMIT                      16

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define ENDSTOP_INTERRUPTS_FEATURE
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Probes
//
#define PROBING_MARGIN                           10
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_CLEARANCE_BETWEEN_PROBES               2
#define Z_CLEARANCE_DEPLOY_PROBE                 0
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define NOZZLE_TO_PROBE_OFFSET                   { 34, 15, 0 }
#define FIX_MOUNTED_PROBE
#define Z_PROBE_FEEDRATE_FAST                    (4*60)
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -2

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         230
#define HOTEND_OVERSHOOT                         15
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_CHECK_INTERVAL                       5000
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        40
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_KP                               23.75
#define DEFAULT_KI                               2.12
#define DEFAULT_KD                               66.63

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20

//
// Fans
//
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_SOFT_PWM
#define FAST_PWM_FAN_FREQUENCY                   ((F_CPU) / (2 * 255 * 1))
#define FAN_KICKSTART_TIME                       800
#define E2_AUTO_FAN_PIN                          6
#define E3_AUTO_FAN_PIN                          6
#define FAST_PWM_FAN

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define SEGMENT_LEVELED_MOVES
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define ENABLE_LEVELING_FADE_HEIGHT
#define EXTRAPOLATE_BEYOND_GRID
#define GRID_MAX_POINTS_X                        5
#define LEVELED_SEGMENT_LENGTH                   5.0
#define AUTO_BED_LEVELING_BILINEAR
#define MAX_SAVED_MESHES                         100
#define EVENT_GCODE_AFTER_G29                    "G27 P0"

//
// Media
//
#define SDSUPPORT

//
// LCD
//
#define SHOW_BOOTSCREEN
#define ENCODER_100X_STEPS_PER_SEC               50
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define BQ_LCD_SMART_CONTROLLER
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define SOUND_ON_DEFAULT
#define SHOW_CUSTOM_BOOTSCREEN
#define FINE_MANUAL_MOVE                         0.025
#define SD_PROCEDURE_DEPTH                       1
#define STATUS_MESSAGE_SCROLLING
#define MENU_HOLLOW_FRAME
#define FLOW_EDIT_MAX                            999
#define STATUS_CHAMBER_ANIM
#define FLOW_EDIT_MIN                            10
#define BOOT_MARLIN_LOGO_SMALL
#define STATUS_BED_ANIM
#define STATUS_HOTEND_INVERTED
#define SHOW_ELAPSED_TIME
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define LCD_DECIMAL_SMALL_XY
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SD_MAX_READ_ERRORS                       5
#define MANUAL_E_MOVES_RELATIVE
#define REINIT_NOISY_LCD
#define SD_FINISHED_STEPPERRELEASE               false
#define LCD_TIMEOUT_TO_STATUS                    60000
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define STATUS_HOTEND_ANIM
#define EVENT_GCODE_SD_ABORT                     "G27"
#define SDCARD_RATHERRECENTFIRST

//
// Interface
//
#define LCD_LANGUAGE                             en
#define ENCODER_PULSES_PER_STEP                  1
#define ENCODER_STEPS_PER_MENU_ITEM              5

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 10), (Y_MAX_POS - 10), 10 }
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
#define BAUDRATE                                 115200
#define BUFSIZE                                  4
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           32
#define CUSTOM_MACHINE_NAME                      "BQ Hephestos 2"
#define MACHINE_UUID                             "8d083632-40c5-4649-85b8-43d9ae6c5d55"
#define NO_TIMEOUTS                              1000
#define ADVANCED_OK

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               5
#define HOST_KEEPALIVE_FEATURE
#define PRINTJOB_TIMER_AUTOSTART
#define HOST_PROMPT_SUPPORT
#define HOST_ACTION_COMMANDS
#define HOST_STATUS_NOTIFICATIONS

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

//
// Stats
//
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define PRINTCOUNTER
#define SERVICE_WARNING_BUZZES                   3

//
// Temperature Presets
//
#define PREHEAT_1_TEMP_HOTEND                    180
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_TEMP_HOTEND                    210

//
// Temperature Sensors
//
#define TEMP_SENSOR_0                            70
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1

//
// Baby-Stepping
//
#define BABYSTEP_MULTIPLICATOR_Z                 2
#define BABYSTEPPING
#define BABYSTEP_MULTIPLICATOR_XY                2

//
// Stepper Motor Current
//
#define DIGIPOT_MOTOR_CURRENT                    { 170, 170, 180, 190, 180 }
