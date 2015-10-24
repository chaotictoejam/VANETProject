//
// Copyright (C) 2006-2012 Christoph Sommer <christoph.sommer@uibk.ac.at>
//
// Documentation for these modules is at http://veins.car2x.org/
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#include <fstream>
#include <vector>
#include <algorithm>
#include <stdexcept>

#define WANT_WINSOCK2
#include <platdep/sockets.h>
#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32) || defined(__CYGWIN__) || defined(_WIN64)
#include <ws2tcpip.h>
#else
#include <netinet/tcp.h>
#include <netdb.h>
#include <arpa/inet.h>
#endif
#define MYSOCKET (*(SOCKET*)socketPtr)

#define MYDEBUG EV

#include "world/traci/aodvTraCIScenarioManager.h"
#include "world/traci/aodvTraCIConstants.h"
#include "mobility/single/aodvTraCIMobility.h"

Define_Module(aodvTraCIScenarioManager);

aodvTraCIScenarioManager::~aodvTraCIScenarioManager()
{
    cancelAndDelete(connectAndStartTrigger);
    cancelAndDelete(executeOneTimestepTrigger);
}

void aodvTraCIScenarioManager::initialize(int stage)
{
    cSimpleModule::initialize(stage);
    if (stage != 1)
    {
        return;
    }

    debug = par("debug");
    connectAt = par("connectAt");
    firstStepAt = par("firstStepAt");
    updateInterval = par("updateInterval");
    if (firstStepAt == -1)
        firstStepAt = connectAt + updateInterval;
    moduleType = par("moduleType").stdstringValue();
    moduleName = par("moduleName").stdstringValue();
    moduleDisplayString = par("moduleDisplayString").stdstringValue();
    penetrationRate = par("penetrationRate").doubleValue();
    host = par("host").stdstringValue();
    port = par("port");
    autoShutdown = par("autoShutdown");
    margin = par("margin");
    std::string roiRoads_s = par("roiRoads");
    std::string roiRects_s = par("roiRects");

    // parse roiRoads
    roiRoads.clear();
    std::istringstream roiRoads_i(roiRoads_s);
    std::string road;
    while (std::getline(roiRoads_i, road, ' '))
    {
        roiRoads.push_back(road);
    }

    // parse roiRects
    roiRects.clear();
    std::istringstream roiRects_i(roiRects_s);
    std::string rect;
    while (std::getline(roiRects_i, rect, ' '))
    {
        std::istringstream rect_i(rect);
        double x1;
        rect_i >> x1;
        ASSERT(rect_i);
        char c1;
        rect_i >> c1;
        ASSERT(rect_i);
        double y1;
        rect_i >> y1;
        ASSERT(rect_i);
        char c2;
        rect_i >> c2;
        ASSERT(rect_i);
        double x2;
        rect_i >> x2;
        ASSERT(rect_i);
        char c3;
        rect_i >> c3;
        ASSERT(rect_i);
        double y2;
        rect_i >> y2;
        ASSERT(rect_i);
        roiRects.push_back(std::pair<aodvTraCICoord, aodvTraCICoord>(aodvTraCICoord(x1, y1), aodvTraCICoord(x2, y2)));
    }

    nextNodeVectorIndex = 0;
    hosts.clear();
    subscribedVehicles.clear();
    activeVehicleCount = 0;
    autoShutdownTriggered = false;

    socketPtr = 0;

    ASSERT(firstStepAt > connectAt);
    connectAndStartTrigger = new cMessage("connect");
    scheduleAt(connectAt, connectAndStartTrigger);
    executeOneTimestepTrigger = new cMessage("step");
    scheduleAt(firstStepAt, executeOneTimestepTrigger);

    MYDEBUG << "initialized aodvTraCIScenarioManager" << endl;
}

std::string aodvTraCIScenarioManager::receiveaodvTraCIMessage()
{
    if (!socketPtr)
        error("Connection to aodvTraCI server lost");

    uint32_t msgLength;
    {
        char buf2[sizeof(uint32_t)];
        uint32_t bytesRead = 0;
        while (bytesRead < sizeof(uint32_t))
        {
            int receivedBytes = ::recv(MYSOCKET, reinterpret_cast<char*>(&buf2) + bytesRead,
                    sizeof(uint32_t) - bytesRead, 0);
            if (receivedBytes > 0)
            {
                bytesRead += receivedBytes;
            }
            else if (receivedBytes == 0)
            {
                error("Connection to aodvTraCI server closed unexpectedly. Check your server's log");
            }
            else
            {
                if (sock_errno() == EINTR)
                    continue;
                if (sock_errno() == EAGAIN)
                    continue;
                error("Connection to aodvTraCI server lost. Check your server's log. Error message: %d: %s", sock_errno(),
                        strerror(sock_errno()));
            }
        }
        aodvTraCIBuffer(std::string(buf2, sizeof(uint32_t))) >> msgLength;
    }

    uint32_t bufLength = msgLength - sizeof(msgLength);
    char buf[bufLength];
    {
        MYDEBUG << "Reading aodvTraCI message of " << bufLength << " bytes" << endl;
        uint32_t bytesRead = 0;
        while (bytesRead < bufLength)
        {
            int receivedBytes = ::recv(MYSOCKET, reinterpret_cast<char*>(&buf) + bytesRead, bufLength - bytesRead, 0);
            if (receivedBytes > 0)
            {
                bytesRead += receivedBytes;
            }
            else if (receivedBytes == 0)
            {
                error("Connection to aodvTraCI server closed unexpectedly. Check your server's log");
            }
            else
            {
                if (sock_errno() == EINTR)
                    continue;
                if (sock_errno() == EAGAIN)
                    continue;
                error("Connection to aodvTraCI server lost. Check your server's log. Error message: %d: %s", sock_errno(),
                        strerror(sock_errno()));
            }
        }
    }
    return std::string(buf, bufLength);
}

void aodvTraCIScenarioManager::sendaodvTraCIMessage(std::string buf)
{
    if (!socketPtr)
        error("Connection to aodvTraCI server lost");

    {
        uint32_t msgLength = sizeof(uint32_t) + buf.length();
        aodvTraCIBuffer buf2 = aodvTraCIBuffer();
        buf2 << msgLength;
        uint32_t bytesWritten = 0;
        while (bytesWritten < sizeof(uint32_t))
        {
            size_t sentBytes = ::send(MYSOCKET, buf2.str().c_str() + bytesWritten, sizeof(uint32_t) - bytesWritten, 0);
            if (sentBytes > 0)
            {
                bytesWritten += sentBytes;
            }
            else
            {
                if (sock_errno() == EINTR)
                    continue;
                if (sock_errno() == EAGAIN)
                    continue;
                error("Connection to aodvTraCI server lost. Check your server's log. Error message: %d: %s", sock_errno(),
                        strerror(sock_errno()));
            }
        }
    }

    {
        MYDEBUG << "Writing aodvTraCI message of " << buf.length() << " bytes" << endl;
        uint32_t bytesWritten = 0;
        while (bytesWritten < buf.length())
        {
            size_t sentBytes = ::send(MYSOCKET, buf.c_str() + bytesWritten, buf.length() - bytesWritten, 0);
            if (sentBytes > 0)
            {
                bytesWritten += sentBytes;
            }
            else
            {
                if (sock_errno() == EINTR)
                    continue;
                if (sock_errno() == EAGAIN)
                    continue;
                error("Connection to aodvTraCI server lost. Check your server's log. Error message: %d: %s", sock_errno(),
                        strerror(sock_errno()));
            }
        }
    }
}

