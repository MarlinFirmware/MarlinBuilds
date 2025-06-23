/**
 * Config.h - Marlin Firmware distilled configuration
 * Usage: Place this file in the 'Marlin' folder with the name 'Config.h'.
 *
 * Exported by Marlin build on 2025-06-24 at 09:57:57.
 */

//
// Info
//
#define STRING_CONFIG_H_AUTHOR                   "(looxonline & thisiskeithb)"

//
// Machine
//
#define MOTHERBOARD                              BOARD_BTT_SKR_SE_BX_V2

//
// EEPROM
//
#define EEPROM_BOOT_SILENT
#define EEPROM_CHITCHAT
#define EEPROM_AUTO_INIT
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
#define NO_AUTO_ASSIGN_WARNING
#define Z2_DRIVER_TYPE                           TMC2209

//
// Extruder
//
#define EXTRUDERS                                1
#define INVERT_E0_DIR                            true
#define DEFAULT_NOMINAL_FILAMENT_DIA             1.75
#define HOTEND_IDLE_TIMEOUT_SEC                  (10*60)
#define HOTEND_IDLE_MIN_TRIGGER                  180
#define LIN_ADVANCE
#define HOTEND_IDLE_NOZZLE_TARGET                0
#define HOTEND_IDLE_TIMEOUT
#define ADVANCE_K                                0.0
#define HOTEND_IDLE_BED_TARGET                   0

//
// Geometry
//
#define X_BED_SIZE                               250
#define X_MIN_POS                                -13
#define X_MAX_POS                                X_BED_SIZE
#define Y_BED_SIZE                               250
#define Y_MIN_POS                                -4
#define Y_MAX_POS                                Y_BED_SIZE + 7
#define Z_MIN_POS                                0
#define Z_MAX_POS                                250
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
#define HOMING_FEEDRATE_MM_M                     { (21*60), (21*60), (6*60) }
#define HOMING_BUMP_DIVISOR                      { 2, 2, 4 }
#define VALIDATE_HOMING_ENDSTOPS
#define HOMING_BUMP_MM                           { 0, 0, 2 }
#define EDITABLE_HOMING_FEEDRATE
#define HOMING_BACKOFF_POST_MM                   { 2, 2, 2 }
#define SENSORLESS_BACKOFF_MM                    { 2, 2, 0 }

//
// Motion
//
#define DEFAULT_AXIS_STEPS_PER_UNIT              { 80*2, 80*2, 400*2, 910 }
#define AXIS_RELATIVE_MODES                      { false, false, false, false }
#define DEFAULT_MAX_FEEDRATE                     { 200, 200, 10, 65 }
#define DEFAULT_MAX_ACCELERATION                 { 1000, 1000, 100, 10000 }
#define INVERT_X_DIR                             true
#define INVERT_Y_DIR                             true
#define INVERT_Z_DIR                             false
#define STEP_STATE_E                             HIGH
#define STEP_STATE_X                             HIGH
#define STEP_STATE_Y                             HIGH
#define STEP_STATE_Z                             HIGH
#define DEFAULT_ACCELERATION                     1000
#define DEFAULT_TRAVEL_ACCELERATION              1000
#define DEFAULT_RETRACT_ACCELERATION             1000
#define DEFAULT_MINIMUMFEEDRATE                  0.0
#define DEFAULT_MINTRAVELFEEDRATE                0.0
#define MIN_STEPS_PER_SEGMENT                    6
#define DEFAULT_MINSEGMENTTIME                   20000
#define DEFAULT_EJERK                            5.0
#define DEFAULT_STEPPER_TIMEOUT_SEC              120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_E
#define SLOWDOWN
#define SLOWDOWN_DIVISOR                         2
#define DEFAULT_ZJERK                            2
#define CLASSIC_JERK
#define EDITABLE_STEPS_PER_UNIT
#define DEFAULT_YJERK                            10.0
#define S_CURVE_ACCELERATION
#define DEFAULT_XJERK                            10.0
#define MULTISTEPPING_LIMIT                      16

