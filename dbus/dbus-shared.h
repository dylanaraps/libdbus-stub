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

#ifdef __cplusplus
}
#endif

#endif
