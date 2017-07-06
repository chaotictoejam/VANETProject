//
// Copyright (C) 2013 OpenSim Ltd.
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

#ifndef __INETVEINS_GEOMETRICOBJECTBASE_H
#define __INETVEINS_GEOMETRICOBJECTBASE_H

#include "inetveins/common/INETVEINSDefs.h"

namespace inetveins {

/**
 * This class represents a 3 dimensional geometric object positioned and oriented
 * in 3 dimensional space.
 */
class INETVEINS_API GeometricObjectBase
{
  public:
    GeometricObjectBase() {}
    virtual ~GeometricObjectBase() {}

    /**
     * Returns true if this geometric object is the same as the unspecified
     * singleton instance of this type.
     */
    virtual bool isNil() const = 0;

    /**
     * Returns true if this geometric object is not completely specified.
     */
    virtual bool isUnspecified() const = 0;
};

} // namespace inetveins

#endif // ifndef __INETVEINS_GEOMETRICOBJECTBASE_H

