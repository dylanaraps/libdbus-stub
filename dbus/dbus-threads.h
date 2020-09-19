#if !defined (DBUS_INSIDE_DBUS_H) && !defined (DBUS_COMPILATION)
#  error "Only <dbus/dbus.h> can be included directly."
#endif

#ifndef DBUS_THREADS_H
#define DBUS_THREADS_H

#include <dbus/dbus-macros.h>
#include <dbus/dbus-types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DBusMutex DBusMutex;
typedef struct DBusCondVar DBusCondVar;
typedef DBusMutex* (* DBusMutexNewFunction) (void);
typedef void (* DBusMutexFreeFunction) (DBusMutex *mutex);
typedef dbus_bool_t (* DBusMutexLockFunction) (DBusMutex *mutex);
typedef dbus_bool_t (* DBusMutexUnlockFunction) (DBusMutex *mutex);
typedef DBusMutex*  (* DBusRecursiveMutexNewFunction) (void);
typedef void (* DBusRecursiveMutexFreeFunction) (DBusMutex *mutex);
typedef void (* DBusRecursiveMutexLockFunction) (DBusMutex *mutex);
typedef void (* DBusRecursiveMutexUnlockFunction) (DBusMutex *mutex);
typedef DBusCondVar*  (* DBusCondVarNewFunction) (void);
typedef void (* DBusCondVarFreeFunction) (DBusCondVar *cond);

typedef void (* DBusCondVarWaitFunction) (
        DBusCondVar *cond,
        DBusMutex *mutex
);

typedef dbus_bool_t (* DBusCondVarWaitTimeoutFunction) (
        DBusCondVar *cond,
        DBusMutex *mutex,
        int timeout_milliseconds
);

typedef void (* DBusCondVarWakeOneFunction) (DBusCondVar *cond);
typedef void (* DBusCondVarWakeAllFunction) (DBusCondVar *cond);

typedef enum  {
    DBUS_THREAD_FUNCTIONS_MUTEX_NEW_MASK              = 1 << 0,
    DBUS_THREAD_FUNCTIONS_MUTEX_FREE_MASK             = 1 << 1,
    DBUS_THREAD_FUNCTIONS_MUTEX_LOCK_MASK             = 1 << 2,
    DBUS_THREAD_FUNCTIONS_MUTEX_UNLOCK_MASK           = 1 << 3,
    DBUS_THREAD_FUNCTIONS_CONDVAR_NEW_MASK            = 1 << 4,
    DBUS_THREAD_FUNCTIONS_CONDVAR_FREE_MASK           = 1 << 5,
    DBUS_THREAD_FUNCTIONS_CONDVAR_WAIT_MASK           = 1 << 6,
    DBUS_THREAD_FUNCTIONS_CONDVAR_WAIT_TIMEOUT_MASK   = 1 << 7,
    DBUS_THREAD_FUNCTIONS_CONDVAR_WAKE_ONE_MASK       = 1 << 8,
    DBUS_THREAD_FUNCTIONS_CONDVAR_WAKE_ALL_MASK       = 1 << 9,
    DBUS_THREAD_FUNCTIONS_RECURSIVE_MUTEX_NEW_MASK    = 1 << 10,
    DBUS_THREAD_FUNCTIONS_RECURSIVE_MUTEX_FREE_MASK   = 1 << 11,
    DBUS_THREAD_FUNCTIONS_RECURSIVE_MUTEX_LOCK_MASK   = 1 << 12,
    DBUS_THREAD_FUNCTIONS_RECURSIVE_MUTEX_UNLOCK_MASK = 1 << 13,
    DBUS_THREAD_FUNCTIONS_ALL_MASK                    = (1 << 14) - 1
} DBusThreadFunctionsMask;

typedef struct {
    unsigned int mask;

    DBusMutexNewFunction mutex_new;
    DBusMutexFreeFunction mutex_free;
    DBusMutexLockFunction mutex_lock;
    DBusMutexUnlockFunction mutex_unlock;

    DBusCondVarNewFunction condvar_new;
    DBusCondVarFreeFunction condvar_free;
    DBusCondVarWaitFunction condvar_wait;
    DBusCondVarWaitTimeoutFunction condvar_wait_timeout;
    DBusCondVarWakeOneFunction condvar_wake_one;
    DBusCondVarWakeAllFunction condvar_wake_all;

    DBusRecursiveMutexNewFunction recursive_mutex_new;
    DBusRecursiveMutexFreeFunction recursive_mutex_free;
    DBusRecursiveMutexLockFunction recursive_mutex_lock;
    DBusRecursiveMutexUnlockFunction recursive_mutex_unlock;

    void (* padding1) (void);
    void (* padding2) (void);
    void (* padding3) (void);
    void (* padding4) (void);
} DBusThreadFunctions;

dbus_bool_t dbus_threads_init(
    const DBusThreadFunctions *functions
);

dbus_bool_t dbus_threads_init_default(
    void
);

#ifdef __cplusplus
}
#endif

#endif
