#include "dbus-pending-call.h"

DBusPendingCall* dbus_pending_call_ref(
    DBusPendingCall *pending
) {
    return NULL;
}

void dbus_pending_call_unref(
    DBusPendingCall *pending
) {

}

dbus_bool_t dbus_pending_call_set_notify(
    DBusPendingCall *pending,
    DBusPendingCallNotifyFunction function,
    void *user_data,
    DBusFreeFunction free_user_data
) {
    return FALSE;
}

void dbus_pending_call_cancel(
    DBusPendingCall *pending
) {

}

dbus_bool_t dbus_pending_call_get_completed(
    DBusPendingCall *pending
) {
    return FALSE;
}

DBusMessage* dbus_pending_call_steal_reply(
    DBusPendingCall *pending
) {
    return NULL;
}

void dbus_pending_call_block(
    DBusPendingCall *pending
) {

}

dbus_bool_t dbus_pending_call_allocate_data_slot(
    dbus_int32_t *slot_p
) {
    return FALSE;
}

void dbus_pending_call_free_data_slot(
    dbus_int32_t *slot_p
) {

}

dbus_bool_t dbus_pending_call_set_data(
    DBusPendingCall *pending,
    dbus_int32_t slot,
    void *data,
    DBusFreeFunction free_data_func
) {
    return FALSE;
}

void* dbus_pending_call_get_data(
    DBusPendingCall *pending,
    dbus_int32_t slot
) {
    return NULL;
}
