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
#include "aodvvanet_rerr.h"
#include "routing_table.h"
#include "aodvvanet_socket.h"
#include "aodvvanet_timeout.h"
#include "defs_aodvvanet.h"
#include "debug_aodvvanet.h"
#include "params.h"
#endif

VANET_RERR *NS_CLASS rerr_create(u_int8_t flags,struct in_addr dest_addr,
                           u_int32_t dest_seqno)

{
    VANET_RERR *rerr;
    DEBUG(LOG_DEBUG, 0, "Assembling VANET_RERR about %s seqno=%d",
          ip_to_str(dest_addr), dest_seqno);
#ifndef OMNETPP
    rerr = (VANET_RERR *) aodvvanet_socket_new_msg();
    rerr->dest_addr = dest_addr.s_addr;
    rerr->dest_seqno = htonl(dest_seqno);
#else
    rerr = new VANET_RERR("RouteError");
    rerr->addUdest (dest_addr.s_addr,htonl(dest_seqno));
    totalRerrSend++;
#endif
    rerr->type = AODVVANET_VANET_RERR;
    rerr->n = (flags & VANET_RERR_NODELETE ? 1 : 0);
    rerr->res1 = 0;
    rerr->res2 = 0;
    rerr->dest_count = 1;
    return rerr;
}

void NS_CLASS rerr_add_udest(VANET_RERR * rerr,struct in_addr udest,
                             u_int32_t udest_seqno)
{
#ifndef OMNETPP
    VANET_RERR_udest *ud;
    ud = (VANET_RERR_udest *) ((char *) rerr + VANET_RERR_CALC_SIZE(rerr));
    ud->dest_addr = udest.s_addr;
    ud->dest_seqno = htonl(udest_seqno);
    rerr->dest_count++;
#else
    rerr->addUdest( udest.s_addr, htonl(udest_seqno));
#endif
}


void NS_CLASS rerr_process(VANET_RERR * rerr, int rerrlen,struct in_addr ip_src,
                           struct in_addr ip_dst)
{
    VANET_RERR *new_rerr = NULL;
    VANET_RERR_udest *udest;
    rt_table_t *rt;
    u_int32_t rerr_dest_seqno;
    struct in_addr udest_addr, rerr_unicast_dest;
    int i;
    int numInterfaces;

    rerr_unicast_dest.s_addr = ManetAddress::ZERO;

    DEBUG(LOG_DEBUG, 0, "ip_src=%s", ip_to_str(ip_src));

    log_pkt_fields((AODVVANET_msg *) rerr);

    if (rerrlen < ((int) VANET_RERR_CALC_SIZE(rerr)))
    {
        alog(LOG_WARNING, 0, __FUNCTION__,
             "IP data too short (%u bytes) from %s to %s. Should be %d bytes.",
             rerrlen, ip_to_str(ip_src), ip_to_str(ip_dst),
             VANET_RERR_CALC_SIZE(rerr));
        return;
    }


#ifdef OMNETPP
    totalRerrRec++;
#endif

    /* Check which destinations that are unreachable.  */
    udest = VANET_RERR_UDEST_FIRST(rerr);

