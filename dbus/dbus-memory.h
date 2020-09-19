#if !defined (DBUS_INSIDE_DBUS_H) && !defined (DBUS_COMPILATION)
#  error "Only <dbus/dbus.h> can be included directly."
#endif

#ifndef DBUS_MEMORY_H
#define DBUS_MEMORY_H

#include <dbus/dbus-macros.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void(* DBusFreeFunction)(void *memory);

#ifdef __cplusplus
}
#endif

#endif
