/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5-dev */

#ifndef PB_WIPPERSNAPPER_PIN_V1_WIPPERSNAPPER_PIN_V1_PIN_PB_H_INCLUDED
#define PB_WIPPERSNAPPER_PIN_V1_WIPPERSNAPPER_PIN_V1_PIN_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _wippersnapper_pin_v1_ConfigurePinRequest_Mode {
    wippersnapper_pin_v1_ConfigurePinRequest_Mode_MODE_UNSPECIFIED = 0,
    wippersnapper_pin_v1_ConfigurePinRequest_Mode_MODE_ANALOG = 1,
    wippersnapper_pin_v1_ConfigurePinRequest_Mode_MODE_DIGITAL = 2
} wippersnapper_pin_v1_ConfigurePinRequest_Mode;

typedef enum _wippersnapper_pin_v1_ConfigurePinRequest_Direction {
    wippersnapper_pin_v1_ConfigurePinRequest_Direction_DIRECTION_UNSPECIFIED = 0,
    wippersnapper_pin_v1_ConfigurePinRequest_Direction_DIRECTION_INPUT = 1,
    wippersnapper_pin_v1_ConfigurePinRequest_Direction_DIRECTION_OUTPUT = 2
} wippersnapper_pin_v1_ConfigurePinRequest_Direction;

typedef enum _wippersnapper_pin_v1_ConfigurePinRequest_Pull {
    wippersnapper_pin_v1_ConfigurePinRequest_Pull_PULL_UNSPECIFIED = 0,
    wippersnapper_pin_v1_ConfigurePinRequest_Pull_PULL_UP = 1,
    wippersnapper_pin_v1_ConfigurePinRequest_Pull_PULL_DOWN = 2
} wippersnapper_pin_v1_ConfigurePinRequest_Pull;

typedef enum _wippersnapper_pin_v1_ConfigurePinResponse_PinResponse {
    wippersnapper_pin_v1_ConfigurePinResponse_PinResponse_PIN_RESPONSE_UNSPECIFIED = 0,
    wippersnapper_pin_v1_ConfigurePinResponse_PinResponse_PIN_RESPONSE_OK = 1,
    wippersnapper_pin_v1_ConfigurePinResponse_PinResponse_PIN_RESPONSE_INPUT_ONLY = 2,
    wippersnapper_pin_v1_ConfigurePinResponse_PinResponse_PIN_RESPONSE_INVALID_DIRECTION = 3,
    wippersnapper_pin_v1_ConfigurePinResponse_PinResponse_PIN_RESPONSE_INVALID_PULL = 4,
    wippersnapper_pin_v1_ConfigurePinResponse_PinResponse_PIN_RESPONSE_INVALID_DATA = 5
} wippersnapper_pin_v1_ConfigurePinResponse_PinResponse;

typedef enum _wippersnapper_pin_v1_PinEventResponse_PinEventResponse {
    wippersnapper_pin_v1_PinEventResponse_PinEventResponse_PIN_EVENT_RESPONSE_UNSPECIFIED = 0,
    wippersnapper_pin_v1_PinEventResponse_PinEventResponse_PIN_EVENT_RESPONSE_OK = 1,
    wippersnapper_pin_v1_PinEventResponse_PinEventResponse_PIN_EVENT_RESPONSE_INVALID = 2
} wippersnapper_pin_v1_PinEventResponse_PinEventResponse;

/* Struct definitions */
typedef struct _wippersnapper_pin_v1_ConfigurePWMPinRequests {
    pb_callback_t list;
} wippersnapper_pin_v1_ConfigurePWMPinRequests;

typedef struct _wippersnapper_pin_v1_ConfigurePinRequests {
    pb_callback_t list;
} wippersnapper_pin_v1_ConfigurePinRequests;

typedef struct _wippersnapper_pin_v1_PWMPinEvents {
    pb_callback_t list;
} wippersnapper_pin_v1_PWMPinEvents;

typedef struct _wippersnapper_pin_v1_PinEvents {
    pb_callback_t list;
} wippersnapper_pin_v1_PinEvents;

