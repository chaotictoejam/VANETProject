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

#ifdef NS_PORT
#ifndef OMNETPP
#include "ns/aodvvanet.h"
#else
#include "../aodvvanet_omnet.h"
#endif
#else
#include <netinet/in.h>
#include "aodvvanet_hello.h"
#include "aodvvanet_timeout.h"
#include "aodvvanet_rrep.h"
#include "aodvvanet_rreq.h"
#include "routing_table.h"
#include "timer_queue_aodvvanet.h"
#include "params.h"
#include "aodvvanet_socket.h"
#include "defs_aodvvanet.h"
#include "debug_aodvvanet.h"
#define DEBUG_HELLO
extern int unidir_hack, receive_n_hellos, hello_jittering, optimized_hellos;
static struct timer hello_timer;

#endif

/* #define DEBUG_HELLO */


long NS_CLASS hello_jitter()
{
    if (hello_jittering)
    {
#ifdef NS_PORT
#ifndef OMNETPP
        return (long) (((float) Random::integer(RAND_MAX + 1) / RAND_MAX - 0.5)
                       * JITTER_INTERVAL);
#else
        return (long) (((float) intuniform(0, RAND_MAX) / RAND_MAX - 0.5)
                       * JITTER_INTERVAL);
#endif
#else
        return (long) (((float) random() / RAND_MAX - 0.5) * JITTER_INTERVAL);
#endif
    }
    else
        return 0;
}

void NS_CLASS hello_start()
{
    if (hello_timer.used)
        return;

    gettimeofday(&this_host.fwd_time, NULL);

    DEBUG(LOG_DEBUG, 0, "Starting to send HELLOs!");
    timer_init(&hello_timer, &NS_CLASS hello_send, NULL);

    hello_send(NULL);
}

void NS_CLASS hello_stop()
{
    DEBUG(LOG_DEBUG, 0,
          "No active forwarding routes - stopped sending HELLOs!");
#ifdef OMNETPP
    EV << "No active forwarding routes - stopped sending HELLOs!";
#endif
    timer_remove(&hello_timer);
}

