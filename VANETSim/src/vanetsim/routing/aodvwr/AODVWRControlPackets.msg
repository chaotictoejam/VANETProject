//
// Copyright (C) 2014 OpenSim Ltd.
// Author: Benjamin Seregi
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

cplusplus {{
#include "inet/networklayer/common/L3Address.h"
#include "inet/common/geometry/common/Coord.h"
#include "inet/common/geometry/common/EulerAngles.h"
}}

namespace inet;

class noncobject L3Address;
class noncobject Coord;
class noncobject EulerAngles;
//
// Helper struct to represent (L3Address, sequence number) pairs in a RERR message
//
struct UnreachableAODVWRNode
{
	L3Address addr;
    unsigned int seqNum;
};

enum AODVWRControlPacketType
{
    RREQ = 1;
    RREP = 2;
    RERR = 3;
    RREPACK = 4;
};

//
// Base packet for AODVWR Control Packets
//
packet AODVWRControlPacket
{
    unsigned int packetType;
}

//
// Represents an AODVWR Route Request
//
class AODVWRRREQ extends AODVWRControlPacket
{
    packetType = RREQ;
    bool joinFlag;
    bool repairFlag;
    bool gratuitousRREPFlag;
    bool destOnlyFlag;
    bool unknownSeqNumFlag;
    unsigned int hopCount;
    unsigned int rreqId;
    L3Address destAddr;
    unsigned int destSeqNum;
    L3Address originatorAddr;
    unsigned int originatorSeqNum;
    Coord position;
    Coord speed;
    Coord acceleration;
    EulerAngles direction;
    double twr;
    double expirationTime;
}

//
// Represents an AODVWR Route Reply
//
class AODVWRRREP extends AODVWRControlPacket
{
    packetType = RREP;
    bool repairFlag;
    bool ackRequiredFlag;
    unsigned int prefixSize;
    unsigned int hopCount;
	L3Address destAddr;
    unsigned int destSeqNum;
	L3Address originatorAddr;
    unsigned int originatorSeqNum;
    simtime_t lifeTime;
    Coord position;
    Coord speed;
    Coord acceleration;
    EulerAngles direction;
    double twr;
    double expirationTime;
}

//
// Represents an AODVWR Route Error
//
class AODVWRRERR extends AODVWRControlPacket
{
    packetType = RERR;
    UnreachableAODVWRNode unreachableNodes[];
    bool noDeleteFlag;
    unsigned int destCount;
}

//
// Represents an AODVWR Route Reply ACK
//
class AODVWRRREPACK extends AODVWRControlPacket
{
    packetType = RREPACK;
}

//
// Represents a timer for a Route Reply packet
//
message WaitForRREPWR
{
	L3Address destAddr;
    unsigned int lastTTL;
    bool fromInvalidEntry;
}