typedef struct _wippersnapper_pin_v1_ConfigurePWMPinRequest {
    char pin_name[5];
    int32_t duty_cycle;
    int32_t frequency;
    bool variable_frequency;
} wippersnapper_pin_v1_ConfigurePWMPinRequest;

typedef struct _wippersnapper_pin_v1_ConfigurePinRequest {
    char pin_name[5];
    wippersnapper_pin_v1_ConfigurePinRequest_Mode mode;
    wippersnapper_pin_v1_ConfigurePinRequest_Direction direction;
    wippersnapper_pin_v1_ConfigurePinRequest_Pull pull;
    int32_t period;
} wippersnapper_pin_v1_ConfigurePinRequest;

typedef struct _wippersnapper_pin_v1_ConfigurePinResponse {
    wippersnapper_pin_v1_ConfigurePinResponse_PinResponse response;
} wippersnapper_pin_v1_ConfigurePinResponse;

typedef struct _wippersnapper_pin_v1_PWMPinEvent {
    int32_t duty_cycle;
} wippersnapper_pin_v1_PWMPinEvent;

typedef struct _wippersnapper_pin_v1_PinEvent {
    char pin_name[5];
    char pin_value[12];
} wippersnapper_pin_v1_PinEvent;

typedef struct _wippersnapper_pin_v1_PinEventResponse {
    wippersnapper_pin_v1_PinEventResponse_PinEventResponse response;
} wippersnapper_pin_v1_PinEventResponse;


/* Helper constants for enums */
#define _wippersnapper_pin_v1_ConfigurePinRequest_Mode_MIN wippersnapper_pin_v1_ConfigurePinRequest_Mode_MODE_UNSPECIFIED
#define _wippersnapper_pin_v1_ConfigurePinRequest_Mode_MAX wippersnapper_pin_v1_ConfigurePinRequest_Mode_MODE_DIGITAL
#define _wippersnapper_pin_v1_ConfigurePinRequest_Mode_ARRAYSIZE ((wippersnapper_pin_v1_ConfigurePinRequest_Mode)(wippersnapper_pin_v1_ConfigurePinRequest_Mode_MODE_DIGITAL+1))

#define _wippersnapper_pin_v1_ConfigurePinRequest_Direction_MIN wippersnapper_pin_v1_ConfigurePinRequest_Direction_DIRECTION_UNSPECIFIED
#define _wippersnapper_pin_v1_ConfigurePinRequest_Direction_MAX wippersnapper_pin_v1_ConfigurePinRequest_Direction_DIRECTION_OUTPUT
#define _wippersnapper_pin_v1_ConfigurePinRequest_Direction_ARRAYSIZE ((wippersnapper_pin_v1_ConfigurePinRequest_Direction)(wippersnapper_pin_v1_ConfigurePinRequest_Direction_DIRECTION_OUTPUT+1))

#define _wippersnapper_pin_v1_ConfigurePinRequest_Pull_MIN wippersnapper_pin_v1_ConfigurePinRequest_Pull_PULL_UNSPECIFIED
#define _wippersnapper_pin_v1_ConfigurePinRequest_Pull_MAX wippersnapper_pin_v1_ConfigurePinRequest_Pull_PULL_DOWN
#define _wippersnapper_pin_v1_ConfigurePinRequest_Pull_ARRAYSIZE ((wippersnapper_pin_v1_ConfigurePinRequest_Pull)(wippersnapper_pin_v1_ConfigurePinRequest_Pull_PULL_DOWN+1))

#define _wippersnapper_pin_v1_ConfigurePinResponse_PinResponse_MIN wippersnapper_pin_v1_ConfigurePinResponse_PinResponse_PIN_RESPONSE_UNSPECIFIED
#define _wippersnapper_pin_v1_ConfigurePinResponse_PinResponse_MAX wippersnapper_pin_v1_ConfigurePinResponse_PinResponse_PIN_RESPONSE_INVALID_DATA
#define _wippersnapper_pin_v1_ConfigurePinResponse_PinResponse_ARRAYSIZE ((wippersnapper_pin_v1_ConfigurePinResponse_PinResponse)(wippersnapper_pin_v1_ConfigurePinResponse_PinResponse_PIN_RESPONSE_INVALID_DATA+1))

