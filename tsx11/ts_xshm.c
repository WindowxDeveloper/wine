/*
 * Thread safe wrappers around XShm calls.
 * This file was generated automatically by tools/make_X11wrappers
 * DO NOT EDIT!
 */

#include <X11/Xlib.h>
#include <X11/extensions/XShm.h>
#include "x11drv.h"
#include "debug.h"

Bool TSXShmQueryExtension(Display *a0)
{
  Bool r;
  TRACE(x11, "Call XShmQueryExtension\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XShmQueryExtension(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE(x11, "Ret XShmQueryExtension\n");
  return r;
}

Bool TSXShmQueryVersion(Display *a0, int *a1, int *a2, Bool *a3)
{
  Bool r;
  TRACE(x11, "Call XShmQueryVersion\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XShmQueryVersion(a0, a1, a2, a3);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE(x11, "Ret XShmQueryVersion\n");
  return r;
}

int TSXShmPixmapFormat(Display *a0)
{
  int r;
  TRACE(x11, "Call XShmPixmapFormat\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XShmPixmapFormat(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE(x11, "Ret XShmPixmapFormat\n");
  return r;
}

Status TSXShmAttach(Display *a0, XShmSegmentInfo *a1)
{
  Status r;
  TRACE(x11, "Call XShmAttach\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XShmAttach(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE(x11, "Ret XShmAttach\n");
  return r;
}

Status TSXShmDetach(Display *a0, XShmSegmentInfo *a1)
{
  Status r;
  TRACE(x11, "Call XShmDetach\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XShmDetach(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE(x11, "Ret XShmDetach\n");
  return r;
}

Status TSXShmPutImage(Display *a0, Drawable a1, GC a2, XImage *a3, int a4, int a5, int a6, int a7, unsigned int a8, unsigned int a9, Bool a10)
{
  Status r;
  TRACE(x11, "Call XShmPutImage\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XShmPutImage(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE(x11, "Ret XShmPutImage\n");
  return r;
}

Status TSXShmGetImage(Display *a0, Drawable a1, XImage *a2, int a3, int a4, unsigned long a5)
{
  Status r;
  TRACE(x11, "Call XShmGetImage\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XShmGetImage(a0, a1, a2, a3, a4, a5);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE(x11, "Ret XShmGetImage\n");
  return r;
}

XImage * TSXShmCreateImage(Display *a0, Visual *a1, unsigned int a2, int a3, char *a4, XShmSegmentInfo *a5, unsigned int a6, unsigned int a7)
{
  XImage * r;
  TRACE(x11, "Call XShmCreateImage\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XShmCreateImage(a0, a1, a2, a3, a4, a5, a6, a7);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE(x11, "Ret XShmCreateImage\n");
  return r;
}

Pixmap TSXShmCreatePixmap(Display *a0, Drawable a1, char *a2, XShmSegmentInfo *a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  Pixmap r;
  TRACE(x11, "Call XShmCreatePixmap\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XShmCreatePixmap(a0, a1, a2, a3, a4, a5, a6);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE(x11, "Ret XShmCreatePixmap\n");
  return r;
}