//
// Motion Control
//
#define SHAPING_ZETA_X                           0.15
#define SHAPING_ZETA_Y                           0.15
#define INPUT_SHAPING_X
#define INPUT_SHAPING_Y
#define SHAPING_FREQ_X                           0.0
#define SHAPING_FREQ_Y                           0.0
#define SHAPING_MENU
#define SHAPING_MIN_FREQ                         20.0

//
// Endstops
//
#define X_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Y_MIN_ENDSTOP_HIT_STATE                  HIGH
#define Z_MIN_ENDSTOP_HIT_STATE                  HIGH
#define ENDSTOPPULLUPS
#define ENDSTOP_INTERRUPTS_FEATURE
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE            HIGH

//
// Filament Runout Sensors
//
#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT_STATE                         LOW
#define FIL_RUNOUT_ENABLED_DEFAULT               false
#define FIL_RUNOUT_PULLUP
#define FILAMENT_RUNOUT_SCRIPT                   "M600"
#define NUM_RUNOUT_SENSORS                       1

//
// Probes
//
#define PROBING_MARGIN                           15
#define XY_PROBE_FEEDRATE                        (200*60)
#define Z_CLEARANCE_BETWEEN_PROBES               2
#define Z_CLEARANCE_DEPLOY_PROBE                 5
#define Z_CLEARANCE_MULTI_PROBE                  3
#define PROBE_OFFSET_ZMAX                        1
#define PROBE_OFFSET_ZMIN                        -5
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define MULTIPLE_PROBING                         2
#define PROBING_HEATERS_OFF
#define Z_PROBE_ERROR_TOLERANCE                  3
#define Z_PROBE_LOW_POINT                        -2
#define Z_PROBE_FEEDRATE_SLOW                    (Z_PROBE_FEEDRATE_FAST / 2)
#define FIX_MOUNTED_PROBE
#define NOZZLE_TO_PROBE_OFFSET                   { -30.1, 26.78, 0 }
#define Z_PROBE_FEEDRATE_FAST                    (12*60)

//
// Temperature
//
#define THERMAL_PROTECTION_HYSTERESIS            5
#define THERMAL_PROTECTION_PERIOD                50
#define TEMP_SENSOR_0                            1
#define TEMP_HYSTERESIS                          3
#define HEATER_0_MINTEMP                         5
#define HEATER_0_MAXTEMP                         265
#define PREHEAT_1_TEMP_HOTEND                    200
#define BED_OVERSHOOT                            10
#define HOTEND_OVERSHOOT                         15
#define PREHEAT_1_FAN_SPEED                      0
#define PREHEAT_1_LABEL                          "PLA"
#define PREHEAT_1_TEMP_BED                       60
#define TEMP_BED_HYSTERESIS                      3
#define TEMP_BED_RESIDENCY_TIME                  10
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
#define WATCH_TEMP_PERIOD                        30
#define PREHEAT_3_TEMP_CHAMBER                   35
#define PREHEAT_4_TEMP_CHAMBER                   35
#define PREHEAT_3_FAN_SPEED                      0
#define PREHEAT_4_TEMP_HOTEND                    240
#define PREHEAT_3_TEMP_BED                       60
#define PREHEAT_4_LABEL                          "ABS"
#define PREHEAT_3_LABEL                          "TPU"
#define PREHEAT_3_TEMP_HOTEND                    220
#define PREHEAT_4_FAN_SPEED                      0
#define PREHEAT_2_FAN_SPEED                      0
#define BED_MINTEMP                              5
#define BED_MAXTEMP                              110
#define PREHEAT_4_TEMP_BED                       100
#define PREHEAT_2_LABEL                          "PETG"
#define PREHEAT_2_TEMP_BED                       80
#define PREHEAT_2_TEMP_HOTEND                    240
#define AUTOTEMP_MIN                             210
#define AUTOTEMP_MAX                             250
#define AUTOTEMP_FACTOR                          0.1f
#define THERMAL_PROTECTION_BED_PERIOD            20

//
// Hotend Temp
//
#define BANG_MAX                                 255
#define PID_K1                                   0.95
#define PID_MAX                                  255
#define MPCTEMP

//
// PID Temp
//
#define PID_FUNCTIONAL_RANGE                     20

