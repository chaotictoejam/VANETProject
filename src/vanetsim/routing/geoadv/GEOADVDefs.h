// Author: Joanne Skiles
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
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

#ifndef __INET_GEOADVDEFS_H
#define __INET_GEOADVDEFS_H

#define GEOADV_UDP_PORT    269

namespace inet {

enum GEOADVForwardingMode {
    GEOADV_GREEDY_ROUTING,
    GEOADV_TWR_ROUTING
};

enum GEOADVPlanarizationMode {
    GEOADV_GG_PLANARIZATION,
    GEOADV_RNG_PLANARIZATION
};

} // namespace inet

#endif // ifndef __INET_GEOADVDEFS_H

