// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef SILABS_ZNET_CONFIG
#define SILABS_ZNET_CONFIG


/**** Included Header Section ****/



// Networks
#define EM_AF_GENERATED_NETWORK_TYPES { \
  EM_AF_NETWORK_TYPE_ZIGBEE_PRO, /* Primary */ \
}
#define EM_AF_GENERATED_ZIGBEE_PRO_NETWORKS { \
  { \
    /* Primary */ \
    ZA_COORDINATOR, \
    EMBER_AF_SECURITY_PROFILE_Z3, \
  }, \
}
#define EM_AF_GENERATED_NETWORK_STRINGS  \
  "Primary (pro)", \
/**** ZCL Section ****/
#define ZA_PROMPT "Z3GatewayHost_4"
#define ZCL_USING_BASIC_CLUSTER_CLIENT
#define ZCL_USING_BASIC_CLUSTER_SERVER
#define ZCL_USING_IDENTIFY_CLUSTER_CLIENT
#define ZCL_USING_IDENTIFY_CLUSTER_SERVER
#define ZCL_USING_GROUPS_CLUSTER_CLIENT
#define ZCL_USING_SCENES_CLUSTER_CLIENT
#define ZCL_USING_ON_OFF_CLUSTER_CLIENT
#define ZCL_USING_ON_OFF_CLUSTER_SERVER
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_CLIENT
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_SERVER
#define ZCL_USING_TIME_CLUSTER_SERVER
#define ZCL_USING_OTA_BOOTLOAD_CLUSTER_SERVER
#define ZCL_USING_POWER_PROFILE_CLUSTER_SERVER
#define ZCL_USING_POLL_CONTROL_CLUSTER_CLIENT
#define ZCL_USING_GREEN_POWER_CLUSTER_CLIENT
#define ZCL_USING_KEEPALIVE_CLUSTER_CLIENT
#define ZCL_USING_KEEPALIVE_CLUSTER_SERVER
#define ZCL_USING_COLOR_CONTROL_CLUSTER_CLIENT
#define ZCL_USING_COLOR_CONTROL_CLUSTER_SERVER
#define ZCL_USING_ILLUM_MEASUREMENT_CLUSTER_CLIENT
#define ZCL_USING_TEMP_MEASUREMENT_CLUSTER_CLIENT
#define ZCL_USING_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_CLIENT
#define ZCL_USING_OCCUPANCY_SENSING_CLUSTER_CLIENT
#define ZCL_USING_IAS_ZONE_CLUSTER_CLIENT
#define ZCL_USING_PRICE_CLUSTER_CLIENT
#define ZCL_USING_PRICE_CLUSTER_SERVER
#define ZCL_USING_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_CLIENT
#define ZCL_USING_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_SERVER
#define ZCL_USING_SIMPLE_METERING_CLUSTER_CLIENT
#define ZCL_USING_SIMPLE_METERING_CLUSTER_SERVER
#define ZCL_USING_MESSAGING_CLUSTER_CLIENT
#define ZCL_USING_MESSAGING_CLUSTER_SERVER
#define ZCL_USING_TUNNELING_CLUSTER_CLIENT
#define ZCL_USING_TUNNELING_CLUSTER_SERVER
#define ZCL_USING_PREPAYMENT_CLUSTER_CLIENT
#define ZCL_USING_PREPAYMENT_CLUSTER_SERVER
#define ZCL_USING_ENERGY_MANAGEMENT_CLUSTER_CLIENT
#define ZCL_USING_ENERGY_MANAGEMENT_CLUSTER_SERVER
#define ZCL_USING_CALENDAR_CLUSTER_CLIENT
#define ZCL_USING_CALENDAR_CLUSTER_SERVER
#define ZCL_USING_DEVICE_MANAGEMENT_CLUSTER_CLIENT
#define ZCL_USING_DEVICE_MANAGEMENT_CLUSTER_SERVER
#define ZCL_USING_EVENTS_CLUSTER_CLIENT
#define ZCL_USING_EVENTS_CLUSTER_SERVER
#define ZCL_USING_MDU_PAIRING_CLUSTER_CLIENT
#define ZCL_USING_MDU_PAIRING_CLUSTER_SERVER
#define ZCL_USING_SUB_GHZ_CLUSTER_CLIENT
#define ZCL_USING_SUB_GHZ_CLUSTER_SERVER
#define ZCL_USING_METER_IDENTIFICATION_CLUSTER_CLIENT
#define ZCL_USING_METER_IDENTIFICATION_CLUSTER_SERVER
#define ZCL_USING_APPLIANCE_STATISTICS_CLUSTER_CLIENT
#define ZCL_USING_ELECTRICAL_MEASUREMENT_CLUSTER_CLIENT
#define ZCL_USING_OTA_CONFIGURATION_CLUSTER_CLIENT
#define ZCL_USING_MFGLIB_CLUSTER_CLIENT
/**** Optional Attributes ****/
#define ZCL_USING_COLOR_CONTROL_CLUSTER_COLOR_CONTROL_CURRENT_HUE_ATTRIBUTE 
#define ZCL_USING_COLOR_CONTROL_CLUSTER_COLOR_CONTROL_CURRENT_SATURATION_ATTRIBUTE 
#define ZCL_USING_COLOR_CONTROL_CLUSTER_COLOR_CONTROL_REMAINING_TIME_ATTRIBUTE 
#define ZCL_USING_COLOR_CONTROL_CLUSTER_COLOR_CONTROL_COLOR_TEMPERATURE_ATTRIBUTE 
#define ZCL_USING_COLOR_CONTROL_CLUSTER_COLOR_CONTROL_COLOR_MODE_ATTRIBUTE 
#define ZCL_USING_COLOR_CONTROL_CLUSTER_COLOR_CONTROL_NUMBER_OF_PRIMARIES_ATTRIBUTE 
#define ZCL_USING_COLOR_CONTROL_CLUSTER_COLOR_CONTROL_ENHANCED_COLOR_MODE_ATTRIBUTE 
#define ZCL_USING_COLOR_CONTROL_CLUSTER_COLOR_CONTROL_COLOR_CAPABILITIES_ATTRIBUTE 
#define ZCL_USING_COLOR_CONTROL_CLUSTER_COLOR_CONTROL_COLOR_TEMP_PHYSICAL_MIN_ATTRIBUTE 
#define ZCL_USING_COLOR_CONTROL_CLUSTER_COLOR_CONTROL_COLOR_TEMP_PHYSICAL_MAX_ATTRIBUTE 
#define EMBER_AF_MANUFACTURER_CODE 0x1002
#define EMBER_AF_DEFAULT_RESPONSE_POLICY_CONDITIONAL

