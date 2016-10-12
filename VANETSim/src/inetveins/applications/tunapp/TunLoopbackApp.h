//
// Copyright (C) 2015 Irene Ruengeler
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

#ifndef __INETVEINS_TUNLOOPBACKAPP_H
#define __INETVEINS_TUNLOOPBACKAPP_H

#include "inetveins/common/INETVEINSDefs.h"

namespace inetveins {

class INETVEINS_API TunLoopbackApp : public cSimpleModule
{
    protected:
        unsigned int packetsSent;
        unsigned int packetsReceived;

        static simsignal_t sentPkSignal;
        static simsignal_t rcvdPkSignal;

    public:
        TunLoopbackApp();
        virtual ~TunLoopbackApp();

    protected:
        void initialize(int stage) override;
        void handleMessage(cMessage *msg) override;
        void finish() override;
};

} // namespace inetveins

# endif