std::string aodvTraCIScenarioManager::makeaodvTraCICommand(uint8_t commandId, aodvTraCIBuffer buf)
{
    if (sizeof(uint8_t) + sizeof(uint8_t) + buf.str().length() > 0xFF)
    {
        uint32_t len = sizeof(uint8_t) + sizeof(uint32_t) + sizeof(uint8_t) + buf.str().length();
        return (aodvTraCIBuffer() << static_cast<uint8_t>(0) << len << commandId).str() + buf.str();
    }
    uint8_t len = sizeof(uint8_t) + sizeof(uint8_t) + buf.str().length();
    return (aodvTraCIBuffer() << len << commandId).str() + buf.str();
}

aodvTraCIScenarioManager::aodvTraCIBuffer aodvTraCIScenarioManager::queryaodvTraCI(uint8_t commandId, const aodvTraCIBuffer& buf)
{
    sendaodvTraCIMessage(makeaodvTraCICommand(commandId, buf));

    aodvTraCIBuffer obuf(receiveaodvTraCIMessage());
    uint8_t cmdLength;
    obuf >> cmdLength;
    uint8_t commandResp;
    obuf >> commandResp;
    ASSERT(commandResp == commandId);
    uint8_t result;
    obuf >> result;
    std::string description;
    obuf >> description;
    if (result == RTYPE_NOTIMPLEMENTED)
        error("aodvTraCI server reported command 0x%2x not implemented (\"%s\"). Might need newer version.", commandId,
                description.c_str());
    if (result == RTYPE_ERR)
        error("aodvTraCI server reported error executing command 0x%2x (\"%s\").", commandId, description.c_str());
    ASSERT(result == RTYPE_OK);
    return obuf;
}

aodvTraCIScenarioManager::aodvTraCIBuffer aodvTraCIScenarioManager::queryaodvTraCIOptional(uint8_t commandId, const aodvTraCIBuffer& buf,
        bool& success, std::string* errorMsg)
{
    sendaodvTraCIMessage(makeaodvTraCICommand(commandId, buf));

    aodvTraCIBuffer obuf(receiveaodvTraCIMessage());
    uint8_t cmdLength;
    obuf >> cmdLength;
    uint8_t commandResp;
    obuf >> commandResp;
    ASSERT(commandResp == commandId);
    uint8_t result;
    obuf >> result;
    std::string description;
    obuf >> description;
    success = (result == RTYPE_OK);
    if (errorMsg)
        *errorMsg = description;
    return obuf;
}

void aodvTraCIScenarioManager::connect()
{
    MYDEBUG << "aodvTraCIScenarioManager connecting to aodvTraCI server" << endl;

    if (initsocketlibonce() != 0)
        error("Could not init socketlib");

    in_addr addr;
    struct hostent* host_ent;
    struct in_addr saddr;

    saddr.s_addr = inet_addr(host.c_str());
    if (saddr.s_addr != static_cast<unsigned int>(-1))
    {
        addr = saddr;
    }
    else if ((host_ent = gethostbyname(host.c_str())))
    {
        addr = *((struct in_addr*) host_ent->h_addr_list[0]);
    }
    else
    {
        error("Invalid aodvTraCI server address: %s", host.c_str());
        return;
    }

    sockaddr_in address;
    memset((char*) &address, 0, sizeof(address));
    address.sin_family = AF_INET;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = addr.s_addr;

    socketPtr = new SOCKET();
    MYSOCKET = ::socket(AF_INET, SOCK_STREAM, 0);
    if (MYSOCKET < 0)
        error("Could not create socket to connect to aodvTraCI server");

    if (::connect(MYSOCKET, (sockaddr const*) &address, sizeof(address)) < 0)
    {
        error(
                "Could not connect to aodvTraCI server. Make sure it is running and not behind a firewall. Error message: %d: %s",
                sock_errno(), strerror(sock_errno()));
    }

    {
        int x = 1;
        ::setsockopt(MYSOCKET, IPPROTO_TCP, TCP_NODELAY, (const char*) &x, sizeof(x));
    }
}

void aodvTraCIScenarioManager::init_traci()
{
    {
        std::pair<uint32_t, std::string> version = aodvTraCIScenarioManager::commandGetVersion();
        uint32_t apiVersion = version.first;
        std::string serverVersion = version.second;

        if ((apiVersion == 3) || (apiVersion == 5) || (apiVersion == 6) || (apiVersion == 7))
        {
            MYDEBUG << "aodvTraCI server \"" << serverVersion << "\" reports API version " << apiVersion << endl;
        }
        else
        {
            error("aodvTraCI server \"%s\" reports API version %d. This server is unsupported.", serverVersion.c_str(),
                    apiVersion);
        }

    }

    {
        // query road network boundaries
        aodvTraCIBuffer buf = queryaodvTraCI(CMD_GET_SIM_VARIABLE,
                aodvTraCIBuffer() << static_cast<uint8_t>(VAR_NET_BOUNDING_BOX) << std::string("sim0"));
        uint8_t cmdLength_resp;
        buf >> cmdLength_resp;
        uint8_t commandId_resp;
        buf >> commandId_resp;
        ASSERT(commandId_resp == RESPONSE_GET_SIM_VARIABLE);
        uint8_t variableId_resp;
        buf >> variableId_resp;
        ASSERT(variableId_resp == VAR_NET_BOUNDING_BOX);
        std::string simId;
        buf >> simId;
        uint8_t typeId_resp;
        buf >> typeId_resp;
        ASSERT(typeId_resp == TYPE_BOUNDINGBOX);
        double x1;
        buf >> x1;
        double y1;
        buf >> y1;
        double x2;
        buf >> x2;
        double y2;
        buf >> y2;
        ASSERT(buf.eof());

        netbounds1 = aodvTraCICoord(x1, y1);
        netbounds2 = aodvTraCICoord(x2, y2);
        MYDEBUG << "aodvTraCI reports network boundaries (" << x1 << ", " << y1 << ")-(" << x2 << ", " << y2 << ")" << endl;
    }

    {
        // subscribe to list of departed and arrived vehicles, as well as simulation time
        uint32_t beginTime = 0;
        uint32_t endTime = 0x7FFFFFFF;
        std::string objectId = "";
        uint8_t variableNumber = 5;
        uint8_t variable1 = VAR_DEPARTED_VEHICLES_IDS;
        uint8_t variable2 = VAR_ARRIVED_VEHICLES_IDS;
        uint8_t variable3 = VAR_TIME_STEP;
        uint8_t variable4 = VAR_TELEPORT_STARTING_VEHICLES_IDS;
        uint8_t variable5 = VAR_TELEPORT_ENDING_VEHICLES_IDS;
        aodvTraCIBuffer buf = queryaodvTraCI(CMD_SUBSCRIBE_SIM_VARIABLE,
                aodvTraCIBuffer() << beginTime << endTime << objectId << variableNumber << variable1 << variable2
                        << variable3 << variable4 << variable5);
        processSubcriptionResult(buf);
        ASSERT(buf.eof());
    }

    {
        // subscribe to list of vehicle ids
        uint32_t beginTime = 0;
        uint32_t endTime = 0x7FFFFFFF;
        std::string objectId = "";
        uint8_t variableNumber = 1;
        uint8_t variable1 = ID_LIST;
        aodvTraCIBuffer buf = queryaodvTraCI(CMD_SUBSCRIBE_VEHICLE_VARIABLE,
                aodvTraCIBuffer() << beginTime << endTime << objectId << variableNumber << variable1);
        processSubcriptionResult(buf);
        ASSERT(buf.eof());
    }

}

