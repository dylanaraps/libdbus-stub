#if !defined (DBUS_INSIDE_DBUS_H) && !defined (DBUS_COMPILATION)
#  error "Only <dbus/dbus.h> can be included directly."
#endif

#ifndef DBUS_CONNECTION_H
#define DBUS_CONNECTION_H

#include <dbus/dbus-errors.h>
#include <dbus/dbus-macros.h>
#include <dbus/dbus-memory.h>
#include <dbus/dbus-message.h>
#include <dbus/dbus-shared.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DBusWatch DBusWatch;
typedef struct DBusTimeout DBusTimeout;
typedef struct DBusPreallocatedSend DBusPreallocatedSend;
typedef struct DBusPendingCall DBusPendingCall;
typedef struct DBusConnection DBusConnection;
typedef struct DBusObjectPathVTable DBusObjectPathVTable;

typedef enum  {
    DBUS_DISPATCH_DATA_REMAINS,
    DBUS_DISPATCH_COMPLETE,
    DBUS_DISPATCH_NEED_MEMORY
} DBusDispatchStatus;

typedef dbus_bool_t (* DBusAddWatchFunction) (
    DBusWatch *watch,
    void *data
);

typedef void (* DBusWatchToggledFunction) (
    DBusWatch *watch,
    void *data
);

typedef void (* DBusRemoveWatchFunction) (
    DBusWatch *watch,
    void *data
);

typedef dbus_bool_t (* DBusAddTimeoutFunction) (
    DBusTimeout *timeout,
    void *data
);

typedef void (* DBusTimeoutToggledFunction) (
    DBusTimeout *timeout,
    void *data
);

typedef void (* DBusRemoveTimeoutFunction) (
    DBusTimeout *timeout,
    void *data
);

typedef void (* DBusDispatchStatusFunction) (
    DBusConnection *connection,
    DBusDispatchStatus new_status,
    void *data
);

typedef void (* DBusWakeupMainFunction) (
    void *data
);

typedef dbus_bool_t (* DBusAllowUnixUserFunction) (
    DBusConnection *connection,
    unsigned long uid,
    void *data
);

typedef dbus_bool_t (* DBusAllowWindowsUserFunction) (
    DBusConnection *connection,
    const char *user_sid,
    void *data
);

typedef void (* DBusPendingCallNotifyFunction) (
    DBusPendingCall *pending,
    void *user_data
);

typedef DBusHandlerResult (* DBusHandleMessageFunction) (
    DBusConnection *connection,
    DBusMessage *message,
    void *user_data
);

DBusConnection *dbus_connection_open(
    const char *address,
    DBusError *error
);

DBusConnection* dbus_connection_open_private(
    const char *address,
    DBusError *error
);

DBusConnection* dbus_connection_ref(
    DBusConnection *connection
);

void dbus_connection_unref(
    DBusConnection *connection
);

void dbus_connection_close(
    DBusConnection *connection
);

dbus_bool_t dbus_connection_get_is_connected(
    DBusConnection *connection
);

dbus_bool_t dbus_connection_get_is_authenticated(
    DBusConnection *connection
);

dbus_bool_t dbus_connection_get_is_anonymous(
    DBusConnection *connection
);

char* dbus_connection_get_server_id(
    DBusConnection *connection
);

dbus_bool_t dbus_connection_can_send_type(
    DBusConnection *connection,
    int type
);

void dbus_connection_set_exit_on_disconnect(
    DBusConnection *connection,
    dbus_bool_t exit_on_disconnect
);

void dbus_connection_flush(
    DBusConnection *connection
);

dbus_bool_t dbus_connection_read_write_dispatch(
    DBusConnection *connection,
    int timeout_milliseconds
);

dbus_bool_t dbus_connection_read_write(
    DBusConnection *connection,
    int timeout_milliseconds
);

DBusMessage* dbus_connection_borrow_message(
    DBusConnection *connection
);

