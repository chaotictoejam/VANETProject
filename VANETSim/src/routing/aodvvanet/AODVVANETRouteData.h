//
// Copyright (C) 2014 OpenSim Ltd.
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

#ifndef AODVVANETROUTEDATA_H_
#define AODVVANETROUTEDATA_H_

#include <set>
#include "IPv4Address.h"
#include "INETDefs.h"

class AODVVANETRouteData : public cObject
{
  protected:
    std::set<IPv4Address> precursorList;
    bool active;
    bool repariable;
    bool beingRepaired;
    bool validDestNum;
    unsigned int destSeqNum;
    double twr;
    double expirationTime;

  public:

    AODVVANETRouteData()
    {
        active = true;
        repariable = false;
        beingRepaired = false;
        validDestNum = true;
        destSeqNum = 0;
        twr = 0;
        expirationTime = 10000;
    }

    virtual ~AODVVANETRouteData() {}

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
    void addPrecursor(const IPv4Address& precursorAddr) { precursorList.insert(precursorAddr); }
    const std::set<IPv4Address>& getPrecursorList() const { return precursorList; }
};

std::ostream& operator<<(std::ostream& out, const AODVVANETRouteData *data);

#endif // ifndef AODVVANETROUTEDATA_H_

