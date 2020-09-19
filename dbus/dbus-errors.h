#if !defined (DBUS_INSIDE_DBUS_H) && !defined (DBUS_COMPILATION)
#  error "Only <dbus/dbus.h> can be included directly."
#endif

#ifndef DBUS_ERROR_H
#define DBUS_ERROR_H

#include <dbus/dbus-macros.h>
#include <dbus/dbus-types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DBusError DBusError;

struct DBusError {
    const char *name;
    const char *message;
};

#define DBUS_ERROR_INIT { NULL, NULL, TRUE, 0, 0, 0, 0, NULL }

void dbus_error_init(
    DBusError *error
);

void dbus_error_free(
    DBusError *error
);

void dbus_set_error(
    DBusError *error,
    const char *name,
    const char *message,
    ...
);

void dbus_set_error_const(
    DBusError *error,
    const char *name,
    const char *message
);

void dbus_move_error(
    DBusError *src,
    DBusError *dest
);

dbus_bool_t dbus_error_has_name(
    const DBusError *error,
    const char *name
);

dbus_bool_t dbus_error_is_set(
    const DBusError *error
);

#ifdef __cplusplus
}
#endif

#endif
