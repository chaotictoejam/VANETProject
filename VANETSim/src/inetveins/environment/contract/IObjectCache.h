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

#ifndef __INETVEINS_IOBJECTCACHE_H
#define __INETVEINS_IOBJECTCACHE_H

#include "inetveins/common/IVisitor.h"
#include "inetveins/common/geometry/object/LineSegment.h"
#include "inetveins/environment/contract/IPhysicalObject.h"

namespace inetveins {

namespace physicalenvironment {

/**
 * This interface provides abstractions for efficient physical object cache data
 * structures.
 */
class INETVEINS_API IObjectCache
{
  public:
    /**
     * Inserts a new physical object into the cache data structure.
     */
    virtual bool insertObject(const IPhysicalObject *object) = 0;

    /**
     * Calls the visitor with at least all physical objects that intersect
     * with the provided line segment.
     */
    virtual void visitObjects(const IVisitor *visitor, const LineSegment& lineSegment) const = 0;
};

} // namespace physicalenvironment

} // namespace inetveins

#endif // ifndef __INETVEINS_IOBJECTCACHE_H
