/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2024-11-26 at 19:56:18.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(looxonline & thisiskeithb)"

//
// User
//
#define BIQU_BX

//
// Machine
//
#define MOTHERBOARD                              BOARD_BTT_SKR_SE_BX_V2

//
// Extruder
//
#define ADVANCE_K                                0.0
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define EXTRUDERS                                1
#define HOTEND_IDLE_BED_TARGET                   0
#define HOTEND_IDLE_MIN_TRIGGER                  180
#define HOTEND_IDLE_NOZZLE_TARGET                0
#define HOTEND_IDLE_TIMEOUT
#define HOTEND_IDLE_TIMEOUT_SEC                  (10*60)
#define INVERT_E0_DIR                            true
#define LIN_ADVANCE

//
// Bed Temp
//
#define DEFAULT_bedKd                            415.57
#define DEFAULT_bedKi                            23.77
#define DEFAULT_bedKp                            121.74
#define MAX_BED_POWER                            255
#define PIDTEMPBED

//
// Fans
//
#define CHAMBER_AUTO_FAN_PIN                     -1
#define CONTROLLERFAN_IDLE_TIME                  60
#define CONTROLLERFAN_SPEED_ACTIVE               255
#define CONTROLLERFAN_SPEED_IDLE                 0
#define CONTROLLERFAN_SPEED_MIN                  0
#define CONTROLLER_FAN_BED_HEATING
#define CONTROLLER_FAN_IGNORE_Z
#define CONTROLLER_FAN_PIN                       FAN1_PIN
#define COOLER_AUTO_FAN_PIN                      -1
#define E0_AUTO_FAN_PIN                          FAN2_PIN
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_KICKSTART_TIME                       100
#define FAN_MIN_PWM                              26
#define FAN_SOFT_PWM
#define USE_CONTROLLER_FAN

//
// Stepper Drivers
//
#define E0_DRIVER_TYPE                           TMC2209
#define E_ENABLE_ON                              LOW
#define NO_AUTO_ASSIGN_WARNING
#define X_DRIVER_TYPE                            TMC2209
#define X_ENABLE_ON                              LOW
#define Y_DRIVER_TYPE                            TMC2209
#define Y_ENABLE_ON                              LOW
#define Z2_DRIVER_TYPE                           TMC2209
#define Z_DRIVER_TYPE                            TMC2209
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
#define SOFT_ENDSTOPS_MENU_ITEM
#define X_BED_SIZE                               250
#define X_MAX_POS                                X_BED_SIZE
#define X_MIN_POS                                -13
#define Y_BED_SIZE                               250
#define Y_MAX_POS                                Y_BED_SIZE + 7
#define Y_MIN_POS                                -4
#define Z_MAX_POS                                250
#define Z_MIN_POS                                0

//
// Homing
//
#define HOMING_BACKOFF_POST_MM                   { 2, 2, 2 }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define HOMING_BUMP_MM                           { 0, 0, 2 }
#define HOMING_FEEDRATE_MM_M                     { (21*60), (21*60), (6*60) }
#define SENSORLESS_BACKOFF_MM                    { 2, 2, 0 }
#define VALIDATE_HOMING_ENDSTOPS
#define X_HOME_DIR                               -1
#define Y_HOME_DIR                               -1
#define Z_HOME_DIR                               -1

//
// Endstops
//
#define ENDSTOPPULLUPS
#define ENDSTOP_INTERRUPTS_FEATURE
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Probes
//
#define FIX_MOUNTED_PROBE
#define MULTIPLE_PROBING                         2
#define NOZZLE_TO_PROBE_OFFSET                   { -30.1, 26.78, 0 }
#define PROBE_OFFSET_ZMAX                        1
#define PROBE_OFFSET_ZMIN                        -5
#define PROBING_HEATERS_OFF
#define PROBING_MARGIN                           15
#define XY_PROBE_FEEDRATE                        (200*60)
#define Z_CLEARANCE_BETWEEN_PROBES               2
#define Z_CLEARANCE_DEPLOY_PROBE                 5
#define Z_CLEARANCE_MULTI_PROBE                  3
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_FEEDRATE_FAST                    (12*60)
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define Z_PROBE_LOW_POINT                        -2

