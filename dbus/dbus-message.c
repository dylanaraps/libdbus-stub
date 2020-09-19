#include "dbus-message.h"

DBusMessage* dbus_message_new(
    int message_type
) {
    return NULL;
}

DBusMessage* dbus_message_new_method_call(
    const char *bus_name,
    const char *path,
    const char *iface,
    const char *method
) {
    return NULL;
}

DBusMessage* dbus_message_new_method_return(
    DBusMessage *method_call
) {
    return NULL;
}

DBusMessage* dbus_message_new_signal(
    const char *path,
    const char *iface,
    const char *name
) {
    return NULL;
}

DBusMessage* dbus_message_new_error(
    DBusMessage *reply_to,
    const char *error_name,
    const char *error_message
) {
    return NULL;
}

DBusMessage* dbus_message_new_error_printf(
    DBusMessage *reply_to,
    const char  *error_name,
    const char  *error_format,
    ...
) {
    return NULL;
}

DBusMessage* dbus_message_copy(
    const DBusMessage *message
) {
    return NULL;
}

DBusMessage* dbus_message_ref(
    DBusMessage *message
) {
    return NULL;
}

void dbus_message_unref(
    DBusMessage *message
) {

}

int dbus_message_get_type(
    DBusMessage *message
) {
    return DBUS_MESSAGE_TYPE_INVALID;
}

dbus_bool_t dbus_message_set_path(
    DBusMessage *message,
    const char *object_path
) {
    return FALSE;
}

const char* dbus_message_get_path(
    DBusMessage *message
) {
    return NULL;
}

dbus_bool_t dbus_message_has_path(
    DBusMessage *message,
    const char *object_path
) {
    return FALSE;
}

dbus_bool_t dbus_message_set_interface(
    DBusMessage *message,
    const char *iface
) {
    return FALSE;
}

const char* dbus_message_get_interface(
    DBusMessage *message
) {
    return NULL;
}

dbus_bool_t dbus_message_has_interface(
    DBusMessage *message,
    const char *iface
) {
    return FALSE;
}

dbus_bool_t dbus_message_set_member(
    DBusMessage *message,
    const char *member
) {
    return FALSE;
}

const char* dbus_message_get_member(
    DBusMessage *message
) {
    return NULL;
}

dbus_bool_t dbus_message_has_member(
    DBusMessage *message,
    const char  *member
) {
    return FALSE;
}

dbus_bool_t dbus_message_set_error_name(
    DBusMessage *message,
    const char *name
) {
    return FALSE;
}

const char* dbus_message_get_error_name(
    DBusMessage *message
) {
    return NULL;
}

dbus_bool_t dbus_message_set_destination(
    DBusMessage *message,
    const char *destination
) {
    return FALSE;
}

const char* dbus_message_get_destination(
    DBusMessage *message
) {
    return NULL;
}

dbus_bool_t dbus_message_set_sender(
    DBusMessage *message,
    const char *sender
) {
    return FALSE;
}

const char* dbus_message_get_sender(
    DBusMessage *message
) {
    return NULL;
}

const char* dbus_message_get_signature(
    DBusMessage *message
) {
    return NULL;
}

void dbus_message_set_no_reply(
    DBusMessage *message,
    dbus_bool_t no_reply
) {

}

dbus_bool_t dbus_message_get_no_reply(
    DBusMessage *message
) {
    return FALSE;
}

dbus_bool_t dbus_message_is_method_call(
    DBusMessage *message,
    const char *iface,
    const char *method
) {
    return FALSE;
}

dbus_bool_t dbus_message_is_signal(
    DBusMessage *message,
    const char *iface,
    const char *signal_name
) {
    return FALSE;
}

dbus_bool_t dbus_message_is_error(
    DBusMessage *message,
    const char *error_name
) {
    return FALSE;
}

dbus_bool_t dbus_message_has_destination(
    DBusMessage *message,
    const char *bus_name
) {
    return FALSE;
}

dbus_bool_t dbus_message_has_sender(
    DBusMessage *message,
    const char *unique_bus_name
) {
    return FALSE;
}

dbus_bool_t dbus_message_has_signature(
    DBusMessage *message,
    const char *signature
) {
    return FALSE;
}

dbus_uint32_t dbus_message_get_serial(
    DBusMessage *message
) {
    return 0;
}

void dbus_message_set_serial(
    DBusMessage *message,
    dbus_uint32_t serial
) {

}

dbus_bool_t dbus_message_set_reply_serial(
    DBusMessage *message,
    dbus_uint32_t reply_serial
) {
    return FALSE;
}

dbus_uint32_t dbus_message_get_reply_serial(
    DBusMessage *message
) {
    return 0;
}

void dbus_message_set_auto_start(
    DBusMessage *message,
    dbus_bool_t auto_start
);

dbus_bool_t dbus_message_get_auto_start(
    DBusMessage *message
) {
    return FALSE;
}

dbus_bool_t dbus_message_get_path_decomposed(
    DBusMessage *message,
    char ***path
) {
    return FALSE;
}

