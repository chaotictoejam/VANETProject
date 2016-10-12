/**
 ******************************************************
 * @file EthernetApplication.h
 * @brief Simple traffic generator.
 * It generates Etherapp requests and responses. Based in EtherAppCli and EtherAppSrv.
 *
 * @author Juan Luis Garrote Molinero
 * @version 1.0
 * @date Feb 2011
 *
 *
 ******************************************************/
#ifndef __INETVEINS_ETHERNETAPPLICATION_H
#define __INETVEINS_ETHERNETAPPLICATION_H

#include "inetveins/common/INETVEINSDefs.h"
#include "inetveins/linklayer/common/MACAddress.h"

namespace inetveins {

#define MAX_REPLY_CHUNK_SIZE    1497

/**
 * Ethernet application. Both, server and client side.
 */
class INETVEINS_API EthernetApplication : public cSimpleModule
{
  protected:
    // send parameters
    long seqNum = 0;
    cPar *reqLength = nullptr;
    cPar *respLength = nullptr;
    cPar *waitTime = nullptr;

    MACAddress destMACAddress;

    // Reception statistics
    long packetsSent = 0;
    long packetsReceived = 0;

    static simsignal_t sentPkSignal;
    static simsignal_t rcvdPkSignal;

  protected:

    virtual void initialize(int stage) override;
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    virtual void handleMessage(cMessage *msg) override;
    virtual void finish() override;

    /*
     *	Gets the MAC address in case a host name was set in destAddress parameter
     */
    virtual MACAddress resolveDestMACAddress();

    /*
     * sendPacket function for the server side
     */
    virtual void sendPacket();

    /*
     * sendPacket function for the client side
     */
    void sendPacket(cMessage *datapacket, const MACAddress& destAddr);

    /*
     * generates response packet. Server side.
     */
    virtual void receivePacket(cMessage *msg);
};

} // namespace inetveins

#endif // ifndef __INETVEINS_ETHERNETAPPLICATION_H

