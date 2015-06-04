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
 * Authors: Erik Nordstr�, <erik.nordstrom@it.uu.se>
 *
 *****************************************************************************/

#define NS_PORT
#define OMNETPP

#include <sys/types.h>

#ifdef NS_PORT
#ifndef OMNETPP
#include "ns/aodvvanet.h"
#else
#include "../aodvvanet_omnet.h"
#endif
#else
#include <sys/socket.h>
#include <netinet/in.h>
#include <net/if.h>
#include <netinet/udp.h>
#include "aodvvanet_socket.h"
#include "timer_queue_aodvvanet.h"
#include "aodvvanet_rreq.h"
#include "aodvvanet_rerr.h"
#include "aodvvanet_rrep.h"
#include "params.h"
#include "aodvvanet_hello.h"
#include "aodvvanet_neighbor.h"
#include "debug_aodvvanet.h"
#include "defs_aodvvanet.h"

#endif              /* NS_PORT */


#ifndef NS_PORT
#define SO_RECVBUF_SIZE 256*1024

static char recv_buf[RECV_BUF_SIZE];
static char send_buf[SEND_BUF_SIZE];

extern int wait_on_reboot, hello_qual_threshold, ratelimit;

static void aodvvanet_socket_read(int fd);

/* Seems that some libc (for example ulibc) has a bug in the provided
 * CMSG_NXTHDR() routine... redefining it here */

static struct cmsghdr *__cmsg_nxthdr_fix(void *__ctl, size_t __size,
        struct cmsghdr *__cmsg)
{
    struct cmsghdr *__ptr;

    __ptr = (struct cmsghdr *) (((unsigned char *) __cmsg) +
                                CMSG_ALIGN(__cmsg->cmsg_len));
    if ((unsigned long) ((char *) (__ptr + 1) - (char *) __ctl) > __size)
        return NULL;

    return __ptr;
}

struct cmsghdr *cmsg_nxthdr_fix(struct msghdr *__msg, struct cmsghdr *__cmsg)
{
    return __cmsg_nxthdr_fix(__msg->msg_control, __msg->msg_controllen, __cmsg);
}

#endif              /* NS_PORT */