const char *dbus_message_get_container_instance(
    DBusMessage *message
) {
    return NULL;
}

dbus_bool_t dbus_message_set_container_instance(
    DBusMessage *message,
    const char  *object_path
) {
    return FALSE;
}

dbus_bool_t dbus_message_append_args(
    DBusMessage *message,
    int first_arg_type,
    ...
) {
    return FALSE;
}

dbus_bool_t dbus_message_append_args_valist(
    DBusMessage *message,
    int first_arg_type,
    va_list var_args
) {
    return FALSE;
}

dbus_bool_t dbus_message_get_args(
    DBusMessage *message,
    DBusError *error,
    int first_arg_type,
    ...
) {
    return FALSE;
}

dbus_bool_t dbus_message_get_args_valist(
    DBusMessage *message,
    DBusError *error,
    int first_arg_type,
    va_list var_args
) {
    return FALSE;
}

dbus_bool_t dbus_message_contains_unix_fds(
    DBusMessage *message
) {
    return FALSE;
}

void dbus_message_iter_init_closed(
    DBusMessageIter *iter
) {

}

dbus_bool_t dbus_message_iter_init(
    DBusMessage *message,
    DBusMessageIter *iter
) {
    return FALSE;
}

dbus_bool_t dbus_message_iter_has_next(
    DBusMessageIter *iter
) {
    return FALSE;
}

dbus_bool_t dbus_message_iter_next(
    DBusMessageIter *iter
) {
    return FALSE;
}

char* dbus_message_iter_get_signature(
    DBusMessageIter *iter
) {
    return NULL;
}

int dbus_message_iter_get_arg_type(
    DBusMessageIter *iter
) {
    return DBUS_TYPE_INVALID;
}

int dbus_message_iter_get_element_type(
    DBusMessageIter *iter
) {
    return DBUS_TYPE_INVALID;
}

void dbus_message_iter_recurse(
    DBusMessageIter *iter,
    DBusMessageIter *sub
) {

}

void dbus_message_iter_get_basic(
    DBusMessageIter *iter,
    void *value
) {

}

int dbus_message_iter_get_element_count(
    DBusMessageIter *iter
) {
    return 0;
}

void dbus_message_iter_get_fixed_array(
    DBusMessageIter *iter,
    void *value,
    int *n_elements
) {

}

void dbus_message_iter_init_append(
    DBusMessage *message,
    DBusMessageIter *iter
) {

}

dbus_bool_t dbus_message_iter_append_basic(
    DBusMessageIter *iter,
    int type,
    const void *value
) {
    return FALSE;
}

dbus_bool_t dbus_message_iter_append_fixed_array(
    DBusMessageIter *iter,
    int element_type,
    const void *value,
    int n_elements
) {
    return FALSE;
}

dbus_bool_t dbus_message_iter_open_container(
    DBusMessageIter *iter,
    int type,
    const char *contained_signature,
    DBusMessageIter *sub
) {
    return FALSE;
}

dbus_bool_t dbus_message_iter_close_container(
    DBusMessageIter *iter,
    DBusMessageIter *sub
) {
    return FALSE;
}

void dbus_message_iter_abandon_container(
    DBusMessageIter *iter,
    DBusMessageIter *sub
) {

}

void dbus_message_iter_abandon_container_if_open(
    DBusMessageIter *iter,
    DBusMessageIter *sub
) {

}

void dbus_message_lock(
    DBusMessage *message
) {

}

dbus_bool_t dbus_set_error_from_message(
    DBusError *error,
    DBusMessage *message
) {
    return FALSE;
}

dbus_bool_t dbus_message_allocate_data_slot(
    dbus_int32_t *slot_p
) {
    return FALSE;
}

void dbus_message_free_data_slot(
    dbus_int32_t *slot_p
) {

}

dbus_bool_t dbus_message_set_data(
    DBusMessage *message,
    dbus_int32_t slot,
    void *data,
    DBusFreeFunction free_data_func
) {
    return FALSE;
}

void* dbus_message_get_data(
    DBusMessage *message,
    dbus_int32_t slot
) {
    return NULL;
}

int dbus_message_type_from_string(
    const char *type_str
) {
    return DBUS_MESSAGE_TYPE_INVALID;
}

const char* dbus_message_type_to_string(
    int type
) {
    return NULL;
}

dbus_bool_t dbus_message_marshal(
    DBusMessage *msg,
    char **marshalled_data_p,
    int *len_p
) {
    return FALSE;
}

DBusMessage* dbus_message_demarshal(
    const char *str,
    int len,
    DBusError *error
) {
    return NULL;
}

int dbus_message_demarshal_bytes_needed(
    const char *str,
    int len
) {
    return 0;
}

void dbus_message_set_allow_interactive_authorization(
    DBusMessage *message,
    dbus_bool_t allow
) {

}

dbus_bool_t dbus_message_get_allow_interactive_authorization(
    DBusMessage *message
) {
    return FALSE;
}
