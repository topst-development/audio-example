#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

#AC_PREREQ(2.60)
AC_INIT(audioExample, 0.1, tost@telechips.com)
AC_CONFIG_SRCDIR([src/audioExample.c])
AC_CONFIG_HEADER([config.h])
AM_INIT_AUTOMAKE(audioExample, main)

# Checks for programs.
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_MAKE_SET

# Checks PKG-CONFIG
PKG_CHECK_MODULES([ALSA], [alsa])
# Checks for libraries.
AC_CHECK_LIB(asound, snd_pcm_ioplug_create,,
 	     AC_ERROR([*** libasound has no external plugin SDK]), -ldl)
 
AM_PROG_LIBTOOL

# Set shared libraries
AC_DISABLE_STATIC
AC_ENABLE_SHARED

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

#AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_FILES([Makefile
							src/Makefile])
AC_OUTPUT
