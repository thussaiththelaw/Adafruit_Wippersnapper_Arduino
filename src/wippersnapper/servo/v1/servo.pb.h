/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5-dev at Fri Aug 26 16:04:28 2022. */

#ifndef PB_WIPPERSNAPPER_SERVO_V1_WIPPERSNAPPER_SERVO_V1_SERVO_PB_H_INCLUDED
#define PB_WIPPERSNAPPER_SERVO_V1_WIPPERSNAPPER_SERVO_V1_SERVO_PB_H_INCLUDED
#include <pb.h>
#include "nanopb/nanopb.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _wippersnapper_servo_v1_ServoAttachReq {
    char servo_pin[6];
    int32_t servo_freq;
    int32_t min_pulse_width;
    int32_t max_pulse_width;
} wippersnapper_servo_v1_ServoAttachReq;

typedef struct _wippersnapper_servo_v1_ServoAttachResp {
    bool attach_success;
    char servo_pin[6];
} wippersnapper_servo_v1_ServoAttachResp;

typedef struct _wippersnapper_servo_v1_ServoDetachReq {
    char servo_pin[5];
} wippersnapper_servo_v1_ServoDetachReq;

typedef struct _wippersnapper_servo_v1_ServoWriteReq {
    char servo_pin[5];
    int32_t pulse_width;
} wippersnapper_servo_v1_ServoWriteReq;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define wippersnapper_servo_v1_ServoAttachReq_init_default {"", 0, 0, 0}
#define wippersnapper_servo_v1_ServoAttachResp_init_default {0, ""}
#define wippersnapper_servo_v1_ServoDetachReq_init_default {""}
#define wippersnapper_servo_v1_ServoWriteReq_init_default {"", 0}
#define wippersnapper_servo_v1_ServoAttachReq_init_zero {"", 0, 0, 0}
#define wippersnapper_servo_v1_ServoAttachResp_init_zero {0, ""}
#define wippersnapper_servo_v1_ServoDetachReq_init_zero {""}
#define wippersnapper_servo_v1_ServoWriteReq_init_zero {"", 0}

/* Field tags (for use in manual encoding/decoding) */
#define wippersnapper_servo_v1_ServoAttachReq_servo_pin_tag 1
#define wippersnapper_servo_v1_ServoAttachReq_servo_freq_tag 2
#define wippersnapper_servo_v1_ServoAttachReq_min_pulse_width_tag 3
#define wippersnapper_servo_v1_ServoAttachReq_max_pulse_width_tag 4
#define wippersnapper_servo_v1_ServoAttachResp_attach_success_tag 1
#define wippersnapper_servo_v1_ServoAttachResp_servo_pin_tag 2
#define wippersnapper_servo_v1_ServoDetachReq_servo_pin_tag 1
#define wippersnapper_servo_v1_ServoWriteReq_servo_pin_tag 1
#define wippersnapper_servo_v1_ServoWriteReq_pulse_width_tag 2

/* Struct field encoding specification for nanopb */
#define wippersnapper_servo_v1_ServoAttachReq_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   servo_pin,         1) \
X(a, STATIC,   SINGULAR, INT32,    servo_freq,        2) \
X(a, STATIC,   SINGULAR, INT32,    min_pulse_width,   3) \
X(a, STATIC,   SINGULAR, INT32,    max_pulse_width,   4)
#define wippersnapper_servo_v1_ServoAttachReq_CALLBACK NULL
#define wippersnapper_servo_v1_ServoAttachReq_DEFAULT NULL

#define wippersnapper_servo_v1_ServoAttachResp_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     attach_success,    1) \
X(a, STATIC,   SINGULAR, STRING,   servo_pin,         2)
#define wippersnapper_servo_v1_ServoAttachResp_CALLBACK NULL
#define wippersnapper_servo_v1_ServoAttachResp_DEFAULT NULL

#define wippersnapper_servo_v1_ServoDetachReq_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   servo_pin,         1)
#define wippersnapper_servo_v1_ServoDetachReq_CALLBACK NULL
#define wippersnapper_servo_v1_ServoDetachReq_DEFAULT NULL

#define wippersnapper_servo_v1_ServoWriteReq_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   servo_pin,         1) \
X(a, STATIC,   SINGULAR, INT32,    pulse_width,       2)
#define wippersnapper_servo_v1_ServoWriteReq_CALLBACK NULL
#define wippersnapper_servo_v1_ServoWriteReq_DEFAULT NULL

extern const pb_msgdesc_t wippersnapper_servo_v1_ServoAttachReq_msg;
extern const pb_msgdesc_t wippersnapper_servo_v1_ServoAttachResp_msg;
extern const pb_msgdesc_t wippersnapper_servo_v1_ServoDetachReq_msg;
extern const pb_msgdesc_t wippersnapper_servo_v1_ServoWriteReq_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define wippersnapper_servo_v1_ServoAttachReq_fields &wippersnapper_servo_v1_ServoAttachReq_msg
#define wippersnapper_servo_v1_ServoAttachResp_fields &wippersnapper_servo_v1_ServoAttachResp_msg
#define wippersnapper_servo_v1_ServoDetachReq_fields &wippersnapper_servo_v1_ServoDetachReq_msg
#define wippersnapper_servo_v1_ServoWriteReq_fields &wippersnapper_servo_v1_ServoWriteReq_msg

/* Maximum encoded size of messages (where known) */
#define wippersnapper_servo_v1_ServoAttachReq_size 40
#define wippersnapper_servo_v1_ServoAttachResp_size 9
#define wippersnapper_servo_v1_ServoDetachReq_size 6
#define wippersnapper_servo_v1_ServoWriteReq_size 17

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
