// Author: Joanne Skiles

#ifndef __INET_AODVWRROUTEDATA_H
#define __INET_AODVWRROUTEDATA_H

#include <set>

#include "inet/common/INETDefs.h"
#include "inet/networklayer/common/L3Address.h"

namespace inet {
namespace aodvwr {

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
    simtime_t lifeTime;    // expiration or deletion time of the route

  public:

    AODVWR RouteData()
    {
        active = true;
        repariable = false;
        beingRepaired = false;
        validDestNum = true;
        lifeTime = SIMTIME_ZERO;
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
    const simtime_t& getLifeTime() const { return lifeTime; }
    void setLifeTime(const simtime_t& lifeTime) { this->lifeTime = lifeTime; }
    bool isActive() const { return active; }
    void setIsActive(bool active) { this->active = active; }
    void addPrecursor(const L3Address& precursorAddr) { precursorList.insert(precursorAddr); }
    const std::set<L3Address>& getPrecursorList() const { return precursorList; }
    virtual std::string str() const;
};

} // namespace aodvwr
} // namespace inet

#endif // ifndef __INET_AODVWRROUTEDATA_H