/**** Cluster endpoint counts ****/
#define EMBER_AF_BASIC_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_IDENTIFY_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_IDENTIFY_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_GROUPS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_SCENES_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_ON_OFF_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_ON_OFF_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_LEVEL_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_LEVEL_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_TIME_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_OTA_BOOTLOAD_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_POWER_PROFILE_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_POLL_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_GREEN_POWER_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_KEEPALIVE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_KEEPALIVE_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_COLOR_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_COLOR_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_ILLUM_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_TEMP_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_OCCUPANCY_SENSING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_IAS_ZONE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_PRICE_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_SIMPLE_METERING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_SIMPLE_METERING_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_MESSAGING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_MESSAGING_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_TUNNELING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_TUNNELING_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_PREPAYMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_PREPAYMENT_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_ENERGY_MANAGEMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_ENERGY_MANAGEMENT_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_CALENDAR_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_CALENDAR_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_DEVICE_MANAGEMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_DEVICE_MANAGEMENT_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_EVENTS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_EVENTS_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_MDU_PAIRING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_MDU_PAIRING_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_SUB_GHZ_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_SUB_GHZ_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_METER_IDENTIFICATION_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_METER_IDENTIFICATION_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_APPLIANCE_STATISTICS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_ELECTRICAL_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_OTA_CONFIGURATION_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_MFGLIB_CLUSTER_CLIENT_ENDPOINT_COUNT (1)

/**** Cluster Endpoint Summaries ****/
#define EMBER_AF_MAX_SERVER_CLUSTER_COUNT (22)
#define EMBER_AF_MAX_CLIENT_CLUSTER_COUNT (31)
#define EMBER_AF_MAX_TOTAL_CLUSTER_COUNT (53)

/**** CLI Section ****/
#define EMBER_AF_GENERATE_CLI
#define EMBER_AF_ENABLE_CUSTOM_COMMANDS
#define EMBER_COMMAND_INTEPRETER_HAS_DESCRIPTION_FIELD

