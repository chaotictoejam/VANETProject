// Author: Joanne Skiles
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

#ifndef __INET_AODVWRROUTEDATA_H
#define __INET_AODVWRROUTEDATA_H

#include <set>
#include "inet/networklayer/common/L3Address.h"
#include "inet/common/INETDefs.h"

namespace inet {

class INET_API AODVWRRouteData : public cObject
{
  protected:
    std::set<L3Address> precursorList;
    bool active;
    bool repariable;
    bool beingRepaired;
    bool validDestNum;
    unsigned int destSeqNum;
    double twr;
    double expirationTime;

  public:

    AODVWRRouteData()
    {
        active = true;
        repariable = false;
        beingRepaired = false;
        validDestNum = true;
        destSeqNum = 0;
        twr = 0;
        expirationTime = 10000;
    }

    virtual ~AODVWRRouteData() {}

    unsigned int getDestSeqNum() const { return destSeqNum; }
    void setDestSeqNum(unsigned int destSeqNum) { this->destSeqNum = destSeqNum; }
    bool hasValidDestNum() const { return validDestNum; }
    void setHasValidDestNum(bool hasValidDestNum) { this->validDestNum = hasValidDestNum; }
    bool isBeingRepaired() const { return beingRepaired; }
    void setIsBeingRepaired(bool isBeingRepaired) { this->beingRepaired = isBeingRepaired; }
    bool isRepariable() const { return repariable; }
    void setIsRepariable(bool isRepariable) { this->repariable = isRepariable; }
    void setTWR(double twr) { this->twr = twr; }
    const double& getTWR() const { return twr; }
    void setExpirationTime(double expirationTime) { this->expirationTime = expirationTime; }
    const double&  getExpirationTime() const { return expirationTime; }
    bool isActive() const { return active; }
    void setIsActive(bool active) { this->active = active; }
    void addPrecursor(const L3Address& precursorAddr) { precursorList.insert(precursorAddr); }
    const std::set<L3Address>& getPrecursorList() const { return precursorList; }
};

std::ostream& operator<<(std::ostream& out, const AODVWRRouteData *data);

} // namespace inet

#endif    // ifndef AODVWRROUTEDATA_H_

