.POSIX:

PREFIX     = /usr/local
LIBDIR     = ${PREFIX}/lib
INCLUDEDIR = ${PREFIX}/include

XCFLAGS = \
	  -std=c99 -O3 -DDBUS_COMPILATION -I. \
	  -Wall -Wextra -pedantic -Wmissing-prototypes -Wstrict-prototypes \
	  -Wno-unused-parameter $(CFLAGS) $(CPPFLAGS)

OBJ = \
	  dbus/dbus-address.o \
	  dbus/dbus-bus.o \
	  dbus/dbus-connection.o \
	  dbus/dbus-errors.o \
	  dbus/dbus-memory.o \
	  dbus/dbus-message.o \
	  dbus/dbus-misc.o \
	  dbus/dbus-pending-call.o \
	  dbus/dbus-server.o \
	  dbus/dbus-signature.o \
	  dbus/dbus-syntax.o \
	  dbus/dbus-threads.o

all: libdbus-1.so libdbus-1.a

.c.o:
	$(CC) $(XCFLAGS) -c -o $@ $<

libdbus-1.so: $(OBJ)
	$(CC) $(XCFLAGS) -o $@ $(OBJ) $(LDFLAGS) -shared -Wl,-soname,libdbus-1.so.1

libdbus-1.a: $(OBJ)
	$(AR) -rc $@ $(OBJ)

clean:
	rm -f libdbus-1.* $(OBJ)

install:
	mkdir -p $(DESTDIR)$(INCLUDEDIR)/dbus-1.0/dbus
	mkdir -p $(DESTDIR)$(LIBDIR)/pkgconfig
	cp -f dbus/*.h    $(DESTDIR)$(INCLUDEDIR)/dbus-1.0
	cp -f libdbus-1.* $(DESTDIR)$(LIBDIR)
	cp -f dbus-1.pc   $(DESTDIR)$(LIBDIR)/pkgconfig

.PHONY: all clean install
