#if !defined (DBUS_INSIDE_DBUS_H) && !defined (DBUS_COMPILATION)
#  error "Only <dbus/dbus.h> can be included directly."
#endif

#ifndef DBUS_SYNTAX_H
#define DBUS_SYNTAX_H

#include <dbus/dbus-macros.h>
#include <dbus/dbus-types.h>
#include <dbus/dbus-errors.h>

#ifdef __cplusplus
extern "C" {
#endif

dbus_bool_t dbus_validate_path(
    const char *path,
    DBusError  *error
);

dbus_bool_t dbus_validate_interface(
    const char *name,
    DBusError  *error
);

dbus_bool_t dbus_validate_member(
    const char *name,
    DBusError  *error
);

dbus_bool_t dbus_validate_error_name(
    const char *name,
    DBusError *error
);

dbus_bool_t dbus_validate_bus_name(
    const char *name,
    DBusError  *error
);

dbus_bool_t dbus_validate_utf8(
    const char *alleged_utf8,
    DBusError  *error
);

#ifdef __cplusplus
}
#endif

#endif