/**** Security Section ****/
#define EMBER_AF_HAS_SECURITY_PROFILE_Z3

/**** Network Section ****/
#define EMBER_SUPPORTED_NETWORKS (1)
#define EMBER_AF_NETWORK_INDEX_PRIMARY (0)
#define EMBER_AF_DEFAULT_NETWORK_INDEX EMBER_AF_NETWORK_INDEX_PRIMARY
#define EMBER_AF_HAS_COORDINATOR_NETWORK
#define EMBER_AF_HAS_ROUTER_NETWORK
#define EMBER_AF_HAS_RX_ON_WHEN_IDLE_NETWORK
#define EMBER_AF_TX_POWER_MODE EMBER_TX_POWER_MODE_USE_TOKEN
#define EMBER_AF_ENABLE_TX_ZDO

/**** Callback Section ****/
#define EMBER_CALLBACK_IAS_ZONE_CLUSTER_IAS_ZONE_CLUSTER_CLIENT_INIT
#define EMBER_CALLBACK_IAS_ZONE_CLUSTER_ZONE_ENROLL_REQUEST
#define EMBER_CALLBACK_IAS_ZONE_CLUSTER_ZONE_STATUS_CHANGE_NOTIFICATION
#define EMBER_CALLBACK_ENERGY_SCAN_RESULT
#define EMBER_CALLBACK_SCAN_COMPLETE
#define EMBER_CALLBACK_NETWORK_FOUND
#define EMBER_CALLBACK_SIMPLE_METERING_CLUSTER_GET_PROFILE_RESPONSE
#define EMBER_CALLBACK_SIMPLE_METERING_CLUSTER_REQUEST_MIRROR
#define EMBER_CALLBACK_SIMPLE_METERING_CLUSTER_REMOVE_MIRROR
#define EMBER_CALLBACK_SIMPLE_METERING_CLUSTER_REQUEST_FAST_POLL_MODE_RESPONSE
#define EMBER_CALLBACK_SIMPLE_METERING_CLUSTER_SIMPLE_METERING_CLUSTER_CLIENT_DEFAULT_RESPONSE
#define EMBER_CALLBACK_SIMPLE_METERING_CLUSTER_SUPPLY_STATUS_RESPONSE
#define EMBER_CALLBACK_CLUSTER_SECURITY_CUSTOM
#define EMBER_CALLBACK_OTA_SERVER_QUERY
#define EMBER_CALLBACK_OTA_SERVER_BLOCK_SIZE
#define EMBER_CALLBACK_OTA_SERVER_UPGRADE_END_REQUEST
#define EMBER_CALLBACK_OTA_PAGE_REQUEST_SERVER_POLICY
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_OTA_BOOTLOAD_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_OTA_BOOTLOAD_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_OTA_SERVER_INCOMING_MESSAGE_RAW
#define EMBER_CALLBACK_OTA_SERVER_SEND_IMAGE_NOTIFY
#define EMBER_CALLBACK_GREEN_POWER_CLUSTER_GP_NOTIFICATION_RESPONSE
#define EMBER_CALLBACK_GREEN_POWER_CLUSTER_GP_PAIRING
#define EMBER_CALLBACK_GREEN_POWER_CLUSTER_GP_PROXY_COMMISSIONING_MODE
#define EMBER_CALLBACK_GREEN_POWER_CLUSTER_GP_RESPONSE
#define EMBER_CALLBACK_GREEN_POWER_CLUSTER_GP_SINK_TABLE_RESPONSE
#define EMBER_CALLBACK_GREEN_POWER_CLUSTER_GP_PROXY_TABLE_REQUEST
#define EMBER_CALLBACK_CONFIGURE_REPORTING_COMMAND
#define EMBER_CALLBACK_READ_REPORTING_CONFIGURATION_COMMAND
#define EMBER_CALLBACK_CLEAR_REPORT_TABLE
#define EMBER_CALLBACK_REPORTING_ATTRIBUTE_CHANGE
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_ATTRIBUTE_CHANGED
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_QUERY
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_QUERY_RESPONSE
#define EMBER_CALLBACK_MAIN_START
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_LEVEL_CONTROL_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_LEVEL_CONTROL_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE_TO_LEVEL
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE_TO_LEVEL_WITH_ON_OFF
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE_WITH_ON_OFF
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STEP
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STEP_WITH_ON_OFF
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STOP
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STOP_WITH_ON_OFF
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_LEVEL_CONTROL_EFFECT
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_COLOR_CONTROL_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_STOP_MOVE_STEP
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_MOVE_TO_COLOR
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_MOVE_COLOR
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_STEP_COLOR
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_MOVE_TO_COLOR_TEMPERATURE
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_MOVE_COLOR_TEMPERATURE
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_STEP_COLOR_TEMPERATURE
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_MOVE_TO_HUE_AND_SATURATION
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_MOVE_HUE
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_MOVE_SATURATION
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_MOVE_TO_HUE
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_MOVE_TO_SATURATION
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_STEP_HUE
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_STEP_SATURATION
#define EMBER_CALLBACK_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_APPLICATION_HAS_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_CALLBACK_EZSP_INCOMING_ROUTE_ERROR_HANDLER
#define EZSP_APPLICATION_HAS_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_CALLBACK_GET_SOURCE_ROUTE_OVERHEAD
#define EMBER_CALLBACK_SET_SOURCE_ROUTE_OVERHEAD
#define EMBER_CALLBACK_OTA_STORAGE_INIT
#define EMBER_CALLBACK_OTA_STORAGE_GET_COUNT
#define EMBER_CALLBACK_OTA_STORAGE_SEARCH
#define EMBER_CALLBACK_OTA_STORAGE_ITERATOR_FIRST
#define EMBER_CALLBACK_OTA_STORAGE_ITERATOR_NEXT
#define EMBER_CALLBACK_OTA_STORAGE_CLEAR_TEMP_DATA
#define EMBER_CALLBACK_OTA_STORAGE_WRITE_TEMP_DATA
#define EMBER_CALLBACK_OTA_STORAGE_GET_FULL_HEADER
#define EMBER_CALLBACK_OTA_STORAGE_GET_TOTAL_IMAGE_SIZE
#define EMBER_CALLBACK_OTA_STORAGE_READ_IMAGE_DATA
#define EMBER_CALLBACK_OTA_STORAGE_CHECK_TEMP_DATA
#define EMBER_CALLBACK_OTA_STORAGE_FINISH_DOWNLOAD
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_PREPARE_TO_RESUME_DOWNLOAD
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_ON_OFF_CLUSTER_OFF
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON
#define EMBER_CALLBACK_ON_OFF_CLUSTER_TOGGLE
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_SET_VALUE
#define EMBER_CALLBACK_POLL_CONTROL_CLUSTER_CHECK_IN
#define EMBER_CALLBACK_TIME_CLUSTER_TIME_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_TIME_CLUSTER_TIME_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_COUNTER_HANDLER
#define EMBER_APPLICATION_HAS_COUNTER_HANDLER
#define EMBER_CALLBACK_EZSP_COUNTER_ROLLOVER_HANDLER
#define EZSP_APPLICATION_HAS_COUNTER_ROLLOVER_HANDLER
#define EMBER_CALLBACK_BASIC_CLUSTER_RESET_TO_FACTORY_DEFAULTS
/**** Debug printing section ****/

