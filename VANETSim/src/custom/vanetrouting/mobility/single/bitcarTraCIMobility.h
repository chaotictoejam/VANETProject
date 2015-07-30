//
// Copyright (C) 2006-2012 Christoph Sommer <christoph.sommer@uibk.ac.at>
//
// Documentation for these modules is at http://veins.car2x.org/
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#ifndef MOBILITY_TRACI_bitcarTraCIMobility_H
#define MOBILITY_TRACI_bitcarTraCIMobility_H

#include <string>
#include <fstream>
#include <list>
#include <stdexcept>

#include <omnetpp.h>

#include "INETDefs.h"
#include "VANETMobilityBase.h"
#include "VanetModuleAccess.h"
#include "world/traci/bitcarTraCIScenarioManager.h"

/**
 * @brief
 * Used in modules created by the bitcarTraCIScenarioManager.
 *
 * This module relies on the bitcarTraCIScenarioManager for state updates
 * and can not be used on its own.
 *
 * See the Veins website <a href="http://veins.car2x.org/"> for a tutorial, documentation, and publications </a>.
 *
 * @author Christoph Sommer, David Eckhoff, Luca Bedogni, Bastian Halmos
 *
 * @see bitcarTraCIScenarioManager
 * @see bitcarTraCIScenarioManagerLaunchd
 *
 * @ingroup mobility
 */
class bitcarTraCIMobility : public VANETMobilityBase
{
    public:
        class Statistics {
            public:
                double firstRoadNumber; /**< for statistics: number of first road we encountered (if road id can be expressed as a number) */
                simtime_t startTime; /**< for statistics: start time */
                simtime_t totalTime; /**< for statistics: total time travelled */
                simtime_t stopTime; /**< for statistics: stop time */
                double minSpeed; /**< for statistics: minimum value of currentSpeed */
                double maxSpeed; /**< for statistics: maximum value of currentSpeed */
                double totalDistance; /**< for statistics: total distance travelled */

                void initialize();
                void watch(cSimpleModule& module);
                void recordScalars(cSimpleModule& module);
        };

        bitcarTraCIMobility() : VANETMobilityBase(), isPreInitialized(false) {}
        virtual int numInitStages() const { return 3; }
        virtual void initialize(int stage);
        virtual void setInitialPosition();
        virtual void finish();
        virtual Coord getCurrentPosition() {
            return getPosition();
        }
        virtual Coord getCurrentSpeed() {
            Coord v = Coord(cos(getAngleRad()), -sin(getAngleRad()));
            return v * getSpeed();
        }
        virtual Coord getCurrentAcceleration() {
            Coord v = Coord(cos(getAngleRad()), -sin(getAngleRad()));
            return v * getAcceleration();
        }
        virtual Coord getCurrentAngularPosition() {
            Coord v = Coord(cos(getAngleRad()), -sin(getAngleRad()));
            return v;
        }

        virtual void handleSelfMessage(cMessage *msg);
        virtual void preInitialize(std::string external_id, const Coord& position, std::string road_id = "", double speed = -1,  double acceleration=-1, double angle = -1);
        virtual void nextPosition(const Coord& position, std::string road_id = "", double speed = -1, double angle = -1, double acceleration=-1, bitcarTraCIScenarioManager::VehicleSignal signals = bitcarTraCIScenarioManager::VEH_SIGNAL_UNDEF);
        virtual void move();
        virtual void updateDisplayString();
        virtual void setExternalId(std::string external_id) {
            this->external_id = external_id;
        }
        virtual std::string getExternalId() const {
            if (external_id == "") throw cRuntimeError("bitcarTraCIMobility::getExternalId called with no external_id set yet");
            return external_id;
        }
        virtual Coord getPosition() const {
            return lastPosition;
        }
        virtual std::string getRoadId() const {
            if (road_id == "") throw cRuntimeError("bitcarTraCIMobility::getRoadId called with no road_id set yet");
            return road_id;
        }
        virtual double getSpeed() const {
            if (speed == -1) throw cRuntimeError("bitcarTraCIMobility::getSpeed called with no speed set yet");
            return speed;
        }
        virtual double getAcceleration() const {
            if (acceleration == -1) throw cRuntimeError("bitcarTraCIMobility::getAcceleration called with no acceleration set yet");
            return acceleration;
        }
        virtual bitcarTraCIScenarioManager::VehicleSignal getSignals() const {
            if (signals == -1) throw cRuntimeError("bitcarTraCIMobility::getSignals called with no signals set yet");
            return signals;
        }
        /**
         * returns angle in rads, 0 being east, with -M_PI <= angle < M_PI.
         */
        virtual double getAngleRad() const {
            if (angle == M_PI) throw cRuntimeError("bitcarTraCIMobility::getAngleRad called with no angle set yet");
            return angle;
        }
        virtual bitcarTraCIScenarioManager* getManager() const {
            if (!manager) manager = bitcarTraCIScenarioManagerAccess().get();
            return manager;
        }
        void commandSetSpeedMode(int32_t bitset) {
            getManager()->commandSetSpeedMode(getExternalId(), bitset);
        }
        void commandSetSpeed(double speed) {
            getManager()->commandSetSpeed(getExternalId(), speed);
        }
        void commandChangeRoute(std::string roadId, double travelTime) {
            getManager()->commandChangeRoute(getExternalId(), roadId, travelTime);
        }

