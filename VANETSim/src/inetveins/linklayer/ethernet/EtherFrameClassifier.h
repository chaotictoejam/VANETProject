//
// Copyright (C) 2011 Zoltan Bojthe
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

#ifndef __INETVEINS_ETHERFRAMECLASSIFIER_H
#define __INETVEINS_ETHERFRAMECLASSIFIER_H

#include "inetveins/common/INETVEINSDefs.h"

namespace inetveins {

/**
 * Ethernet Frame classifier.
 *
 * Ethernet frames are classified as:
 * - PAUSE frames
 * - others
 */
class INETVEINS_API EtherFrameClassifier : public cSimpleModule
{
  public:
    /**
     * Sends the incoming packet to either pauseOut or defaultOut gate.
     */
    virtual void handleMessage(cMessage *msg) override;
};

} // namespace inetveins

#endif // ifndef __INETVEINS_ETHERFRAMECLASSIFIER_H

