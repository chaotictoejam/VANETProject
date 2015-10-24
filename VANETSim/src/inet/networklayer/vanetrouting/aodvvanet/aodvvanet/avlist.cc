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
#include <stdlib.h>

#include "avlist.h"

static inline int listelm_detach(avlist_t * prev, avlist_t * next)
{
    next->prev = prev;
    prev->next = next;

    return AVLIST_SUCCESS;
}

static inline int listelm_add(avlist_t * le, avlist_t * prev, avlist_t * next)
{
    prev->next = le;
    le->prev = prev;
    le->next = next;
    next->prev = le;

    return AVLIST_SUCCESS;
}


int avlist_add(avlist_t * head, avlist_t * le)
{

    if (!head || !le)
        return AVLIST_NULL;

    listelm_add(le, head, head->next);

    return AVLIST_SUCCESS;
}

int avlist_add_tail(avlist_t * head, avlist_t * le)
{

    if (!head || !le)
        return AVLIST_NULL;

    listelm_add(le, head->prev, head);

    return AVLIST_SUCCESS;
}

int avlist_detach(avlist_t * le)
{
    if (!le)
        return AVLIST_NULL;

    listelm_detach(le->prev, le->next);

    le->next = le->prev = NULL;

    return AVLIST_SUCCESS;
};


int avlist_empty (avlist_t *head)
{
    if (head == head->next)
        return 1;
    return 0;
}

avlist_t* avlist_first(avlist_t* head)
{
    return head->next;
}

int  avlist_unattached(avlist_t *le)
{
    if (le->next == NULL && le->prev == NULL)
        return 1;
    return 0;
}

