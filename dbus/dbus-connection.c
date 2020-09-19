#include "dbus-connection.h"

DBusConnection *dbus_connection_open(
    const char *address,
    DBusError *error
) {
    return NULL;
}

DBusConnection* dbus_connection_open_private(
    const char *address,
    DBusError *error
) {
    return NULL;
}

DBusConnection* dbus_connection_ref(
    DBusConnection *connection
) {
    return connection;
}

void dbus_connection_unref(
    DBusConnection *connection
) {

}

void dbus_connection_close(
    DBusConnection *connection
) {

}

dbus_bool_t dbus_connection_get_is_connected(
    DBusConnection *connection
) {
    return FALSE;
}

dbus_bool_t dbus_connection_get_is_authenticated(
    DBusConnection *connection
) {
    return FALSE;
}

dbus_bool_t dbus_connection_get_is_anonymous(
    DBusConnection *connection
) {
    return TRUE;
}

char* dbus_connection_get_server_id(
    DBusConnection *connection
) {
    return NULL;
}

dbus_bool_t dbus_connection_can_send_type(
    DBusConnection *connection,
    int type
) {
    return FALSE;
}

void dbus_connection_set_exit_on_disconnect(
    DBusConnection *connection,
    dbus_bool_t exit_on_disconnect
) {

}

void dbus_connection_flush(
    DBusConnection *connection
) {

}

dbus_bool_t dbus_connection_read_write_dispatch(
    DBusConnection *connection,
    int timeout_milliseconds
) {
    return FALSE;
}

dbus_bool_t dbus_connection_read_write(
    DBusConnection *connection,
    int timeout_milliseconds
) {
    return FALSE;
}

DBusMessage* dbus_connection_borrow_message(
    DBusConnection *connection
) {
    return NULL;
}

void dbus_connection_return_message(
    DBusConnection *connection,
    DBusMessage *message
) {

}

void dbus_connection_steal_borrowed_message(
    DBusConnection *connection,
    DBusMessage *message
) {

}

DBusMessage* dbus_connection_pop_message(
    DBusConnection *connection
) {
    return NULL;
}

DBusDispatchStatus dbus_connection_get_dispatch_status(
    DBusConnection *connection
) {
    return DBUS_DISPATCH_COMPLETE;
}

DBusDispatchStatus dbus_connection_dispatch(
    DBusConnection *connection
) {
    return DBUS_DISPATCH_COMPLETE;
}

dbus_bool_t dbus_connection_has_messages_to_send(
    DBusConnection *connection
) {
    return FALSE;
}

dbus_bool_t dbus_connection_send(
    DBusConnection *connection,
    DBusMessage *message,
    dbus_uint32_t *client_serial
) {
    return FALSE; /* TRUE? */
}

dbus_bool_t dbus_connection_send_with_reply(
    DBusConnection *connection,
    DBusMessage *message,
    DBusPendingCall **pending_return,
    int timeout_milliseconds
) {
    return FALSE; /* TRUE? */
}

DBusMessage *dbus_connection_send_with_reply_and_block(
    DBusConnection *connection,
    DBusMessage *message,
    int timeout_milliseconds,
    DBusError *error
) {
    return FALSE; /* TRUE? */
}

dbus_bool_t dbus_connection_set_watch_functions(
    DBusConnection *connection,
    DBusAddWatchFunction add_function,
    DBusRemoveWatchFunction remove_function,
    DBusWatchToggledFunction toggled_function,
    void *data,
    DBusFreeFunction free_data_function
) {
    return FALSE;
}

dbus_bool_t dbus_connection_set_timeout_functions(
    DBusConnection *connection,
    DBusAddTimeoutFunction add_function,
    DBusRemoveTimeoutFunction remove_function,
    DBusTimeoutToggledFunction toggled_function,
    void *data,
    DBusFreeFunction free_data_function
) {
    return FALSE;
}

void dbus_connection_set_wakeup_main_function(
    DBusConnection *connection,
    DBusWakeupMainFunction wakeup_main_function,
    void *data,
    DBusFreeFunction free_data_function
) {

}

