.POSIX:
ALL_WARNING = -Wall -Wextra -pedantic
ALL_LDFLAGS = -lxcb -lxcb-keysyms $(LDFLAGS)
ALL_CFLAGS = $(CPPFLAGS) $(CFLAGS) -std=c99 $(ALL_WARNING)
PREFIX = /usr/local
LDLIBS = -lm
BINDIR = $(PREFIX)/bin
MANDIR = $(PREFIX)/share/man

all: ade
install: all
	mkdir -p $(DESTDIR)$(BINDIR)
	mkdir -p $(DESTDIR)$(MANDIR)/man1
	cp -f ade $(DESTDIR)$(BINDIR)
	cp -f ade.1 $(DESTDIR)$(MANDIR)/man1
	chmod 755 $(DESTDIR)$(BINDIR)/ade
	chmod 644 $(DESTDIR)$(MANDIR)/man1/ade.1
ade: ade.o
	$(CC) $(ALL_LDFLAGS) -o xwm xwm.o $(LDLIBS)
ade.o: ade.c ade.h config.h
clean:
	rm -f ade *.o
uninstall:
	rm -f $(DESTDIR)$(BINDIR)/ade
	rm -f $(DESTDIR)$(MANDIR)/man1/ade.1
.PHONY: all install uninstall clean
