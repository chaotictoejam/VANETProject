#include "vanetsim/networklayer/contract/IVANETRoute.h"

namespace inet {

const char *IVANETRoute::sourceTypeName(SourceType sourceType)
{
    switch (sourceType) {
        case MANUAL:
            return "MANUAL";

        case AODVWR:
            return "AODVWR";

        case GPSRWR:
            return "GPSRWR";

        case GEOADV:
            return "GEOADV";

        case GEOADVFLQ:
            return "GEOADVFLQ";

        case GEOADVP:
            return "GEOADVP";

        case GEOADVPF:
            return "GEOADVPF";

        case GPSRFLQ:
            return "GPSRFLQ";

        default:
            return "???";
    }
}

const char *IMulticastRoute::sourceTypeName(SourceType sourceType)
{
    switch (sourceType) {
        case MANUAL:
            return "MANUAL";

        case DVMRP:
            return "DVRMP";

        case PIM_DM:
            return "PIM-DM";

        case PIM_SM:
            return "PIM-SM";

        default:
            return "???";
    }
}

} // namespace inet

