//
// Copyright (C) 2014 OpenSim Ltd.
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

#ifndef __INETVEINS_BOX_H
#define __INETVEINS_BOX_H

#include "inetveins/common/geometry/base/GeometricObjectBase.h"
#include "inetveins/common/geometry/common/Coord.h"

namespace inetveins {

class INETVEINS_API Box : public GeometricObjectBase
{
    public:
        static const Box NIL;

    protected:
        Coord min;
        Coord max;

    public:
        Box(const Coord& min, const Coord& max);

        static Box computeBoundingBox(const std::vector<Coord>& points);

        const Coord& getMin() const { return min; }
        const Coord& getMax() const { return max; }

        virtual bool isNil() const override { return this == &NIL; }
        virtual bool isUnspecified() const override { return min.isUnspecified() || max.isUnspecified(); }
};
} /* namespace inetveins */

#endif // ifndef __INETVEINS_BOX_H
