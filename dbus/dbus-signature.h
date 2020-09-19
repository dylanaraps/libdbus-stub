#if !defined (DBUS_INSIDE_DBUS_H) && !defined (DBUS_COMPILATION)
#  error "Only <dbus/dbus.h> can be included directly."
#endif

#ifndef DBUS_SIGNATURES_H
#define DBUS_SIGNATURES_H

#include <dbus/dbus-macros.h>
#include <dbus/dbus-types.h>
#include <dbus/dbus-errors.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct  {
    // no public fields.

    void *dummy1; // NOTE: real member of struct upstream.
} DBusSignatureIter;

void dbus_signature_iter_init(
    DBusSignatureIter *iter,
    const char *signature
);

int dbus_signature_iter_get_current_type(
    const DBusSignatureIter *iter
);

char *dbus_signature_iter_get_signature(
    const DBusSignatureIter *iter
);

int dbus_signature_iter_get_element_type(
    const DBusSignatureIter *iter
);

dbus_bool_t dbus_signature_iter_next(
    DBusSignatureIter *iter
);

void dbus_signature_iter_recurse(
    const DBusSignatureIter *iter,
    DBusSignatureIter   *subiter
);

dbus_bool_t dbus_signature_validate(
    const char *signature,
    DBusError*error
);

dbus_bool_t dbus_signature_validate_single(
    const char *signature,
    DBusError*error
);

dbus_bool_t dbus_type_is_valid(
    int typecode
);

dbus_bool_t dbus_type_is_basic(
    int typecode
);

dbus_bool_t dbus_type_is_container(
    int typecode
);

dbus_bool_t dbus_type_is_fixed(
    int typecode
);

#ifdef __cplusplus
}
#endif

#endif
