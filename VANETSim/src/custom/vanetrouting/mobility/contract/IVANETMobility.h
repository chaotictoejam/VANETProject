/* -*- mode:c++ -*- ********************************************************
 * file:        IVANETMobility.h
 *
 * author:      Levente Meszaros
 *
 * copyright:   (C) 2004 Telecommunication Networks Group (TKN) at
 *              Technische Universitaet Berlin, Germany.
 *
 *              (C) 2005 Andras Varga
 *              (C) 2015 Joanne Skiles, FAU
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
 *************************************************************************/


#ifndef IVANETMOBILITY_H
#define IVANETMOBILITY_H

#include "INETDefs.h"

#include "Coord.h"


/**
 * @brief Abstract base class defining the public interface that must be provided by all mobility modules.
 *
 * @ingroup mobility
 * @author Levente M�sz�ros
 */
class IVANETMobility
{
  public:
    /** @brief A signal used to publish mobility state changes. */
    static simsignal_t vanetMobilityStateChangedSignal;

  public:
    virtual ~IVANETMobility() {}

    /** @brief Returns the current position at the current simulation time. */
    virtual Coord getCurrentPosition() = 0;

    /** @brief Returns the current speed at the current simulation time. */
    virtual Coord getCurrentSpeed() = 0;

    /** @brief Returns the current acceleration at the current simulation time. */
    virtual Coord getCurrentAcceleration() = 0;

    /** @brief Returns the current direction at the current simulation time. */
    //virtual Coord getCurrentDirection() = 0;

    /** @brief Returns the current angular position at the current simulation time. */
    virtual Coord getCurrentAngularPosition() = 0;

    /** @brief Returns the current angular speed at the current simulation time. */
    //virtual Coord getCurrentAngularSpeed() = 0;

    /** @brief Returns the current angular acceleration at the current simulation time. */
    //virtual Coord getCurrentAngularAcceleration() = 0;
};

#endif