// Global switch
#define EMBER_AF_PRINT_ENABLE
// Individual areas
#define EMBER_AF_PRINT_CORE 0x0001
#define EMBER_AF_PRINT_APP 0x0002
#define EMBER_AF_PRINT_SECURITY 0x0004
#define EMBER_AF_PRINT_ATTRIBUTES 0x0008
#define EMBER_AF_PRINT_OTA_BOOTLOAD_CLUSTER 0x0010
#define EMBER_AF_PRINT_BITS { 0x1F }
#define EMBER_AF_PRINT_NAMES { \
  "Core",\
  "Application",\
  "Security",\
  "Attributes",\
  "Over the Air Bootloading",\
  NULL\
}
#define EMBER_AF_PRINT_NAME_NUMBER 5


#define EMBER_AF_SUPPORT_COMMAND_DISCOVERY


// Generated plugin macros

// Use this macro to check if Address Table plugin is included
#define EMBER_AF_PLUGIN_ADDRESS_TABLE
// User options for plugin Address Table
#define EMBER_AF_PLUGIN_ADDRESS_TABLE_SIZE 2
#define EMBER_AF_PLUGIN_ADDRESS_TABLE_TRUST_CENTER_CACHE_SIZE 2

// Use this macro to check if Basic Server Cluster plugin is included
#define EMBER_AF_PLUGIN_BASIC