void NS_CLASS aodvvanet_socket_init()
{
#ifndef NS_PORT
    struct sockaddr_in aodvvanet_addr;
    struct ifreq ifr;
    int i, retval = 0;
    int on = 1;
    int tos = IPTOS_LOWDELAY;
    int bufsize = SO_RECVBUF_SIZE;
    socklen_t optlen = sizeof(bufsize);

    /* Create a UDP socket */

    if (this_host.nif == 0)
    {
        fprintf(stderr, "No interfaces configured\n");
        exit(-1);
    }

    /* Open a socket for every AODVVANET enabled interface */
    for (i = 0; i < MAX_NR_INTERFACES; i++)
    {
        if (!DEV_NR(i).enabled)
            continue;

        /* AODVVANET socket */
        DEV_NR(i).sock = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP);
        if (DEV_NR(i).sock < 0)
        {
            perror("");
            exit(-1);
        }
#ifdef CONFIG_GATEWAY
        /* Data packet send socket */
        DEV_NR(i).psock = socket(PF_INET, SOCK_RAW, IPPROTO_RAW);

        if (DEV_NR(i).psock < 0)
        {
            perror("");
            exit(-1);
        }
#endif
        /* Bind the socket to the AODVVANET port number */
        memset(&aodvvanet_addr, 0, sizeof(aodvvanet_addr));
        aodvvanet_addr.sin_family = AF_INET;
        aodvvanet_addr.sin_port = htons(AODVVANET_PORT);
        aodvvanet_addr.sin_addr.s_addr = htonl(INADDR_ANY);

        retval = bind(DEV_NR(i).sock, (struct sockaddr *) &aodvvanet_addr,
                      sizeof(struct sockaddr));

        if (retval < 0)
        {
            perror("Bind failed ");
            exit(-1);
        }
        if (setsockopt(DEV_NR(i).sock, SOL_SOCKET, SO_BROADCAST,
                       &on, sizeof(int)) < 0)
        {
            perror("SO_BROADCAST failed ");
            exit(-1);
        }

        memset(&ifr, 0, sizeof(struct ifreq));
        strcpy(ifr.ifr_name, DEV_NR(i).ifname);

        if (setsockopt(DEV_NR(i).sock, SOL_SOCKET, SO_BINDTODEVICE,
                       &ifr, sizeof(ifr)) < 0)
        {
            fprintf(stderr, "SO_BINDTODEVICE failed for %s", DEV_NR(i).ifname);
            perror(" ");
            exit(-1);
        }

        if (setsockopt(DEV_NR(i).sock, SOL_SOCKET, SO_PRIORITY,
                       &tos, sizeof(int)) < 0)
        {
            perror("Setsockopt SO_PRIORITY failed ");
            exit(-1);
        }

        if (setsockopt(DEV_NR(i).sock, SOL_IP, IP_RECVTTL,
                       &on, sizeof(int)) < 0)
        {
            perror("Setsockopt IP_RECVTTL failed ");
            exit(-1);
        }

        if (setsockopt(DEV_NR(i).sock, SOL_IP, IP_PKTINFO,
                       &on, sizeof(int)) < 0)
        {
            perror("Setsockopt IP_PKTINFO failed ");
            exit(-1);
        }
#ifdef CONFIG_GATEWAY
        if (setsockopt(DEV_NR(i).psock, SOL_SOCKET, SO_BINDTODEVICE,
                       &ifr, sizeof(ifr)) < 0)
        {
            fprintf(stderr, "SO_BINDTODEVICE failed for %s", DEV_NR(i).ifname);
            perror(" ");
            exit(-1);
        }

        bufsize = 4 * 65535;

        if (setsockopt(DEV_NR(i).psock, SOL_SOCKET, SO_SNDBUF,
                       (char *) &bufsize, optlen) < 0)
        {
            DEBUG(LOG_NOTICE, 0, "Could not set send socket buffer size");
        }
        if (getsockopt(DEV_NR(i).psock, SOL_SOCKET, SO_SNDBUF,
                       (char *) &bufsize, &optlen) == 0)
        {
            alog(LOG_NOTICE, 0, __FUNCTION__,
                 "RAW send socket buffer size set to %d", bufsize);
        }
#endif
        /* Set max allowable receive buffer size... */
        for (;; bufsize -= 1024)
        {
            if (setsockopt(DEV_NR(i).sock, SOL_SOCKET, SO_RCVBUF,
                           (char *) &bufsize, optlen) == 0)
            {
                alog(LOG_NOTICE, 0, __FUNCTION__,
                     "Receive buffer size set to %d", bufsize);
                break;
            }
            if (bufsize < RECV_BUF_SIZE)
            {
                alog(LOG_ERR, 0, __FUNCTION__,
                     "Could not set receive buffer size");
                exit(-1);
            }
        }

        retval = attach_callback_func(DEV_NR(i).sock, aodvvanet_socket_read);

        if (retval < 0)
        {
            perror("register input handler failed ");
            exit(-1);
        }
    }
#endif              /* NS_PORT */

    num_rreq = 0;
    num_rerr = 0;
}

