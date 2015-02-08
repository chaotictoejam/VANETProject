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

#include "vs_list.h"

static inline int vs_listelm_detach(vs_list_t * prev, vs_list_t * next)
{
    next->prev = prev;
    prev->next = next;

    return vs_list_SUCCESS;
}

static inline int vs_listelm_add(vs_list_t * le, vs_list_t * prev, vs_list_t * next)
{
    prev->next = le;
    le->prev = prev;
    le->next = next;
    next->prev = le;

    return vs_list_SUCCESS;
}


int vs_list_add(vs_list_t * head, vs_list_t * le)
{

    if (!head || !le)
        return vs_list_NULL;

    vs_listelm_add(le, head, head->next);

    return vs_list_SUCCESS;
}

int vs_list_add_tail(vs_list_t * head, vs_list_t * le)
{

    if (!head || !le)
        return vs_list_NULL;

    vs_listelm_add(le, head->prev, head);

    return vs_list_SUCCESS;
}

int vs_list_detach(vs_list_t * le)
{
    if (!le)
        return vs_list_NULL;

    vs_listelm_detach(le->prev, le->next);

    le->next = le->prev = NULL;

    return vs_list_SUCCESS;
};


int vs_list_empty (vs_list_t *head)
{
    if (head == head->next)
        return 1;
    return 0;
}

vs_list_t* vs_list_first(vs_list_t* head)
{
    return head->next;
}

int  vs_list_unattached(vs_list_t *le)
{
    if (le->next == NULL && le->prev == NULL)
        return 1;
    return 0;
}

