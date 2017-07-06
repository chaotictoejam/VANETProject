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

#ifndef __INETVEINS_RESULTFILTERS_H
#define __INETVEINS_RESULTFILTERS_H

#include "inetveins/common/INETVEINSDefs.h"

namespace inetveins {

namespace utils {

namespace filters {

/**
 * Filter that expects a cMessage and outputs its age in seconds
 * (t - msg->getCreationTime()).
 */
class INETVEINS_API MessageAgeFilter : public cObjectResultFilter
{
  public:
    virtual void receiveSignal(cResultFilter *prev, simtime_t_cref t, cObject *object DETAILS_ARG) override;
};

/**
 * Filter that expects a cMessage and outputs its age from the timestamp field
 * in seconds (t - msg->getTimestamp()).
 */
class INETVEINS_API MessageTSAgeFilter : public cObjectResultFilter
{
  public:
    virtual void receiveSignal(cResultFilter *prev, simtime_t_cref t, cObject *object DETAILS_ARG) override;
};

/**
 * Filter that expects an IMobility and outputs its current coordinate
 */
class INETVEINS_API MobilityPosFilter : public cObjectResultFilter
{
  public:
    virtual void receiveSignal(cResultFilter *prev, simtime_t_cref t, cObject *object DETAILS_ARG) override;
};

/**
 * Filter that expects a Coord and outputs its X coordinate
 */
class INETVEINS_API XCoordFilter : public cObjectResultFilter
{
  public:
    virtual void receiveSignal(cResultFilter *prev, simtime_t_cref t, cObject *object DETAILS_ARG) override;
};

/**
 * Filter that expects a Coord and outputs its Y coordinate
 */
class INETVEINS_API YCoordFilter : public cObjectResultFilter
{
  public:
    virtual void receiveSignal(cResultFilter *prev, simtime_t_cref t, cObject *object DETAILS_ARG) override;
};

/**
 * Filter that expects a Coord and outputs its Z coordinate
 */
class INETVEINS_API ZCoordFilter : public cObjectResultFilter
{
  public:
    virtual void receiveSignal(cResultFilter *prev, simtime_t_cref t, cObject *object DETAILS_ARG) override;
};

/**
 * Filter that expects a cMessage and outputs its source address as string
 */
class INETVEINS_API MessageSourceAddrFilter : public cObjectResultFilter
{
  public:
    virtual void receiveSignal(cResultFilter *prev, simtime_t_cref t, cObject *object DETAILS_ARG) override;
};

} // namespace filters

} // namespace utils

} // namespace inetveins

#endif // ifndef __INETVEINS_RESULTFILTERS_H