void NS_CLASS aodvvanet_socket_process_packet(AODVVANET_msg * aodvvanet_msg, int len,
        struct in_addr src,
        struct in_addr dst,
        int ttl, unsigned int ifindex)
{
    /* If this was a HELLO message... Process as HELLO. */
#ifndef OMNETPP
    if ((aodvvanet_msg->type == AODVVANET_RREP && ttl == 1 &&
            dst.s_addr == AODVVANET_BROADCAST))
    {
        hello_process((RREP *) aodvvanet_msg, len, ifindex);
        return;
    }
#else
    if ((aodvvanet_msg->type == AODVVANET_RREP && ttl == 0 && // ttl is decremented for ip layer before send to aodv
            dst.s_addr == ManetAddress(IPv4Address(AODVVANET_BROADCAST))))
    {
        hello_process((RREP *) aodvvanet_msg, len, ifindex);
        return;
    }
#endif
    /* Make sure we add/update neighbors */
    neighbor_add(aodvvanet_msg, src, ifindex);

    /* Check what type of msg we received and call the corresponding
       function to handle the msg... */
    switch (aodvvanet_msg->type)
    {

    case AODVVANET_RREQ:
        rreq_process((RREQ *) aodvvanet_msg, len, src, dst, ttl, ifindex);
        break;
    case AODVVANET_RREP:
        DEBUG(LOG_DEBUG, 0, "Received RREP");
        rrep_process((RREP *) aodvvanet_msg, len, src, dst, ttl, ifindex);
        break;
    case AODVVANET_RERR:
        DEBUG(LOG_DEBUG, 0, "Received RERR");
        rerr_process((RERR *) aodvvanet_msg, len, src, dst);
        break;
    case AODVVANET_RREP_ACK:
        DEBUG(LOG_DEBUG, 0, "Received RREP_ACK");
        rrep_ack_process((RREP_ack *) aodvvanet_msg, len, src, dst);
        break;
    default:
        alog(LOG_WARNING, 0, __FUNCTION__,
             "Unknown msg type %u rcvd from %s to %s", aodvvanet_msg->type,
             ip_to_str(src), ip_to_str(dst));
        break;
    }
}

#ifdef NS_PORT
#ifndef OMNETPP
void NS_CLASS recvAODVVANETPacket(Packet * p)
{
    int len, i, ttl = 0;
    struct in_addr src, dst;
    struct hdr_cmn *ch = HDR_CMN(p);
    struct hdr_ip *ih = HDR_IP(p);
    hdr_aodvuu *ah = HDR_AODVVANET(p);

    src.s_addr = ih->saddr();
    dst.s_addr = ih->daddr();
    len = ch->size() - IP_HDR_LEN;
    ttl = ih->ttl();

    AODVVANET_msg *aodvvanet_msg = (AODVVANET_msg *) recv_buf;

    /* Only handle AODVVANET packets */
    assert(ch->ptype() == PT_AODVVANET);

    /* Only process incoming packets */
    assert(ch->direction() == hdr_cmn::UP);

    /* Copy message to receive buffer */
    memcpy(recv_buf, ah, RECV_BUF_SIZE);

    /* Deallocate packet, we have the information we need... */
    Packet::free(p);

    /* Ignore messages generated locally */
    for (i = 0; i < MAX_NR_INTERFACES; i++)
        if (this_host.devs[i].enabled &&
                memcmp(&src, &this_host.devs[i].ipaddr,
                       sizeof(struct in_addr)) == 0)
            return;

    aodvvanet_socket_process_packet(aodvvanet_msg, len, src, dst, ttl, NS_IFINDEX);
}
#endif /*no omnet++*/
#else
static void aodvvanet_socket_read(int fd)
{
    struct in_addr src, dst;
    int i, len, ttl = -1;
    AODVVANET_msg *aodvvanet_msg;
    struct dev_info *dev;
    struct msghdr msgh;
    struct cmsghdr *cmsg;
    struct iovec iov;
    char ctrlbuf[CMSG_SPACE(sizeof(int)) +
                 CMSG_SPACE(sizeof(struct in_pktinfo))];
    struct sockaddr_in src_addr;

    iov.iov_base = recv_buf;
    iov.iov_len = RECV_BUF_SIZE;
    msgh.msg_name = &src_addr;
    msgh.msg_namelen = sizeof(src_addr);
    msgh.msg_iov = &iov;
    msgh.msg_iovlen = 1;
    msgh.msg_control = ctrlbuf;
    msgh.msg_controllen = sizeof(ctrlbuf);

    len = recvmsg(fd, &msgh, 0);

    if (len < 0)
    {
        alog(LOG_WARNING, 0, __FUNCTION__, "receive ERROR len=%d!", len);
        return;
    }

    src.s_addr = src_addr.sin_addr.s_addr;

    /* Get the ttl and destination address from the control message */
    for (cmsg = CMSG_FIRSTHDR(&msgh); cmsg != NULL;
            cmsg = CMSG_NXTHDR_FIX(&msgh, cmsg))
    {
        if (cmsg->cmsg_level == SOL_IP)
        {
            switch (cmsg->cmsg_type)
            {
            case IP_TTL:
                ttl = *(CMSG_DATA(cmsg));
                break;
            case IP_PKTINFO:
                dst.s_addr =
                    ((struct in_pktinfo *) CMSG_DATA(cmsg))->ipi_addr.s_addr;
            }
        }
    }

    if (ttl < 0)
    {
        DEBUG(LOG_DEBUG, 0, "No TTL, packet ignored!");
        return;
    }

    /* Ignore messages generated locally */
    for (i = 0; i < MAX_NR_INTERFACES; i++)
        if (this_host.devs[i].enabled &&
                memcmp(&src, &this_host.devs[i].ipaddr,
                       sizeof(struct in_addr)) == 0)
            return;

    aodvvanet_msg = (AODVVANET_msg *) recv_buf;

    dev = devfromsock(fd);

    if (!dev)
    {
        DEBUG(LOG_ERR, 0, "Could not get device info!\n");
        return;
    }

    aodvvanet_socket_process_packet(aodvvanet_msg, len, src, dst, ttl, dev->ifindex);
}
#endif              /* NS_PORT */

