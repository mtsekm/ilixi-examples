## Makefile.am for /widget_gallery
bin_PROGRAMS 		= 	ilixi_gallery
ilixi_gallery_LDADD	=	@ILIXI_LIBS@
ilixi_gallery_CPPFLAGS 	= 	@ILIXI_CFLAGS@
ilixi_gallery_SOURCES	= 	WidgetGallery.cpp
noinst_HEADERS		=	WidgetGallery.h

install-data-hook:
		ilixi_maestro --install $(bindir)/ilixi_gallery "Widget Gallery"
