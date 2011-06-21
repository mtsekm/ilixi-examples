######################################################################
# Process this file with autoconf to produce a configure script.
######################################################################
AC_PREREQ(2.65)
AC_INIT([ilixi-examples],[0.1.0],[tarik@ilixi.org],[ilixi-examples],[http://www.ilixi.org])
AC_CONFIG_SRCDIR([config.h.in])
AC_CONFIG_AUX_DIR([config])
AC_CONFIG_MACRO_DIR([config/m4])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_SRCDIR([src/media_player/MediaPlayer.h])

# For automake
PACKAGE=ilixi-examples
VERSION=0.1.0
AM_INIT_AUTOMAKE($PACKAGE, $VERSION, no-define)

######################################################################
# Dependencies
######################################################################
# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_INSTALL

# Checks for libraries.
AC_MSG_NOTICE([checking if ilixi is installed...])
PKG_CHECK_MODULES([ILIXI], [ilixi-0.1.0])

######################################################################

DATADIR=$datadir/$PACKAGE-$VERSION
AC_SUBST(DATADIR)

AC_OUTPUT([ \
		Makefile  \
		src/Makefile \
		src/hello_world/Makefile \
		src/media_player/Makefile \
		src/widget_gallery/Makefile \
		src/monitor/Makefile \
])

AC_MSG_RESULT([
Type \`make' to build ilixi-examples. 
Type \`make install' to install ilixi-examples.
]);

