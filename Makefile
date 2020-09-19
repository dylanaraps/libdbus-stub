.POSIX:

PREFIX  = /usr/local
XCFLAGS = -std=c99 -O3 -DDBUS_COMPILATION -I. \
		  -Wall -Wextra -pedantic -Wmissing-prototypes -Wstrict-prototypes \
		  -Wno-unused-parameter $(CFLAGS) $(CPPFLAGS)

OBJ = \
	  dbus/dbus-address.o \
	  dbus/dbus-bus.o \
	  dbus/dbus-connection.o \
	  dbus/dbus-errors.o \
	  dbus/dbus-memory.o \
	  dbus/dbus-misc.o \
	  dbus/dbus-message.o \
	  dbus/dbus-pending-call.o \
	  dbus/dbus-server.o \
	  dbus/dbus-signature.o

all: libdbus.so

.c.o:
	$(CC) $(XCFLAGS) -c -o $@ $<

libdbus.so: $(OBJ)
	$(CC) $(XCFLAGS) -o $@ $(OBJ) $(LDFLAGS) -shared -Wl,-soname,libdbus.so.1

clean:
	rm -f libdbus.* $(OBJ)

.PHONY: all clea
