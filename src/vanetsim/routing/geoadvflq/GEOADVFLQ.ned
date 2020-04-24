// Author: Joanne Skiles
// This module provides GEOADV-FLQ routing protocol for VANETs.

package vanetsim.routing.geoadvflq;

import inet.applications.contract.IApp;

simple GEOADVFLQ like IApp
{
    parameters:
        // properties
        @display("i=block/routing");

        // context parameters
        string interfaceTableModule;   // The path to the InterfaceTable module
        string routingTableModule = default("^.ipv4.routingTable");
        string networkProtocolModule = default("^.ipv4.ip");
        string outputInterface = default("wlan0");

        // GEOADVFLQ parameters
        string planarizationMode @enum("", "GG", "RNG") = default("GG");
        string interfaces = default("*");
        double beaconInterval @unit(s) = default(10s);
        double maxJitter @unit(s) = default(0.5 * beaconInterval);
        double neighborValidityInterval @unit(s) = default(4.5 * beaconInterval);
        int positionByteLength @unit(B) = default(2 * 4B);
		double losRange = default(10); // line of site range.
        double speedWeight = default(10); // speed weight factor
        double accelerationWeight = default(10); // acceleration weight factor
        double directionWeight = default(10); // direction weight factor
        double linkQualityWeight = default(10); // link quality weight factor
        bool isUrban = default(true);
        
        // visualization parameters
        bool displayBubbles = default(false);	// display bubble messages about changes in routing state for packets
    gates:
        input socketIn;
        output socketOut;
}