void NS_CLASS aodvvanet_socket_send(AODVVANET_msg * aodvvanet_msg, struct in_addr dst,
                               int len, u_int8_t ttl, struct dev_info *dev,double delay)
{

    struct timeval now;
    int retval = 0;
    /* Rate limit stuff: */

#ifdef OMNETPP
    if (ttl<=0)
    {
        delete aodvvanet_msg;
        return;
    }
#endif

#ifndef NS_PORT

    struct sockaddr_in dst_addr;

    if (wait_on_reboot && aodvvanet_msg->type == AODVVANET_RREP)
        return;

    memset(&dst_addr, 0, sizeof(dst_addr));
    dst_addr.sin_family = AF_INET;
    dst_addr.sin_addr = dst;
    dst_addr.sin_port = htons(AODVVANET_PORT);

    /* Set ttl */
    if (setsockopt(dev->sock, SOL_IP, IP_TTL, &ttl, sizeof(ttl)) < 0)
    {
        alog(LOG_WARNING, 0, __FUNCTION__, "ERROR setting ttl!");
        return;
    }
#else

    /*
       NS_PORT: Sending of AODVVANET_msg messages to other AODVVANET-UU routing agents
       by encapsulating them in a Packet.

       Note: This method is _only_ for sending AODVVANET packets to other routing
       agents, _not_ for forwarding "regular" IP packets!
     */

    /* If we are in waiting phase after reboot, don't send any RREPs */
    if (wait_on_reboot && aodvvanet_msg->type == AODVVANET_RREP)
    {
#ifdef OMNETPP
        delete aodvvanet_msg;
#endif
        return;
    }
#ifndef OMNETPP
    /*
       NS_PORT: Don't allocate packet until now. Otherwise packet uid
       (unique ID) space is unnecessarily exhausted at the beginning of
       the simulation, resulting in uid:s starting at values greater than 0.
     */
    Packet *p = allocpkt();
    struct hdr_cmn *ch = HDR_CMN(p);
    struct hdr_ip *ih = HDR_IP(p);
    hdr_aodvuu *ah = HDR_AODVVANET(p);

    // Clear AODVVANET part of packet
    memset(ah, '\0', ah->size());

    // Copy message contents into packet
    memcpy(ah, aodvvanet_msg, len);

    // Set common header fields
    ch->ptype() = PT_AODVVANET;
    ch->direction() = hdr_cmn::DOWN;
    ch->size() = IP_HDR_LEN + len;
    ch->iface() = -2;
    ch->getBitErrorRate() = 0;
    ch->prev_hop_ = (nsaddr_t) dev->ipaddr.s_addr;

    // Set IP header fields
    ih->saddr() = (nsaddr_t) dev->ipaddr.s_addr;
    ih->daddr() = (nsaddr_t) dst.s_addr;
    ih->ttl() = ttl;

    // Note: Port number for routing agents, not AODVVANET port number!
    ih->sport() = RT_PORT;
    ih->dport() = RT_PORT;

    // Fake success
    retval = len;
#endif /*omnet++ */
#endif              /* NS_PORT */

    /* If rate limiting is enabled, check if we are sending either a
       RREQ or a RERR. In that case, drop the outgoing control packet
       if the time since last transmit of that type of packet is less
       than the allowed RATE LIMIT time... */

    if (ratelimit)
    {

        gettimeofday(&now, NULL);

        switch (aodvvanet_msg->type)
        {
        case AODVVANET_RREQ:
            if (num_rreq == (RREQ_RATELIMIT - 1))
            {
                if (timeval_diff(&now, &rreq_ratel[0]) < 1000)
                {
                    DEBUG(LOG_DEBUG, 0, "RATELIMIT: Dropping RREQ %ld ms",
                          timeval_diff(&now, &rreq_ratel[0]));
#ifdef OMNETPP
                    delete aodvvanet_msg;
#else
#ifdef NS_PORT
                    Packet::free(p);
#endif
#endif
                    return;
                }
                else
                {
                    memmove(rreq_ratel, &rreq_ratel[1],
                            sizeof(struct timeval) * (num_rreq - 1));
                    memcpy(&rreq_ratel[num_rreq - 1], &now,
                           sizeof(struct timeval));
                }
            }
            else
            {
                memcpy(&rreq_ratel[num_rreq], &now, sizeof(struct timeval));
                num_rreq++;
            }
            break;
        case AODVVANET_RERR:
            if (num_rerr == (RERR_RATELIMIT - 1))
            {
                if (timeval_diff(&now, &rerr_ratel[0]) < 1000)
                {
                    DEBUG(LOG_DEBUG, 0, "RATELIMIT: Dropping RERR %ld ms",
                          timeval_diff(&now, &rerr_ratel[0]));
#ifdef OMNETPP
                    delete aodvvanet_msg;
#else
#ifdef NS_PORT
                    Packet::free(p);
#endif
#endif
                    return;
                }
                else
                {
                    memmove(rerr_ratel, &rerr_ratel[1],
                            sizeof(struct timeval) * (num_rerr - 1));
                    memcpy(&rerr_ratel[num_rerr - 1], &now,
                           sizeof(struct timeval));
                }
            }
            else
            {
                memcpy(&rerr_ratel[num_rerr], &now, sizeof(struct timeval));
                num_rerr++;
            }
            break;
        }
    }

#ifdef OMNETPP
    aodvvanet_msg->prevFix=this->isStaticNode();
    if (this->isStaticNode())
    {
        if (dynamic_cast<RREP*>(aodvvanet_msg))
        {
            dynamic_cast<RREP*>(aodvvanet_msg)->cost += costStatic;
        }
        else if (dynamic_cast<RREQ*> (aodvvanet_msg))
        {
            dynamic_cast<RREQ*>(aodvvanet_msg)->cost += costStatic;
        }
    }
    else
    {
        if (dynamic_cast<RREP*>(aodvvanet_msg))
        {
            dynamic_cast<RREP*>(aodvvanet_msg)->cost += costMobile;
        }
        else if (dynamic_cast<RREQ*>(aodvvanet_msg))
        {
            dynamic_cast<RREQ*>(aodvvanet_msg)->cost += costMobile;
        }
    }
    ManetAddress destAdd;
    if (dst.s_addr == ManetAddress(IPv4Address(AODVVANET_BROADCAST)))
    {
        gettimeofday(&this_host.bcast_time, NULL);
        if (!this->isInMacLayer())
            destAdd = ManetAddress(IPv4Address::ALLONES_ADDRESS);
        else
            destAdd = ManetAddress(MACAddress::BROADCAST_ADDRESS);
    }
    else
    {
        destAdd = dst.s_addr;
    }

    // if delay is lower than 0 compute the delay using the distributions in the configuration
    if (delay < 0)
    {
        if (dst.s_addr == ManetAddress(IPv4Address(AODVVANET_BROADCAST)))
            delay = par ("broadcastDelay").doubleValue();
        else
            delay = par ("unicastDelay").doubleValue();
    }
    //       IPv4Address   desAddIp4(dst.s_addr);
    //       IPvXAddress destAdd(desAddIp4);
    if (useIndex)
        sendToIp(aodvvanet_msg, 654, destAdd, 654, ttl, delay, dev->ifindex);
    else
        sendToIp(aodvvanet_msg, 654, destAdd, 654, ttl, delay, dev->ipaddr.s_addr);
    totalSend++;
#else
    /* If we broadcast this message we update the time of last broadcast
       to prevent unnecessary broadcasts of HELLO msg's */
    if (dst.s_addr == ManetAddress(IPv4Address(AODVVANET_BROADCAST)))
    {
        gettimeofday(&this_host.bcast_time, NULL);

#ifdef NS_PORT
        ch->addr_type() = NS_AF_NONE;
        sendPacket(p, dst, 0.0);
#else
        retval = sendto(dev->sock, send_buf, len, 0,
                        (struct sockaddr *) &dst_addr, sizeof(dst_addr));

        if (retval < 0)
        {
            alog(LOG_WARNING, errno, __FUNCTION__, "Failed send to bc %s",
                 ip_to_str(dst));
            return;
        }
#endif
    }
    else
    {

#ifdef NS_PORT
        ch->addr_type() = NS_AF_INET;
        /* We trust the decision of next hop for all AODVVANET messages... */
        if (dst.s_addr == AODVVANET_BROADCAST)
            sendPacket(p, dst, 0.001 * Random::uniform());
        else
            sendPacket(p, dst, 0.0);
#else
        retval = sendto(dev->sock, send_buf, len, 0,
                        (struct sockaddr *) &dst_addr, sizeof(dst_addr));

        if (retval < 0)
        {
            alog(LOG_WARNING, errno, __FUNCTION__, "Failed send to %s",
                 ip_to_str(dst));
            return;
        }
#endif
    }
#endif // OMNETPP

    /* Do not print hello msgs... */
    if (!(aodvvanet_msg->type == AODVVANET_RREP && (dst.s_addr == ManetAddress(IPv4Address(AODVVANET_BROADCAST)))))
        DEBUG(LOG_INFO, 0, "AODVVANET msg to %s ttl=%d retval=%u size=%u",
              ip_to_str(dst), ttl, retval, len);

    return;
}