void aodvTraCIScenarioManager::finish()
{
    if (executeOneTimestepTrigger->isScheduled())
    {
        cancelEvent(executeOneTimestepTrigger);
        delete executeOneTimestepTrigger;
        executeOneTimestepTrigger = 0;
    }
    if (socketPtr)
    {
        closesocket(MYSOCKET);
        delete &MYSOCKET;
        socketPtr = 0;
    }
    while (hosts.begin() != hosts.end())
    {
        deleteModule(hosts.begin()->first);
    }
}

void aodvTraCIScenarioManager::handleMessage(cMessage *msg)
{
    if (msg->isSelfMessage())
    {
        handleSelfMsg(msg);
        return;
    }
    error("aodvTraCIScenarioManager doesn't handle messages from other modules");
}

void aodvTraCIScenarioManager::handleSelfMsg(cMessage *msg)
{
    if (msg == connectAndStartTrigger)
    {
        connect();
        init_traci();
        return;
    }
    if (msg == executeOneTimestepTrigger)
    {
        executeOneTimestep();
        return;
    }
    error("aodvTraCIScenarioManager received unknown self-message");
}

std::pair<uint32_t, std::string> aodvTraCIScenarioManager::commandGetVersion()
{
    bool success = false;
    aodvTraCIBuffer buf = queryaodvTraCIOptional(CMD_GETVERSION, aodvTraCIBuffer(), success);

    if (!success)
    {
        ASSERT(buf.eof());
        return std::pair<uint32_t, std::string>(0, "(unknown)");
    }

    uint8_t cmdLength;
    buf >> cmdLength;
    uint8_t commandResp;
    buf >> commandResp;
    ASSERT(commandResp == CMD_GETVERSION);
    uint32_t apiVersion;
    buf >> apiVersion;
    std::string serverVersion;
    buf >> serverVersion;
    ASSERT(buf.eof());

    return std::pair<uint32_t, std::string>(apiVersion, serverVersion);
}

void aodvTraCIScenarioManager::commandSetSpeedMode(std::string nodeId, int32_t bitset)
{
    uint8_t variableId = VAR_SPEEDSETMODE;
    uint8_t variableType = TYPE_INTEGER;
    aodvTraCIBuffer buf = queryaodvTraCI(CMD_SET_VEHICLE_VARIABLE,
            aodvTraCIBuffer() << variableId << nodeId << variableType << bitset);
    ASSERT(buf.eof());
}

void aodvTraCIScenarioManager::commandSetSpeed(std::string nodeId, double speed)
{
    uint8_t variableId = VAR_SPEED;
    uint8_t variableType = TYPE_DOUBLE;
    aodvTraCIBuffer buf = queryaodvTraCI(CMD_SET_VEHICLE_VARIABLE,
            aodvTraCIBuffer() << variableId << nodeId << variableType << speed);
    ASSERT(buf.eof());
}

void aodvTraCIScenarioManager::commandNewRoute(std::string nodeId, std::string roadId)
{
    uint8_t variableId = LANE_EDGE_ID;
    uint8_t variableType = TYPE_STRING;
    aodvTraCIBuffer buf = queryaodvTraCI(CMD_SET_VEHICLE_VARIABLE,
            aodvTraCIBuffer() << variableId << nodeId << variableType << roadId);
    ASSERT(buf.eof());
}

void aodvTraCIScenarioManager::commandSetVehicleParking(std::string nodeId)
{
    uint8_t variableId = REMOVE;
    uint8_t variableType = TYPE_BYTE;
    uint8_t value = REMOVE_PARKING;
    aodvTraCIBuffer buf = queryaodvTraCI(CMD_SET_VEHICLE_VARIABLE,
            aodvTraCIBuffer() << variableId << nodeId << variableType << value);
    ASSERT(buf.eof());
}

std::string aodvTraCIScenarioManager::commandGetEdgeId(std::string nodeId)
{
    return genericGetString(CMD_GET_VEHICLE_VARIABLE, nodeId, VAR_ROAD_ID,
    RESPONSE_GET_VEHICLE_VARIABLE);
}

std::string aodvTraCIScenarioManager::commandGetCurrentEdgeOnRoute(std::string nodeId)
{
    return genericGetString(CMD_GET_VEHICLE_VARIABLE, nodeId, LANE_EDGE_ID,
    RESPONSE_GET_VEHICLE_VARIABLE);
}

std::string aodvTraCIScenarioManager::commandGetLaneId(std::string nodeId)
{
    return genericGetString(CMD_GET_VEHICLE_VARIABLE, nodeId, VAR_LANE_ID,
    RESPONSE_GET_VEHICLE_VARIABLE);
}

double aodvTraCIScenarioManager::commandGetLanePosition(std::string nodeId)
{
    return genericGetDouble(CMD_GET_VEHICLE_VARIABLE, nodeId, VAR_LANEPOSITION,
    RESPONSE_GET_VEHICLE_VARIABLE);
}

std::list<std::string> aodvTraCIScenarioManager::commandGetPlannedEdgeIds(std::string nodeId)
{
    return genericGetStringList(CMD_GET_VEHICLE_VARIABLE, nodeId, VAR_EDGES,
    RESPONSE_GET_VEHICLE_VARIABLE);
}

std::string aodvTraCIScenarioManager::commandGetRouteId(std::string nodeId)
{
    return genericGetString(CMD_GET_VEHICLE_VARIABLE, nodeId, VAR_ROUTE_ID,
    RESPONSE_GET_VEHICLE_VARIABLE);
}

std::list<std::string> aodvTraCIScenarioManager::commandGetRouteEdgeIds(std::string routeId)
{
    return genericGetStringList(CMD_GET_ROUTE_VARIABLE, routeId, VAR_EDGES,
    RESPONSE_GET_ROUTE_VARIABLE);
}

void aodvTraCIScenarioManager::commandChangeRoute(std::string nodeId, std::string roadId, double travelTime)
{
    if (travelTime >= 0)
    {
        uint8_t variableId = VAR_EDGE_TRAVELTIME;
        uint8_t variableType = TYPE_COMPOUND;
        int32_t count = 2;
        uint8_t edgeIdT = TYPE_STRING;
        std::string edgeId = roadId;
        uint8_t newTimeT = TYPE_DOUBLE;
        double newTime = travelTime;
        aodvTraCIBuffer buf = queryaodvTraCI(CMD_SET_VEHICLE_VARIABLE,
                aodvTraCIBuffer() << variableId << nodeId << variableType << count << edgeIdT << edgeId << newTimeT
                        << newTime);
        ASSERT(buf.eof());
    }
    else
    {
        uint8_t variableId = VAR_EDGE_TRAVELTIME;
        uint8_t variableType = TYPE_COMPOUND;
        int32_t count = 1;
        uint8_t edgeIdT = TYPE_STRING;
        std::string edgeId = roadId;
        aodvTraCIBuffer buf = queryaodvTraCI(CMD_SET_VEHICLE_VARIABLE,
                aodvTraCIBuffer() << variableId << nodeId << variableType << count << edgeIdT << edgeId);
        ASSERT(buf.eof());
    }
    {
        uint8_t variableId = CMD_REROUTE_TRAVELTIME;
        uint8_t variableType = TYPE_COMPOUND;
        int32_t count = 0;
        aodvTraCIBuffer buf = queryaodvTraCI(CMD_SET_VEHICLE_VARIABLE,
                aodvTraCIBuffer() << variableId << nodeId << variableType << count);
        ASSERT(buf.eof());
    }
}

