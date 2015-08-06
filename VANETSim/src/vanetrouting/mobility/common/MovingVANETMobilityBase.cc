/* -*- mode:c++ -*- ********************************************************
 * file:        MovingVANETMobilityBase.cc
 *
 * author:      Daniel Willkomm, Andras Varga, Zoltan Bojthe
 *
 * copyright:   (C) 2004 Telecommunication Networks Group (TKN) at
 *              Technische Universitaet Berlin, Germany.
 *
 *              (C) 2005 Andras Varga
 *              (C) 2011 Zoltan Bojthe
 *
 *              This program is free software; you can redistribute it
 *              and/or modify it under the terms of the GNU General Public
 *              License as published by the Free Software Foundation; either
 *              version 2 of the License, or (at your option) any later
 *              version.
 *              For further information see file COPYING
 *              in the top level directory
 ***************************************************************************
 * part of:     framework implementation developed by tkn
 **************************************************************************/


#include "MovingVANETMobilityBase.h"


MovingVANETMobilityBase::MovingVANETMobilityBase()
{
    moveTimer = NULL;
    updateInterval = 0;
    stationary = false;
    lastSpeed = Coord::ZERO;
    lastAcceleration = Coord::ZERO;
    lastAngularPosition = Coord::ZERO;
    lastUpdate = 0;
    nextChange = -1;
}

MovingVANETMobilityBase::~MovingVANETMobilityBase()
{
    cancelAndDelete(moveTimer);
}

void MovingVANETMobilityBase::initialize(int stage)
{
    VANETMobilityBase::initialize(stage);

    EV_TRACE << "initializing MovingVANETMobilityBase stage " << stage << endl;
    if (stage == 0) {
        moveTimer = new cMessage("move");
        updateInterval = par("updateInterval");
    }
}

void MovingVANETMobilityBase::initializePosition() {
    VANETMobilityBase::initializePosition();
    lastUpdate = simTime();
    scheduleUpdate();
}

void MovingVANETMobilityBase::moveAndUpdate()
{
    simtime_t now = simTime();
    if (nextChange == now || lastUpdate != now) {
        move();
        lastUpdate = simTime();
        emitMobilityStateChangedSignal();
        updateVisualRepresentation();
    }
}

void MovingVANETMobilityBase::handleSelfMessage(cMessage *message)
{
    moveAndUpdate();
    scheduleUpdate();
}

void MovingVANETMobilityBase::scheduleUpdate()
{
    cancelEvent(moveTimer);
    if (!stationary && updateInterval != 0) {
        // periodic update is needed
        simtime_t nextUpdate = simTime() + updateInterval;
        if (nextChange != -1 && nextChange < nextUpdate)
            // next change happens earlier than next update
            scheduleAt(nextChange, moveTimer);
        else
            // next update happens earlier than next change or there is no change at all
            scheduleAt(nextUpdate, moveTimer);
    }
    else if (nextChange != -1)
        // no periodic update is needed
        scheduleAt(nextChange, moveTimer);
}

Coord MovingVANETMobilityBase::getCurrentPosition()
{
    moveAndUpdate();
    return lastPosition;
}

Coord MovingVANETMobilityBase::getCurrentSpeed()
{
    moveAndUpdate();
    return lastSpeed;
}

Coord MovingVANETMobilityBase::getCurrentAcceleration()
{
    moveAndUpdate();
    return lastAcceleration;
}

Coord MovingVANETMobilityBase::getCurrentAngularPosition()
{
    moveAndUpdate();
    return lastAngularPosition;
}
