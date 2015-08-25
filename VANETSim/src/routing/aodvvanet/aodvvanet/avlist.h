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
 * Authors: Erik Nordström, <erik.nordstrom@it.uu.se>
 *
 *****************************************************************************/
#ifndef _AVLIST_AODVVANET_H
#define _AVLIST_AODVVANET_H
#define NS_PORT
#define OMNETPP

/* Simple linked list inspired from the Linux kernel list implementation */
typedef struct avlist_t
{
    struct avlist_t *prev, *next;
} avlist_t;

#define AVLIST_NULL -1
#define AVLIST_SUCCESS 1

#define AVLIST(name) avlist_t name = { &(name), &(name) }

#define INIT_AVLIST_HEAD(h) do { \
    (h)->next = (h); (h)->prev = (h); \
} while (0)

#define INIT_AVLIST_ELM(le) do { \
    (le)->next = NULL; (le)->prev = NULL; \
} while (0)

int avlist_detach(avlist_t * le);
int avlist_add_tail(avlist_t * head, avlist_t * le);
int avlist_add(avlist_t * head, avlist_t * le);


#define avlist_foreach(curr, head) \
        for (curr = (head)->next; curr != (head); curr = curr->next)

#define avlist_foreach_safe(pos, tmp, head) \
        for (pos = (head)->next, tmp = pos->next; pos != (head); \
                pos = tmp, tmp = pos->next)
#ifndef OMNETPP
#define avlist_empty(head) ((head) == (head)->next)

#define avlist_first(head) ((head)->next)

#define avlist_unattached(le) ((le)->next == NULL && (le)->prev == NULL)
#else

int avlist_empty(avlist_t*);
avlist_t* avlist_first(avlist_t*);
int avlist_unattached(avlist_t*);

#endif
#endif