#define _wippersnapper_pin_v1_PinEventResponse_PinEventResponse_MIN wippersnapper_pin_v1_PinEventResponse_PinEventResponse_PIN_EVENT_RESPONSE_UNSPECIFIED
#define _wippersnapper_pin_v1_PinEventResponse_PinEventResponse_MAX wippersnapper_pin_v1_PinEventResponse_PinEventResponse_PIN_EVENT_RESPONSE_INVALID
#define _wippersnapper_pin_v1_PinEventResponse_PinEventResponse_ARRAYSIZE ((wippersnapper_pin_v1_PinEventResponse_PinEventResponse)(wippersnapper_pin_v1_PinEventResponse_PinEventResponse_PIN_EVENT_RESPONSE_INVALID+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define wippersnapper_pin_v1_ConfigurePinRequest_init_default {"", _wippersnapper_pin_v1_ConfigurePinRequest_Mode_MIN, _wippersnapper_pin_v1_ConfigurePinRequest_Direction_MIN, _wippersnapper_pin_v1_ConfigurePinRequest_Pull_MIN, 0}
#define wippersnapper_pin_v1_ConfigurePinRequests_init_default {{{NULL}, NULL}}
#define wippersnapper_pin_v1_ConfigurePinResponse_init_default {_wippersnapper_pin_v1_ConfigurePinResponse_PinResponse_MIN}
#define wippersnapper_pin_v1_PinEvent_init_default {"", ""}
#define wippersnapper_pin_v1_PinEvents_init_default {{{NULL}, NULL}}
#define wippersnapper_pin_v1_PinEventResponse_init_default {_wippersnapper_pin_v1_PinEventResponse_PinEventResponse_MIN}
#define wippersnapper_pin_v1_ConfigurePWMPinRequest_init_default {"", 0, 0, 0}
#define wippersnapper_pin_v1_ConfigurePWMPinRequests_init_default {{{NULL}, NULL}}
#define wippersnapper_pin_v1_PWMPinEvent_init_default {0}
#define wippersnapper_pin_v1_PWMPinEvents_init_default {{{NULL}, NULL}}
#define wippersnapper_pin_v1_ConfigurePinRequest_init_zero {"", _wippersnapper_pin_v1_ConfigurePinRequest_Mode_MIN, _wippersnapper_pin_v1_ConfigurePinRequest_Direction_MIN, _wippersnapper_pin_v1_ConfigurePinRequest_Pull_MIN, 0}
#define wippersnapper_pin_v1_ConfigurePinRequests_init_zero {{{NULL}, NULL}}
#define wippersnapper_pin_v1_ConfigurePinResponse_init_zero {_wippersnapper_pin_v1_ConfigurePinResponse_PinResponse_MIN}
#define wippersnapper_pin_v1_PinEvent_init_zero  {"", ""}
#define wippersnapper_pin_v1_PinEvents_init_zero {{{NULL}, NULL}}
#define wippersnapper_pin_v1_PinEventResponse_init_zero {_wippersnapper_pin_v1_PinEventResponse_PinEventResponse_MIN}
#define wippersnapper_pin_v1_ConfigurePWMPinRequest_init_zero {"", 0, 0, 0}
#define wippersnapper_pin_v1_ConfigurePWMPinRequests_init_zero {{{NULL}, NULL}}
#define wippersnapper_pin_v1_PWMPinEvent_init_zero {0}
#define wippersnapper_pin_v1_PWMPinEvents_init_zero {{{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define wippersnapper_pin_v1_ConfigurePWMPinRequests_list_tag 1
#define wippersnapper_pin_v1_ConfigurePinRequests_list_tag 1
#define wippersnapper_pin_v1_PWMPinEvents_list_tag 1
#define wippersnapper_pin_v1_PinEvents_list_tag  1
#define wippersnapper_pin_v1_ConfigurePWMPinRequest_pin_name_tag 1
#define wippersnapper_pin_v1_ConfigurePWMPinRequest_duty_cycle_tag 2
#define wippersnapper_pin_v1_ConfigurePWMPinRequest_frequency_tag 3
#define wippersnapper_pin_v1_ConfigurePWMPinRequest_variable_frequency_tag 4
#define wippersnapper_pin_v1_ConfigurePinRequest_pin_name_tag 1
#define wippersnapper_pin_v1_ConfigurePinRequest_mode_tag 2
#define wippersnapper_pin_v1_ConfigurePinRequest_direction_tag 3
#define wippersnapper_pin_v1_ConfigurePinRequest_pull_tag 4
#define wippersnapper_pin_v1_ConfigurePinRequest_period_tag 5
#define wippersnapper_pin_v1_ConfigurePinResponse_response_tag 1
#define wippersnapper_pin_v1_PWMPinEvent_duty_cycle_tag 2
#define wippersnapper_pin_v1_PinEvent_pin_name_tag 1
#define wippersnapper_pin_v1_PinEvent_pin_value_tag 2
#define wippersnapper_pin_v1_PinEventResponse_response_tag 2