//
// MPC Temp
//
#define MPC_STEADYSTATE                          0.5f
#define MPC_AUTOTUNE
#define MPC_HEATER_POWER                         { 50.0f }
#define MPC_INCLUDE_FAN
#define FILAMENT_HEAT_CAPACITY_PERMM             { 5.6e-3f }
#define MPC_EDIT_MENU
#define MPC_MIN_AMBIENT_CHANGE                   1.0f
#define MPC_AUTOTUNE_MENU
#define MPC_TUNING_POS                           { X_CENTER, Y_CENTER, 1.0f }
#define MPC_MAX                                  255
#define MPC_TUNING_END_Z                         10.0f
#define MPC_SENSOR_RESPONSIVENESS                { 0.1224f }
#define MPC_BLOCK_HEAT_CAPACITY                  { 11.99f }
#define MPC_SMOOTHING_FACTOR                     0.5f
#define MPC_AMBIENT_XFER_COEFF_FAN255            { 0.0634f }
#define MPC_AMBIENT_XFER_COEFF                   { 0.0519f }

//
// Bed Temp
//
#define MAX_BED_POWER                            255
#define DEFAULT_bedKi                            23.77
#define PIDTEMPBED
#define DEFAULT_bedKd                            415.57
#define DEFAULT_bedKp                            121.74

//
// Fans
//
#define E0_AUTO_FAN_PIN                          FAN2_PIN
#define EXTRUDER_AUTO_FAN_SPEED                  255
#define EXTRUDER_AUTO_FAN_TEMPERATURE            50
#define FAN_SOFT_PWM
#define CONTROLLERFAN_SPEED_MIN                  0
#define CONTROLLERFAN_SPEED_ACTIVE               255
#define CONTROLLER_FAN_BED_HEATING
#define CONTROLLERFAN_IDLE_TIME                  60
#define FAN_MIN_PWM                              26
#define FAN_KICKSTART_TIME                       100
#define USE_CONTROLLER_FAN
#define CONTROLLER_FAN_IGNORE_Z
#define CONTROLLER_FAN_PIN                       FAN1_PIN
#define CONTROLLERFAN_SPEED_IDLE                 0

//
// Advanced Pause
//
#define PAUSE_REHEAT_FAST_RESUME
#define PAUSE_PARK_RETRACT_LENGTH                5
#define ADVANCED_PAUSE_FEATURE
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH         20
#define FILAMENT_UNLOAD_PURGE_FEEDRATE           6
#define HOME_BEFORE_FILAMENT_CHANGE
#define PAUSE_PARK_NOZZLE_TIMEOUT                45
#define PAUSE_PARK_RETRACT_FEEDRATE              6
#define PAUSE_PARK_NO_STEPPER_TIMEOUT
#define PARK_HEAD_ON_PAUSE
#define FILAMENT_CHANGE_ALERT_BEEPS              10
#define FILAMENT_CHANGE_UNLOAD_ACCEL             5
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH         20
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE       10
#define FILAMENT_CHANGE_UNLOAD_LENGTH            50
#define ADVANCED_PAUSE_PURGE_FEEDRATE            6
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE       6
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE          10
#define ADVANCED_PAUSE_PURGE_LENGTH              20
#define CONFIGURE_FILAMENT_CHANGE
#define FILAMENT_LOAD_UNLOAD_GCODES
#define FILAMENT_UNLOAD_PURGE_RETRACT            10
#define FILAMENT_UNLOAD_PURGE_LENGTH             8
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL          5
#define ADVANCED_PAUSE_RESUME_PRIME              0
#define FILAMENT_UNLOAD_PURGE_DELAY              5000