#ifndef OMNETPP
AODVVANET_msg *NS_CLASS aodvvanet_socket_new_msg(void)
{
    memset(send_buf, '\0', SEND_BUF_SIZE);
    return (AODVVANET_msg *) (send_buf);
}

/* Copy an existing AODVVANET message to the send buffer */
AODVVANET_msg *NS_CLASS aodvvanet_socket_queue_msg(AODVVANET_msg * aodvvanet_msg, int size)
{
    memcpy((char *) send_buf, aodvvanet_msg, size);
    return (AODVVANET_msg *) send_buf;
}
#endif
void aodvvanet_socket_cleanup(void)
{
#ifndef NS_PORT
    int i;

    for (i = 0; i < MAX_NR_INTERFACES; i++)
    {
        if (!DEV_NR(i).enabled)
            continue;
        close(DEV_NR(i).sock);
    }
#endif              /* NS_PORT */
}



void NS_CLASS aodvvanet_socket_send_delayed (AODVVANET_msg * aodvvanet_msg, struct in_addr dst,
                                   int len, u_int8_t ttl, struct dev_info *dev,double delay)
{
    if (delay > 0)
    {
        DelayInfo *info = new DelayInfo;
        info->dst = dst;
        info->len = len;
        info->ttl = ttl;
        info->dev = dev;
        aodvvanet_msg->setControlInfo(info);
        scheduleAt(simTime()+delay,aodvvanet_msg);
    }
    else
        aodvvanet_socket_send(aodvvanet_msg,dst,len,ttl,dev);

}



