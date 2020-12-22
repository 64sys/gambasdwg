/***************************************************************************

  c_websettings.h

  (c) Benoît Minisini <g4mba5@gmail.com>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2, or (at your option)
  any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
  MA 02110-1301, USA.

***************************************************************************/

#ifndef __C_WEBSETTINGS_H
#define __C_WEBSETTINGS_H

#include "main.h"

typedef
  struct {
    GB_BASE ob;
   }
  CWEBSETTINGS;

#ifndef __C_WEBSETTINGS_C

extern GB_DESC WebViewSettingsDesc[];
extern GB_DESC WebSettingsDesc[];
extern GB_DESC WebSettingsFontsDesc[];

#else

#define THIS    ((CWEBVIEW *)_object)
#define WIDGET  (WEBKIT_WEB_VIEW(THIS->widget))

#endif

void WEBVIEW_init_settings(void *_object);

#endif
