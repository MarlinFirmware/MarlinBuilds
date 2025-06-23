/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 12:07:10.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(AnimaVitis, ORTUR 4.3 V1)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_ORTUR_4

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
#define Z2_DRIVER_TYPE                           A4988

//
// Extruder
//
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            false
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define LIN_ADVANCE
#define ADVANCE_K                                0.0

//
// Geometry
//
#define X_BED_SIZE                               253
#define X_MIN_POS                                -10.5
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               305
#define Y_MIN_POS                                -9
#define Y_MAX_POS                                Y_BED_SIZE
#define Z_MIN_POS                                0
#define Z_MAX_POS                                293
#define MIN_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOPS
#define MIN_SOFTWARE_ENDSTOP_X
#define MIN_SOFTWARE_ENDSTOP_Y
#define MIN_SOFTWARE_ENDSTOP_Z
#define MAX_SOFTWARE_ENDSTOP_X
#define MAX_SOFTWARE_ENDSTOP_Y
#define MAX_SOFTWARE_ENDSTOP_Z
#define SOFT_ENDSTOPS_MENU_ITEM

//
// Homing
//
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1
#define HOMING_FEEDRATE_MM_M                     { (50*60), (50*60), (8*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define Z_AFTER_HOMING                           20
#define Z_CLEARANCE_FOR_HOMING                   20

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 400, 97 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 500, 500, 8, 100 }
#define DEFAULT_MAX_ACCELERATION                 { 9000, 9000, 500, 10000 }
#define INVERT_X_DIR                             false
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             true
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define JUNCTION_DEVIATION_MM                    0.04
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
#define DISABLE_IDLE_E
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define EDITABLE_STEPS_PER_UNIT
#define MAXIMUM_STEPPER_RATE                     500000
#define MINIMUM_STEPPER_PULSE_NS                 1000
#define MINIMUM_STEPPER_PRE_DIR_DELAY            200
#define MINIMUM_STEPPER_POST_DIR_DELAY           200
#define MULTISTEPPING_LIMIT                      16
#define ADAPTIVE_STEP_SMOOTHING

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  LOW
#define Y_MIN_ENDSTOP_HIT_STATE                  LOW
#define Z_MIN_ENDSTOP_HIT_STATE                  LOW
#define ENDSTOPPULLUPS
#define ENDSTOP_NOISE_THRESHOLD                  2
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            LOW

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_STATE                         LOW
#define FIL_RUNOUT_ENABLED_DEFAULT               true
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FIL_RUNOUT_PULLUP
#define NUM_RUNOUT_SENSORS                       1

//
// Probes
//
#define PROBING_MARGIN                           20
#define XY_PROBE_FEEDRATE                        (133*60)
#define Z_CLEARANCE_BETWEEN_PROBES               10
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_CLEARANCE_MULTI_PROBE                  3
#define MULTIPLE_PROBING                         2
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -6
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 8)
#define FIX_MOUNTED_PROBE
#define NOZZLE_TO_PROBE_OFFSET                   { 0, 14, -0.65 }
#define Z_PROBE_FEEDRATE_FAST                    (8*4*60)

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            5
#define THERMAL_PROTECTION_PERIOD                60
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         275
#define PREHEAT_1_TEMP_HOTEND                    190
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  15
#define TEMP_BED_WINDOW                          5
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_WINDOW                              1
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT                       0.98
#define TEMP_SENSOR_BED                          1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    90
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        90
#define PREHEAT_2_FAN_SPEED                      0
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              115
#define PREHEAT_2_LABEL                          "ABS"
#define PREHEAT_2_TEMP_BED                       90
#define PREHEAT_2_TEMP_HOTEND                    240
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_FACTOR                          0.1f
#define THERMAL_PROTECTION_BED_PERIOD            90

//
// Hotend Temp
//
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define DEFAULT_Kd                               73.75
#define DEFAULT_Ki                               1.68
#define DEFAULT_Kp                               22.23

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20
#define PID_AUTOTUNE_MENU
#define PID_EDIT_MENU

//
// Bed Temp
//
#define MAX_BED_POWER                            255
#define DEFAULT_bedKi                            30.19
#define PIDTEMPBED
#define DEFAULT_bedKd                            800.81
#define DEFAULT_bedKp                            190.43

//
// Fans
//
#define E0_AUTO_FAN_PIN                          -1
#define FAN_SOFT_PWM

//
// Advanced Pause
//
#define PAUSE_PARK_RETRACT_LENGTH                2
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         400
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define HOME_BEFORE_FILAMENT_CHANGE
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         0
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       8
#define FILAMENT_CHANGE_UNLOAD_LENGTH            600
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          10
#define ADVANCED_PAUSE_PURGE_LENGTH              20
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_UNLOAD_PURGE_RETRACT            13
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          10
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define GRID_MAX_POINTS_X                        5
#define XY_SIDE_AD                               99.2
#define XY_DIAG_AC                               140.4
#define XY_DIAG_BD                               140
#define AUTO_BED_LEVELING_BILINEAR
#define RESTORE_LEVELING_AFTER_G28
#define BED_TRAMMING_Z_HOP                       6.0
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define BED_TRAMMING_HEIGHT                      0.0
#define EVENT_GCODE_AFTER_G29                    "G1 Z15 F12000\nG1 X15 Y15\nG1 Z20\nM420 S1\nM420 Z3\nM500"
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define BED_TRAMMING_INSET_LFRB                  { 40, 40, 40, 40 }
#define SKEW_CORRECTION
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF, RB, LB }
#define LCD_BED_TRAMMING
#define RESTORE_LEVELING_AFTER_G34
#define Z_STEPPER_ALIGN_AMP                      1.0
#define HOME_AFTER_G34
#define Z_STEPPER_ALIGN_ITERATIONS               3
#define Z_STEPPERS_ORIENTATION                   0
#define Z_STEPPER_ALIGN_ACC                      0.02
#define G34_MAX_GRADE                            5
#define Z_STEPPER_AUTO_ALIGN