//
// Calibrate
//
#define DEFAULT_LEVELING_FADE_HEIGHT             10.0
#define GRID_MAX_POINTS_X                        5
#define LCD_PROBE_Z_RANGE                        4
#define AUTO_BED_LEVELING_BILINEAR
#define RESTORE_LEVELING_AFTER_G28
#define SEGMENT_LEVELED_MOVES
#define ENABLE_LEVELING_FADE_HEIGHT
#define EXTRAPOLATE_BEYOND_GRID
#define BILINEAR_SUBDIVISIONS                    3
#define MESH_EDIT_Z_STEP                         0.025
#define LCD_BED_LEVELING
#define GRID_MAX_POINTS_Y                        GRID_MAX_POINTS_X
#define LEVELED_SEGMENT_LENGTH                   5.0
#define ABL_BILINEAR_SUBDIVISION
#define MESH_EDIT_MENU
#define ASSISTED_TRAMMING
#define RESTORE_LEVELING_AFTER_G34
#define RESTORE_LEVELING_AFTER_G35
#define Z_STEPPER_ALIGN_AMP                      1.0
#define TRAMMING_SCREW_THREAD                    M4_CW
#define ASSISTED_TRAMMING_WIZARD
#define HOME_AFTER_G34
#define Z_STEPPER_ALIGN_ITERATIONS               5
#define Z_STEPPER_ALIGN_ACC                      0.02
#define TRAMMING_POINT_XY                        { { X_CENTER, Y_CENTER }, { 33, 33 }, { 217, 33 }, { 217, 217 }, { 33, 217 } }
#define G34_MAX_GRADE                            5
#define Z_STEPPER_AUTO_ALIGN
#define TRAMMING_POINT_NAME_1                    "Center"
#define TRAMMING_POINT_NAME_2                    "Front-Left"
#define TRAMMING_POINT_NAME_3                    "Front-Right"
#define TRAMMING_POINT_NAME_4                    "Back-Right"
#define TRAMMING_POINT_NAME_5                    "Back-Left"

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
#define TOUCH_SCREEN
#define BUTTON_DELAY_EDIT                        50
#define COMPACT_MARLIN_BOOT_LOGO
#define TFT_COLOR_UI
#define COLOR_BACKGROUND                         COLOR_DARK
#define TFT_THEME                                BLACK_MARLIN
#define BIQU_BX_TFT70
#define BUTTON_DELAY_MENU                        250
#define TFT_FONT                                 NOTOSANS
#define SPEED_EDIT_MAX                           999
#define SET_INTERACTION_TIME
#define NEO2_USER_PRESET_RED                     255
#define SPEED_EDIT_MIN                           10
#define DOUBLECLICK_MAX_INTERVAL                 1250
#define NEO2_USER_PRESET_WHITE                   255
#define NEO2_COLOR_PRESETS
#define SOUND_MENU_ITEM
#define ULTIPANEL_FEEDMULTIPLY
#define STATUS_MESSAGE_SCROLLING
#define SDCARD_SORT_ALPHA
#define BINARY_FILE_TRANSFER
#define EDITABLE_DISPLAY_TIMEOUT
#define BABYSTEP_MILLIMETER_UNITS
#define BABYSTEPPING
#define AUTO_REPORT_SD_STATUS
#define LONG_FILENAME_WRITE_SUPPORT
#define BABYSTEP_DISPLAY_TOTAL
#define SDCARD_CONNECTION                        ONBOARD
#define LED_USER_PRESET_GREEN                    255
#define BOOT_MARLIN_LOGO_HUGE
#define SDSORT_USES_STACK                        false
#define SDSORT_REVERSE                           false
#define MANUAL_E_MOVES_RELATIVE
#define SDCARD_RATHERRECENTFIRST
#define BOOTSCREEN_TIMEOUT                       3000
#define SD_MENU_CONFIRM_START
#define SDSORT_LIMIT                             64
#define SHOW_PROGRESS_PERCENT
#define EVENT_GCODE_SD_ABORT                     "G28XY"
#define BABYSTEP_MULTIPLICATOR_Z                 0.05
#define NO_SD_AUTOSTART
#define SDSORT_DYNAMIC_RAM                       true
#define M20_TIMESTAMP_SUPPORT
#define SHOW_ELAPSED_TIME
#define SHOW_INTERACTION_TIME
#define SOUND_ON_DEFAULT
#define LED_USER_PRESET_RED                      255
#define NEO2_USER_PRESET_BRIGHTNESS              255
#define LED_USER_PRESET_STARTUP
#define SD_PROCEDURE_DEPTH                       1
#define SHOW_REMAINING_TIME
#define SET_REMAINING_TIME
#define LED_USER_PRESET_BLUE                     255
#define FLOW_EDIT_MAX                            999
#define BABYSTEP_ZPROBE_OFFSET
#define FLOW_EDIT_MIN                            10
#define PROBE_OFFSET_WIZARD
#define NEO2_USER_PRESET_STARTUP
#define SDSORT_CACHE_VFATS                       4
#define MANUAL_FEEDRATE                          { 50*60, 50*60, 4*60, 2*60 }
#define SDSORT_CACHE_NAMES                       true
#define PROBE_OFFSET_WIZARD_START_Z              -4.0
#define FINE_MANUAL_MOVE                         0.025
#define BABYSTEP_MULTIPLICATOR_XY                1
#define LONG_FILENAME_HOST_SUPPORT
#define NEO2_USER_PRESET_BLUE                    255
#define EP_BABYSTEPPING
#define BABYSTEP_ALWAYS_AVAILABLE
#define SDSORT_GCODE                             true
#define MANUAL_MOVE_DISTANCE_MM                  10, 1.0, 0.1
#define PE_LEDS_COMPLETED_TIME                   (30*60)
#define SET_PROGRESS_MANUALLY
#define DISPLAY_SLEEP_MINUTES                    2
#define MEDIA_MENU_AT_TOP
#define NEO2_USER_PRESET_GREEN                   255
#define SD_FINISHED_STEPPERRELEASE               true
#define SD_FINISHED_RELEASECOMMAND               "M84XYE"
#define LCD_INFO_MENU
#define SDSORT_USES_RAM                          true
#define SET_PROGRESS_PERCENT
#define LED_USER_PRESET_WHITE                    255
#define LED_USER_PRESET_BRIGHTNESS               255
#define SDSORT_FOLDERS                           -1
#define LCD_SHOW_E_TOTAL
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define BROWSE_MEDIA_ON_INSERT
#define LED_CONTROL_MENU
#define LED_COLOR_PRESETS
#define TURBO_BACK_MENU_ITEM