//
// LCD
//
#define AUTO_REPORT_SD_STATUS
#define BABYSTEPPING
#define BABYSTEP_ALWAYS_AVAILABLE
#define BABYSTEP_DISPLAY_TOTAL
#define BABYSTEP_MILLIMETER_UNITS
#define BABYSTEP_MULTIPLICATOR_XY                1
#define BABYSTEP_MULTIPLICATOR_Z                 0.05
#define BABYSTEP_ZPROBE_OFFSET
#define BINARY_FILE_TRANSFER
#define BIQU_BX_TFT70
#define BOOTSCREEN_TIMEOUT                       3000
#define BOOT_MARLIN_LOGO_HUGE
#define BROWSE_MEDIA_ON_INSERT
#define BUTTON_DELAY_EDIT                        50
#define BUTTON_DELAY_MENU                        250
#define COLOR_BACKGROUND                         COLOR_DARK
#define COMPACT_MARLIN_BOOT_LOGO
#define DISPLAY_SLEEP_MINUTES                    2
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define EDITABLE_DISPLAY_TIMEOUT
#define ENCODER_100X_STEPS_PER_SEC               80
#define ENCODER_10X_STEPS_PER_SEC                30
#define ENCODER_RATE_MULTIPLIER
#define EP_BABYSTEPPING
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define FINE_MANUAL_MOVE                         0.025
#define FLOW_EDIT_MAX                            999
#define FLOW_EDIT_MIN                            10
#define LCD_INFO_MENU
#define LCD_SHOW_E_TOTAL
#define LED_COLOR_PRESETS
#define LED_CONTROL_MENU
#define LED_USER_PRESET_BLUE                     255
#define LED_USER_PRESET_BRIGHTNESS               255
#define LED_USER_PRESET_GREEN                    255
#define LED_USER_PRESET_RED                      255
#define LED_USER_PRESET_STARTUP
#define LED_USER_PRESET_WHITE                    255
#define LONG_FILENAME_HOST_SUPPORT
#define LONG_FILENAME_WRITE_SUPPORT
#define M20_TIMESTAMP_SUPPORT
#define MANUAL_E_MOVES_RELATIVE
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define MEDIA_MENU_AT_TOP
#define NEO2_COLOR_PRESETS
#define NEO2_USER_PRESET_BLUE                    255
#define NEO2_USER_PRESET_BRIGHTNESS              255
#define NEO2_USER_PRESET_GREEN                   255
#define NEO2_USER_PRESET_RED                     255
#define NEO2_USER_PRESET_STARTUP
#define NEO2_USER_PRESET_WHITE                   255
#define NO_SD_AUTOSTART
#define PE_LEDS_COMPLETED_TIME                   (30*60)
#define PROBE_OFFSET_WIZARD
#define PROBE_OFFSET_WIZARD_START_Z              -4.0
#define SDCARD_CONNECTION                        ONBOARD
#define SDCARD_RATHERRECENTFIRST
#define SDCARD_SORT_ALPHA
#define SDSORT_CACHE_NAMES                       true
#define SDSORT_CACHE_VFATS                       4
#define SDSORT_DYNAMIC_RAM                       true
#define SDSORT_FOLDERS                           -1
#define SDSORT_GCODE                             true
#define SDSORT_LIMIT                             64
#define SDSORT_REVERSE                           false
#define SDSORT_USES_RAM                          true
#define SDSORT_USES_STACK                        false
#define SD_FINISHED_RELEASECOMMAND               "M84XYE"
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_MENU_CONFIRM_START
#define SD_PROCEDURE_DEPTH                       1
#define SET_INTERACTION_TIME
#define SET_PROGRESS_MANUALLY
#define SET_PROGRESS_PERCENT
#define SET_REMAINING_TIME
#define SHOW_BOOTSCREEN
#define SHOW_ELAPSED_TIME
#define SHOW_INTERACTION_TIME
#define SHOW_PROGRESS_PERCENT
#define SHOW_REMAINING_TIME
#define SOUND_MENU_ITEM
#define SOUND_ON_DEFAULT
#define SPEED_EDIT_MAX                           999
#define SPEED_EDIT_MIN                           10
#define STATUS_MESSAGE_SCROLLING
#define TFT_COLOR_UI
#define TFT_FONT                                 NOTOSANS
#define TFT_THEME                                BLACK_MARLIN
#define TOUCH_SCREEN
#define TURBO_BACK_MENU_ITEM
#define ULTIPANEL_FEEDMULTIPLY