//
// Media
//
#define SDSUPPORT

//
// LCD
//
#define SHOW_BOOTSCREEN
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define PLR_ENABLED_DEFAULT                      false
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define STATUS_HOTEND_ANIM
#define ULTIPANEL_FEEDMULTIPLY
#define MENU_HOLLOW_FRAME
#define BOOT_MARLIN_LOGO_ANIMATED
#define MARLIN_SNAKE
#define BOOT_MARLIN_LOGO_SMALL
#define BABYSTEPPING
#define POWER_LOSS_STATE                         LOW
#define POWER_LOSS_RECOVERY
#define DOGM_SPI_DELAY_US                        9
#define MANUAL_E_MOVES_RELATIVE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       2000
#define SD_MENU_CONFIRM_START
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define BABYSTEP_MULTIPLICATOR_Z                 2
#define MARLIN_INVADERS
#define SHOW_ELAPSED_TIME
#define POWER_LOSS_PIN                           64
#define SOUND_ON_DEFAULT
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_REMAINING_TIME
#define FLOW_EDIT_MAX                            999
#define BABYSTEP_ZPROBE_OFFSET
#define FLOW_EDIT_MIN                            10
#define STATUS_BED_ANIM
#define STATUS_ALT_BED_BITMAP
#define STATUS_HOTEND_INVERTED
#define STATUS_COMBINE_HEATERS
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                2
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define SET_PROGRESS_MANUALLY
#define MARLIN_BRICKOUT
#define XYZ_HOLLOW_FRAME
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define LCD_INFO_MENU
#define SET_PROGRESS_PERCENT
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define POWER_LOSS_MIN_Z_CHANGE                  0.05
#define STATUS_ALT_FAN_BITMAP

//
// Interface
//
#define LCD_LANGUAGE                             en
#define LCD_FEEDBACK_FREQUENCY_HZ                5000
#define REVERSE_ENCODER_DIRECTION
#define SPEAKER
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS       2

//
// Custom Main Menu
//
#define MAIN_MENU_ITEM_3_DESC                    "Net_buse NORMAL"
#define CUSTOM_MENU_MAIN
#define CUSTOM_MENU_MAIN_SCRIPT_DONE             "M117 User Script Done"
#define MAIN_MENU_ITEM_2_DESC                    "Net_buse plus "
#define MAIN_MENU_ITEM_2_GCODE                   "M104 S210 \nM109 S210 \nG28 \nG12 P1"
#define CUSTOM_MENU_MAIN_SCRIPT_RETURN
#define MAIN_MENU_ITEM_3_GCODE                   "G28 \nG12"
#define MAIN_MENU_ITEM_1_GCODE                   "M140 S60\nM190 S60\nM117 Position initial\nG28\nM117 Nivelage du plateau\nG29\nM420 S1\nM420 Z5\nM500"
#define CUSTOM_MENU_MAIN_SCRIPT_AUDIBLE_FEEDBACK
#define MAIN_MENU_ITEM_1_DESC                    "T°_lit/pos_init/Niv_plat"
#define CUSTOM_MENU_MAIN_ONLY_IDLE

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { (X_MIN_POS), (Y_MAX_POS), 20 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5

//
// Nozzle Clean
//
#define NOZZLE_CLEAN_CIRCLE_FN                   10
#define NOZZLE_CLEAN_STROKES                     12
#define NOZZLE_CLEAN_FEATURE
#define NOZZLE_CLEAN_PATTERN_ZIGZAG
#define NOZZLE_CLEAN_MIN_TEMP                    170
#define NOZZLE_CLEAN_END_POINT                   { { 260, 55, (Z_MIN_POS + 3) } }
#define NOZZLE_CLEAN_PATTERN_CIRCLE
#define NOZZLE_CLEAN_CIRCLE_RADIUS               6.5
#define NOZZLE_CLEAN_GOBACK
#define NOZZLE_CLEAN_PATTERN_LINE
#define NOZZLE_CLEAN_START_POINT                 { { 245, 0, (Z_MIN_POS + 3) } }
#define NOZZLE_CLEAN_DEFAULT_PATTERN             0
#define NOZZLE_CLEAN_CIRCLE_MIDDLE               NOZZLE_CLEAN_START_POINT
#define NOZZLE_CLEAN_TRIANGLES                   6

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define RETRACT_RECOVER_FEEDRATE_SWAP            8
#define RETRACT_RECOVER_FEEDRATE                 45
#define RETRACT_RECOVER_LENGTH                   -0.1
#define RETRACT_ZRAISE                           0.1
#define FWRETRACT_AUTORETRACT
#define RETRACT_FEEDRATE                         45
#define RETRACT_RECOVER_LENGTH_SWAP              0
#define RETRACT_LENGTH                           4
#define MAX_AUTORETRACT                          10.0
#define FWRETRACT
#define RETRACT_LENGTH_SWAP                      13
#define DEBUG_FLAGS_GCODE
#define MIN_AUTORETRACT                          0.1

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
#define CUSTOM_MACHINE_NAME                      "ORTUR 4 V1"

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
#define EXTRUDE_MAXLENGTH                        700
#define EXTRUDE_MINTEMP                          180
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED

//
// Stats
//
#define PRINTCOUNTER
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define SERVICE_WARNING_BUZZES                   3

//
// Extras
//
#define ARC_SUPPORT
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
#define CANCEL_OBJECTS
