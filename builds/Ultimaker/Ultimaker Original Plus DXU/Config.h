/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-12-16 at 09:38:24.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(Anson Liu, UMO+ DXU)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_ULTIMAIN_2

//
// Extruder
//
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                2
#define HOTEND_OFFSET_X                          { 0.0, 19.00 }
#define HOTEND_OFFSET_Z                          { 0.0, -2 }
#define INVERT_E0_DIR                            true
#define INVERT_E1_DIR                            true
#define MECHANICAL_SWITCHING_NOZZLE

//
// Bed Temp
//
#define DEFAULT_bedKd                            165.29
#define DEFAULT_bedKi                            23.46
#define DEFAULT_bedKp                            124.55
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define E1_AUTO_FAN_PIN                          77
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            40
#define FAN_KICKSTART_TIME                       200
#define FAN_MIN_PWM                              20
#define FAST_PWM_FAN
#define FAST_PWM_FAN_FREQUENCY                   1000U

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           A4988
#define E1_DRIVER_TYPE                           A4988
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
#define X_BED_SIZE                               218
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                0
#define Y_BED_SIZE                               210
#define Y_MAX_POS                                Y_BED_SIZE
#define Y_MIN_POS                                0
#define Z_MAX_POS                                205
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 5, 5, 2 }
#define HOMING_FEEDRATE_MM_M                     { (100*60), (100*60), (40*60) }
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_AFTER_HOMING                           10
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
// Probes
//
#define BLTOUCH
#define NOZZLE_TO_PROBE_OFFSET                   { 9, -19.5, -1 }
#define PROBE_OFFSET_ZMAX                        0
#define PROBE_OFFSET_ZMIN                        -15
#define PROBING_HEATERS_OFF
#define PROBING_MARGIN                           10
#define PROBING_TOOL                             0
#define SERVO0_PIN                               13
#define XY_PROBE_FEEDRATE                        (150*60)
#define Z_CLEARANCE_BETWEEN_PROBES               3
#define Z_CLEARANCE_DEPLOY_PROBE                 10
#define Z_MIN_PROBE_PIN                          69
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_FEEDRATE_FAST                    (10*60)
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_PROBE_LOW_POINT                        -2

//
// LCD
//
#define AUTO_REPORT_SD_STATUS
#define BABYSTEPPING
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_MULTIPLICATOR_Z                 1
#define BEEP_ON_FEEDRATE_CHANGE
#define BOOTSCREEN_TIMEOUT                       250
#define BOOT_MARLIN_LOGO_SMALL
#define BROWSE_MEDIA_ON_INSERT
#define DISPLAY_SLEEP_MINUTES                    2
#define EDITABLE_DISPLAY_TIMEOUT
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define EVENT_GCODE_SD_ABORT                     "G92 E0\nG1 E-3\nG27"
#define FEEDRATE_CHANGE_BEEP_DURATION            100
#define FEEDRATE_CHANGE_BEEP_FREQUENCY           2730
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define LCD_DECIMAL_SMALL_XY
#define LCD_ENDSTOP_TEST
#define LCD_INFO_MENU
#define LCD_SHOW_E_TOTAL
#define LED_COLOR_PRESETS
#define LED_CONTROL_MENU
#define LED_USER_PRESET_BLUE                     60
#define LED_USER_PRESET_BRIGHTNESS               255
#define LED_USER_PRESET_GREEN                    48
#define LED_USER_PRESET_RED                      48
#define LED_USER_PRESET_STARTUP
#define LED_USER_PRESET_WHITE                    0
#define LONG_FILENAME_HOST_SUPPORT
#define LONG_FILENAME_WRITE_SUPPORT
#define M20_TIMESTAMP_SUPPORT
#define MANUAL_E_MOVES_RELATIVE
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 50*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define MENU_HOLLOW_FRAME
#define PE_LEDS_COMPLETED_TIME                   (30*60)
#define PRINT_PROGRESS_SHOW_DECIMALS
#define PROBE_DEPLOY_STOW_MENU
#define PROBE_OFFSET_WIZARD
#define PROBE_OFFSET_WIZARD_START_Z              0
#define SCROLL_LONG_FILENAMES
#define SDCARD_RATHERRECENTFIRST
#define SD_FINISHED_RELEASECOMMAND               "M84"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_MENU_CONFIRM_START
#define SD_PROCEDURE_DEPTH                       1
#define SET_PROGRESS_MANUALLY
#define SET_PROGRESS_PERCENT
#define SET_REMAINING_TIME
#define SHOW_BOOTSCREEN
#define SHOW_ELAPSED_TIME
#define SHOW_PROGRESS_PERCENT
#define SHOW_REMAINING_TIME
#define SHOW_TEMPERATURE_BELOW_ZERO
#define SOUND_MENU_ITEM
#define SOUND_ON_DEFAULT
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define STATUS_BED_ANIM
#define STATUS_CHAMBER_ANIM
#define STATUS_FAN_FRAMES                        3
#define STATUS_HEAT_PERCENT
#define STATUS_HOTEND_ANIM
#define STATUS_HOTEND_INVERTED
#define STATUS_MESSAGE_SCROLLING
#define TURBO_BACK_MENU_ITEM
#define ULTIPANEL_FEEDMULTIPLY
#define ULTI_CONTROLLER
#define XYZ_HOLLOW_FRAME

