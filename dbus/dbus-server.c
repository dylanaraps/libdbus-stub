#include "dbus-server.h"

DBusServer* dbus_server_listen(
    const char *address,
    DBusError *error
) {
    error->name    = DBUS_ERROR_FAILED;
    error->message = "stub";

    return NULL;
}

DBusServer* dbus_server_ref(
    DBusServer *server
) {
    return NULL;
}

void dbus_server_unref(
    DBusServer *server
) {

}

void dbus_server_disconnect(
    DBusServer *server
) {

}

dbus_bool_t dbus_server_get_is_connected(
    DBusServer *server
) {
    return TRUE; // Spoof
}

char* dbus_server_get_address(
    DBusServer *server
) {
    return NULL;
}

char* dbus_server_get_id(
    DBusServer *server
) {
    return NULL;
}

void dbus_server_set_new_connection_function(
    DBusServer *server,
    DBusNewConnectionFunction function,
    void *data,
    DBusFreeFunction free_data_function
) {

}

dbus_bool_t dbus_server_set_watch_functions(
    DBusServer *server,
    DBusAddWatchFunction add_function,
    DBusRemoveWatchFunction remove_function,
    DBusWatchToggledFunction toggled_function,
    void *data,
    DBusFreeFunction free_data_function
) {
    return FALSE;
}

dbus_bool_t dbus_server_set_timeout_functions(
    DBusServer *server,
    DBusAddTimeoutFunction add_function,
    DBusRemoveTimeoutFunction remove_function,
    DBusTimeoutToggledFunction toggled_function,
    void *data,
    DBusFreeFunction free_data_function
) {
    return FALSE;
}

dbus_bool_t dbus_server_set_auth_mechanisms(
    DBusServer *server,
    const char **mechanisms
) {
    return FALSE;
}

dbus_bool_t dbus_server_allocate_data_slot(
    dbus_int32_t *slot_p
) {
    return FALSE;
}

void dbus_server_free_data_slot(
    dbus_int32_t *slot_p
) {

}

dbus_bool_t dbus_server_set_data(
    DBusServer *server,
    int slot,
    void *data,
    DBusFreeFunction free_data_func
) {
    return FALSE;
}

void* dbus_server_get_data(
    DBusServer *server,
    int slot
) {
    return NULL;
}

