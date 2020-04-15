#include "inet/common/ModuleAccess.h"
#include "inet/common/packet/Packet.h"
#include "inet/common/TagBase_m.h"
#include "inet/common/TimeTag_m.h"
#include "inet/networklayer/common/L3AddressResolver.h"
#include "inet/networklayer/common/L3AddressTag_m.h"
#include "inet/networklayer/ipv4/Ipv4Header_m.h"
#include "inet/common/ProtocolTag_m.h"
#include "inet/transportlayer/contract/udp/UdpControlInfo_m.h"

#include "inet/applications/base/ApplicationPacket_m.h"
#include "VeinsInetVanetRouting.h"
#include "vanetsim/tools/L3Tools.h"

using namespace inet;

Define_Module(VeinsInetVanetRouting);

VeinsInetVanetRouting::VeinsInetVanetRouting()
{
}

bool VeinsInetVanetRouting::startApplication()
{
    if ((getParentModule()->getIndex() % 5) == 0) {
        auto srcAddress = L3AddressResolver().addressOf(getModuleByPath(getParentModule()->getFullPath().c_str()), 27);
        destAddress = L3AddressResolver().addressOf(getModuleByPath("rsu[0]"),27);
        getParentModule()->getDisplayString().setTagArg("i", 1, "red"); //Coloring vehicles sending packets

        auto payload = makeShared<ApplicationPacket>();
        timestampPayload(payload);
        payload->setChunkLength(B(1000));
        payload->setSequenceNumber(numSent);
        payload->addTag<CreationTimeTag>()->setCreationTime(simTime());

        auto addressReq = payload->addTag<L3AddressReq>();
        addressReq->setSrcAddress(srcAddress);
        addressReq->setDestAddress(destAddress);

        auto networkProtocolHeader = makeShared<Ipv4Header>();
        networkProtocolHeader->setDestinationAddress(destAddress);
        networkProtocolHeader->setSourceAddress(srcAddress);

        auto packet = createPacket("tip");

        packet->insertAtBack(payload);
        packet->addTagIfAbsent<NetworkProtocolInd>()->setNetworkProtocolHeader(networkProtocolHeader);

        socket.sendTo(packet.release(), destAddress, portNumber);

        numSent++;
    }
    return true;
}

bool VeinsInetVanetRouting::stopApplication()
{
    return true;
}

VeinsInetVanetRouting::~VeinsInetVanetRouting()
{
}

void VeinsInetVanetRouting::processPacket(std::shared_ptr<inet::Packet> pk)
{
    auto payload = pk->peekAtFront<ApplicationPacket>();

    EV_INFO << "Received packet: " << payload << endl;

    getParentModule()->getDisplayString().setTagArg("i", 1, "green");

    numReceived++;
}
