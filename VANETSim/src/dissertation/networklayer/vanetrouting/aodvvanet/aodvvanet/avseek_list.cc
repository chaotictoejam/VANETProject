/*****************************************************************************
 *
 * Copyright (C) 2001 Uppsala University and Ericsson AB.
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
 * Authors: Erik Nordstr�m, <erik.nordstrom@it.uu.se>
 *
 *
 *****************************************************************************/
#define NS_PORT
#define OMNETPP

#include <stdlib.h>

#ifdef NS_PORT
#ifndef OMNETPP
#include "ns/aodvvanet.h"
#else
#include "../aodvvanet_omnet.h"
#endif
#include "avlist.h"
#else
#include "avseek_list.h"
#include "timer_queue_aodvvanet.h"
#include "aodvvanet_timeout.h"
#include "defs_aodvvanet.h"
#include "params.h"
#include "debug_aodvvanet.h"
#include "avlist.h"
#endif

#ifndef NS_PORT
/* The seek list is a linked list of destinations we are seeking
   (with AODVVANETRREQ's). */

static AVLIST(seekhead);

#ifdef AVSEEK_LIST_DEBUG
void avseek_list_print();
#endif
#endif              /* NS_PORT */
#ifndef AODVVANET_USE_STL
avseek_list_t *NS_CLASS avseek_list_insert(struct in_addr dest_addr,
                                       u_int32_t dest_seqno,
                                       int ttl, u_int8_t flags,
                                       struct ip_data *ipd)
{
    avseek_list_t *entry;

    if ((entry = (avseek_list_t *) malloc(sizeof(avseek_list_t))) == NULL)
    {
        fprintf(stderr, "Failed malloc\n");
        exit(-1);
    }

    entry->dest_addr = dest_addr;
    entry->dest_seqno = dest_seqno;
    entry->flags = flags;
    entry->reqs = 0;
    entry->ttl = ttl;
    entry->ipd = ipd;

    timer_init(&entry->seek_timer, &NS_CLASS route_discovery_timeout, entry);

    avlist_add(&seekhead, &entry->l);
#ifdef AVSEEK_LIST_DEBUG
    avseek_list_print();
#endif
    return entry;
}

int NS_CLASS avseek_list_remove(avseek_list_t * entry)
{
    if (!entry)
        return 0;

    avlist_detach(&entry->l);

    /* Make sure any timers are removed */
    timer_remove(&entry->seek_timer);

    if (entry->ipd)
        free(entry->ipd);

    free(entry);
    return 1;
}

avseek_list_t *NS_CLASS avseek_list_find(struct in_addr dest_addr)
{
    avlist_t *pos;

    avlist_foreach(pos, &seekhead)
    {
        avseek_list_t *entry = (avseek_list_t *) pos;

        if (entry->dest_addr.s_addr == dest_addr.s_addr)
            return entry;
    }
    return NULL;
}

#ifdef AVSEEK_LIST_DEBUG
void NS_CLASS avseek_list_print()
{
    avlist_t *pos;

    avlist_foreach(pos, &seekhead)
    {
        avseek_list_t *entry = (avseek_list_t *) pos;
        printf("%s %u %d %d\n", ip_to_str(entry->dest_addr),
               entry->dest_seqno, entry->reqs, entry->ttl);
    }
}
#endif
#else
avseek_list_t *NS_CLASS avseek_list_insert(struct in_addr dest_addr,
                                       u_int32_t dest_seqno,
                                       int ttl, u_int8_t flags,
                                       struct ip_data *ipd)
{
    avseek_list_t *entry;

    entry = new avseek_list_t;
    if (entry == NULL)
    {
        fprintf(stderr, "Failed malloc\n");
        exit(-1);
    }

    entry->dest_addr = dest_addr;
    entry->dest_seqno = dest_seqno;
    entry->flags = flags;
    entry->reqs = 0;
    entry->ttl = ttl;
    entry->ipd = ipd;

    timer_init(&entry->seek_timer, &NS_CLASS route_discovery_timeout, entry);
    seekhead.insert(std::make_pair(dest_addr.s_addr,entry));

#ifdef AVSEEK_LIST_DEBUG
    avseek_list_print();
#endif
    return entry;
}

int NS_CLASS avseek_list_remove(avseek_list_t * entry)
{
    if (!entry)
        return 0;

    for (SeekHead::iterator it =seekhead.begin();it != seekhead.end(); it++)
    {
        if (it->second == entry)
        {
            seekhead.erase(it);
            break;
        }
    }

    /* Make sure any timers are removed */
    timer_remove(&entry->seek_timer);

    if (entry->ipd)
        free(entry->ipd);

    delete entry;
    return 1;
}

avseek_list_t *NS_CLASS avseek_list_find(struct in_addr dest_addr)
{
    SeekHead::iterator it =seekhead.find(dest_addr.s_addr);
    if (it != seekhead.end())
        return it->second;
    return NULL;
}

#ifdef AVSEEK_LIST_DEBUG
void NS_CLASS avseek_list_print()
{
    for (SeekHead::iterator it =seekhead.begin();it != seekhead.end(); it++)
    {
        avseek_list_t *entry = it->second;
        printf("%s %u %d %d\n", ip_to_str(entry->dest_addr),
                      entry->dest_seqno, entry->reqs, entry->ttl);    }
}
#endif
#endif

