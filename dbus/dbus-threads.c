#include "dbus-threads.h"

dbus_bool_t dbus_threads_init(
    const DBusThreadFunctions *functions
) {
    return TRUE;
}

dbus_bool_t dbus_threads_init_default(
    void
) {
    return TRUE;
}