/* Struct field encoding specification for nanopb */
#define wippersnapper_pin_v1_ConfigurePinRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   pin_name,          1) \
X(a, STATIC,   SINGULAR, UENUM,    mode,              2) \
X(a, STATIC,   SINGULAR, UENUM,    direction,         3) \
X(a, STATIC,   SINGULAR, UENUM,    pull,              4) \
X(a, STATIC,   SINGULAR, INT32,    period,            5)
#define wippersnapper_pin_v1_ConfigurePinRequest_CALLBACK NULL
#define wippersnapper_pin_v1_ConfigurePinRequest_DEFAULT NULL

#define wippersnapper_pin_v1_ConfigurePinRequests_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  list,              1)
#define wippersnapper_pin_v1_ConfigurePinRequests_CALLBACK pb_default_field_callback
#define wippersnapper_pin_v1_ConfigurePinRequests_DEFAULT NULL
#define wippersnapper_pin_v1_ConfigurePinRequests_list_MSGTYPE wippersnapper_pin_v1_ConfigurePinRequest

#define wippersnapper_pin_v1_ConfigurePinResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    response,          1)
#define wippersnapper_pin_v1_ConfigurePinResponse_CALLBACK NULL
#define wippersnapper_pin_v1_ConfigurePinResponse_DEFAULT NULL

#define wippersnapper_pin_v1_PinEvent_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   pin_name,          1) \
X(a, STATIC,   SINGULAR, STRING,   pin_value,         2)
#define wippersnapper_pin_v1_PinEvent_CALLBACK NULL
#define wippersnapper_pin_v1_PinEvent_DEFAULT NULL

#define wippersnapper_pin_v1_PinEvents_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  list,              1)
#define wippersnapper_pin_v1_PinEvents_CALLBACK pb_default_field_callback
#define wippersnapper_pin_v1_PinEvents_DEFAULT NULL
#define wippersnapper_pin_v1_PinEvents_list_MSGTYPE wippersnapper_pin_v1_PinEvent

#define wippersnapper_pin_v1_PinEventResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    response,          2)
#define wippersnapper_pin_v1_PinEventResponse_CALLBACK NULL
#define wippersnapper_pin_v1_PinEventResponse_DEFAULT NULL

#define wippersnapper_pin_v1_ConfigurePWMPinRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   pin_name,          1) \
X(a, STATIC,   SINGULAR, INT32,    duty_cycle,        2) \
X(a, STATIC,   SINGULAR, INT32,    frequency,         3) \
X(a, STATIC,   SINGULAR, BOOL,     variable_frequency,   4)
#define wippersnapper_pin_v1_ConfigurePWMPinRequest_CALLBACK NULL
#define wippersnapper_pin_v1_ConfigurePWMPinRequest_DEFAULT NULL

