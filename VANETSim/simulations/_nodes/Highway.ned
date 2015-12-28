package vanetsim.simulations._nodes;

import inet.world.radio.ChannelControl;
import inet.world.traci.TraCIScenarioManagerLaunchd;
import inet.world.obstacles.ObstacleControl;
import inet.world.annotations.AnnotationManager;

module Highway
{
    submodules:
        // Channel control determines which nodes are within communication or interference distance
        channelControl: ChannelControl {
            parameters:
                @display("p=256,128");
        }
        //TraCIScenarioManagerLaunchd controls the creation and movement of nodes
        manager: TraCIScenarioManagerLaunchd {
            parameters:
                @display("p=512,128");
        }
        obstacles: ObstacleControl {
            @display("p=282,108");
        }
        annotations: AnnotationManager {
			@display("p=144,108");
		}
}
