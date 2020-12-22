
dnl ---- configure.ac for gb.dwg
m4_include([../version.m4])
AC_INIT(gambas3-gb-dwg, GB_VERSION, GB_MAIL, [], GB_URL)
AC_CONFIG_MACRO_DIR([m4])
GB_INIT(gb.dwg)
AC_PROG_LIBTOOL
GB_COMPONENT_PKG_CONFIG(
  dwg,
  DWG,
  gb.dwg,
  [src],
  'libredwg >= 0.11.1.158_c3a7')
AC_OUTPUT( Makefile src/Makefile )
GB_PRINT_MESSAGES
