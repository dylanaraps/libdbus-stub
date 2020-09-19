#include "dbus-misc.h"

char* dbus_get_local_machine_id(
    void
) {
    return NULL;
}

void dbus_get_version(
    int *major_version_p,
    int *minor_version_p,
    int *micro_version_p
) {
    // TODO: Set these?
}

dbus_bool_t dbus_setenv(
    const char *variable,
    const char *value
) {
    return FALSE;
}

char *dbus_try_get_local_machine_id(
    DBusError *error
) {
    return FALSE;
}