//
// Interface
//
#define ENCODER_PULSES_PER_STEP                  5
#define INDIVIDUAL_AXIS_HOMING_MENU
#define INDIVIDUAL_AXIS_HOMING_SUBMENU
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS       20
#define LCD_FEEDBACK_FREQUENCY_HZ                1000
#define LCD_LANGUAGE                             en
#define SPEAKER

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_ACTION_COMMANDS
#define HOST_KEEPALIVE_FEATURE
#define HOST_PROMPT_SUPPORT
#define PRINTJOB_TIMER_AUTOSTART

//
// Reporting
//
#define AUTO_REPORT_TEMPERATURES
#define CAPABILITIES_REPORT
#define EXTENDED_CAPABILITIES_REPORT
#define M115_GEOMETRY_REPORT
#define REPORT_FAN_CHANGE

//
// Lights
//
#define NEOPIXEL2_BRIGHTNESS                     255
#define NEOPIXEL2_PIXELS                         2
#define NEOPIXEL2_SEPARATE
#define NEOPIXEL2_STARTUP_TEST
#define NEOPIXEL2_TYPE                           NEOPIXEL_TYPE
#define NEOPIXEL_BRIGHTNESS                      255
#define NEOPIXEL_IS_SEQUENTIAL
#define NEOPIXEL_LED
#define NEOPIXEL_M150_DEFAULT                    -1
#define NEOPIXEL_PIXELS                          9
#define NEOPIXEL_TYPE                            NEO_GRB
#define PRINTER_EVENT_LEDS

//
// Temperature
//
#define AUTOTEMP
#define AUTOTEMP_FACTOR                          0.1f
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_OLDWEIGHT                       0.98
#define BED_MAXTEMP                              110
#define BED_MINTEMP                              5
#define BED_OVERSHOOT                            10
#define CHAMBER_CHECK_INTERVAL                   5000
#define COOLER_OVERSHOOT                         2
#define DUMMY_THERMISTOR_998_VALUE               25
#define DUMMY_THERMISTOR_999_VALUE               100
#define HEATER_0_MAXTEMP                         265
#define HEATER_0_MINTEMP                         5
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define PREHEAT_1_TEMP_CHAMBER                   35
#define PREHEAT_1_TEMP_HOTEND                    200
#define PREHEAT_2_FAN_SPEED                      0
#define PREHEAT_2_LABEL                          "PETG"
#define PREHEAT_2_TEMP_BED                       80
#define PREHEAT_2_TEMP_CHAMBER                   35
#define PREHEAT_2_TEMP_HOTEND                    240
#define PREHEAT_3_FAN_SPEED                      0
#define PREHEAT_3_LABEL                          "TPU"
#define PREHEAT_3_TEMP_BED                       60
#define PREHEAT_3_TEMP_CHAMBER                   35
#define PREHEAT_3_TEMP_HOTEND                    220
#define PREHEAT_4_FAN_SPEED                      0
#define PREHEAT_4_LABEL                          "ABS"
#define PREHEAT_4_TEMP_BED                       100
#define PREHEAT_4_TEMP_CHAMBER                   35
#define PREHEAT_4_TEMP_HOTEND                    240
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
#define THERMAL_PROTECTION_HYSTERESIS            5
#define THERMAL_PROTECTION_PERIOD                50
#define WATCH_BED_TEMP_INCREASE                  2
#define WATCH_BED_TEMP_PERIOD                    60
#define WATCH_TEMP_INCREASE                      2
#define WATCH_TEMP_PERIOD                        30

//
// Safety
//
#define DISABLE_DRIVER_SAFE_POWER_PROTECT
#define EXTRUDE_MAXLENGTH                        200
#define EXTRUDE_MINTEMP                          170
#define PREVENT_COLD_EXTRUSION
#define PREVENT_LENGTHY_EXTRUDE
#define THERMAL_PROTECTION_BED
#define THERMAL_PROTECTION_HOTENDS
#define USE_WATCHDOG

//
// MPC Temp
//
#define FILAMENT_HEAT_CAPACITY_PERMM             { 5.6e-3f }
#define MPC_AMBIENT_XFER_COEFF                   { 0.0519f }
#define MPC_AMBIENT_XFER_COEFF_FAN255            { 0.0634f }
#define MPC_AUTOTUNE
#define MPC_AUTOTUNE_MENU
#define MPC_BLOCK_HEAT_CAPACITY                  { 11.99f }
#define MPC_EDIT_MENU
#define MPC_HEATER_POWER                         { 50.0f }
#define MPC_INCLUDE_FAN
#define MPC_MAX                                  255
#define MPC_MIN_AMBIENT_CHANGE                   1.0f
#define MPC_SENSOR_RESPONSIVENESS                { 0.1224f }
#define MPC_SMOOTHING_FACTOR                     0.5f
#define MPC_STEADYSTATE                          0.5f
#define MPC_TUNING_END_Z                         10.0f
#define MPC_TUNING_POS                           { X_CENTER, Y_CENTER, 1.0f }

