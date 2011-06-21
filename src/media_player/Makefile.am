## Makefile.am for /media_player
bin_PROGRAMS 		= 	ilixi_mp
ilixi_mp_LDADD		=	@ILIXI_LIBS@
ilixi_mp_CPPFLAGS 	= 	 -DDATADIR=\"@DATADIR@\" @ILIXI_CFLAGS@
ilixi_mp_SOURCES	= 	MediaPlayer.cpp
noinst_HEADERS		=	MediaPlayer.h
miscdatadir 		=	$(DATADIR)
miscdata_DATA 		= 	media_player.png test.avi						
EXTRA_DIST 		= 	$(miscdata_DATA)

install-data-hook:
		ilixi_maestro --install $(bindir)/ilixi_mp "Media Player" $(DATADIR)/media_player.png	