//
// Interface
//
#define INDIVIDUAL_AXIS_HOMING_MENU
#define INDIVIDUAL_AXIS_HOMING_SUBMENU
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS       100
#define LCD_FEEDBACK_FREQUENCY_HZ                2730
#define LCD_LANGUAGE                             en
#define REVERSE_ENCODER_DIRECTION
#define SPEAKER

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_ACTION_COMMANDS
#define HOST_KEEPALIVE_FEATURE
#define HOST_PROMPT_SUPPORT
#define HOST_SHUTDOWN_MENU_ITEM
#define HOST_START_MENU_ITEM
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
#define EXTRUDE_MAXLENGTH                        705+35
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
#define HEATER_1_MAXTEMP                         275
#define HEATER_1_MINTEMP                         5
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_1_TEMP_HOTEND                    210
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "PC"
#define PREHEAT_2_TEMP_BED                       110
#define PREHEAT_2_TEMP_HOTEND                    260
#define PREHEAT_3_FAN_SPEED                      0
#define PREHEAT_3_LABEL                          "TPU"
#define PREHEAT_3_TEMP_BED                       70
#define PREHEAT_3_TEMP_CHAMBER                   35
#define PREHEAT_3_TEMP_HOTEND                    228
#define PREHEAT_4_FAN_SPEED                      0
#define PREHEAT_4_LABEL                          "ABS"
#define PREHEAT_4_TEMP_BED                       90
#define PREHEAT_4_TEMP_CHAMBER                   50
#define PREHEAT_4_TEMP_HOTEND                    240
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
#define TEMP_BED_WINDOW                          1
#define TEMP_HYSTERESIS                          3
#define TEMP_RESIDENCY_TIME                      10
#define TEMP_SENSOR_0                            20
#define TEMP_SENSOR_1                            20
#define TEMP_SENSOR_BED                          20
#define TEMP_WINDOW                              1
#define THERMAL_PROTECTION_BED_HYSTERESIS        2
#define THERMAL_PROTECTION_BED_PERIOD            20
#define THERMAL_PROTECTION_HYSTERESIS            4
#define THERMAL_PROTECTION_PERIOD                40
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      10
#define WATCH_TEMP_PERIOD                        40

//
// Motion
//
#define ADAPTIVE_STEP_SMOOTHING
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define CLASSIC_JERK
#define DEFAULT_ACCELERATION                     3000
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80, 80, 200.0, 369.0, 369.0 }
#define DEFAULT_EJERK                            5.0
#define DEFAULT_MAX_ACCELERATION                 { 9000, 9000, 100, 10000 }
#define DEFAULT_MAX_FEEDRATE                     { 300, 300, 40, 45, 45 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             3000
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              5000
#define DEFAULT_XJERK                            20.0
#define DEFAULT_YJERK                            20.0
#define DEFAULT_ZJERK                            0.4
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z
#define DISTINCT_E_FACTORS
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             false
#define INVERT_Z_DIR                             true
#define LIMITED_JERK_EDITING
#define LIMITED_MAX_ACCEL_EDITING
#define LIMITED_MAX_FR_EDITING
#define MAX_ACCEL_EDIT_VALUES                    { 9000, 9000, 200, 20000 }
#define MAX_FEEDRATE_EDIT_VALUES                 { 600, 600, 10, 50 }
#define MAX_JERK_EDIT_VALUES                     { 20, 20, 0.6, 10 }
#define MIN_STEPS_PER_SEGMENT                    6
#define MULTISTEPPING_LIMIT                      16
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define TRAVEL_EXTRA_XYJERK                      10.0

//
// Calibrate
//
#define ABL_BILINEAR_SUBDIVISION
#define ASSISTED_TRAMMING
#define ASSISTED_TRAMMING_WIZARD
#define AUTO_BED_LEVELING_BILINEAR
#define BED_TRAMMING_HEIGHT                      0.0
#define BED_TRAMMING_INSET_LFRB                  { 30, 30, 30, 30 }
#define BED_TRAMMING_LEVELING_ORDER              { LF, RF }
#define BED_TRAMMING_Z_HOP                       4.0
#define BILINEAR_SUBDIVISIONS                    3
#define DEFAULT_LEVELING_FADE_HEIGHT             0.6
#define ENABLE_LEVELING_FADE_HEIGHT
#define G26_MESH_VALIDATION
#define G26_RETRACT_MULTIPLIER                   1.0
#define G26_XY_FEEDRATE                          20
#define G26_XY_FEEDRATE_TRAVEL                   100
#define GRID_MAX_POINTS_X                        5
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LCD_BED_TRAMMING
#define LEVELED_SEGMENT_LENGTH                   5.0
#define MESH_TEST_BED_TEMP                       60
#define MESH_TEST_HOTEND_TEMP                    220
#define MESH_TEST_LAYER_HEIGHT                   0.2
#define MESH_TEST_NOZZLE_SIZE                    0.4
#define REPORT_TRAMMING_MM
#define RESTORE_LEVELING_AFTER_G35
#define SEGMENT_LEVELED_MOVES
#define TRAMMING_POINT_NAME_1                    "Front-Left"
#define TRAMMING_POINT_NAME_2                    "Front-Right"
#define TRAMMING_POINT_NAME_3                    "Back-Center"
#define TRAMMING_POINT_XY                        { { 20, 20 }, { X_BED_SIZE - 20, 20 }, { X_BED_SIZE / 2, Y_BED_SIZE - 20 } }
#define TRAMMING_SCREW_THREAD                    M3_CW

