/* $Header: malloc.c,v 1.0.1.4 88/03/02 12:34:23 root Exp $
 *
 * $Log:	malloc.c,v $
 * Revision 1.0.1.4  88/03/02  12:34:23  root
 * patch24: shortened a long identifier
 * 
 * Revision 1.0.1.3  88/02/12  10:26:09  root
 * patch22: made yell about bad free()
 * 
 * Revision 1.0.1.2  88/02/04  11:16:24  root
 * patch18: regularized includes.
 * 
 * Revision 1.0.1.1  88/01/24  03:53:23  root
 * patch 2: made depend on perl.h.
 * 
 * Revision 1.0  87/12/18  13:05:35  root
 * Initial revision
 * 
 */

#ifndef lint
static char sccsid[] = "@(#)malloc.c	4.3 (Berkeley) 9/16/83";
#endif

/*
 * This storage allocator won't compile on OpenBSD.
 */