//
// EEPROM
//
#define EEPROM_AUTO_INIT
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_SETTINGS

//
// Calibrate
//
#define ABL_BILINEAR_SUBDIVISION
#define AUTO_BED_LEVELING_BILINEAR
#define BILINEAR_SUBDIVISIONS                    3
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define ENABLE_LEVELING_FADE_HEIGHT
#define EXTRAPOLATE_BEYOND_GRID
#define GRID_MAX_POINTS_X                        5
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LCD_BED_LEVELING
#define LCD_PROBE_Z_RANGE                        4
#define LEVELED_SEGMENT_LENGTH                   5.0
#define MESH_EDIT_MENU
#define MESH_EDIT_Z_STEP                         0.025
#define RESTORE_LEVELING_AFTER_G28
#define SEGMENT_LEVELED_MOVES

//
// Motion
//
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define CLASSIC_JERK
#define DEFAULT_ACCELERATION                     1000
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80*2, 80*2, 400*2, 910 }
#define DEFAULT_EJERK                            5.0
#define DEFAULT_MAX_ACCELERATION                 { 1000, 1000, 100, 10000 }
#define DEFAULT_MAX_FEEDRATE                     { 200, 200, 10, 65 }
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define DEFAULT_RETRACT_ACCELERATION             1000
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_XJERK                            10.0
#define DEFAULT_YJERK                            10.0
#define DEFAULT_ZJERK                            2
#define DISABLE_IDLE_E
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define EDITABLE_STEPS_PER_UNIT
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             false
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
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_ENABLED_DEFAULT               false
#define FIL_RUNOUT_PULLUP
#define FIL_RUNOUT_STATE                         LOW
#define NUM_RUNOUT_SENSORS                       1

//
// Stats
//
#define PRINTCOUNTER
#define PRINTCOUNTER_SAVE_INTERVAL               60
#define SERVICE_WARNING_BUZZES                   3

//
// Hotend Temp
//
#define BANG_MAX                                 255
#define MPCTEMP
#define PID_K1                                   0.95
#define PID_MAX                                  255

//
// Serial
//
#define ADVANCED_OK
#define BAUDRATE                                 250000
#define BUFSIZE                                  32
#define CUSTOM_MACHINE_NAME                      "BIQU BX"
#define EMERGENCY_PARSER
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define RX_BUFFER_SIZE                           1024
#define SERIAL_OVERRUN_PROTECTION
#define SERIAL_PORT                              -1
#define SERIAL_PORT_2                            1
#define SERIAL_XON_XOFF
#define TX_BUFFER_SIZE                           0

//
// Media
//
#define SDSUPPORT

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     10

//
// Nozzle Park
//
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 4), (Y_MIN_POS + 4), 6 }
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5
#define NOZZLE_PARK_Z_RAISE_MIN                  2