double aodvTraCIScenarioManager::commandDistanceRequest(Coord position1, Coord position2, bool returnDrivingDistance)
{
    uint8_t variable = DISTANCE_REQUEST;
    std::string simId = "sim0";
    uint8_t variableType = TYPE_COMPOUND;
    int32_t count = 3;
    aodvTraCICoord p1 = omnet2aodvTraCI(position1);
    aodvTraCICoord p2 = omnet2aodvTraCI(position2);
    uint8_t dType = static_cast<uint8_t>(returnDrivingDistance ? REQUEST_DRIVINGDIST : REQUEST_AIRDIST);

    // query road network boundaries
    aodvTraCIBuffer buf = queryaodvTraCI(CMD_GET_SIM_VARIABLE,
            aodvTraCIBuffer() << variable << simId << variableType << count << p1 << p2 << dType);
    uint8_t cmdLength_resp;
    buf >> cmdLength_resp;
    uint8_t commandId_resp;
    buf >> commandId_resp;
    ASSERT(commandId_resp == RESPONSE_GET_SIM_VARIABLE);
    uint8_t variableId_resp;
    buf >> variableId_resp;
    ASSERT(variableId_resp == variable);
    std::string simId_resp;
    buf >> simId_resp;
    ASSERT(simId_resp == simId);
    uint8_t typeId_resp;
    buf >> typeId_resp;
    ASSERT(typeId_resp == TYPE_DOUBLE);
    double distance;
    buf >> distance;

    ASSERT(buf.eof());

    return distance;
}

void aodvTraCIScenarioManager::commandStopNode(std::string nodeId, std::string roadId, double pos, uint8_t laneid,
        double radius, double waittime)
{
    uint8_t variableId = CMD_STOP;
    uint8_t variableType = TYPE_COMPOUND;
    int32_t count = 4;
    uint8_t edgeIdT = TYPE_STRING;
    std::string edgeId = roadId;
    uint8_t stopPosT = TYPE_DOUBLE;
    double stopPos = pos;
    uint8_t stopLaneT = TYPE_BYTE;
    uint8_t stopLane = laneid;
    uint8_t durationT = TYPE_INTEGER;
    uint32_t duration = waittime * 1000;

    aodvTraCIBuffer buf = queryaodvTraCI(CMD_SET_VEHICLE_VARIABLE,
            aodvTraCIBuffer() << variableId << nodeId << variableType << count << edgeIdT << edgeId << stopPosT << stopPos
                    << stopLaneT << stopLane << durationT << duration);
    ASSERT(buf.eof());
}

void aodvTraCIScenarioManager::commandSetTrafficLightProgram(std::string trafficLightId, std::string program)
{
    aodvTraCIBuffer buf = queryaodvTraCI(CMD_SET_TL_VARIABLE,
            aodvTraCIBuffer() << static_cast<uint8_t>(TL_PROGRAM) << trafficLightId << static_cast<uint8_t>(TYPE_STRING)
                    << program);
    ASSERT(buf.eof());
}

void aodvTraCIScenarioManager::commandSetTrafficLightPhaseIndex(std::string trafficLightId, int32_t index)
{
    aodvTraCIBuffer buf = queryaodvTraCI(CMD_SET_TL_VARIABLE,
            aodvTraCIBuffer() << static_cast<uint8_t>(TL_PHASE_INDEX) << trafficLightId
                    << static_cast<uint8_t>(TYPE_INTEGER) << index);
    ASSERT(buf.eof());
}

std::list<std::string> aodvTraCIScenarioManager::commandGetPolygonIds()
{
    return genericGetStringList(CMD_GET_POLYGON_VARIABLE, "", ID_LIST, RESPONSE_GET_POLYGON_VARIABLE);
}

std::string aodvTraCIScenarioManager::commandGetPolygonTypeId(std::string polyId)
{
    return genericGetString(CMD_GET_POLYGON_VARIABLE, polyId, VAR_TYPE, RESPONSE_GET_POLYGON_VARIABLE);
}

std::list<Coord> aodvTraCIScenarioManager::commandGetPolygonShape(std::string polyId)
{
    return genericGetCoordList(CMD_GET_POLYGON_VARIABLE, polyId, VAR_SHAPE, RESPONSE_GET_POLYGON_VARIABLE);
}

void aodvTraCIScenarioManager::commandSetPolygonShape(std::string polyId, std::list<Coord> points)
{
    aodvTraCIBuffer buf;
    uint8_t count = static_cast<uint8_t>(points.size());
    buf << static_cast<uint8_t>(VAR_SHAPE) << polyId << static_cast<uint8_t>(TYPE_POLYGON) << count;
    for (std::list<Coord>::const_iterator i = points.begin(); i != points.end(); ++i)
    {
        aodvTraCICoord pos = omnet2aodvTraCI(*i);
        buf << static_cast<double>(pos.x) << static_cast<double>(pos.y);
    }
    aodvTraCIBuffer obuf = queryaodvTraCI(CMD_SET_POLYGON_VARIABLE, buf);
    ASSERT(obuf.eof());
}

void aodvTraCIScenarioManager::commandAddPolygon(std::string polyId, std::string polyType, const vanetTraCIColor& color,
        bool filled, int32_t layer, std::list<Coord> points)
{
    aodvTraCIBuffer p;

    p << static_cast<uint8_t>(ADD) << polyId;
    p << static_cast<uint8_t>(TYPE_COMPOUND) << static_cast<int32_t>(5);
    p << static_cast<uint8_t>(TYPE_STRING) << polyType;
    p << static_cast<uint8_t>(TYPE_COLOR) << color.red << color.green << color.blue << color.alpha;
    p << static_cast<uint8_t>(TYPE_UBYTE) << static_cast<uint8_t>(filled);
    p << static_cast<uint8_t>(TYPE_INTEGER) << layer;
    p << static_cast<uint8_t>(TYPE_POLYGON) << static_cast<uint8_t>(points.size());
    for (std::list<Coord>::const_iterator i = points.begin(); i != points.end(); ++i)
    {
        aodvTraCICoord pos = omnet2aodvTraCI(*i);
        p << static_cast<double>(pos.x) << static_cast<double>(pos.y);
    }

    aodvTraCIBuffer buf = queryaodvTraCI(CMD_SET_POLYGON_VARIABLE, p);
    ASSERT(buf.eof());
}

void aodvTraCIScenarioManager::commandRemovePolygon(std::string polyId, int32_t layer)
{
    aodvTraCIBuffer p;

    p << static_cast<uint8_t>(REMOVE) << polyId;
    p << static_cast<uint8_t>(TYPE_INTEGER) << layer;

    aodvTraCIBuffer buf = queryaodvTraCI(CMD_SET_POLYGON_VARIABLE, p);
    ASSERT(buf.eof());
}

void aodvTraCIScenarioManager::commandAddPoi(std::string poiId, std::string poiType, const vanetTraCIColor& color, int32_t layer,
        Coord pos)
{
    aodvTraCIBuffer p;

    aodvTraCICoord aodvTraCIPos = omnet2aodvTraCI(pos);
    p << static_cast<uint8_t>(ADD) << poiId;
    p << static_cast<uint8_t>(TYPE_COMPOUND) << static_cast<int32_t>(4);
    p << static_cast<uint8_t>(TYPE_STRING) << poiType;
    p << static_cast<uint8_t>(TYPE_COLOR) << color.red << color.green << color.blue << color.alpha;
    p << static_cast<uint8_t>(TYPE_INTEGER) << layer;
    p << static_cast<uint8_t>(POSITION_2D) << aodvTraCIPos.x << aodvTraCIPos.y;

    aodvTraCIBuffer buf = queryaodvTraCI(CMD_SET_POI_VARIABLE, p);
    ASSERT(buf.eof());
}

