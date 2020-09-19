.POSIX:

PREFIX  = /usr/local
XCFLAGS = -std=c99 -O3 \
		  -Wall -Wextra -pedantic -Wmissing-prototypes -Wstrict-prototypes \
		  -Wno-unused-parameter -DDBUS_COMPILATION -I$(PWD) \
		  $(CFLAGS) $(CPPFLAGS)

OBJ = \
	  dbus/dbus-address.o \
	  dbus/dbus-bus.o

all: libdbus.so

.c.o:
	$(CC) $(XCFLAGS) -c -o $@ $<

libdbus.so: $(OBJ)
	$(CC) $(XCFLAGS) -o $@ $(OBJ) $(LDFLAGS) -shared -Wl,-soname,libdbus.so.1

clean:
	rm -f libdbus.* $(OBJ)

.PHONY: all clea
