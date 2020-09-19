#include "dbus-errors.h"

void dbus_error_init(
    DBusError *error
) {

}

void dbus_error_free(
    DBusError *error
) {

}

void dbus_set_error(
    DBusError *error,
    const char *name,
    const char *message,
    ...
) {

}

void dbus_set_error_const(
    DBusError *error,
    const char *name,
    const char *message
) {

}

void dbus_move_error(
    DBusError *src,
    DBusError *dest
) {

}

dbus_bool_t dbus_error_has_name(
    const DBusError *error,
    const char *name
) {
    return FALSE;
}

dbus_bool_t dbus_error_is_set(
    const DBusError *error
) {
    return FALSE;
}
