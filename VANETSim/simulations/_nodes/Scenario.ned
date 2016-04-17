package vanetsim.simulations._nodes;

import vanetsim.veins.base.connectionManager.ConnectionManager;
import vanetsim.veins.base.modules.BaseWorldUtility;
import vanetsim.veins.modules.mobility.traci.TraCIScenarioManagerLaunchd;
import vanetsim.veins.modules.obstacle.ObstacleControl;
import vanetsim.veins.modules.world.annotations.AnnotationManager;

module Scenario
{
    parameters:
        double playgroundSizeX @unit(m); // x size of the area the nodes are in (in meters)
        double playgroundSizeY @unit(m); // y size of the area the nodes are in (in meters)
        double playgroundSizeZ @unit(m); // z size of the area the nodes are in (in meters)
        @display("bgb=$playgroundSizeX,$playgroundSizeY");
    submodules:
        obstacles: ObstacleControl {
            @display("p=240,50");
        }
        annotations: AnnotationManager {
            @display("p=260,50");
        }
        connectionManager: ConnectionManager {
            parameters:
                @display("p=150,0;i=abstract/multicast");
        }
        world: BaseWorldUtility {
            parameters:
                playgroundSizeX = playgroundSizeX;
                playgroundSizeY = playgroundSizeY;
                playgroundSizeZ = playgroundSizeZ;
                @display("p=30,0;i=misc/globe");
        }
        manager: TraCIScenarioManagerLaunchd {
            parameters:
                @display("p=512,128");
        }
}