// Use this macro to check if Color Control Cluster Server plugin is included
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER
// User options for plugin Color Control Cluster Server
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_XY
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_TEMP
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_HSV
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_MIN_REPORT_INTERVAL 1
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_MAX_REPORT_INTERVAL 65535
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_COLOR_XY_CHANGE 1
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_COLOR_TEMP_CHANGE 1
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_HUE_CHANGE 1
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_SATURATION_CHANGE 1

// Use this macro to check if Concentrator Support plugin is included
#define EMBER_AF_PLUGIN_CONCENTRATOR
// User options for plugin Concentrator Support
#define EMBER_AF_PLUGIN_CONCENTRATOR_CONCENTRATOR_TYPE HIGH_RAM_CONCENTRATOR
#define EMBER_AF_PLUGIN_CONCENTRATOR_MIN_TIME_BETWEEN_BROADCASTS_SECONDS 5
#define EMBER_AF_PLUGIN_CONCENTRATOR_MAX_TIME_BETWEEN_BROADCASTS_SECONDS 60
#define EMBER_AF_PLUGIN_CONCENTRATOR_ROUTE_ERROR_THRESHOLD 3
#define EMBER_AF_PLUGIN_CONCENTRATOR_DELIVERY_FAILURE_THRESHOLD 3
#define EMBER_AF_PLUGIN_CONCENTRATOR_MAX_HOPS 0
#define EMBER_AF_PLUGIN_CONCENTRATOR_DEFAULT_ROUTER_BEHAVIOR FULL

// Use this macro to check if Counters plugin is included
#define EMBER_AF_PLUGIN_COUNTERS
// User options for plugin Counters

// Use this macro to check if EZ-Mode Commissioning plugin is included
#define EMBER_AF_PLUGIN_EZMODE_COMMISSIONING
// User options for plugin EZ-Mode Commissioning
#define EMBER_AF_PLUGIN_EZMODE_COMMISSIONING_IDENTIFY_TIMEOUT 180

// Use this macro to check if EZSP Common plugin is included
#define EMBER_AF_PLUGIN_EZSP

// Use this macro to check if EZSP UART plugin is included
#define EMBER_AF_PLUGIN_EZSP_UART

// Use this macro to check if File Descriptor Dispatch plugin is included
#define EMBER_AF_PLUGIN_FILE_DESCRIPTOR_DISPATCH

// Use this macro to check if Gateway Support plugin is included
#define EMBER_AF_PLUGIN_GATEWAY
// User options for plugin Gateway Support
#define EMBER_AF_PLUGIN_GATEWAY_MAX_FDS 10
#define EMBER_AF_PLUGIN_GATEWAY_TCP_PORT_OFFSET 4900
#define EMBER_AF_PLUGIN_GATEWAY_MAX_WAIT_FOR_EVENT_TIMEOUT_MS 0xFFFFFFFF

// Use this macro to check if Green Power Client plugin is included
#define EMBER_AF_PLUGIN_GREEN_POWER_CLIENT
#define EZSP_APPLICATION_HAS_GPEP_INCOMING_MESSAGE_HANDLER
#define EZSP_APPLICATION_HAS_DGP_SENT_HANDLER
// User options for plugin Green Power Client
#define EMBER_AF_PLUGIN_GREEN_POWER_CLIENT_GPP_COMMISSIONING_WINDOW 160
#define EMBER_AF_PLUGIN_GREEN_POWER_CLIENT_GPP_DUPLICATE_TIMEOUT_SEC 160
#define EMBER_AF_PLUGIN_GREEN_POWER_CLIENT_MAX_ADDR_ENTRIES 3
#define EMBER_AF_PLUGIN_GREEN_POWER_CLIENT_MAX_SEQ_NUM_ENTRIES_PER_ADDR 4

// Use this macro to check if Green Power Common plugin is included
#define EMBER_AF_PLUGIN_GREEN_POWER_COMMON

// Use this macro to check if Heartbeat plugin is included
#define EMBER_AF_PLUGIN_HEARTBEAT
// User options for plugin Heartbeat
#define EMBER_AF_PLUGIN_HEARTBEAT_PERIOD_QS 1

// Use this macro to check if IAS Zone Client plugin is included
#define EMBER_AF_PLUGIN_IAS_ZONE_CLIENT
// User options for plugin IAS Zone Client
#define EMBER_AF_PLUGIN_IAS_ZONE_CLIENT_MAX_DEVICES 40

// Use this macro to check if Identify Cluster plugin is included
#define EMBER_AF_PLUGIN_IDENTIFY

// Use this macro to check if Identify Feedback plugin is included
#define EMBER_AF_PLUGIN_IDENTIFY_FEEDBACK
// User options for plugin Identify Feedback
#define EMBER_AF_PLUGIN_IDENTIFY_FEEDBACK_LED_FEEDBACK

// Use this macro to check if Level Control Server Cluster plugin is included
#define EMBER_AF_PLUGIN_LEVEL_CONTROL
// User options for plugin Level Control Server Cluster
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_MAXIMUM_LEVEL 255
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_MINIMUM_LEVEL 0
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_RATE 0

// Use this macro to check if Linked List plugin is included
#define EMBER_AF_PLUGIN_LINKED_LIST

// Use this macro to check if mbed TLS plugin is included
#define EMBER_AF_PLUGIN_MBEDTLS

// Use this macro to check if NCP Configuration plugin is included
#define EMBER_AF_PLUGIN_NCP_CONFIGURATION
// User options for plugin NCP Configuration
#define EMBER_BINDING_TABLE_SIZE 16
#define EMBER_SOURCE_ROUTE_TABLE_SIZE 100
#define EMBER_MAX_END_DEVICE_CHILDREN 32
#define EMBER_END_DEVICE_KEEP_ALIVE_SUPPORT_MODE EMBER_KEEP_ALIVE_SUPPORT_ALL
#define EMBER_END_DEVICE_POLL_TIMEOUT MINUTES_256
#define EMBER_END_DEVICE_POLL_TIMEOUT_SHIFT 6
#define EMBER_KEY_TABLE_SIZE 4
#define EMBER_ZLL_GROUP_ADDRESSES 0
#define EMBER_ZLL_RSSI_THRESHOLD -40
#define EMBER_TRANSIENT_KEY_TIMEOUT_S 180
#define EMBER_APS_UNICAST_MESSAGE_COUNT 10
#define EMBER_BROADCAST_TABLE_SIZE 15
#define EMBER_NEIGHBOR_TABLE_SIZE 16
#define EMBER_GP_PROXY_TABLE_SIZE 5
#define EMBER_GP_SINK_TABLE_SIZE 0

// Use this macro to check if Network Creator plugin is included
#define EMBER_AF_PLUGIN_NETWORK_CREATOR
// User options for plugin Network Creator
#define EMBER_AF_PLUGIN_NETWORK_CREATOR_SCAN_DURATION 4
#define EMBER_AF_PLUGIN_NETWORK_CREATOR_CHANNEL_MASK 0x02108800
#define EMBER_AF_PLUGIN_NETWORK_CREATOR_CHANNEL_BEACONS_THRESHOLD 20
#define EMBER_AF_PLUGIN_NETWORK_CREATOR_RADIO_POWER -2

// Use this macro to check if Network Creator Security plugin is included
#define EMBER_AF_PLUGIN_NETWORK_CREATOR_SECURITY
// User options for plugin Network Creator Security
#define EMBER_AF_PLUGIN_NETWORK_CREATOR_SECURITY_NETWORK_OPEN_TIME_S 180
#define EMBER_AF_PLUGIN_NETWORK_CREATOR_SECURITY_TRUST_CENTER_SUPPORT
#define EMBER_AF_PLUGIN_NETWORK_CREATOR_SECURITY_ALLOW_HA_DEVICES_TO_STAY

// Use this macro to check if Network Steering plugin is included
#define EMBER_AF_PLUGIN_NETWORK_STEERING
// User options for plugin Network Steering
#define EMBER_AF_PLUGIN_NETWORK_STEERING_CHANNEL_MASK 0x0318C800
#define EMBER_AF_PLUGIN_NETWORK_STEERING_RADIO_TX_POWER 3
#define EMBER_AF_PLUGIN_NETWORK_STEERING_SCAN_DURATION 4
#define EMBER_AF_PLUGIN_NETWORK_STEERING_COMMISSIONING_TIME_S 180
#define EMBER_AF_PLUGIN_NETWORK_STEERING_OPTIMIZE_SCANS

// Use this macro to check if On/Off Server Cluster plugin is included
#define EMBER_AF_PLUGIN_ON_OFF

