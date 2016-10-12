//
// Copyright 2006 Andras Varga
//
// This library is free software, you can redistribute it and/or modify
// it under  the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation;
// either version 2 of the License, or any later version.
// The library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU Lesser General Public License for more details.
//

#ifndef __INETVEINS_TCPSPOOF_H
#define __INETVEINS_TCPSPOOF_H

#include "inetveins/common/INETVEINSDefs.h"

#include "inetveins/transportlayer/tcp_common/TCPSegment.h"
#include "inetveins/networklayer/common/L3AddressResolver.h"

namespace inetveins {

namespace tcp {

/**
 * Sends fabricated TCP packets.
 */
class INETVEINS_API TCPSpoof : public cSimpleModule
{
  protected:
    virtual void sendToIP(TCPSegment *tcpseg, L3Address src, L3Address dest);
    virtual unsigned long chooseInitialSeqNum();
    virtual void sendSpoofPacket();

  protected:
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;

  protected:
    static simsignal_t sentPkSignal;
};

} // namespace tcp

} // namespace inetveins

#endif // ifndef __INETVEINS_TCPSPOOF_H

