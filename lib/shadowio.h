/*
 * SPDX-FileCopyrightText: 1990 - 1994, Julianne Frances Haugh
 * SPDX-FileCopyrightText: 1996 - 2000, Marek Michałkiewicz
 * SPDX-FileCopyrightText: 2001 - 2005, Tomasz Kłoczko
 * SPDX-FileCopyrightText: 2008       , Nicolas François
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* $Id$ */
#ifndef SHADOWIO_H
#define SHADOWIO_H

#include "defines.h"

extern int spw_close (void);
extern bool spw_file_present (void);
#if HAVE_STRUCT_SPWD
extern /*@observer@*/ /*@null@*/const struct spwd *spw_locate (const char *name);
#endif
extern int spw_lock (void);
extern int spw_setdbname (const char *filename);
extern /*@observer@*/const char *spw_dbname (void);
#if HAVE_STRUCT_SPWD
extern /*@observer@*/ /*@null@*/const struct spwd *spw_next (void);
#endif
extern int spw_open (int mode);
extern int spw_remove (const char *name);
extern int spw_rewind (void);
extern int spw_unlock (void);
#if HAVE_STRUCT_SPWD
extern int spw_update (const struct spwd *sp);
#endif
extern int spw_sort (void);

#endif
