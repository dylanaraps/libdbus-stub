#if !defined (DBUS_INSIDE_DBUS_H) && !defined (DBUS_COMPILATION)
#  error "Only <dbus/dbus.h> can be included directly."
#endif

#ifndef DBUS_TYPES_H
#define DBUS_TYPES_H

#include <stdint.h>

typedef int32_t dbus_int32_t;
typedef uint32_t dbus_uint32_t;
typedef uint32_t dbus_unichar_t;
typedef uint32_t dbus_bool_t;
typedef short dbus_int16_t;
typedef unsigned short dbus_uint16_t;
typedef long long dbus_int64_t;
typedef unsigned long long dbus_uint64_t;

#endif
