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
#ifndef _vs_list_aodv_H
#define _vs_list_aodv_H
#define NS_PORT
#define OMNETPP

/* Simple linked vs_list inspired from the Linux kernel vs_list implementation */
typedef struct vs_list_t
{
    struct vs_list_t *prev, *next;
} vs_list_t;

#define vs_list_NULL -1
#define vs_list_SUCCESS 1

#define vs_list(name) vs_list_t name = { &(name), &(name) }

#define INIT_VS_LIST_HEAD(h) do { \
    (h)->next = (h); (h)->prev = (h); \
} while (0)

#define INIT_VS_LIST_ELM(le) do { \
    (le)->next = NULL; (le)->prev = NULL; \
} while (0)

int vs_list_detach(vs_list_t * le);
int vs_list_add_tail(vs_list_t * head, vs_list_t * le);
int vs_list_add(vs_list_t * head, vs_list_t * le);


#define vs_list_foreach(curr, head) \
        for (curr = (head)->next; curr != (head); curr = curr->next)

#define vs_list_foreach_safe(pos, tmp, head) \
        for (pos = (head)->next, tmp = pos->next; pos != (head); \
                pos = tmp, tmp = pos->next)
#ifndef OMNETPP
#define vs_list_empty(head) ((head) == (head)->next)

#define vs_list_first(head) ((head)->next)

#define vs_list_unattached(le) ((le)->next == NULL && (le)->prev == NULL)
#else

int vs_list_empty(vs_list_t*);
vs_list_t* vs_list_first(vs_list_t*);
int vs_list_unattached(vs_list_t*);

#endif
#endif