// Use this macro to check if OTA Bootload Cluster Common Code plugin is included
#define EMBER_AF_PLUGIN_OTA_COMMON

// Use this macro to check if OTA Bootload Cluster Server plugin is included
#define EMBER_AF_PLUGIN_OTA_SERVER
// User options for plugin OTA Bootload Cluster Server
#define EMBER_AF_PLUGIN_OTA_SERVER_MIN_BLOCK_REQUEST_SUPPORT

// Use this macro to check if OTA Bootload Cluster Server Policy plugin is included
#define EMBER_AF_PLUGIN_OTA_SERVER_POLICY

// Use this macro to check if OTA Bootload Cluster Storage Common Code plugin is included
#define EMBER_AF_PLUGIN_OTA_STORAGE_COMMON
// User options for plugin OTA Bootload Cluster Storage Common Code
#define EMBER_AF_PLUGIN_OTA_STORAGE_COMMON_MAX_TAGS_IN_OTA_FILE 6

// Use this macro to check if OTA POSIX Filesystem Storage Module plugin is included
#define EMBER_AF_PLUGIN_OTA_STORAGE_POSIX_FILESYSTEM

// Use this macro to check if Poll Control Client Cluster plugin is included
#define EMBER_AF_PLUGIN_POLL_CONTROL_CLIENT
// User options for plugin Poll Control Client Cluster
#define EMBER_AF_PLUGIN_POLL_CONTROL_CLIENT_DEFAULT_FAST_POLL_TIMEOUT 32

// Use this macro to check if Reporting plugin is included
#define EMBER_AF_PLUGIN_REPORTING
// User options for plugin Reporting
#define EMBER_AF_PLUGIN_REPORTING_TABLE_SIZE 10
#define EMBER_AF_PLUGIN_REPORTING_ENABLE_GROUP_BOUND_REPORTS

// Use this macro to check if Scan Dispatch plugin is included
#define EMBER_AF_PLUGIN_SCAN_DISPATCH
// User options for plugin Scan Dispatch
#define EMBER_AF_PLUGIN_SCAN_DISPATCH_SCAN_QUEUE_SIZE 10

// Use this macro to check if EZSP Secure Protocol Stub plugin is included
#define EMBER_AF_PLUGIN_SECURE_EZSP_STUB

// Use this macro to check if Simple Main plugin is included
#define EMBER_AF_PLUGIN_SIMPLE_MAIN

// Use this macro to check if Simple Metering Client plugin is included
#define EMBER_AF_PLUGIN_SIMPLE_METERING_CLIENT
// User options for plugin Simple Metering Client
#define EMBER_AF_PLUGIN_SIMPLE_METERING_CLIENT_NUMBER_OF_INTERVALS_SUPPORTED 4

// Use this macro to check if Stack Diagnostics plugin is included
#define EMBER_AF_PLUGIN_STACK_DIAGNOSTICS

// Use this macro to check if Test Harness plugin is included
#define EMBER_AF_PLUGIN_TEST_HARNESS
// User options for plugin Test Harness

// Use this macro to check if Time Server Cluster plugin is included
#define EMBER_AF_PLUGIN_TIME_SERVER
// User options for plugin Time Server Cluster

// Use this macro to check if Trust Center Network Key Update Broadcast plugin is included
#define EMBER_AF_PLUGIN_TRUST_CENTER_NWK_KEY_UPDATE_BROADCAST

// Use this macro to check if Trust Center Network Key Update Periodic plugin is included
#define EMBER_AF_PLUGIN_TRUST_CENTER_NWK_KEY_UPDATE_PERIODIC
// User options for plugin Trust Center Network Key Update Periodic
#define EMBER_AF_PLUGIN_TRUST_CENTER_NWK_KEY_UPDATE_PERIODIC_KEY_UPDATE_PERIOD 30
#define EMBER_AF_PLUGIN_TRUST_CENTER_NWK_KEY_UPDATE_PERIODIC_KEY_UPDATE_UNITS MINUTES

// Use this macro to check if Trust Center Network Key Update Unicast plugin is included
#define EMBER_AF_PLUGIN_TRUST_CENTER_NWK_KEY_UPDATE_UNICAST

// Use this macro to check if Unix Library plugin is included
#define EMBER_AF_PLUGIN_UNIX_LIBRARY
// User options for plugin Unix Library

// Use this macro to check if Unix Printf plugin is included
#define EMBER_AF_PLUGIN_UNIX_PRINTF