void dbus_connection_return_message(
    DBusConnection *connection,
    DBusMessage *message
);

void dbus_connection_steal_borrowed_message(
    DBusConnection *connection,
    DBusMessage *message
);

DBusMessage* dbus_connection_pop_message(
    DBusConnection *connection
);

DBusDispatchStatus dbus_connection_get_dispatch_status(
    DBusConnection *connection
);

DBusDispatchStatus dbus_connection_dispatch(
    DBusConnection *connection
);

dbus_bool_t dbus_connection_has_messages_to_send(
    DBusConnection *connection
);

dbus_bool_t dbus_connection_send(
    DBusConnection *connection,
    DBusMessage *message,
    dbus_uint32_t *client_serial
);

dbus_bool_t dbus_connection_send_with_reply(
    DBusConnection *connection,
    DBusMessage *message,
    DBusPendingCall **pending_return,
    int timeout_milliseconds
);

DBusMessage *dbus_connection_send_with_reply_and_block(
    DBusConnection *connection,
    DBusMessage *message,
    int timeout_milliseconds,
    DBusError *error
);

dbus_bool_t dbus_connection_set_watch_functions(
    DBusConnection *connection,
    DBusAddWatchFunction add_function,
    DBusRemoveWatchFunction remove_function,
    DBusWatchToggledFunction toggled_function,
    void *data,
    DBusFreeFunction free_data_function
);

dbus_bool_t dbus_connection_set_timeout_functions(
    DBusConnection *connection,
    DBusAddTimeoutFunction add_function,
    DBusRemoveTimeoutFunction remove_function,
    DBusTimeoutToggledFunction toggled_function,
    void *data,
    DBusFreeFunction free_data_function
);

void dbus_connection_set_wakeup_main_function(
    DBusConnection *connection,
    DBusWakeupMainFunction wakeup_main_function,
    void *data,
    DBusFreeFunction free_data_function
);

void dbus_connection_set_dispatch_status_function(
    DBusConnection *connection,
    DBusDispatchStatusFunction function,
    void *data,
    DBusFreeFunction free_data_function
);

dbus_bool_t dbus_connection_get_unix_user(
    DBusConnection *connection,
    unsigned long *uid
);

dbus_bool_t dbus_connection_get_unix_process_id(
    DBusConnection *connection,
    unsigned long *pid
);

dbus_bool_t dbus_connection_get_adt_audit_session_data(
    DBusConnection *connection,
    void **data,
    dbus_int32_t *data_size
);

void dbus_connection_set_unix_user_function(
    DBusConnection *connection,
    DBusAllowUnixUserFunction function,
    void *data,
    DBusFreeFunction free_data_function
);

dbus_bool_t dbus_connection_get_windows_user(
    DBusConnection *connection,
    char **windows_sid_p
);

void dbus_connection_set_windows_user_function(
    DBusConnection *connection,
    DBusAllowWindowsUserFunction function,
    void *data,
    DBusFreeFunction free_data_function
);

void dbus_connection_set_allow_anonymous(
    DBusConnection *connection,
    dbus_bool_t value
);

void dbus_connection_set_route_peer_messages(
    DBusConnection *connection,
    dbus_bool_t value
);

dbus_bool_t dbus_connection_add_filter(
    DBusConnection *connection,
    DBusHandleMessageFunction function,
    void *user_data,
    DBusFreeFunction free_data_function
);

void dbus_connection_remove_filter(
    DBusConnection *connection,
    DBusHandleMessageFunction function,
    void *user_data
);

dbus_bool_t dbus_connection_allocate_data_slot(
    dbus_int32_t *slot_p
);

void dbus_connection_free_data_slot(
    dbus_int32_t *slot_p
);

dbus_bool_t dbus_connection_set_data(
    DBusConnection *connection,
    dbus_int32_t slot,
    void *data,
    DBusFreeFunction free_data_func
);

