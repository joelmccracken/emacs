/* Copyright (C) 2001 Free Software Foundation, Inc.

This file is part of GNU Emacs.

GNU Emacs is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

GNU Emacs is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Emacs; see the file COPYING.  If not, write to the Free
Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
MA 02110-1301, USA.  */

/* Contributed by Andrew Choi (akochoi@mac.com).  */

#ifndef _ALLOCA_H_
#define _ALLOCA_H_

#if __MRC__
void *__alloca(size_t size);
#endif

#endif

/* arch-tag: 8d4114d1-633e-49e7-8f18-b5648f9c4511
   (do not change this comment) */
