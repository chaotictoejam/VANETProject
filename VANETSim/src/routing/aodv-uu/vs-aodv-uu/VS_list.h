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
#ifndef _VS_list_aodv_H
#define _VS_list_aodv_H
#define NS_PORT
#define OMNETPP

/* Simple linked VS_list inspired from the Linux kernel VS_list implementation */
typedef struct VS_list_t
{
    struct VS_list_t *prev, *next;
} VS_list_t;

#define VS_list_NULL -1
#define VS_list_SUCCESS 1

#define VS_list(name) VS_list_t name = { &(name), &(name) }

#define INIT_VS_list_HEAD(h) do { \
    (h)->next = (h); (h)->prev = (h); \
} while (0)

#define INIT_VS_list_ELM(le) do { \
    (le)->next = NULL; (le)->prev = NULL; \
} while (0)

int VS_list_detach(VS_list_t * le);
int VS_list_add_tail(VS_list_t * head, VS_list_t * le);
int VS_list_add(VS_list_t * head, VS_list_t * le);


#define VS_list_foreach(curr, head) \
        for (curr = (head)->next; curr != (head); curr = curr->next)

#define VS_list_foreach_safe(pos, tmp, head) \
        for (pos = (head)->next, tmp = pos->next; pos != (head); \
                pos = tmp, tmp = pos->next)
#ifndef OMNETPP
#define VS_list_empty(head) ((head) == (head)->next)

#define VS_list_first(head) ((head)->next)

#define VS_list_unattached(le) ((le)->next == NULL && (le)->prev == NULL)
#else

int VS_list_empty(VS_list_t*);
VS_list_t* VS_list_first(VS_list_t*);
int VS_list_unattached(VS_list_t*);

#endif
#endif