    while (rerr->dest_count)
    {

        udest_addr.s_addr = udest->dest_addr;
        rerr_dest_seqno = ntohl(udest->dest_seqno);
        DEBUG(LOG_DEBUG, 0, "unreachable dest=%s seqno=%lu",
              ip_to_str(udest_addr), rerr_dest_seqno);

        rt = rt_table_find(udest_addr);
        if (rt && rt->state == VALID && rt->next_hop.s_addr == ip_src.s_addr)
        {

            /* Checking sequence numbers here is an out of draft
             *       * addition to AODVVANET-UU. It is here because it makes a lot
             *       * of sense... */
            if (0 && (int32_t) rt->dest_seqno > (int32_t) rerr_dest_seqno)
            {
                DEBUG(LOG_DEBUG, 0, "Udest ignored because of seqno");
                udest = VANET_RERR_UDEST_NEXT(udest);
                rerr->dest_count--;
                continue;
            }
            DEBUG(LOG_DEBUG, 0, "removing rte %s - WAS IN VANET_RERR!!",
                  ip_to_str(udest_addr));

#ifdef NS_PORT
#ifndef OMNETPP
            interfaceQueue((nsaddr_t) udest_addr.s_addr, IFQ_DROP_BY_DEST);
#endif
#endif
            /* Invalidate route: */
            if (!rerr->n)
            {
                rt_table_invalidate(rt);
            }
#ifdef OMNETPP
            else
            {
                if (rt->nprec == 0 && par("VANET_RRERFoceDiscover").boolValue() && rt->next_hop.S_addr == ip_src.S_addr)
                {
                    u_int8_t rreq_flags = 0;
                    if (par("targetOnlyRreq").boolValue())
                        rreq_flags |= VANET_RREQ_DEST_ONLY;
                    rreq_route_discovery(udest_addr, rreq_flags, NULL);
                }
            }
#endif
            /* (a) updates the corresponding destination sequence number
             *         with the Destination Sequence Number in the packet, and */
            rt->dest_seqno = rerr_dest_seqno;

            /* (d) check precursor list for emptiness. If not empty, include
             *         the destination as an unreachable destination in the
             *         VANET_RERR... */
            if (rt->nprec && !(rt->flags & RT_REPAIR))
            {

                if (!new_rerr)
                {
                    u_int8_t flags = 0;

                    if (rerr->n)
                        flags |= VANET_RERR_NODELETE;

                    new_rerr = rerr_create(flags, rt->dest_addr,
                                           rt->dest_seqno);
                    DEBUG(LOG_DEBUG, 0, "Added %s as unreachable, seqno=%lu",
                          ip_to_str(rt->dest_addr), rt->dest_seqno);
#ifdef AODVVANET_USE_STL_RT
                    if (rt->nprec == 1)
                        rerr_unicast_dest = rt->precursors[0].neighbor;
#else
                    if (rt->nprec == 1)
                        rerr_unicast_dest =
                            FIRST_PREC(rt->precursors)->neighbor;
#endif
                }
                else
                {
                    /* Decide whether new precursors make this a non unicast VANET_RERR */
                    rerr_add_udest(new_rerr, rt->dest_addr, rt->dest_seqno);


                    DEBUG(LOG_DEBUG, 0, "Added %s as unreachable, seqno=%lu",
                          ip_to_str(rt->dest_addr), rt->dest_seqno);

#ifdef AODVVANET_USE_STL_RT
                    if (rerr_unicast_dest.s_addr.isUnspecified())
                    {
                        for (unsigned int i = 0; i< rt->precursors.size(); i++)
                        {
                            precursor_t *pr = & rt->precursors[i];
                            if (pr->neighbor.s_addr != rerr_unicast_dest.s_addr)
                            {
                                rerr_unicast_dest.s_addr = ManetAddress::ZERO;
                                break;
                            }
                        }
                    }
#else
                    if (rerr_unicast_dest.s_addr)
                    {
                        list_t *pos2;
                        list_foreach(pos2, &rt->precursors)
                        {
                            precursor_t *pr = (precursor_t *) pos2;
                            if (pr->neighbor.s_addr != rerr_unicast_dest.s_addr)
                            {
                                rerr_unicast_dest.s_addr = 0;
                                break;
                            }
                        }
                    }
#endif
                }
            }
            else
            {
                DEBUG(LOG_DEBUG, 0,
                      "Not sending VANET_RERR, no precursors or route in RT_REPAIR");
            }
            /* We should delete the precursor list for all unreachable
             *         destinations. */
            if (rt->state == INVALID)
                precursor_list_destroy(rt);
        }
        else
        {
            DEBUG(LOG_DEBUG, 0, "Ignoring UDEST %s", ip_to_str(udest_addr));
        }
        udest = VANET_RERR_UDEST_NEXT(udest);
        rerr->dest_count--;
    }               /* End while() */
#ifdef OMNETPP
    if (rerr->dest_count==0)
        rerr->clearUdest();
#endif

    /* If a VANET_RERR was created, then send it now... */
    if (new_rerr)
    {
        rt = rt_table_find(rerr_unicast_dest);
        new_rerr->ttl=1;

        if (rt && new_rerr->dest_count == 1 && !rerr_unicast_dest.s_addr.isUnspecified())
            aodvvanet_socket_send((AODVVANET_msg *) new_rerr,
                             rerr_unicast_dest,
                             VANET_RERR_CALC_SIZE(new_rerr), 1,
                             &DEV_IFINDEX(rt->ifindex));

        else if (new_rerr->dest_count > 0)
        {
            /* FIXME: Should only transmit VANET_RERR on those interfaces
             * which have precursor nodes for the broken route */
            numInterfaces = 0;
            for (i = 0; i < MAX_NR_INTERFACES; i++)
            {
                if (!DEV_NR(i).enabled)
                    continue;
                numInterfaces++;
            }

            for (i = 0; i < MAX_NR_INTERFACES; i++)
            {
                struct in_addr dest;

                if (!DEV_NR(i).enabled)
                    continue;
                dest.s_addr = ManetAddress(IPv4Address(AODVVANET_BROADCAST));
#ifdef OMNETPP
                if (numInterfaces>1)
                {
                    aodvvanet_socket_send((AODVVANET_msg *) new_rerr->dup(), dest,VANET_RERR_CALC_SIZE(new_rerr), 1, &DEV_NR(i));
                }
                else
#endif
                    aodvvanet_socket_send((AODVVANET_msg *) new_rerr, dest,VANET_RERR_CALC_SIZE(new_rerr), 1, &DEV_NR(i));
                numInterfaces--;
            }

        }
    }
}

