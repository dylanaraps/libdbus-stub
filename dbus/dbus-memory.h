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

// TODO: __attribute__ malloc?
void* dbus_malloc(
    size_t bytes
);

// TODO: __attribute__ malloc?
// TODO: alloc size?
void* dbus_malloc0(
    size_t bytes
);

// TODO: alloc size?
void* dbus_realloc(
    void *memory,
    size_t bytes
);

void dbus_free(
    void *memory
);

#define dbus_new(type, count)  ((type*)dbus_malloc (sizeof (type) * (count)))
#define dbus_new0(type, count) ((type*)dbus_malloc0 (sizeof (type) * (count)))

void dbus_free_string_array(
    char **str_array
);

void dbus_shutdown(
    void
);

#ifdef __cplusplus
}
#endif

#endif
