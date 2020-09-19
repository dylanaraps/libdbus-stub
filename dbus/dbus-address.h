#if !defined (DBUS_INSIDE_DBUS_H) && !defined (DBUS_COMPILATION)
#  error "Only <dbus/dbus.h> can be included directly."
#endif

#ifndef DBUS_ADDRESS_H
#define DBUS_ADDRESS_H

#include <dbus/dbus-types.h>
#include <dbus/dbus-errors.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DBusAddressEntry DBusAddressEntry;

dbus_bool_t dbus_parse_address(
    const char       *address,
    DBusAddressEntry ***entry_result,
    int              *array_len,
    DBusError        *error
);

const char *dbus_address_entry_get_value(
    DBusAddressEntry *entry,
    const char       *key
);

const char *dbus_address_entry_get_method(
    DBusAddressEntry   *entry
);

void dbus_address_entries_free(
    DBusAddressEntry  **entries
);

char* dbus_address_escape_value(
    const char *value
);

char* dbus_address_unescape_value(
    const char *value,
    DBusError  *error
);

#ifdef __cplusplus
}
#endif

#endif
