/*****************************************************************************
 *
 * Copyright (C) 2001 Uppsala University & Ericsson AB.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors: Erik Nordström, <erik.nordstrom@it.uu.se>
 *
 *
 *****************************************************************************/
#ifndef _AODVVANET_AODVVANETRERR_H
#define _AODVVANET_AODVVANETRERR_H

#ifndef NS_NO_GLOBALS

#ifndef OMNETPP
#ifndef  _WIN32
#include <endian.h>
#else
#ifndef __LITTLE_ENDIAN
#define __LITTLE_ENDIAN
#endif
#endif
#endif

#include "defs_aodvvanet.h"
#include "routing_table.h"


/* AODVVANETRERR Flags: */
#define AODVVANETRERR_NODELETE 0x1

#ifndef OMNETPP
/* Extra unreachable destinations... */
typedef struct
{
    u_int32_t dest_addr;
    u_int32_t dest_seqno;
} AODVVANETRERR_udest;
#define AODVVANETRERR_UDEST_SIZE sizeof(AODVVANETRERR_udest)

typedef struct
{
    u_int8_t type;
#if defined(__LITTLE_ENDIAN)
    u_int8_t res1:7;
    u_int8_t n:1;
#elif defined(__BIG_ENDIAN)
    u_int8_t n:1;
    u_int8_t res1:7;
#else
#error "Adjust your <bits/endian.h> defines"
#endif
    u_int8_t res2;
    u_int8_t dest_count;
    u_int32_t dest_addr;
    u_int32_t dest_seqno;
} AODVVANETRERR;
#define AODVVANETRERR_SIZE sizeof(AODVVANETRERR)
/* Given the total number of unreachable destination this macro
   returns the AODVVANETRERR size */
#define AODVVANETRERR_CALC_SIZE(rerr) (AODVVANETRERR_SIZE + (rerr->dest_count-1)*AODVVANETRERR_UDEST_SIZE)
#define AODVVANETRERR_UDEST_FIRST(rerr) ((AODVVANETRERR_udest *)&rerr->dest_addr)
#define AODVVANETRERR_UDEST_NEXT(udest) ((AODVVANETRERR_udest *)((char *)udest + AODVVANETRERR_UDEST_SIZE))

#endif       /* OMNET++ */
#endif              /* NS_NO_GLOBALS */

#ifndef NS_NO_DECLARATIONS
AODVVANETRERR *rerr_create(u_int8_t flags, struct in_addr dest_addr,
                  u_int32_t dest_seqno);
void rerr_add_udest(AODVVANETRERR * rerr,struct in_addr udest, u_int32_t udest_seqno);
void rerr_process(AODVVANETRERR * rerr, int rerrlen,struct in_addr ip_src,
                  struct in_addr ip_dst);
#endif              /* NS_NO_DECLARATIONS */

#endif              /* AODVVANET_AODVVANETRERR_H */

