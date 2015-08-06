//
// Copyright (C) 2012 Alfonso Ariza Universidad de Malaga
// Copyright (C) 2015 Joanne Skiles
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//

#ifndef __GlobalWirelessWirelessLinkInspector_H_
#define __GlobalWirelessWirelessLinkInspector_H_
#include <vector>
#include <map>
#include <omnetpp.h>
#include "INETDefs.h"
#include "VanetAddress.h"



class GlobalWirelessLinkInspector_Vanet : public cSimpleModule
{
    public:
        class Link
        {
            public:
               double costEtt;
               double costEtx;
               double snr;
        };
     protected:
        typedef std::map<VanetAddress,VanetAddress> RouteMap;
        class ProtocolRoutingData
        {
            public:
                cModule * mod;
                RouteMap* routesVector;
                bool isProactive;
        };
        typedef std::vector<ProtocolRoutingData> ProtocolsRoutes;
        typedef std::map<VanetAddress, ProtocolsRoutes>GlobalRouteMap;
        static GlobalRouteMap *globalRouteMap;

        typedef std::map<VanetAddress,Link> NodeLinkCost;
        typedef std::map<VanetAddress,NodeLinkCost*> CostMap;
        static CostMap * costMap;

        typedef std::map<VanetAddress,VanetAddress> LocatorMap;
        typedef LocatorMap::iterator  LocatorIteartor;


        static LocatorMap *globalLocatorMap;

        typedef std::map<VanetAddress,uint64_t> QueueSize;
        static QueueSize *queueSize;

     public:
        GlobalWirelessLinkInspector_Vanet();
        virtual ~GlobalWirelessLinkInspector_Vanet();

        static bool isActive() {return (costMap!=NULL);}
        static bool isActiveLocator() {return (globalLocatorMap!=NULL && !globalLocatorMap->empty());}
        static void setLinkCost(const VanetAddress& org,const VanetAddress& dest,const Link &);
        static bool getLinkCost(const VanetAddress& org,const VanetAddress& dest,Link &);
        static bool getCostPath(const std::vector<VanetAddress>&, Link &);
        static bool getWorst(const std::vector<VanetAddress>&, Link &);
        static bool initRoutingProtocol (cModule *,bool);
        static bool getRoute(const VanetAddress &src, const VanetAddress &dest, std::vector<VanetAddress> &route);
        static bool getRouteWithLocator(const VanetAddress &src, const VanetAddress &dest, std::vector<VanetAddress> &route);
        static bool setRoute(const cModule *,const VanetAddress &, const VanetAddress &dest, const VanetAddress &gw, const bool &erase);
        static void initRoutingTables (const cModule *,const VanetAddress &,bool);
        virtual void initialize();
        virtual void handleMessage(cMessage *msg);

        static void setLocatorInfo(VanetAddress , VanetAddress );
        static bool getLocatorInfo(VanetAddress , VanetAddress &);
        static bool getNumNodes(VanetAddress,int &);
        static bool areNeighbour(const VanetAddress &node1, const VanetAddress &node2,bool &areN);
        static bool setQueueSize(const VanetAddress &node, const uint64_t &);
        static bool getQueueSize(const VanetAddress &node, uint64_t &);

};


#endif