void aodvTraCIScenarioManager::commandRemovePoi(std::string poiId, int32_t layer)
{
    aodvTraCIBuffer p;

    p << static_cast<uint8_t>(REMOVE) << poiId;
    p << static_cast<uint8_t>(TYPE_INTEGER) << layer;

    aodvTraCIBuffer buf = queryaodvTraCI(CMD_SET_POI_VARIABLE, p);
    ASSERT(buf.eof());
}

std::list<std::string> aodvTraCIScenarioManager::commandGetLaneIds()
{
    return genericGetStringList(CMD_GET_LANE_VARIABLE, "", ID_LIST, RESPONSE_GET_LANE_VARIABLE);
}

std::list<Coord> aodvTraCIScenarioManager::commandGetLaneShape(std::string laneId)
{
    return genericGetCoordList(CMD_GET_LANE_VARIABLE, laneId, VAR_SHAPE, RESPONSE_GET_LANE_VARIABLE);
}

std::string aodvTraCIScenarioManager::commandGetLaneEdgeId(std::string laneId)
{
    return genericGetString(CMD_GET_LANE_VARIABLE, laneId, LANE_EDGE_ID, RESPONSE_GET_LANE_VARIABLE);
}

double aodvTraCIScenarioManager::commandGetLaneLength(std::string laneId)
{
    return genericGetDouble(CMD_GET_LANE_VARIABLE, laneId, VAR_LENGTH, RESPONSE_GET_LANE_VARIABLE);
}

double aodvTraCIScenarioManager::commandGetLaneMaxSpeed(std::string laneId)
{
    return genericGetDouble(CMD_GET_LANE_VARIABLE, laneId, VAR_MAXSPEED, RESPONSE_GET_LANE_VARIABLE);
}

double aodvTraCIScenarioManager::commandGetLaneMeanSpeed(std::string laneId)
{
    return genericGetDouble(CMD_GET_LANE_VARIABLE, laneId, LAST_STEP_MEAN_SPEED, RESPONSE_GET_LANE_VARIABLE);
}

std::list<std::string> aodvTraCIScenarioManager::commandGetJunctionIds()
{
    return genericGetStringList(CMD_GET_JUNCTION_VARIABLE, "", ID_LIST, RESPONSE_GET_JUNCTION_VARIABLE);
}

Coord aodvTraCIScenarioManager::commandGetJunctionPosition(std::string junctionId)
{
    return genericGetCoord(CMD_GET_JUNCTION_VARIABLE, junctionId, VAR_POSITION, RESPONSE_GET_JUNCTION_VARIABLE);
}

bool aodvTraCIScenarioManager::commandAddVehicle(std::string vehicleId, std::string vehicleTypeId, std::string routeId,
        simtime_t emitTime_st, double emitPosition, double emitSpeed, int8_t emitLane)
{
    bool success = false;

    uint8_t variableId = ADD;
    uint8_t variableType = TYPE_COMPOUND;
    int32_t count = 6;
    int32_t emitTime = (emitTime_st < 0) ? (-1) : (floor(emitTime_st.dbl() * 1000));
    aodvTraCIBuffer buf = queryaodvTraCIOptional(CMD_SET_VEHICLE_VARIABLE,
            aodvTraCIBuffer() << variableId << vehicleId << variableType << count << (uint8_t) TYPE_STRING << vehicleTypeId
                    << (uint8_t) TYPE_STRING << routeId << (uint8_t) TYPE_INTEGER << emitTime << (uint8_t) TYPE_DOUBLE
                    << emitPosition << (uint8_t) TYPE_DOUBLE << emitSpeed << (uint8_t) TYPE_BYTE << emitLane, success);
    ASSERT(buf.eof());

    return success;
}

// name: host;Car;i=vehicle.gif
void aodvTraCIScenarioManager::addModule(std::string nodeId, std::string type, std::string name, std::string displayString,
        const Coord& position, std::string road_id, double speed, double acceleration, double angle)
{
    if (hosts.find(nodeId) != hosts.end())
        error("tried adding duplicate module");

    double option1 = hosts.size() / (hosts.size() + unEquippedHosts.size() + 1.0);
    double option2 = (hosts.size() + 1) / (hosts.size() + unEquippedHosts.size() + 1.0);

    if (fabs(option1 - penetrationRate) < fabs(option2 - penetrationRate))
    {
        unEquippedHosts.insert(nodeId);
        return;
    }

    int32_t nodeVectorIndex = nextNodeVectorIndex++;

    cModule* parentmod = getParentModule();
    if (!parentmod)
        error("Parent Module not found");

    cModuleType* nodeType = cModuleType::get(type.c_str());
    if (!nodeType)
        error("Module Type \"%s\" not found", type.c_str());

    //TODO: this trashes the vectsize member of the cModule, although nobody seems to use it
    cModule* mod = nodeType->create(name.c_str(), parentmod, nodeVectorIndex, nodeVectorIndex);
    mod->finalizeParameters();
    mod->getDisplayString().parse(displayString.c_str());
    mod->buildInside();
    mod->scheduleStart(simTime() + updateInterval);

    // pre-initialize aodvTraCIMobility
    for (cModule::SubmoduleIterator iter(mod); !iter.end(); iter++)
    {
        cModule* submod = iter();
        aodvTraCIMobility* mm = dynamic_cast<aodvTraCIMobility*>(submod);
        if (!mm)
            continue;
        mm->preInitialize(nodeId, position, road_id, speed, acceleration, angle);
    }

    mod->callInitialize();
    hosts[nodeId] = mod;

    // post-initialize aodvTraCIMobility
    for (cModule::SubmoduleIterator iter(mod); !iter.end(); iter++)
    {
        cModule* submod = iter();
        aodvTraCIMobility* mm = dynamic_cast<aodvTraCIMobility*>(submod);
        if (!mm)
            continue;
        mm->move();
    }
}

cModule* aodvTraCIScenarioManager::getManagedModule(std::string nodeId)
{
    if (hosts.find(nodeId) == hosts.end())
        return 0;
    return hosts[nodeId];
}

bool aodvTraCIScenarioManager::isModuleUnequipped(std::string nodeId)
{
    if (unEquippedHosts.find(nodeId) == unEquippedHosts.end())
        return false;
    return true;
}

void aodvTraCIScenarioManager::deleteModule(std::string nodeId)
{
    cModule* mod = getManagedModule(nodeId);
    if (!mod)
        error("no vehicle with Id \"%s\" found", nodeId.c_str());

    if (!mod->getSubmodule("notificationBoard"))
        error("host has no submodule notificationBoard");

    hosts.erase(nodeId);
    mod->callFinish();
    mod->deleteModule();
}

bool aodvTraCIScenarioManager::isInRegionOfInterest(const aodvTraCICoord& position, std::string road_id, double speed,
        double angle)
{
    if ((roiRoads.size() == 0) && (roiRects.size() == 0))
        return true;
    if (roiRoads.size() > 0)
    {
        for (std::list<std::string>::const_iterator i = roiRoads.begin(); i != roiRoads.end(); ++i)
        {
            if (road_id == *i)
                return true;
        }
    }
    if (roiRects.size() > 0)
    {
        for (std::list<std::pair<aodvTraCICoord, aodvTraCICoord> >::const_iterator i = roiRects.begin(); i != roiRects.end();
                ++i)
        {
            if ((position.x >= i->first.x) && (position.y >= i->first.y) && (position.x <= i->second.x)
                    && (position.y <= i->second.y))
                return true;
        }
    }
    return false;
}

