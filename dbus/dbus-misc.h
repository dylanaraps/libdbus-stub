#if !defined (DBUS_INSIDE_DBUS_H) && !defined (DBUS_COMPILATION)
#  error "Only <dbus/dbus.h> can be included directly."
#endif

#ifndef DBUS_MISC_H
#define DBUS_MISC_H

#include <dbus/dbus-types.h>
#include <dbus/dbus-errors.h>

#ifdef __cplusplus
extern "C" {
#endif

char* dbus_get_local_machine_id(
    void
);

void dbus_get_version(
    int *major_version_p,
    int *minor_version_p,
    int *micro_version_p
);

dbus_bool_t dbus_setenv(
    const char *variable,
    const char *value
);

char *dbus_try_get_local_machine_id(
    DBusError *error
);

#ifdef __cplusplus
}
#endif

#endif