void NS_CLASS hello_send(void *arg)
{
    VANET_RREP *rrep;
    AODVVANET_ext *ext = NULL;
    u_int8_t flags = 0;
    struct in_addr dest;
    long time_diff, jitter;
    struct timeval now;
    int msg_size = VANET_RREP_SIZE;
    int i;
    char buffer[300];
    char *buffer_ptr;

    buffer_ptr = buffer;

    gettimeofday(&now, NULL);

    if (optimized_hellos &&
            timeval_diff(&now, &this_host.fwd_time) > ACTIVE_ROUTE_TIMEOUT)
    {
        hello_stop();
        return;
    }

#ifdef OMNETPP
    double delay = -1;
    if (par("EqualDelay"))
        delay = par("broadcastDelay");
#endif

    time_diff = timeval_diff(&now, &this_host.bcast_time);
    jitter = hello_jitter();

    /* This check will ensure we don't send unnecessary hello msgs, in case
       we have sent other bcast msgs within HELLO_INTERVAL */
    if (time_diff >= HELLO_INTERVAL)
    {

        for (i = 0; i < MAX_NR_INTERFACES; i++)
        {
            if (!DEV_NR(i).enabled)
                continue;
#ifdef DEBUG_HELLO
            DEBUG(LOG_DEBUG, 0, "sending Hello to 255.255.255.255");
#endif
#ifdef OMNETPP
            EV << "sending Hello to 255.255.255.255";
#endif
            rrep = rrep_create(flags, 0, 0, DEV_NR(i).ipaddr,
                               this_host.seqno,
                               DEV_NR(i).ipaddr,
                               ALLOWED_HELLO_LOSS * HELLO_INTERVAL);

            /* Assemble a VANET_RREP extension which contain our neighbor set... */
            if (unidir_hack)
            {
                int i;
#ifndef OMNETPP
                if (ext)
                    ext = AODVVANET_EXT_NEXT(ext);
                else
                    /* Check for hello interval extension: */
                    ext = (AODVVANET_ext *) ((char *) rrep + VANET_RREP_SIZE);
                ext->type = VANET_RREP_HELLO_NEIGHBOR_SET_EXT;
                ext->length = 0;
#endif

#ifdef AODVVANET_USE_STL_RT
                for (i = 0; i < RT_TABLESIZE; i++)
                {
                    for (AodvRtTableMap::iterator it = aodvRtTableMap.begin(); it != aodvRtTableMap.end(); it++)
                    {
                        rt_table_t *rt = it->second;
                        /* If an entry has an active hello timer, we assume
                           that we are receiving hello messages from that
                           node... */
                        if (rt->hello_timer.used)
                        {
#ifdef DEBUG_HELLO
                            DEBUG(LOG_INFO, 0,
                                  "Adding %s to hello neighbor set ext",
                                  ip_to_str(rt->dest_addr));
#endif
                            memcpy(buffer_ptr, &rt->dest_addr,
                                   sizeof(struct in_addr));
                            buffer_ptr+=sizeof(struct in_addr);
                        }
                    }
                }
#else
                for (i = 0; i < RT_TABLESIZE; i++)
                {
                    list_t *pos;
                    list_foreach(pos, &rt_tbl.tbl[i])
                    {
                        rt_table_t *rt = (rt_table_t *) pos;
                        /* If an entry has an active hello timer, we assume
                           that we are receiving hello messages from that
                           node... */
                        if (rt->hello_timer.used)
                        {
#ifdef DEBUG_HELLO
                            DEBUG(LOG_INFO, 0,
                                  "Adding %s to hello neighbor set ext",
                                  ip_to_str(rt->dest_addr));
#endif
#ifndef OMNETPP
                            memcpy(AODVVANET_EXT_NEXT(ext), &rt->dest_addr,
                                   sizeof(struct in_addr));
                            ext->length += sizeof(struct in_addr);
#else
                            memcpy(buffer_ptr, &rt->dest_addr,
                                   sizeof(struct in_addr));
                            buffer_ptr+=sizeof(struct in_addr);
#endif

                        }
                    }
                }

#endif
#ifdef OMNETPP
                if (ext->length)
                {
                    msg_size = VANET_RREP_SIZE + AODVVANET_EXT_SIZE(ext);

                }
                rrep->setName("AodvHello");
                rrep->setByteLength(msg_size);
#else
                if (buffer_ptr-buffer>0)
                {
                    rrep->addExtension(VANET_RREP_HELLO_NEIGHBOR_SET_EXT,(int)(buffer_ptr-buffer),buffer);
                    msg_size = VANET_RREP_SIZE + (int)(buffer_ptr-buffer);
                }

#endif
            }
            dest.s_addr = ManetAddress(IPv4Address(AODVVANET_BROADCAST));
#ifdef OMNETPP
            rrep->ttl=1;
            aodvvanet_socket_send((AODVVANET_msg *) rrep, dest, msg_size, 1, &DEV_NR(i),delay);
#else
            aodvvanet_socket_send((AODVVANET_msg *) rrep, dest, msg_size, 1, &DEV_NR(i));
#endif
        }

        timer_set_timeout(&hello_timer, HELLO_INTERVAL + jitter);
    }
    else
    {
        if (HELLO_INTERVAL - time_diff + jitter < 0)
            timer_set_timeout(&hello_timer,
                              HELLO_INTERVAL - time_diff - jitter);
        else
            timer_set_timeout(&hello_timer,
                              HELLO_INTERVAL - time_diff + jitter);
    }
}