uint32_t aodvTraCIScenarioManager::getCurrentTimeMs()
{
    return static_cast<uint32_t>(round(simTime().dbl() * 1000));
}

void aodvTraCIScenarioManager::executeOneTimestep()
{

    MYDEBUG << "Triggering aodvTraCI server simulation advance to t=" << simTime() << endl;

    uint32_t targetTime = getCurrentTimeMs();

    if (targetTime > round(connectAt.dbl() * 1000))
    {
        aodvTraCIBuffer buf = queryaodvTraCI(CMD_SIMSTEP2, aodvTraCIBuffer() << targetTime);

        uint32_t count;
        buf >> count;
        MYDEBUG << "Getting " << count << " subscription results" << endl;
        for (uint32_t i = 0; i < count; ++i)
        {
            processSubcriptionResult(buf);
        }
    }

    if (!autoShutdownTriggered)
        scheduleAt(simTime() + updateInterval, executeOneTimestepTrigger);

}

std::string aodvTraCIScenarioManager::genericGetString(uint8_t commandId, std::string objectId, uint8_t variableId,
        uint8_t responseId)
{

    uint8_t resultTypeId = TYPE_STRING;
    std::string res;

    aodvTraCIBuffer buf = queryaodvTraCI(commandId, aodvTraCIBuffer() << variableId << objectId);

    uint8_t cmdLength;
    buf >> cmdLength;
    if (cmdLength == 0)
    {
        uint32_t cmdLengthX;
        buf >> cmdLengthX;
    }
    uint8_t commandId_r;
    buf >> commandId_r;
    ASSERT(commandId_r == responseId);
    uint8_t varId;
    buf >> varId;
    ASSERT(varId == variableId);
    std::string objectId_r;
    buf >> objectId_r;
    ASSERT(objectId_r == objectId);
    uint8_t resType_r;
    buf >> resType_r;
    ASSERT(resType_r == resultTypeId);
    buf >> res;

    ASSERT(buf.eof());

    return res;
}

Coord aodvTraCIScenarioManager::genericGetCoord(uint8_t commandId, std::string objectId, uint8_t variableId,
        uint8_t responseId)
{

    uint8_t resultTypeId = POSITION_2D;
    double x;
    double y;

    aodvTraCIBuffer buf = queryaodvTraCI(commandId, aodvTraCIBuffer() << variableId << objectId);

    uint8_t cmdLength;
    buf >> cmdLength;
    if (cmdLength == 0)
    {
        uint32_t cmdLengthX;
        buf >> cmdLengthX;
    }
    uint8_t commandId_r;
    buf >> commandId_r;
    ASSERT(commandId_r == responseId);
    uint8_t varId;
    buf >> varId;
    ASSERT(varId == variableId);
    std::string objectId_r;
    buf >> objectId_r;
    ASSERT(objectId_r == objectId);
    uint8_t resType_r;
    buf >> resType_r;
    ASSERT(resType_r == resultTypeId);
    buf >> x;
    buf >> y;

    ASSERT(buf.eof());

    return aodvTraCI2omnet(aodvTraCICoord(x, y));
}

double aodvTraCIScenarioManager::genericGetDouble(uint8_t commandId, std::string objectId, uint8_t variableId,
        uint8_t responseId)
{

    uint8_t resultTypeId = TYPE_DOUBLE;
    double res;

    aodvTraCIBuffer buf = queryaodvTraCI(commandId, aodvTraCIBuffer() << variableId << objectId);

    uint8_t cmdLength;
    buf >> cmdLength;
    if (cmdLength == 0)
    {
        uint32_t cmdLengthX;
        buf >> cmdLengthX;
    }
    uint8_t commandId_r;
    buf >> commandId_r;
    ASSERT(commandId_r == responseId);
    uint8_t varId;
    buf >> varId;
    ASSERT(varId == variableId);
    std::string objectId_r;
    buf >> objectId_r;
    ASSERT(objectId_r == objectId);
    uint8_t resType_r;
    buf >> resType_r;
    ASSERT(resType_r == resultTypeId);
    buf >> res;

    ASSERT(buf.eof());

    return res;
}

std::list<std::string> aodvTraCIScenarioManager::genericGetStringList(uint8_t commandId, std::string objectId,
        uint8_t variableId, uint8_t responseId)
{

    uint8_t resultTypeId = TYPE_STRINGLIST;
    std::list<std::string> res;

    aodvTraCIBuffer buf = queryaodvTraCI(commandId, aodvTraCIBuffer() << variableId << objectId);

    uint8_t cmdLength;
    buf >> cmdLength;
    if (cmdLength == 0)
    {
        uint32_t cmdLengthX;
        buf >> cmdLengthX;
    }
    uint8_t commandId_r;
    buf >> commandId_r;
    ASSERT(commandId_r == responseId);
    uint8_t varId;
    buf >> varId;
    ASSERT(varId == variableId);
    std::string objectId_r;
    buf >> objectId_r;
    ASSERT(objectId_r == objectId);
    uint8_t resType_r;
    buf >> resType_r;
    ASSERT(resType_r == resultTypeId);
    uint32_t count;
    buf >> count;
    for (uint32_t i = 0; i < count; i++)
    {
        std::string id;
        buf >> id;
        res.push_back(id);
    }

    ASSERT(buf.eof());

    return res;
}

std::list<Coord> aodvTraCIScenarioManager::genericGetCoordList(uint8_t commandId, std::string objectId, uint8_t variableId,
        uint8_t responseId)
{

    uint8_t resultTypeId = TYPE_POLYGON;
    std::list<Coord> res;

    aodvTraCIBuffer buf = queryaodvTraCI(commandId, aodvTraCIBuffer() << variableId << objectId);

    uint8_t cmdLength;
    buf >> cmdLength;
    if (cmdLength == 0)
    {
        uint32_t cmdLengthX;
        buf >> cmdLengthX;
    }
    uint8_t commandId_r;
    buf >> commandId_r;
    ASSERT(commandId_r == responseId);
    uint8_t varId;
    buf >> varId;
    ASSERT(varId == variableId);
    std::string objectId_r;
    buf >> objectId_r;
    ASSERT(objectId_r == objectId);
    uint8_t resType_r;
    buf >> resType_r;
    ASSERT(resType_r == resultTypeId);
    uint8_t count;
    buf >> count;
    for (uint32_t i = 0; i < count; i++)
    {
        double x;
        buf >> x;
        double y;
        buf >> y;
        Coord pos = aodvTraCI2omnet(aodvTraCICoord(x, y));
        res.push_back(pos);
    }

    ASSERT(buf.eof());

    return res;
}

Coord aodvTraCIScenarioManager::aodvTraCI2omnet(aodvTraCICoord coord) const
{
    return Coord(coord.x - netbounds1.x + margin, (netbounds2.y - netbounds1.y) - (coord.y - netbounds1.y) + margin);
}

aodvTraCIScenarioManager::aodvTraCICoord aodvTraCIScenarioManager::omnet2aodvTraCI(Coord coord) const
{
    return aodvTraCICoord(coord.x + netbounds1.x - margin,
            (netbounds2.y - netbounds1.y) - (coord.y - netbounds1.y) + margin);
}

