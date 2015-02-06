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

#include "VS_list.h"

static inline int VS_listelm_detach(VS_list_t * prev, VS_list_t * next)
{
    next->prev = prev;
    prev->next = next;

    return VS_list_SUCCESS;
}

static inline int VS_listelm_add(VS_list_t * le, VS_list_t * prev, VS_list_t * next)
{
    prev->next = le;
    le->prev = prev;
    le->next = next;
    next->prev = le;

    return VS_list_SUCCESS;
}


int VS_list_add(VS_list_t * head, VS_list_t * le)
{

    if (!head || !le)
        return VS_list_NULL;

    VS_listelm_add(le, head, head->next);

    return VS_list_SUCCESS;
}

int VS_list_add_tail(VS_list_t * head, VS_list_t * le)
{

    if (!head || !le)
        return VS_list_NULL;

    VS_listelm_add(le, head->prev, head);

    return VS_list_SUCCESS;
}

int VS_list_detach(VS_list_t * le)
{
    if (!le)
        return VS_list_NULL;

    VS_listelm_detach(le->prev, le->next);

    le->next = le->prev = NULL;

    return VS_list_SUCCESS;
};


int VS_list_empty (VS_list_t *head)
{
    if (head == head->next)
        return 1;
    return 0;
}

VS_list_t* VS_list_first(VS_list_t* head)
{
    return head->next;
}

int  VS_list_unattached(VS_list_t *le)
{
    if (le->next == NULL && le->prev == NULL)
        return 1;
    return 0;
}

