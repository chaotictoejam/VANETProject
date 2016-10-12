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

#ifndef __INETVEINS_APSKSYMBOL_H
#define __INETVEINS_APSKSYMBOL_H

//#include "inetveins/common/Complex.h"
#include <complex>
#include "inetveins/physicallayer/contract/bitlevel/ISymbol.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API APSKSymbol : public std::complex<double>, public ISymbol
{
  public:
    APSKSymbol() : std::complex<double>() {}
    APSKSymbol(const double& r) : std::complex<double>(r) {}
    APSKSymbol(const double& q, const double& i) : std::complex<double>(q, i) {}
    APSKSymbol(const std::complex<double>& w) : std::complex<double>(w) {}
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_APSKSYMBOL_H