void* dbus_connection_get_data(
    DBusConnection *connection,
    dbus_int32_t slot
);

void dbus_connection_set_change_sigpipe(
    dbus_bool_t will_modify_sigpipe
);

void dbus_connection_set_max_message_size(
    DBusConnection *connection,
    long            size
);

long dbus_connection_get_max_message_size(
    DBusConnection *connection
);

void dbus_connection_set_max_received_size(
    DBusConnection *connection,
    long size
);

long dbus_connection_get_max_received_size(
    DBusConnection *connection
);

void dbus_connection_set_max_message_unix_fds(
    DBusConnection *connection,
    long n
);

long dbus_connection_get_max_message_unix_fds(
    DBusConnection *connection
);

void dbus_connection_set_max_received_unix_fds(
    DBusConnection *connection,
    long            n
);

long dbus_connection_get_max_received_unix_fds(
    DBusConnection *connection
);

long dbus_connection_get_outgoing_size(
    DBusConnection *connection
);

long dbus_connection_get_outgoing_unix_fds(
    DBusConnection *connection
);

DBusPreallocatedSend* dbus_connection_preallocate_send(
    DBusConnection *connection
);

void dbus_connection_free_preallocated_send(
    DBusConnection *connection,
    DBusPreallocatedSend *preallocated
);

void dbus_connection_send_preallocated(
    DBusConnection *connection,
    DBusPreallocatedSend *preallocated,
    DBusMessage *message,
    dbus_uint32_t *client_serial
);

dbus_bool_t dbus_connection_try_register_object_path(
    DBusConnection *connection,
    const char *path,
    const DBusObjectPathVTable *vtable,
    void *user_data,
    DBusError *error
);

dbus_bool_t dbus_connection_register_object_path(
    DBusConnection *connection,
    const char *path,
    const DBusObjectPathVTable *vtable,
    void *user_data
);

dbus_bool_t dbus_connection_try_register_fallback(
    DBusConnection *connection,
    const char *path,
    const DBusObjectPathVTable *vtable,
    void *user_data,
    DBusError *error
);

dbus_bool_t dbus_connection_register_fallback(
    DBusConnection *connection,
    const char *path,
    const DBusObjectPathVTable *vtable,
    void *user_data
);

dbus_bool_t dbus_connection_unregister_object_path(
    DBusConnection *connection,
    const char *path
);

dbus_bool_t dbus_connection_get_object_path_data(
    DBusConnection *connection,
    const char *path,
    void **data_p
);

dbus_bool_t dbus_connection_list_registered(
    DBusConnection *connection,
    const char *parent_path,
    char ***child_entries
);

dbus_bool_t dbus_connection_get_unix_fd(
    DBusConnection *connection,
    int *fd
);

dbus_bool_t dbus_connection_get_socket(
    DBusConnection *connection,
    int *fd
);

int dbus_watch_get_unix_fd(
    DBusWatch *watch
);

int dbus_watch_get_socket(
    DBusWatch *watch
);

unsigned int dbus_watch_get_flags(
    DBusWatch *watch
);

void* dbus_watch_get_data(
    DBusWatch *watch
);

void dbus_watch_set_data(
    DBusWatch *watch,
    void *data,
    DBusFreeFunction free_data_function
);

dbus_bool_t dbus_watch_handle(
    DBusWatch *watch,
    unsigned int flags
);

dbus_bool_t dbus_watch_get_enabled(
    DBusWatch *watch
);

int dbus_timeout_get_interval(
    DBusTimeout *timeout
);

void* dbus_timeout_get_data(
    DBusTimeout *timeout
);

void dbus_timeout_set_data(
    DBusTimeout *timeout,
    void *data,
    DBusFreeFunction free_data_function
);

dbus_bool_t dbus_timeout_handle(
    DBusTimeout *timeout
);

dbus_bool_t dbus_timeout_get_enabled(
    DBusTimeout *timeout
);

#ifdef __cplusplus
}
#endif

#endif