double aodvTraCIScenarioManager::aodvTraCI2omnetAngle(double angle) const
{

    // rotate angle so 0 is east (in aodvTraCI's angle interpretation 0 is south)
    angle = angle - 90;

    // convert to rad
    angle = angle * M_PI / 180.0;

    // normalize angle to -M_PI <= angle < M_PI
    while (angle < -M_PI)
        angle += 2 * M_PI;
    while (angle >= M_PI)
        angle -= 2 * M_PI;

    return angle;
}

double aodvTraCIScenarioManager::omnet2aodvTraCIAngle(double angle) const
{

    // convert to degrees
    angle = angle * 180 / M_PI;

    // rotate angle so 0 is south (in OMNeT++'s angle interpretation 0 is east)
    angle = angle + 90;

    // normalize angle to -180 <= angle < 180
    while (angle < -180)
        angle += 360;
    while (angle >= 180)
        angle -= 360;

    return angle;
}

void aodvTraCIScenarioManager::subscribeToVehicleVariables(std::string vehicleId)
{
    // subscribe to some attributes of the vehicle
    uint32_t beginTime = 0;
    uint32_t endTime = 0x7FFFFFFF;
    std::string objectId = vehicleId;
    uint8_t variableNumber = 5;
    uint8_t variable1 = VAR_POSITION;
    uint8_t variable2 = VAR_ROAD_ID;
    uint8_t variable3 = VAR_SPEED;
    uint8_t variable4 = VAR_ANGLE;
    uint8_t variable5 = VAR_SIGNALS;

    aodvTraCIBuffer buf = queryaodvTraCI(CMD_SUBSCRIBE_VEHICLE_VARIABLE,
            aodvTraCIBuffer() << beginTime << endTime << objectId << variableNumber << variable1 << variable2 << variable3
                    << variable4 << variable5);
    processSubcriptionResult(buf);
    ASSERT(buf.eof());
}

void aodvTraCIScenarioManager::unsubscribeFromVehicleVariables(std::string vehicleId)
{
    // subscribe to some attributes of the vehicle
    uint32_t beginTime = 0;
    uint32_t endTime = 0x7FFFFFFF;
    std::string objectId = vehicleId;
    uint8_t variableNumber = 0;

    aodvTraCIBuffer buf = queryaodvTraCI(CMD_SUBSCRIBE_VEHICLE_VARIABLE,
            aodvTraCIBuffer() << beginTime << endTime << objectId << variableNumber);
    ASSERT(buf.eof());
}

void aodvTraCIScenarioManager::processSimSubscription(std::string objectId, aodvTraCIBuffer& buf)
{
    uint8_t variableNumber_resp;
    buf >> variableNumber_resp;
    for (uint8_t j = 0; j < variableNumber_resp; ++j)
    {
        uint8_t variable1_resp;
        buf >> variable1_resp;
        uint8_t isokay;
        buf >> isokay;
        if (isokay != RTYPE_OK)
        {
            uint8_t varType;
            buf >> varType;
            ASSERT(varType == TYPE_STRING);
            std::string description;
            buf >> description;
            if (isokay == RTYPE_NOTIMPLEMENTED)
                error(
                        "aodvTraCI server reported subscribing to variable 0x%2x not implemented (\"%s\"). Might need newer version.",
                        variable1_resp, description.c_str());
            error("aodvTraCI server reported error subscribing to variable 0x%2x (\"%s\").", variable1_resp,
                    description.c_str());
        }

        if (variable1_resp == VAR_DEPARTED_VEHICLES_IDS)
        {
            uint8_t varType;
            buf >> varType;
            ASSERT(varType == TYPE_STRINGLIST);
            uint32_t count;
            buf >> count;
            MYDEBUG << "aodvTraCI reports " << count << " departed vehicles." << endl;
            for (uint32_t i = 0; i < count; ++i)
            {
                std::string idstring;
                buf >> idstring;
                // adding modules is handled on the fly when entering/leaving the ROI
            }

            activeVehicleCount += count;

        }
        else if (variable1_resp == VAR_ARRIVED_VEHICLES_IDS)
        {
            uint8_t varType;
            buf >> varType;
            ASSERT(varType == TYPE_STRINGLIST);
            uint32_t count;
            buf >> count;
            MYDEBUG << "aodvTraCI reports " << count << " arrived vehicles." << endl;
            for (uint32_t i = 0; i < count; ++i)
            {
                std::string idstring;
                buf >> idstring;

                if (subscribedVehicles.find(idstring) != subscribedVehicles.end())
                {
                    subscribedVehicles.erase(idstring);
                    unsubscribeFromVehicleVariables(idstring);
                }

                // check if this object has been deleted already (e.g. because it was outside the ROI)
                cModule* mod = getManagedModule(idstring);
                if (mod)
                    deleteModule(idstring);

                if (unEquippedHosts.find(idstring) != unEquippedHosts.end())
                {
                    unEquippedHosts.erase(idstring);
                }

            }

            if ((count > 0) && (count >= activeVehicleCount) && autoShutdown)
                autoShutdownTriggered = true;
            activeVehicleCount -= count;

        }
        else if (variable1_resp == VAR_TELEPORT_STARTING_VEHICLES_IDS)
        {
            uint8_t varType;
            buf >> varType;
            ASSERT(varType == TYPE_STRINGLIST);
            uint32_t count;
            buf >> count;
            MYDEBUG << "aodvTraCI reports " << count << " vehicles starting to teleport." << endl;
            for (uint32_t i = 0; i < count; ++i)
            {
                std::string idstring;
                buf >> idstring;

                // check if this object has been deleted already (e.g. because it was outside the ROI)
                cModule* mod = getManagedModule(idstring);
                if (mod)
                    deleteModule(idstring);

                if (unEquippedHosts.find(idstring) != unEquippedHosts.end())
                {
                    unEquippedHosts.erase(idstring);
                }

            }

            activeVehicleCount -= count;

        }
        else if (variable1_resp == VAR_TELEPORT_ENDING_VEHICLES_IDS)
        {
            uint8_t varType;
            buf >> varType;
            ASSERT(varType == TYPE_STRINGLIST);
            uint32_t count;
            buf >> count;
            MYDEBUG << "aodvTraCI reports " << count << " vehicles ending teleport." << endl;
            for (uint32_t i = 0; i < count; ++i)
            {
                std::string idstring;
                buf >> idstring;
                // adding modules is handled on the fly when entering/leaving the ROI
            }

            activeVehicleCount += count;

        }
        else if (variable1_resp == VAR_TIME_STEP)
        {
            uint8_t varType;
            buf >> varType;
            ASSERT(varType == TYPE_INTEGER);
            uint32_t serverTimestep;
            buf >> serverTimestep;
            MYDEBUG << "aodvTraCI reports current time step as " << serverTimestep << "ms." << endl;
            uint32_t omnetTimestep = getCurrentTimeMs();
            ASSERT(omnetTimestep == serverTimestep);

        }
        else
        {
            error("Received unhandled sim subscription result");
        }
    }
}

