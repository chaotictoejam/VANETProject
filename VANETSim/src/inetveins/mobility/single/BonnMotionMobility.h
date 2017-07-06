//
// Copyright (C) 2005 Andras Varga
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef __INETVEINS_BONNMOTIONMOBILITY_H
#define __INETVEINS_BONNMOTIONMOBILITY_H

#include "inetveins/common/INETVEINSDefs.h"

#include "inetveins/mobility/base/LineSegmentsMobilityBase.h"
#include "inetveins/mobility/single/BonnMotionFileCache.h"

namespace inetveins {

/**
 * @brief Uses the BonnMotion native file format. See NED file for more info.
 *
 * @ingroup mobility
 * @author Andras Varga
 */
class INETVEINS_API BonnMotionMobility : public LineSegmentsMobilityBase
{
  protected:
    // state
    bool is3D;
    const BonnMotionFile::Line *lines;
    int currentLine;
    double maxSpeed; // the possible maximum speed at any future time

  protected:
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }

    /** @brief Initializes mobility model parameters. */
    virtual void initialize(int stage) override;

    /** @brief Initializes the position according to the mobility model. */
    virtual void setInitialPosition() override;

    /** @brief Overridden from LineSegmentsMobilityBase. */
    virtual void setTargetPosition() override;

    /** @brief Overridden from LineSegmentsMobilityBase. */
    virtual void move() override;

    virtual void computeMaxSpeed();

  public:
    BonnMotionMobility();

    virtual ~BonnMotionMobility();

    virtual double getMaxSpeed() const override { return maxSpeed; }
};

} // namespace inetveins

#endif // ifndef __INETVEINS_BONNMOTIONMOBILITY_H