// Use this macro to check if Update TC Link Key plugin is included
#define EMBER_AF_PLUGIN_UPDATE_TC_LINK_KEY
// User options for plugin Update TC Link Key
#define EMBER_AF_PLUGIN_UPDATE_TC_LINK_KEY_MAX_ATTEMPTS 3

// Use this macro to check if ZCL Framework Core plugin is included
#define EMBER_AF_PLUGIN_ZCL_FRAMEWORK_CORE
// User options for plugin ZCL Framework Core
#define EMBER_AF_PLUGIN_ZCL_FRAMEWORK_CORE_CLI_ENABLED
#define ZA_CLI_FULL


// Generated API headers

// API ezsp-protocol from EZSP Common plugin
#define EMBER_AF_API_EZSP_PROTOCOL "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/protocol/zigbee/app/util/ezsp/ezsp-protocol.h"

// API ezsp from EZSP Common plugin
#define EMBER_AF_API_EZSP "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/protocol/zigbee/app/util/ezsp/ezsp.h"

// API green-power-common from Green Power Common plugin
#define EMBER_AF_API_GREEN_POWER_COMMON "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/protocol/zigbee/app/framework/plugin/green-power-common/green-power-common.h"

// API linked-list from Linked List plugin
#define EMBER_AF_API_LINKED_LIST "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/util/plugin/plugin-common/linked-list/linked-list.h"

// API network-creator from Network Creator plugin
#define EMBER_AF_API_NETWORK_CREATOR "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/protocol/zigbee/app/framework/plugin/network-creator/network-creator.h"

// API network-creator-security from Network Creator Security plugin
#define EMBER_AF_API_NETWORK_CREATOR_SECURITY "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/protocol/zigbee/app/framework/plugin/network-creator-security/network-creator-security.h"

// API network-steering from Network Steering plugin
#define EMBER_AF_API_NETWORK_STEERING "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/protocol/zigbee/app/framework/plugin/network-steering/network-steering.h"

// API scan-dispatch from Scan Dispatch plugin
#define EMBER_AF_API_SCAN_DISPATCH "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/protocol/zigbee/app/framework/plugin/scan-dispatch/scan-dispatch.h"

// API ezsp-secure from EZSP Secure Protocol Stub plugin
#define EMBER_AF_API_EZSP_SECURE "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/protocol/zigbee/app/util/ezsp/secure-ezsp-protocol.h"

// API crc from Unix Library plugin
#define EMBER_AF_API_CRC "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/micro/crc.h"

// API endian from Unix Library plugin
#define EMBER_AF_API_ENDIAN "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/micro/endian.h"

// API hal from Unix Library plugin
#define EMBER_AF_API_HAL "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/hal.h"

// API random from Unix Library plugin
#define EMBER_AF_API_RANDOM "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/micro/random.h"

// API system-timer from Unix Library plugin
#define EMBER_AF_API_SYSTEM_TIMER "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/micro/system-timer.h"

// API update-tc-link-key from Update TC Link Key plugin
#define EMBER_AF_API_UPDATE_TC_LINK_KEY "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/protocol/zigbee/app/framework/plugin/update-tc-link-key/update-tc-link-key.h"

// API command-interpreter2 from ZCL Framework Core plugin
#define EMBER_AF_API_COMMAND_INTERPRETER2 "../../../../../SiliconLabs/SimplicityStudio/v4_3/developer/sdks/gecko_sdk_suite/v2.7/protocol/zigbee/app/util/serial/command-interpreter2.h"


// Custom macros
#ifdef APP_SERIAL
#undef APP_SERIAL
#endif
#define APP_SERIAL 1

#ifdef EMBER_ASSERT_SERIAL_PORT
#undef EMBER_ASSERT_SERIAL_PORT
#endif
#define EMBER_ASSERT_SERIAL_PORT 1

#ifdef EMBER_AF_BAUD_RATE
#undef EMBER_AF_BAUD_RATE
#endif
#define EMBER_AF_BAUD_RATE 19200

#ifdef EMBER_AF_SERIAL_PORT_INIT
#undef EMBER_AF_SERIAL_PORT_INIT
#endif
#define EMBER_AF_SERIAL_PORT_INIT() \
  do { \
    emberSerialInit(1, BAUD_19200, PARITY_NONE, 1); \
  } while (0)



#endif // SILABS_ZNET_CONFIG
