//
// Copyright (C) 2012 OpenSim Ltd
// Copyright (C) 2015 Joanne Skiles
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//
// @author: Zoltan Bojthe

#include "VanetNetfilterHook.h"

#include "ControlVanetRouting_m.h"
#include "IInterfaceTable.h"
#include "IRoutingTable.h"
#include "InterfaceTableAccess.h"
#include "InterfaceEntry.h"
#include "IRoutingTable.h"
#include "IPv4.h"
#include "RoutingTableAccess.h"
#include "IPv4ControlInfo.h"
#include "ProtocolMap.h"

#include "dsr-pkt_omnet.h"

void VanetNetfilterHook::initHook(cModule* _module)
{
    module = _module;
    ipLayer = check_and_cast<IPv4*>(findModuleWhereverInNode("ip", module));
    ift = InterfaceTableAccess().get();
    rt = RoutingTableAccess().get();
    cProperties *props = module->getProperties();
    isReactive = props && props->getAsBool("reactive");

    ipLayer->registerHook(0, this);
}

void VanetNetfilterHook::finishHook()
{
    ipLayer->unregisterHook(0, this);
}

INetfilter::IHook::Result VanetNetfilterHook::datagramPreRoutingHook(IPv4Datagram* datagram, const InterfaceEntry* inIE, const InterfaceEntry*& outIE, IPv4Address& nextHopAddr)
{
    if (isReactive)
    {
        if (!inIE->isLoopback() && !datagram->getDestAddress().isMulticast())
            sendRouteUpdateMessageToVanet(datagram);

        if (checkPacketUnroutable(datagram, NULL))
        {
            delete dynamic_cast<cPacket *>(datagram)->removeControlInfo();
            sendNoRouteMessageToVanet(datagram);
            return INetfilter::IHook::STOLEN;
        }
    }

    return INetfilter::IHook::ACCEPT;
}

INetfilter::IHook::Result VanetNetfilterHook::datagramForwardHook(IPv4Datagram* datagram, const InterfaceEntry* inIE, const InterfaceEntry*& outIE, IPv4Address& nextHopAddr)
{
    return INetfilter::IHook::ACCEPT;
}

INetfilter::IHook::Result VanetNetfilterHook::datagramPostRoutingHook(IPv4Datagram* datagram, const InterfaceEntry* inIE, const InterfaceEntry*& outIE, IPv4Address& nextHopAddr)
{
    return INetfilter::IHook::ACCEPT;
}

INetfilter::IHook::Result VanetNetfilterHook::datagramLocalInHook(IPv4Datagram* datagram, const InterfaceEntry* inIE)
{
    if (isReactive)
    {
        if (datagram->getTransportProtocol() == IP_PROT_DSR)
        {
            sendToVanet(dynamic_cast<cPacket *>(datagram));
            return INetfilter::IHook::STOLEN;
        }
    }

    return INetfilter::IHook::ACCEPT;
}

INetfilter::IHook::Result VanetNetfilterHook::datagramLocalOutHook(IPv4Datagram* datagram, const InterfaceEntry*& outIE, IPv4Address& nextHopAddr)
{
    if (isReactive)
    {
        cPacket * packet = dynamic_cast<cPacket *>(datagram);
        // Dsr routing, Dsr is a HL protocol and send datagram
        if (datagram->getTransportProtocol()==IP_PROT_DSR)
        {
            IPv4ControlInfo *controlInfo = check_and_cast<IPv4ControlInfo *>(packet->getControlInfo());
            DSRPkt *dsrpkt = check_and_cast<DSRPkt *>(packet);
            outIE = ift->getInterfaceById(controlInfo->getInterfaceId());
            nextHopAddr = dsrpkt->nextAddress();
        }

        sendRouteUpdateMessageToVanet(datagram);

        if (checkPacketUnroutable(datagram, outIE))
        {
            delete packet->removeControlInfo();
            sendNoRouteMessageToVanet(datagram);
            return INetfilter::IHook::STOLEN;
        }
    }
    return INetfilter::IHook::ACCEPT;
}

// Helper functions:

void VanetNetfilterHook::sendRouteUpdateMessageToVanet(IPv4Datagram *datagram)
{
    if (datagram->getTransportProtocol() != IP_PROT_DSR) // Dsr don't use update code, the Dsr datagram is the update.
    {
        ControlVanetRouting *control = new ControlVanetRouting();
        control->setOptionCode(VANET_ROUTE_UPDATE);
        control->setSrcAddress(VanetAddress(datagram->getSrcAddress()));
        control->setDestAddress(VanetAddress(datagram->getDestAddress()));
        sendToVanet(control);
    }
}

void VanetNetfilterHook::sendNoRouteMessageToVanet(IPv4Datagram *datagram)
{
    if (datagram->getTransportProtocol()==IP_PROT_DSR)
    {
        sendToVanet(dynamic_cast<cPacket *>(datagram));
    }
    else
    {
        ControlVanetRouting *control = new ControlVanetRouting();
        control->setOptionCode(VANET_ROUTE_NOROUTE);
        control->setSrcAddress(VanetAddress(datagram->getSrcAddress()));
        control->setDestAddress(VanetAddress(datagram->getDestAddress()));
        control->encapsulate(dynamic_cast<cPacket *>(datagram));
        sendToVanet(control);
    }
}

void VanetNetfilterHook::sendToVanet(cPacket *packet)
{
    ipLayer->sendOnTransPortOutGateByProtocolId(packet, IP_PROT_MANET);
}

bool VanetNetfilterHook::checkPacketUnroutable(IPv4Datagram* datagram, const InterfaceEntry* outIE)
{
    if (outIE != NULL)
        return false;

    IPv4Address destAddr = datagram->getDestAddress();

    if (destAddr.isMulticast() || destAddr.isLimitedBroadcastAddress())
        return false;

    if (rt->isLocalAddress(destAddr))
        return false;

    return (rt->findBestMatchingRoute(destAddr) == NULL);
}

