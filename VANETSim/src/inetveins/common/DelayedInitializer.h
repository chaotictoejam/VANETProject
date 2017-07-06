//
// Copyright (C) 2015 OpenSim Ltd.
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

#ifndef __INETVEINS_DELAYEDINITIALIZER_H
#define __INETVEINS_DELAYEDINITIALIZER_H

#include <functional>

namespace inetveins {

// this is a singleton
template <typename T> class INETVEINS_API DelayedInitializer
{
  private:
    mutable T *t = nullptr;
    bool constructed;
    const std::function <T *()> initializer;

  public:
    DelayedInitializer(const std::function <T *()> initializer) : constructed(true), initializer(initializer) {}
    ~DelayedInitializer() { delete t; }

    const T *operator&() const {
        if (!constructed) {
            fprintf(stderr, "Cannot dereference DelayedInitializer<%s> before it is completely constructed\n", typeid(t).name());
            abort();
        }
        if (t == nullptr)
            t = initializer();
        return t;
    }
};

} /* namespace inetveins */

#endif // ifndef __INETVEINS_DELAYEDINITIALIZER_H
