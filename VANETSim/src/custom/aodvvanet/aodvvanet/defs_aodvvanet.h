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
 *****************************************************************************/
#ifndef _DEFS_H
#define _DEFS_H

#include <stdio.h>
#include <stdlib.h>
#ifndef  _MSC_VER
#include <unistd.h>
#include <sys/time.h>
#include <sys/types.h>
//#include <syslog.h>
#endif
#include "compatibility.h"


#ifndef NS_PORT
#include <sys/signal.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netinet/ip.h>
#include <sys/ioctl.h>
#endif



#include <errno.h>
#include <string.h>
#include <fcntl.h>

#ifndef NS_PORT
#include "timer_queue_aodvvanet.h"
#endif

#ifdef NS_PORT
#define NS_CLASS AODVVANET::
#define NS_OUTSIDE_CLASS ::
#define NS_STATIC
#define NS_INLINE
/* NS_PORT: Using network device 0, with interface index 0. */
#ifndef OMNETPP
// Omnet use integer variables defined in omnet_uu_omnet.h
#define NS_DEV_NR 0
#define NS_IFINDEX NS_DEV_NR
#endif
#else
#define NS_CLASS
#define NS_OUTSIDE_CLASS
#define NS_STATIC static
#define NS_INLINE inline
#endif

#define AODVVANET_UU_VERSION "0.9"
#define DRAFT_VERSION "rfc3561"

#ifdef NS_PORT
/* NS_PORT: Log filename split into prefix and suffix. */
#define AODVVANET_LOG_PATH_PREFIX "aodvvanet-"
#define AODVVANET_RT_LOG_PATH_SUFFIX ".rtlog"
#define AODVVANET_LOG_PATH_SUFFIX ".log"
#else
#define AODVVANET_LOG_PATH "/var/log/aodvd.log"
#define AODVVANET_RT_LOG_PATH "/var/log/aodvd.rtlog"
#endif              /* NS_PORT */

#ifdef OMNETPP
using std::max;
#define maxMacro(A,B) ( (A) > (B) ? (A):(B))
#else
#define max(A,B) ( (A) > (B) ? (A):(B))
#endif   /* OMNETPP */

#define MINTTL 1        /* min TTL in the packets sent locally */

#define MAX_NR_INTERFACES 10
#define MAX_IFINDEX (MAX_NR_INTERFACES - 1)

#if !defined(IFNAMSIZ)
#define IFNAMSIZ 16
#endif

/* Data for a network device */
struct dev_info
{
    int enabled;        /* 1 if struct is used, else 0 */
    int sock;           /* AODVVANET socket associated with this device */
#ifdef CONFIG_GATEWAY
    int psock;          /* Socket to send buffered data packets. */
#endif
    unsigned int ifindex;
    char ifname[IFNAMSIZ];
    struct in_addr ipaddr;  /* The local IP address */
    struct in_addr netmask; /* The netmask we use */
    struct in_addr broadcast;
};

struct host_info
{
    u_int32_t seqno;        /* Sequence number */
    struct timeval bcast_time;  /* The time of the last broadcast msg sent */
    struct timeval fwd_time;    /* The time a data packet was last forwarded */
    u_int32_t rreq_id;      /* RREQ id */
    int nif;            /* Number of interfaces to broadcast on */
    struct dev_info devs[MAX_NR_INTERFACES];
};

/*
  NS_PORT: TEMPORARY SOLUTION: Moved the two variables into the AODVVANET class,
  and placed the function definition after the AODVVANET class definition.

  (This is to avoid running several passes through defs.h during the source
  code extraction performed by the AODVVANET class.)

  TODO: Find some smarter way to accomplish this.
*/
#ifndef NS_PORT
/* This will point to a struct containing information about the host */
struct host_info this_host;

/* Array of interface indexes */
unsigned int dev_indices[MAX_NR_INTERFACES];

/* Given a network interface index, return the index into the
   devs array, Necessary because ifindex is not always 0, 1,
   2... */
static inline int ifindex2devindex(unsigned int ifindex)
{
    int i;

    for (i = 0; i < this_host.nif; i++)
        if (dev_indices[i] == ifindex)
            return i;

    return -1;
}

static inline struct dev_info *devfromsock(int sock)
{
    int i;

    for (i = 0; i < this_host.nif; i++)
    {
        if (this_host.devs[i].sock == sock)
            return &this_host.devs[i];
    }
    return NULL;
}

static inline int name2index(char *name)
{
    int i;

    for (i = 0; i < this_host.nif; i++)
        if (strcmp(name, this_host.devs[i].ifname) == 0)
            return this_host.devs[i].ifindex;

    return -1;
}

#endif


/* Two macros to simplify retriving of a dev_info struct. Either using
   an ifindex or a device number (index into devs array). */
#ifndef OMNETPP
#define DEV_IFINDEX(ifindex) (this_host.devs[ifindex2devindex(ifindex)])
#define DEV_NR(n) (this_host.devs[n])
#else
#define DEV_IFINDEX(n) (this_host.devs[n])
#define DEV_NR(n) (this_host.devs[n])
#endif
/* Broadcast address according to draft (255.255.255.255) */
#define AODVVANET_BROADCAST ((in_addr_t) 0xFFFFFFFF)

#define AODVVANET_PORT 654

/* AODVVANET Message types */
#define AODVVANET_HELLO    0     /* Really never used as a separate type... */
#define AODVVANET_RREQ     1
#define AODVVANET_RREP     2
#define AODVVANET_RERR     3
#define AODVVANET_RREP_ACK 4

#ifndef OMNETPP
/* An generic AODVVANET extensions header */
typedef struct
{
    u_int8_t type;
    u_int8_t length;
    /* Type specific data follows here */
} AODVVANET_ext;

/* A generic AODVVANET packet header struct... */
#ifdef NS_PORT
struct AODVVANET_msg
{
#else
typedef struct
{
#endif
    u_int8_t type;

    /* NS_PORT: Additions for the AODVVANET packet type in ns-2 */
#ifdef NS_PORT
    static int offset_;     // Required by PacketHeaderManager

    inline static int &offset()
    {
        return offset_;
    }
    inline static AODVVANET_msg *access(const Packet * p)
    {
        return (AODVVANET_msg *) p->access(offset_);
    }

    int size();
};

typedef AODVVANET_msg hdr_aodvuu;    // Name convention for headers
#define HDR_AODVVANET(p) ((hdr_aodvuu *) hdr_aodvuu::access(p))
#else
} AODVVANET_msg;
#endif


/* MACROS to access AODVVANET extensions... */
#define AODVVANET_EXT_HDR_SIZE sizeof(AODVVANET_ext)
#define AODVVANET_EXT_DATA(ext) ((char *)((char *)ext + AODVVANET_EXT_HDR_SIZE))
#define AODVVANET_EXT_NEXT(ext) ((AODVVANET_ext *)((char *)ext + AODVVANET_EXT_HDR_SIZE + ext->length))
#define AODVVANET_EXT_SIZE(ext) (AODVVANET_EXT_HDR_SIZE + ext->length)
#endif

/* AODVVANET Extension types */
#define RREQ_EXT 1
#define RREP_EXT 1
#define RREP_HELLO_INTERVAL_EXT 2
#define RREP_HELLO_NEIGHBOR_SET_EXT 3
#define RREP_INET_DEST_EXT 4



#ifndef NS_PORT
/* The callback function */
typedef void (*callback_func_t) (int);
extern int attach_callback_func(int fd, callback_func_t func);
#endif

#endif              /* DEFS_H */
