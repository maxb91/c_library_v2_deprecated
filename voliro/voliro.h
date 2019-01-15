/** @file
 *  @brief MAVLink comm protocol generated from voliro.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_VOLIRO_H
#define MAVLINK_VOLIRO_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_VOLIRO.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{94, 53, 31, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_VOLIRO

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_set_wrench_target_body_ned.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_SET_WRENCH_TARGET_BODY_NED}
# define MAVLINK_MESSAGE_NAMES {{ "SET_WRENCH_TARGET_BODY_NED", 94 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_VOLIRO_H