//
// Lights
//
#define NEOPIXEL2_TYPE                           NEOPIXEL_TYPE
#define NEOPIXEL_TYPE                            NEO_GRB
#define NEOPIXEL_BRIGHTNESS                      255
#define NEOPIXEL2_STARTUP_TEST
#define NEOPIXEL2_SEPARATE
#define NEOPIXEL_IS_SEQUENTIAL
#define NEOPIXEL_M150_DEFAULT                    -1
#define NEOPIXEL_LED
#define PRINTER_EVENT_LEDS
#define NEOPIXEL_PIXELS                          9
#define NEOPIXEL2_PIXELS                         2
#define NEOPIXEL2_BRIGHTNESS                     255

//
// Interface
//
#define LCD_LANGUAGE                             en
#define LCD_FEEDBACK_FREQUENCY_HZ                1000
#define SPEAKER
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS       20
#define ENCODER_PULSES_PER_STEP                  5
#define INDIVIDUAL_AXIS_HOMING_MENU
#define INDIVIDUAL_AXIS_HOMING_SUBMENU

//
// Nozzle Park
//
#define NOZZLE_PARK_MOVE                         0
#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT                        { (X_MIN_POS + 4), (Y_MIN_POS + 4), 6 }
#define NOZZLE_PARK_Z_RAISE_MIN                  2
#define NOZZLE_PARK_XY_FEEDRATE                  100
#define NOZZLE_PARK_Z_FEEDRATE                   5

//
// G-code
//
#define BLOCK_BUFFER_SIZE                        16
#define FASTER_GCODE_PARSER
#define STARTUP_COMMANDS                         "M17 Z"
#define DEBUG_FLAGS_GCODE

//
// Serial
//
#define SERIAL_PORT                              -1
#define BAUDRATE                                 250000
#define BUFSIZE                                  32
#define MAX_CMD_SIZE                             96
#define PROPORTIONAL_FONT_RATIO                  1.0
#define SERIAL_OVERRUN_PROTECTION
#define TX_BUFFER_SIZE                           0
#define SERIAL_PORT_2                            1
#define CUSTOM_MACHINE_NAME                      "BIQU BX"
#define RX_BUFFER_SIZE                           1024
#define SERIAL_XON_XOFF
#define EMERGENCY_PARSER
#define ADVANCED_OK

//
// Host
//
#define BUSY_WHILE_HEATING
#define DEFAULT_KEEPALIVE_INTERVAL               2
#define HOST_KEEPALIVE_FEATURE
#define PRINTJOB_TIMER_AUTOSTART
#define HOST_PROMPT_SUPPORT
#define HOST_ACTION_COMMANDS

//
// Reporting
//
#define AUTO_REPORT_TEMPERATURES
#define EXTENDED_CAPABILITIES_REPORT
#define CAPABILITIES_REPORT
#define M115_GEOMETRY_REPORT
#define REPORT_FAN_CHANGE

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
#define DISABLE_DRIVER_SAFE_POWER_PROTECT

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
#define ARC_P_CIRCLES
#define CANCEL_OBJECTS

//
// TMC_Smart
//
#define CHOPPER_TIMING                           CHOPPER_09STEP_24V
#define Y_STALL_SENSITIVITY                      95
#define X2_STALL_SENSITIVITY                     X_STALL_SENSITIVITY
#define INTERPOLATE                              true
#define IMPROVE_HOMING_RELIABILITY
#define E0_HYBRID_THRESHOLD                      30
#define Z_RSENSE                                 0.15
#define HOLD_MULTIPLIER                          0.5
#define Z2_CURRENT                               Z_CURRENT
#define K_HYBRID_THRESHOLD                       3
#define X_CHAIN_POS                              -1
#define Y_RSENSE                                 0.15
#define U_HYBRID_THRESHOLD                       3
#define E3_HYBRID_THRESHOLD                      30
#define Z_MICROSTEPS                             16
#define STEALTHCHOP_E
#define STEALTHCHOP_Z
#define Z_CURRENT_HOME                           Z_CURRENT
#define Z2_CHAIN_POS                             -1
#define REPORT_CURRENT_CHANGE
#define X_RSENSE                                 0.15
#define Y_CHAIN_POS                              -1
#define X_HYBRID_THRESHOLD                       100
#define E6_HYBRID_THRESHOLD                      30
#define X_CURRENT_HOME                           350
#define Z4_HYBRID_THRESHOLD                      3
#define X_STALL_SENSITIVITY                      95
#define STOP_ON_ERROR
#define Z_CHAIN_POS                              -1
#define J_HYBRID_THRESHOLD                       3
#define E0_RSENSE                                0.15
#define MONITOR_DRIVER_STATUS
#define EDITABLE_HOMING_CURRENT
#define CHOPPER_TIMING_E                         CHOPPER_DEFAULT_24V
#define Z_CURRENT                                1050
#define E2_HYBRID_THRESHOLD                      30
#define Y_MICROSTEPS                             16
#define W_HYBRID_THRESHOLD                       3
#define SENSORLESS_HOMING
#define E5_HYBRID_THRESHOLD                      30
#define E0_CHAIN_POS                             -1
#define Z3_HYBRID_THRESHOLD                      3
#define CURRENT_STEP_DOWN                        50
#define X2_HYBRID_THRESHOLD                      100
#define Z2_RSENSE                                Z_RSENSE
#define Z_HYBRID_THRESHOLD                       3
#define X_CURRENT                                1050
#define I_HYBRID_THRESHOLD                       3
#define EDGE_STEPPING
#define Y_CURRENT                                1150
#define E1_HYBRID_THRESHOLD                      30
#define STEALTHCHOP_XY
#define Y2_STALL_SENSITIVITY                     Y_STALL_SENSITIVITY
#define Y2_HYBRID_THRESHOLD                      100
#define E0_MICROSTEPS                            16
#define Z2_MICROSTEPS                            Z_MICROSTEPS
#define Y_CURRENT_HOME                           350
#define X_MICROSTEPS                             16
#define Z2_CURRENT_HOME                          Z_CURRENT_HOME
#define V_HYBRID_THRESHOLD                       3
#define E4_HYBRID_THRESHOLD                      30
#define Z2_HYBRID_THRESHOLD                      3
#define E0_CURRENT                               800
#define Y_HYBRID_THRESHOLD                       100
#define E7_HYBRID_THRESHOLD                      30
