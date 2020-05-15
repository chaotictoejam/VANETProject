
package vanetsim.simulations.vanet.dymo;


import org.car2x.veins.base.connectionManager.ConnectionManager;
import org.car2x.veins.base.modules.BaseWorldUtility;
import org.car2x.veins.modules.mobility.traci.TraCIScenarioManager*;
import org.car2x.veins.modules.obstacle.ObstacleControl;
import org.car2x.veins.modules.world.annotations.AnnotationManager;

import inet.physicallayer.contract.packetlevel.IRadioMedium;
import inet.networklayer.configurator.ipv4.Ipv4NetworkConfigurator;
import inet.networklayer.ipv4.RoutingTableRecorder;
import vanetsim.simulations.vanet._nodes.ManetCar;
import vanetsim.simulations.vanet._nodes.ManetRSU;

import veins_inet.VeinsInetManager;

network DymoSim
{
    parameters:
        double playgroundSizeX @unit(m); // x size of the area the nodes are in (in meters)
        double playgroundSizeY @unit(m); // y size of the area the nodes are in (in meters)
        double playgroundSizeZ @unit(m); // z size of the area the nodes are in (in meters)
        @display("bgb=$playgroundSizeX,$playgroundSizeY");
    	string radioMediumType;
    	int numberOfRSU;
    submodules:
        manager: VeinsInetManager{
                @display("p=150,0;i=abstract/multicast");
        }
        
        radioMedium: <radioMediumType> like IRadioMedium {
            parameters:
                @display("p=50,50");
        }
        
        routingTableRecorder: RoutingTableRecorder {
            parameters:
                @display("p=100,300;is=s");
        }
        
        rsu[numberOfRSU]: ManetRSU {
        }
        
        vehicle[0]: ManetCar {
        }
    connections allowunconnected:
}