/* Process a hello message */
void NS_CLASS hello_process(VANET_RREP * hello, int rreplen, unsigned int ifindex)
{
    u_int32_t hello_seqno, timeout, hello_interval = HELLO_INTERVAL;
    u_int8_t state, flags = 0;
    struct in_addr ext_neighbor, hello_dest;
    rt_table_t *rt;
    AODVVANET_ext *ext = NULL;
    struct timeval now;

    uint32_t cost;
    uint8_t fixhop;

    cost = costMobile;
    if (hello->prevFix)
    {
        fixhop=1;
        cost =  costStatic;
    }

    if (this->isStaticNode())
        fixhop++;

    gettimeofday(&now, NULL);

    hello_dest.s_addr = hello->dest_addr;
    hello_seqno = ntohl(hello->dest_seqno);

    rt = rt_table_find(hello_dest);

    if (rt)
        flags = rt->flags;

    if (unidir_hack)
        flags |= RT_UNIDIR;
#ifndef OMNETPP
    /* Check for hello interval extension: */
    ext = (AODVVANET_ext *) ((char *) hello + VANET_RREP_SIZE);
    while (rreplen > (int) VANET_RREP_SIZE)
    {
#else
    ext = hello->getFirstExtension();
    for (int i=0; i<hello->getNumExtension (); i++)
    {
#endif
        switch (ext->type)
        {
        case VANET_RREP_HELLO_INTERVAL_EXT:
            if (ext->length == 4)
            {
                memcpy(&hello_interval, AODVVANET_EXT_DATA(ext), 4);
                hello_interval = ntohl(hello_interval);
#ifdef DEBUG_HELLO
                DEBUG(LOG_INFO, 0, "Hello extension interval=%lu!",
                      hello_interval);
#endif
#ifdef OMNETPP
                EV << "Hello extension interval = "<< hello_interval;
#endif

            }
            else
                alog(LOG_WARNING, 0,
                     __FUNCTION__, "Bad hello interval extension!");
            break;
        case VANET_RREP_HELLO_NEIGHBOR_SET_EXT:

#ifdef DEBUG_HELLO
            DEBUG(LOG_INFO, 0, "VANET_RREP_HELLO_NEIGHBOR_SET_EXT");
#endif
#ifdef OMNETPP
            EV << "VANET_RREP_HELLO_NEIGHBOR_SET_EXT";
#endif

            for (i = 0; i < ext->length; i = i + 4)
            {
                //ext_neighbor.s_addr =
                //    *(in_addr_t *) ((char *) AODVVANET_EXT_DATA(ext) + i);

                ext_neighbor.s_addr = ManetAddress(IPv4Address(*(in_addr_t *) ((char *) AODVVANET_EXT_DATA(ext) + i)));

                if (ext_neighbor.s_addr == DEV_IFINDEX(ifindex).ipaddr.s_addr)
                    flags &= ~RT_UNIDIR;
            }
            break;
        default:
            alog(LOG_WARNING, 0, __FUNCTION__,
                 "Bad extension!! type=%d, length=%d", ext->type, ext->length);
            ext = NULL;
            break;
        }
        if (ext == NULL)
            break;

        rreplen -= AODVVANET_EXT_SIZE(ext);
        ext = AODVVANET_EXT_NEXT(ext);
    }

#ifdef DEBUG_HELLO
    DEBUG(LOG_DEBUG, 0, "rcvd HELLO from %s, seqno %lu",
          ip_to_str(hello_dest), hello_seqno);
#endif
#ifdef OMNETPP
    EV << "rcvd HELLO from " << ip_to_str(hello_dest) << " seqno = hello_seqno";
#endif

    /* This neighbor should only be valid after receiving 3
       consecutive hello messages... */
    if (receive_n_hellos)
        state = INVALID;
    else
        state = VALID;

    timeout = ALLOWED_HELLO_LOSS * hello_interval + ROUTE_TIMEOUT_SLACK;

    if (!rt)
    {
        /* No active or expired route in the routing table. So we add a
           new entry... */

        rt = rt_table_insert(hello_dest, hello_dest, 1,
                             hello_seqno, timeout, state, flags, ifindex,cost,fixhop);

        if (flags & RT_UNIDIR)
        {
            DEBUG(LOG_INFO, 0, "%s new NEIGHBOR, link UNI-DIR",
                  ip_to_str(rt->dest_addr));
        }
        else
        {
            DEBUG(LOG_INFO, 0, "%s new NEIGHBOR!", ip_to_str(rt->dest_addr));
        }
        rt->hello_cnt = 1;

    }
    else
    {

        if ((flags & RT_UNIDIR) && rt->state == VALID && rt->hcnt > 1)
        {
            goto hello_update;
        }

        if (receive_n_hellos && rt->hello_cnt < (receive_n_hellos - 1))
        {
            if (timeval_diff(&now, &rt->last_hello_time) <
                    (long) (hello_interval + hello_interval / 2))
                rt->hello_cnt++;
            else
                rt->hello_cnt = 1;

            memcpy(&rt->last_hello_time, &now, sizeof(struct timeval));
            return;
        }
        rt_table_update(rt, hello_dest, 1, hello_seqno, timeout, VALID, flags, ifindex, cost, fixhop);
    }

hello_update:

    hello_update_timeout(rt, &now, ALLOWED_HELLO_LOSS * hello_interval);
    return;
}


#define HELLO_DELAY 50      /* The extra time we should allow an hello
message to take (due to processing) before
assuming lost . */

NS_INLINE void NS_CLASS hello_update_timeout(rt_table_t * rt,
        struct timeval *now, long time)
{
    timer_set_timeout(&rt->hello_timer, time + HELLO_DELAY);
    memcpy(&rt->last_hello_time, now, sizeof(struct timeval));
}