//
// TMC_Smart
//
#define CHOPPER_TIMING                           CHOPPER_09STEP_24V
#define CHOPPER_TIMING_E                         CHOPPER_DEFAULT_24V
#define CURRENT_STEP_DOWN                        50
#define E0_CHAIN_POS                             -1
#define E0_CURRENT                               800
#define E0_HYBRID_THRESHOLD                      30
#define E0_MICROSTEPS                            16
#define E0_RSENSE                                0.15
#define E1_HYBRID_THRESHOLD                      30
#define E2_HYBRID_THRESHOLD                      30
#define E3_HYBRID_THRESHOLD                      30
#define E4_HYBRID_THRESHOLD                      30
#define E5_HYBRID_THRESHOLD                      30
#define E6_HYBRID_THRESHOLD                      30
#define E7_HYBRID_THRESHOLD                      30
#define EDGE_STEPPING
#define HOLD_MULTIPLIER                          0.5
#define IMPROVE_HOMING_RELIABILITY
#define INTERPOLATE                              true
#define I_HYBRID_THRESHOLD                       3
#define J_HYBRID_THRESHOLD                       3
#define K_HYBRID_THRESHOLD                       3
#define MONITOR_DRIVER_STATUS
#define REPORT_CURRENT_CHANGE
#define SENSORLESS_HOMING
#define STEALTHCHOP_E
#define STEALTHCHOP_XY
#define STEALTHCHOP_Z
#define STOP_ON_ERROR
#define U_HYBRID_THRESHOLD                       3
#define V_HYBRID_THRESHOLD                       3
#define W_HYBRID_THRESHOLD                       3
#define X2_HYBRID_THRESHOLD                      100
#define X2_STALL_SENSITIVITY                     X_STALL_SENSITIVITY
#define X_CHAIN_POS                              -1
#define X_CURRENT                                1050
#define X_CURRENT_HOME                           350
#define X_HYBRID_THRESHOLD                       100
#define X_MICROSTEPS                             16
#define X_RSENSE                                 0.15
#define X_STALL_SENSITIVITY                      95
#define Y2_HYBRID_THRESHOLD                      100
#define Y2_STALL_SENSITIVITY                     Y_STALL_SENSITIVITY
#define Y_CHAIN_POS                              -1
#define Y_CURRENT                                1150
#define Y_CURRENT_HOME                           350
#define Y_HYBRID_THRESHOLD                       100
#define Y_MICROSTEPS                             16
#define Y_RSENSE                                 0.15
#define Y_STALL_SENSITIVITY                      95
#define Z2_CHAIN_POS                             -1
#define Z2_CURRENT                               Z_CURRENT
#define Z2_CURRENT_HOME                          Z_CURRENT_HOME
#define Z2_HYBRID_THRESHOLD                      3
#define Z2_MICROSTEPS                            Z_MICROSTEPS
#define Z2_RSENSE                                Z_RSENSE
#define Z3_HYBRID_THRESHOLD                      3
#define Z4_HYBRID_THRESHOLD                      3
#define Z_CHAIN_POS                              -1
#define Z_CURRENT                                1050
#define Z_CURRENT_HOME                           Z_CURRENT
#define Z_HYBRID_THRESHOLD                       3
#define Z_MICROSTEPS                             16
#define Z_RSENSE                                 0.15

//
// Advanced Pause
//
#define ADVANCED_PAUSE_FEATURE
#define ADVANCED_PAUSE_PURGE_FEEDRATE            6
#define ADVANCED_PAUSE_PURGE_LENGTH              20
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          5
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       10
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         20
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         20
#define FILAMENT_CHANGE_UNLOAD_ACCEL             5
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          10
#define FILAMENT_CHANGE_UNLOAD_LENGTH            50
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_PURGE_DELAY              5000
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           6
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_UNLOAD_PURGE_RETRACT            10
#define HOME_BEFORE_FILAMENT_CHANGE
#define PARK_HEAD_ON_PAUSE
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PAUSE_PARK_RETRACT_FEEDRATE              6
#define PAUSE_PARK_RETRACT_LENGTH                5
#define PAUSE_REHEAT_FAST_RESUME

//
// Calibration
//
#define ASSISTED_TRAMMING
#define ASSISTED_TRAMMING_WIZARD
#define G34_MAX_GRADE                            5
#define HOME_AFTER_G34
#define RESTORE_LEVELING_AFTER_G34
#define RESTORE_LEVELING_AFTER_G35
#define TRAMMING_POINT_NAME_1                    "Center"
#define TRAMMING_POINT_NAME_2                    "Front-Left"
#define TRAMMING_POINT_NAME_3                    "Front-Right"
#define TRAMMING_POINT_NAME_4                    "Back-Right"
#define TRAMMING_POINT_NAME_5                    "Back-Left"
#define TRAMMING_POINT_XY                        { { X_CENTER, Y_CENTER }, { 33, 33 }, { 217, 33 }, { 217, 217 }, { 33, 217 } }
#define TRAMMING_SCREW_THREAD                    M4_CW
#define Z_STEPPER_ALIGN_ACC                      0.02
#define Z_STEPPER_ALIGN_AMP                      1.0
#define Z_STEPPER_ALIGN_ITERATIONS               5
#define Z_STEPPER_AUTO_ALIGN

//
// Motion Control
//
#define INPUT_SHAPING_X
#define INPUT_SHAPING_Y
#define SHAPING_FREQ_X                           0.0
#define SHAPING_FREQ_Y                           0.0
#define SHAPING_MENU
#define SHAPING_MIN_FREQ                         20.0
#define SHAPING_ZETA_X                           0.15
#define SHAPING_ZETA_Y                           0.15

//
// Extras
//
#define ARC_P_CIRCLES
#define ARC_SUPPORT
#define CANCEL_OBJECTS
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
#define STARTUP_COMMANDS                         "M17 Z"