//
// Servos
//
#define SERVO_DELAY                              { 50 }

//
// Hotend Temp
//
#define DEFAULT_Kd_LIST                          { 32.04, 35.14 }
#define DEFAULT_Ki_LIST                          { 1.83, 2.10 }
#define DEFAULT_Kp_LIST                          { 15.33, 17.18 }
#define PIDTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define PID_PARAMS_PER_HOTEND

//
// Serial
//
#define ADVANCED_OK
#define BAUDRATE                                 250000
#define BAUD_RATE_GCODE
#define BUFSIZE                                  1
#define CUSTOM_MACHINE_NAME                      "Ultimaker Original+ DXU"
#define EMERGENCY_PARSER
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              0
#define TX_BUFFER_SIZE                           0

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     30

//
// Nozzle Park
//
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_POINT                        { (X_MAX_POS / 2), (Y_MIN_POS + 3), 20 }
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5
#define NOZZLE_PARK_Z_RAISE_MIN                  5

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Lights
//
#define PCA9632
#define PRINTER_EVENT_LEDS

//
// Media
//
#define SDSUPPORT

//
// Advanced Pause
//
#define ADVANCED_PAUSE_FEATURE
#define ADVANCED_PAUSE_PURGE_FEEDRATE            3
#define ADVANCED_PAUSE_PURGE_LENGTH              12
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          25
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         0
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             25
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          50
#define FILAMENT_CHANGE_UNLOAD_LENGTH            705+35
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_ALL_EXTRUDERS
#define FILAMENT_UNLOAD_PURGE_DELAY              5000
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           25
#define FILAMENT_UNLOAD_PURGE_LENGTH             12
#define FILAMENT_UNLOAD_PURGE_RETRACT            6.5
#define PARK_HEAD_ON_PAUSE
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PAUSE_PARK_RETRACT_FEEDRATE              60
#define PAUSE_PARK_RETRACT_LENGTH                2

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define DEBUG_FLAGS_GCODE
#define FASTER_GCODE_PARSER
#define MEATPACK_ON_SERIAL_PORT_1

//
// Tool Change
//
#define EVENT_GCODE_TOOLCHANGE_T0                "G90\nG0 X211 F7200\nG0 Y167\nG0 X217\nG0 Y182\nG0 X211\nG0 Y166"
#define EVENT_GCODE_TOOLCHANGE_T1                "G90\nG0 X211 F7200\nG0 Y198\nG0 X217\nG0 Y181\nG0 X211\nG0 Y166"
#define TC_GCODE_USE_GLOBAL_X
#define TC_GCODE_USE_GLOBAL_Y
#define TOOLCHANGE_FS_EXTRA_PRIME                0
#define TOOLCHANGE_ZRAISE                        2

//
// Extras
//
#define ARC_SUPPORT
#define CANCEL_OBJECTS
#define CANCEL_OBJECTS_REPORTING
#define MAX_ARC_SEGMENT_MM                       1.0
#define MIN_ARC_SEGMENT_MM                       0.1
#define MIN_CIRCLE_SEGMENTS                      72
#define N_ARC_CORRECTION                         25
#define SAVED_POSITIONS                          1

//
// Caselight
//
#define CASE_LIGHT_DEFAULT_BRIGHTNESS            105
#define CASE_LIGHT_DEFAULT_ON                    false
#define CASE_LIGHT_ENABLE
#define CASE_LIGHT_MENU
#define INVERT_CASE_LIGHT                        false

//
// Stepper Motor Current
//
#define PWM_MOTOR_CURRENT                        { 1200, 1200, 1250 }

//
// Motion Control
//
#define INPUT_SHAPING_X
#define INPUT_SHAPING_Y
#define SHAPING_FREQ_X                           40.0
#define SHAPING_FREQ_Y                           40.0
#define SHAPING_MENU
#define SHAPING_ZETA_X                           0.15
#define SHAPING_ZETA_Y                           0.15

//
// I2Cbus
//
#define EXPERIMENTAL_I2CBUS
#define I2C_SLAVE_ADDRESS                        0
