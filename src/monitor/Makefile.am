## Makefile.am for /monitor
bin_PROGRAMS 		= 	ilixi_monitor
ilixi_monitor_LDADD	=	@ILIXI_LIBS@
ilixi_monitor_CPPFLAGS 	= 	@ILIXI_CFLAGS@
ilixi_monitor_SOURCES	= 	CPUMonitor.cpp FSMonitor.cpp MEMMonitor.cpp Monitor.cpp NETMonitor.cpp OSMonitor.cpp
noinst_HEADERS		=	CPUMonitor.h FSMonitor.h MEMMonitor.h Monitor.h NETMonitor.h OSMonitor.h
miscdatadir 		=	$(DATADIR)
miscdata_DATA 		=	monitor.png						
EXTRA_DIST 		= 	$(miscdata_DATA)

install-data-hook:
	ilixi_maestro --install $(bindir)/ilixi_monitor "System Monitor" $(DATADIR)/monitor.png									