        void commandNewRoute(std::string roadId) {
            getManager()->commandNewRoute(getExternalId(), roadId);
        }
        void commandParkVehicle() {
            getManager()->commandSetVehicleParking(getExternalId());
        }

        double commandDistanceRequest(Coord position1, Coord position2, bool returnDrivingDistance) {
            return getManager()->commandDistanceRequest(position1, position2, returnDrivingDistance);
        }
        void commandStopNode(std::string roadId, double pos, uint8_t laneid, double radius, double waittime) {
            return getManager()->commandStopNode(getExternalId(), roadId, pos, laneid, radius, waittime);
        }
        std::list<std::string> commandGetPolygonIds() {
            return getManager()->commandGetPolygonIds();
        }
        std::string commandGetPolygonTypeId(std::string polyId) {
            return getManager()->commandGetPolygonTypeId(polyId);
        }
        std::list<Coord> commandGetPolygonShape(std::string polyId) {
            return getManager()->commandGetPolygonShape(polyId);
        }
        void commandSetPolygonShape(std::string polyId, std::list<Coord> points) {
            getManager()->commandSetPolygonShape(polyId, points);
        }
        bool commandAddVehicle(std::string vehicleId, std::string vehicleTypeId, std::string routeId,
                simtime_t emitTime_st = -bitcarTraCIScenarioManager::DEPART_NOW, double emitPosition =
                        -bitcarTraCIScenarioManager::DEPART_POS_BASE, double emitSpeed =
                        -bitcarTraCIScenarioManager::DEPART_SPEED_MAX, int8_t emitLane =
                        -bitcarTraCIScenarioManager::DEPART_LANE_BEST_FREE)
        {
            return getManager()->commandAddVehicle(vehicleId, vehicleTypeId, routeId, emitTime_st, emitPosition,
                    emitSpeed, emitLane);
        }

    protected:
        int accidentCount; /**< number of accidents */

        cOutVector currentPosXVec; /**< vector plotting posx */
        cOutVector currentPosYVec; /**< vector plotting posy */
        cOutVector currentSpeedVec; /**< vector plotting speed */
        cOutVector currentAccelerationVec; /**< vector plotting acceleration */

        Statistics statistics; /**< everything statistics-related */

        bool isPreInitialized; /**< true if preInitialize() has been called immediately before initialize() */

        std::string external_id; /**< updated by setExternalId() */

        simtime_t lastUpdate; /**< updated by nextPosition() */
        Coord nextPos; /**< updated by nextPosition() */
        std::string road_id; /**< updated by nextPosition() */
        double speed; /**< updated by nextPosition() */
        double angle; /**< updated by nextPosition() */
        double acceleration; /**< updated by nextPosition() */
        bitcarTraCIScenarioManager::VehicleSignal signals; /**<updated by nextPosition() */

        cMessage* startAccidentMsg;
        cMessage* stopAccidentMsg;
        mutable bitcarTraCIScenarioManager* manager;
        double last_speed;

        virtual void fixIfHostGetsOutside(); /**< called after each read to check for (and handle) invalid positions */
};

class bitcarTraCIMobilityAccess : public VanetModuleAccess<bitcarTraCIMobility>
{
    public:
        bitcarTraCIMobilityAccess() : VanetModuleAccess<bitcarTraCIMobility>("mobility") {};
};


#endif

