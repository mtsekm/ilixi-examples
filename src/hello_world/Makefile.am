## Makefile.am for /hello_world
bin_PROGRAMS 		= 	ilixi_hello
ilixi_hello_LDADD	=	@ILIXI_LIBS@
ilixi_hello_CPPFLAGS 	= 	@ILIXI_CFLAGS@
ilixi_hello_SOURCES	= 	HelloWorld.cpp
noinst_HEADERS		=	HelloWorld.h

install-data-hook:
		ilixi_maestro --install $(bindir)/ilixi_hello "Hello World"
