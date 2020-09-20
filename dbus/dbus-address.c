#include "dbus-address.h"

dbus_bool_t dbus_parse_address(
    const char *address,
    DBusAddressEntry ***entry_result,
    int *array_len,
    DBusError *error
) {
    return TRUE;
}

const char *dbus_address_entry_get_value(
    DBusAddressEntry *entry,
    const char *key
) {
    return NULL;
}

const char *dbus_address_entry_get_method(
    DBusAddressEntry *entry
) {
    return NULL;
}

void dbus_address_entries_free(
    DBusAddressEntry **entries
) {
    return;
}

char* dbus_address_escape_value(
    const char *value
) {
    return NULL;
}

char* dbus_address_unescape_value(
    const char *value,
    DBusError  *error
) {
    error->name    = DBUS_ERROR_FAILED;
    error->message = "stub";

    return NULL; // no memory.
}
