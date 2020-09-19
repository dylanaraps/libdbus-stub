#ifndef DBUS_PROTOCOL_H
#define DBUS_PROTOCOL_H

#ifdef __cplusplus
extern "C" {
#endif

#define DBUS_LITTLE_ENDIAN ('l')
#define DBUS_BIG_ENDIAN    ('B')
#define DBUS_MAJOR_PROTOCOL_VERSION 1
#define DBUS_TYPE_INVALID       ((int) '\0')
#define DBUS_TYPE_INVALID_AS_STRING        "\0"
#define DBUS_TYPE_BYTE          ((int) 'y')
#define DBUS_TYPE_BYTE_AS_STRING           "y"
#define DBUS_TYPE_BOOLEAN       ((int) 'b')
#define DBUS_TYPE_BOOLEAN_AS_STRING        "b"
#define DBUS_TYPE_INT16         ((int) 'n')
#define DBUS_TYPE_INT16_AS_STRING          "n"
#define DBUS_TYPE_UINT16        ((int) 'q')
#define DBUS_TYPE_UINT16_AS_STRING         "q"
#define DBUS_TYPE_INT32         ((int) 'i')
#define DBUS_TYPE_INT32_AS_STRING          "i"
#define DBUS_TYPE_UINT32        ((int) 'u')
#define DBUS_TYPE_UINT32_AS_STRING         "u"
#define DBUS_TYPE_INT64         ((int) 'x')
#define DBUS_TYPE_INT64_AS_STRING          "x"
#define DBUS_TYPE_UINT64        ((int) 't')
#define DBUS_TYPE_UINT64_AS_STRING         "t"
#define DBUS_TYPE_DOUBLE        ((int) 'd')
#define DBUS_TYPE_DOUBLE_AS_STRING         "d"
#define DBUS_TYPE_STRING        ((int) 's')
#define DBUS_TYPE_STRING_AS_STRING         "s"
#define DBUS_TYPE_OBJECT_PATH   ((int) 'o')
#define DBUS_TYPE_OBJECT_PATH_AS_STRING    "o"
#define DBUS_TYPE_SIGNATURE     ((int) 'g')
#define DBUS_TYPE_SIGNATURE_AS_STRING      "g"
#define DBUS_TYPE_UNIX_FD      ((int) 'h')
#define DBUS_TYPE_UNIX_FD_AS_STRING        "h"
#define DBUS_TYPE_ARRAY         ((int) 'a')
#define DBUS_TYPE_ARRAY_AS_STRING          "a"
#define DBUS_TYPE_VARIANT       ((int) 'v')
#define DBUS_TYPE_VARIANT_AS_STRING        "v"
#define DBUS_TYPE_STRUCT        ((int) 'r')
#define DBUS_TYPE_STRUCT_AS_STRING         "r"
#define DBUS_TYPE_DICT_ENTRY    ((int) 'e')
#define DBUS_TYPE_DICT_ENTRY_AS_STRING     "e"
#define DBUS_NUMBER_OF_TYPES    (16)
#define DBUS_STRUCT_BEGIN_CHAR   ((int) '(')
#define DBUS_STRUCT_BEGIN_CHAR_AS_STRING   "("
#define DBUS_STRUCT_END_CHAR     ((int) ')')
#define DBUS_STRUCT_END_CHAR_AS_STRING     ")"
#define DBUS_DICT_ENTRY_BEGIN_CHAR   ((int) '{')
#define DBUS_DICT_ENTRY_BEGIN_CHAR_AS_STRING   "{"
#define DBUS_DICT_ENTRY_END_CHAR     ((int) '}')
#define DBUS_DICT_ENTRY_END_CHAR_AS_STRING     "}"
#define DBUS_MAXIMUM_NAME_LENGTH 255
#define DBUS_MAXIMUM_SIGNATURE_LENGTH 255
#define DBUS_MAXIMUM_MATCH_RULE_LENGTH 1024
#define DBUS_MAXIMUM_MATCH_RULE_ARG_NUMBER 63
#define DBUS_MAXIMUM_ARRAY_LENGTH (67108864)
#define DBUS_MAXIMUM_ARRAY_LENGTH_BITS 26
#define DBUS_MAXIMUM_MESSAGE_LENGTH (DBUS_MAXIMUM_ARRAY_LENGTH * 2)
#define DBUS_MAXIMUM_MESSAGE_LENGTH_BITS 27
#define DBUS_MAXIMUM_MESSAGE_UNIX_FDS (DBUS_MAXIMUM_MESSAGE_LENGTH/4)
#define DBUS_MAXIMUM_MESSAGE_UNIX_FDS_BITS (DBUS_MAXIMUM_MESSAGE_LENGTH_BITS-2)
#define DBUS_MAXIMUM_TYPE_RECURSION_DEPTH 32
#define DBUS_MESSAGE_TYPE_INVALID       0
#define DBUS_MESSAGE_TYPE_METHOD_CALL   1
#define DBUS_MESSAGE_TYPE_METHOD_RETURN 2
#define DBUS_MESSAGE_TYPE_ERROR         3
#define DBUS_MESSAGE_TYPE_SIGNAL        4
#define DBUS_NUM_MESSAGE_TYPES          5
#define DBUS_HEADER_FLAG_NO_REPLY_EXPECTED 0x1
#define DBUS_HEADER_FLAG_NO_AUTO_START     0x2
#define DBUS_HEADER_FLAG_ALLOW_INTERACTIVE_AUTHORIZATION 0x4
#define DBUS_HEADER_FIELD_INVALID        0
#define DBUS_HEADER_FIELD_PATH           1
#define DBUS_HEADER_FIELD_INTERFACE      2
#define DBUS_HEADER_FIELD_MEMBER         3
#define DBUS_HEADER_FIELD_ERROR_NAME     4
#define DBUS_HEADER_FIELD_REPLY_SERIAL   5
#define DBUS_HEADER_FIELD_DESTINATION    6
#define DBUS_HEADER_FIELD_SENDER         7
#define DBUS_HEADER_FIELD_SIGNATURE      8
#define DBUS_HEADER_FIELD_UNIX_FDS       9
#define DBUS_HEADER_FIELD_CONTAINER_INSTANCE 10
#define DBUS_HEADER_FIELD_LAST DBUS_HEADER_FIELD_CONTAINER_INSTANCE

#define DBUS_HEADER_SIGNATURE               \
        DBUS_TYPE_BYTE_AS_STRING            \
        DBUS_TYPE_BYTE_AS_STRING            \
        DBUS_TYPE_BYTE_AS_STRING            \
        DBUS_TYPE_BYTE_AS_STRING            \
        DBUS_TYPE_UINT32_AS_STRING          \
        DBUS_TYPE_UINT32_AS_STRING          \
        DBUS_TYPE_ARRAY_AS_STRING           \
        DBUS_STRUCT_BEGIN_CHAR_AS_STRING    \
        DBUS_TYPE_BYTE_AS_STRING            \
        DBUS_TYPE_VARIANT_AS_STRING         \
        DBUS_STRUCT_END_CHAR_AS_STRING

#define DBUS_MINIMUM_HEADER_SIZE 16

#ifdef __cplusplus
}
#endif

#endif
