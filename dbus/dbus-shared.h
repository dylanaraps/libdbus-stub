#ifndef DBUS_SHARED_H
#define DBUS_SHARED_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    DBUS_BUS_SESSION,
    DBUS_BUS_SYSTEM,
    DBUS_BUS_STARTER
} DBusBusType;

typedef enum  {
    DBUS_HANDLER_RESULT_HANDLED,
    DBUS_HANDLER_RESULT_NOT_YET_HANDLED,
    DBUS_HANDLER_RESULT_NEED_MEMORY
} DBusHandlerResult;

#define DBUS_SERVICE_DBUS "org.freedesktop.DBus"
#define DBUS_PATH_DBUS    "/org/freedesktop/DBus"
#define DBUS_PATH_LOCAL   "/org/freedesktop/DBus/Local"

#define DBUS_INTERFACE_DBUS        "org.freedesktop.DBus"
#define DBUS_INTERFACE_CONTAINERS1 "org.freedesktop.DBus.Containers1"
#define DBUS_INTERFACE_MONITORING  "org.freedesktop.DBus.Monitoring"

#define DBUS_INTERFACE_VERBOSE        "org.freedesktop.DBus.Verbose"
#define DBUS_INTERFACE_INTROSPECTABLE "org.freedesktop.DBus.Introspectable"
#define DBUS_INTERFACE_PROPERTIES     "org.freedesktop.DBus.Properties"
#define DBUS_INTERFACE_PEER           "org.freedesktop.DBus.Peer"

#define DBUS_INTERFACE_LOCAL "org.freedesktop.DBus.Local"
#define DBUS_NAME_FLAG_ALLOW_REPLACEMENT 0x1
#define DBUS_NAME_FLAG_REPLACE_EXISTING  0x2
#define DBUS_NAME_FLAG_DO_NOT_QUEUE      0x4

#define DBUS_REQUEST_NAME_REPLY_PRIMARY_OWNER  1
#define DBUS_REQUEST_NAME_REPLY_IN_QUEUE       2
#define DBUS_REQUEST_NAME_REPLY_EXISTS         3
#define DBUS_REQUEST_NAME_REPLY_ALREADY_OWNER  4

#define DBUS_RELEASE_NAME_REPLY_RELEASED     1
#define DBUS_RELEASE_NAME_REPLY_NON_EXISTENT 2
#define DBUS_RELEASE_NAME_REPLY_NOT_OWNER    3

#define DBUS_START_REPLY_SUCCESS         1
#define DBUS_START_REPLY_ALREADY_RUNNING 2

#ifdef __cplusplus
}
#endif

#endif
