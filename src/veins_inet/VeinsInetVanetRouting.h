#pragma once

#include "veins_inet/veins_inet.h"

#include "veins_inet/VeinsInetApplicationBase.h"

class VEINS_INET_API VeinsInetVanetRouting : public veins::VeinsInetApplicationBase {
protected:
    bool haveForwarded = false;

    // statistics
    int numSent = 0;
    int numReceived = 0;

protected:
    virtual bool startApplication() override;
    virtual bool stopApplication() override;
    virtual void processPacket(std::shared_ptr<inet::Packet> pk) override;
public:
    VeinsInetVanetRouting();
    ~VeinsInetVanetRouting();
};

