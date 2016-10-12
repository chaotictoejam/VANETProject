//
// Copyright (C) 2015 Andras Varga
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

#ifndef __INETVEINS_RANDOMQOSCLASSIFIER_H
#define __INETVEINS_RANDOMQOSCLASSIFIER_H

#include "inetveins/common/INETVEINSDefs.h"

namespace inetveins {

/**
 * A QoS classifier that assigns a random User Priority. This is useful
 * for testing purposes.
 */
class INETVEINS_API RandomQoSClassifier : public cSimpleModule
{
  public:
    void handleMessage(cMessage *msg) override;
};

} // namespace inetveins

#endif