void dbus_connection_set_dispatch_status_function(
    DBusConnection *connection,
    DBusDispatchStatusFunction function,
    void *data,
    DBusFreeFunction free_data_function
) {

}

dbus_bool_t dbus_connection_get_unix_user(
    DBusConnection *connection,
    unsigned long *uid
) {
    return FALSE;
}

dbus_bool_t dbus_connection_get_unix_process_id(
    DBusConnection *connection,
    unsigned long *pid
) {
    return FALSE;
}

dbus_bool_t dbus_connection_get_adt_audit_session_data(
    DBusConnection *connection,
    void **data,
    dbus_int32_t *data_size
) {
    return FALSE;
}

void dbus_connection_set_unix_user_function(
    DBusConnection *connection,
    DBusAllowUnixUserFunction function,
    void *data,
    DBusFreeFunction free_data_function
) {

}

dbus_bool_t dbus_connection_get_windows_user(
    DBusConnection *connection,
    char **windows_sid_p
) {
    return FALSE;
}

void dbus_connection_set_windows_user_function(
    DBusConnection *connection,
    DBusAllowWindowsUserFunction function,
    void *data,
    DBusFreeFunction free_data_function
) {

}

void dbus_connection_set_allow_anonymous(
    DBusConnection *connection,
    dbus_bool_t value
) {

}

void dbus_connection_set_route_peer_messages(
    DBusConnection *connection,
    dbus_bool_t value
) {

}

dbus_bool_t dbus_connection_add_filter(
    DBusConnection *connection,
    DBusHandleMessageFunction function,
    void *user_data,
    DBusFreeFunction free_data_function
) {
    return FALSE;
}

void dbus_connection_remove_filter(
    DBusConnection *connection,
    DBusHandleMessageFunction function,
    void *user_data
) {

}

dbus_bool_t dbus_connection_allocate_data_slot(
    dbus_int32_t *slot_p
) {
    return FALSE;
}

void dbus_connection_free_data_slot(
    dbus_int32_t *slot_p
) {

}

dbus_bool_t dbus_connection_set_data(
    DBusConnection *connection,
    dbus_int32_t slot,
    void *data,
    DBusFreeFunction free_data_func
) {
    return FALSE;
}

void* dbus_connection_get_data(
    DBusConnection *connection,
    dbus_int32_t slot
) {
    return NULL;
}

void dbus_connection_set_change_sigpipe(
    dbus_bool_t will_modify_sigpipe
) {

}

void dbus_connection_set_max_message_size(
    DBusConnection *connection,
    long size
) {

}

long dbus_connection_get_max_message_size(
    DBusConnection *connection
) {
    return 0;
}

void dbus_connection_set_max_received_size(
    DBusConnection *connection,
    long size
) {

}

long dbus_connection_get_max_received_size(
    DBusConnection *connection
) {
    return 0;
}

void dbus_connection_set_max_message_unix_fds(
    DBusConnection *connection,
    long n
) {

}

long dbus_connection_get_max_message_unix_fds(
    DBusConnection *connection
) {
    return 0;
}

void dbus_connection_set_max_received_unix_fds(
    DBusConnection *connection,
    long            n
) {

}

long dbus_connection_get_max_received_unix_fds(
    DBusConnection *connection
) {
    return 0;
}

long dbus_connection_get_outgoing_size(
    DBusConnection *connection
) {
    return 0;
}

long dbus_connection_get_outgoing_unix_fds(
    DBusConnection *connection
) {
    return 0;
}

DBusPreallocatedSend* dbus_connection_preallocate_send(
    DBusConnection *connection
) {
    return NULL;
}

void dbus_connection_free_preallocated_send(
    DBusConnection *connection,
    DBusPreallocatedSend *preallocated
) {

}

void dbus_connection_send_preallocated(
    DBusConnection *connection,
    DBusPreallocatedSend *preallocated,
    DBusMessage *message,
    dbus_uint32_t *client_serial
) {

}