void aodvTraCIScenarioManager::processVehicleSubscription(std::string objectId, aodvTraCIBuffer& buf)
{
    bool isSubscribed = (subscribedVehicles.find(objectId) != subscribedVehicles.end());
    double px;
    double py;
    std::string edge;
    double speed;
    double angle_aodvTraCI;
    int signals;
    int numRead = 0;

    uint8_t variableNumber_resp;
    buf >> variableNumber_resp;
    for (uint8_t j = 0; j < variableNumber_resp; ++j)
    {
        uint8_t variable1_resp;
        buf >> variable1_resp;
        uint8_t isokay;
        buf >> isokay;
        if (isokay != RTYPE_OK)
        {
            uint8_t varType;
            buf >> varType;
            ASSERT(varType == TYPE_STRING);
            std::string errormsg;
            buf >> errormsg;
            if (isSubscribed)
            {
                if (isokay == RTYPE_NOTIMPLEMENTED)
                    error(
                            "aodvTraCI server reported subscribing to vehicle variable 0x%2x not implemented (\"%s\"). Might need newer version.",
                            variable1_resp, errormsg.c_str());
                error("aodvTraCI server reported error subscribing to vehicle variable 0x%2x (\"%s\").", variable1_resp,
                        errormsg.c_str());
            }
        }
        else if (variable1_resp == ID_LIST)
        {
            uint8_t varType;
            buf >> varType;
            ASSERT(varType == TYPE_STRINGLIST);
            uint32_t count;
            buf >> count;
            MYDEBUG << "aodvTraCI reports " << count << " active vehicles." << endl;
            ASSERT(count == activeVehicleCount);
            std::set<std::string> drivingVehicles;
            for (uint32_t i = 0; i < count; ++i)
            {
                std::string idstring;
                buf >> idstring;
                drivingVehicles.insert(idstring);
            }

            // check for vehicles that need subscribing to
            std::set<std::string> needSubscribe;
            std::set_difference(drivingVehicles.begin(), drivingVehicles.end(), subscribedVehicles.begin(),
                    subscribedVehicles.end(), std::inserter(needSubscribe, needSubscribe.begin()));
            for (std::set<std::string>::const_iterator i = needSubscribe.begin(); i != needSubscribe.end(); ++i)
            {
                subscribedVehicles.insert(*i);
                subscribeToVehicleVariables(*i);
            }

            // check for vehicles that need unsubscribing from
            std::set<std::string> needUnsubscribe;
            std::set_difference(subscribedVehicles.begin(), subscribedVehicles.end(), drivingVehicles.begin(),
                    drivingVehicles.end(), std::inserter(needUnsubscribe, needUnsubscribe.begin()));
            for (std::set<std::string>::const_iterator i = needUnsubscribe.begin(); i != needUnsubscribe.end(); ++i)
            {
                subscribedVehicles.erase(*i);
                unsubscribeFromVehicleVariables(*i);
            }

        }
        else if (variable1_resp == VAR_POSITION)
        {
            uint8_t varType;
            buf >> varType;
            ASSERT(varType == POSITION_2D);
            buf >> px;
            buf >> py;
            numRead++;
        }
        else if (variable1_resp == VAR_ROAD_ID)
        {
            uint8_t varType;
            buf >> varType;
            ASSERT(varType == TYPE_STRING);
            buf >> edge;
            numRead++;
        }
        else if (variable1_resp == VAR_SPEED)
        {
            uint8_t varType;
            buf >> varType;
            ASSERT(varType == TYPE_DOUBLE);
            buf >> speed;
            numRead++;
        }
        else if (variable1_resp == VAR_ANGLE)
        {
            uint8_t varType;
            buf >> varType;
            ASSERT(varType == TYPE_DOUBLE);
            buf >> angle_aodvTraCI;
            numRead++;
        }
        else if (variable1_resp == VAR_SIGNALS)
        {
            uint8_t varType;
            buf >> varType;
            ASSERT(varType == TYPE_INTEGER);
            buf >> signals;
            numRead++;
        }
        else
        {
            error("Received unhandled vehicle subscription result");
        }
    }

    // bail out if we didn't want to receive these subscription results
    if (!isSubscribed)
        return;

    // make sure we got updates for all attributes
    if (numRead != 5)
        return;

    Coord p = aodvTraCI2omnet(aodvTraCICoord(px, py));
    if ((p.x < 0) || (p.y < 0))
        error("received bad node position (%.2f, %.2f), translated to (%.2f, %.2f)", px, py, p.x, p.y);

    double angle = aodvTraCI2omnetAngle(angle_aodvTraCI);

    cModule* mod = getManagedModule(objectId);

    // is it in the ROI?
    bool inRoi = isInRegionOfInterest(aodvTraCICoord(px, py), edge, speed, angle);
    if (!inRoi)
    {
        if (mod)
        {
            deleteModule(objectId);
            MYDEBUG << "Vehicle #" << objectId << " left region of interest" << endl;
        }
        else if (unEquippedHosts.find(objectId) != unEquippedHosts.end())
        {
            unEquippedHosts.erase(objectId);
            MYDEBUG << "Vehicle (unequipped) # " << objectId << " left region of interest" << endl;
        }
        return;
    }

    if (isModuleUnequipped(objectId))
    {
        return;
    }

    if (!mod)
    {
        // no such module - need to create
        addModule(objectId, moduleType, moduleName, moduleDisplayString, p, edge, speed, angle);
        MYDEBUG << "Added vehicle #" << objectId << endl;
    }
    else
    {
        // module existed - update position
        for (cModule::SubmoduleIterator iter(mod); !iter.end(); iter++)
        {
            cModule* submod = iter();
            aodvTraCIMobility* mm = dynamic_cast<aodvTraCIMobility*>(submod);
            if (!mm)
                continue;
            MYDEBUG << "module " << objectId << " moving to " << p.x << "," << p.y << endl;
            mm->nextPosition(p, edge, speed, angle);
        }
    }

}

void aodvTraCIScenarioManager::processSubcriptionResult(aodvTraCIBuffer& buf)
{
    uint8_t cmdLength_resp;
    buf >> cmdLength_resp;
    uint32_t cmdLengthExt_resp;
    buf >> cmdLengthExt_resp;
    uint8_t commandId_resp;
    buf >> commandId_resp;
    std::string objectId_resp;
    buf >> objectId_resp;

    if (commandId_resp == RESPONSE_SUBSCRIBE_VEHICLE_VARIABLE)
        processVehicleSubscription(objectId_resp, buf);
    else if (commandId_resp == RESPONSE_SUBSCRIBE_SIM_VARIABLE)
        processSimSubscription(objectId_resp, buf);
    else
    {
        error("Received unhandled subscription result");
    }
}

template<> void aodvTraCIScenarioManager::aodvTraCIBuffer::write(std::string inv)
{
    uint32_t length = inv.length();
    write<uint32_t>(length);
    for (size_t i = 0; i < length; ++i)
        write<char>(inv[i]);
}

template<> void aodvTraCIScenarioManager::aodvTraCIBuffer::write(aodvTraCICoord inv)
{
    write<uint8_t>(POSITION_2D);
    write<double>(inv.x);
    write<double>(inv.y);
}

template<> std::string aodvTraCIScenarioManager::aodvTraCIBuffer::read()
{
    uint32_t length = read<uint32_t>();
    if (length == 0)
        return std::string();
    char obuf[length + 1];

    for (size_t i = 0; i < length; ++i)
        read<char>(obuf[i]);
    obuf[length] = 0;

    return std::string(obuf, length);
}

template<> aodvTraCIScenarioManager::aodvTraCICoord aodvTraCIScenarioManager::aodvTraCIBuffer::read()
{
    uint8_t posType = read<uint8_t>();
    ASSERT(posType == POSITION_2D);

    aodvTraCICoord p;
    p.x = read<double>();
    p.y = read<double>();

    return p;
}