#define wippersnapper_pin_v1_ConfigurePWMPinRequests_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  list,              1)
#define wippersnapper_pin_v1_ConfigurePWMPinRequests_CALLBACK pb_default_field_callback
#define wippersnapper_pin_v1_ConfigurePWMPinRequests_DEFAULT NULL
#define wippersnapper_pin_v1_ConfigurePWMPinRequests_list_MSGTYPE wippersnapper_pin_v1_ConfigurePWMPinRequest

#define wippersnapper_pin_v1_PWMPinEvent_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    duty_cycle,        2)
#define wippersnapper_pin_v1_PWMPinEvent_CALLBACK NULL
#define wippersnapper_pin_v1_PWMPinEvent_DEFAULT NULL

#define wippersnapper_pin_v1_PWMPinEvents_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  list,              1)
#define wippersnapper_pin_v1_PWMPinEvents_CALLBACK pb_default_field_callback
#define wippersnapper_pin_v1_PWMPinEvents_DEFAULT NULL
#define wippersnapper_pin_v1_PWMPinEvents_list_MSGTYPE wippersnapper_pin_v1_PWMPinEvent

extern const pb_msgdesc_t wippersnapper_pin_v1_ConfigurePinRequest_msg;
extern const pb_msgdesc_t wippersnapper_pin_v1_ConfigurePinRequests_msg;
extern const pb_msgdesc_t wippersnapper_pin_v1_ConfigurePinResponse_msg;
extern const pb_msgdesc_t wippersnapper_pin_v1_PinEvent_msg;
extern const pb_msgdesc_t wippersnapper_pin_v1_PinEvents_msg;
extern const pb_msgdesc_t wippersnapper_pin_v1_PinEventResponse_msg;
extern const pb_msgdesc_t wippersnapper_pin_v1_ConfigurePWMPinRequest_msg;
extern const pb_msgdesc_t wippersnapper_pin_v1_ConfigurePWMPinRequests_msg;
extern const pb_msgdesc_t wippersnapper_pin_v1_PWMPinEvent_msg;
extern const pb_msgdesc_t wippersnapper_pin_v1_PWMPinEvents_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define wippersnapper_pin_v1_ConfigurePinRequest_fields &wippersnapper_pin_v1_ConfigurePinRequest_msg
#define wippersnapper_pin_v1_ConfigurePinRequests_fields &wippersnapper_pin_v1_ConfigurePinRequests_msg
#define wippersnapper_pin_v1_ConfigurePinResponse_fields &wippersnapper_pin_v1_ConfigurePinResponse_msg
#define wippersnapper_pin_v1_PinEvent_fields &wippersnapper_pin_v1_PinEvent_msg
#define wippersnapper_pin_v1_PinEvents_fields &wippersnapper_pin_v1_PinEvents_msg
#define wippersnapper_pin_v1_PinEventResponse_fields &wippersnapper_pin_v1_PinEventResponse_msg
#define wippersnapper_pin_v1_ConfigurePWMPinRequest_fields &wippersnapper_pin_v1_ConfigurePWMPinRequest_msg
#define wippersnapper_pin_v1_ConfigurePWMPinRequests_fields &wippersnapper_pin_v1_ConfigurePWMPinRequests_msg
#define wippersnapper_pin_v1_PWMPinEvent_fields &wippersnapper_pin_v1_PWMPinEvent_msg
#define wippersnapper_pin_v1_PWMPinEvents_fields &wippersnapper_pin_v1_PWMPinEvents_msg

/* Maximum encoded size of messages (where known) */
#define wippersnapper_pin_v1_ConfigurePinRequest_size 23
/* wippersnapper_pin_v1_ConfigurePinRequests_size depends on runtime parameters */
#define wippersnapper_pin_v1_ConfigurePinResponse_size 2
#define wippersnapper_pin_v1_PinEvent_size       19
/* wippersnapper_pin_v1_PinEvents_size depends on runtime parameters */
#define wippersnapper_pin_v1_PinEventResponse_size 2
#define wippersnapper_pin_v1_ConfigurePWMPinRequest_size 30
/* wippersnapper_pin_v1_ConfigurePWMPinRequests_size depends on runtime parameters */
#define wippersnapper_pin_v1_PWMPinEvent_size    11
/* wippersnapper_pin_v1_PWMPinEvents_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif