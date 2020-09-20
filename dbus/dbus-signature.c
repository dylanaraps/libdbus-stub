#include "dbus-signature.h"

void dbus_signature_iter_init(
    DBusSignatureIter *iter,
    const char *signature
) {

}

int dbus_signature_iter_get_current_type(
    const DBusSignatureIter *iter
) {
    return 0;
}

char *dbus_signature_iter_get_signature(
    const DBusSignatureIter *iter
) {
    return NULL;
}

int dbus_signature_iter_get_element_type(
    const DBusSignatureIter *iter
) {
    return DBUS_TYPE_INVALID;
}

dbus_bool_t dbus_signature_iter_next(
    DBusSignatureIter *iter
) {
    return FALSE;
}

void dbus_signature_iter_recurse(
    const DBusSignatureIter *iter,
    DBusSignatureIter   *subiter
) {

}

dbus_bool_t dbus_signature_validate(
    const char *signature,
    DBusError*error
) {
    return TRUE;
}

dbus_bool_t dbus_signature_validate_single(
    const char *signature,
    DBusError*error
) {
    return TRUE;
}

dbus_bool_t dbus_type_is_valid(
    int typecode
) {
    return FALSE;
}

dbus_bool_t dbus_type_is_basic(
    int typecode
) {
    return FALSE;
}

dbus_bool_t dbus_type_is_container(
    int typecode
) {
    return FALSE;
}

dbus_bool_t dbus_type_is_fixed(
    int typecode
) {
    return FALSE;
}
