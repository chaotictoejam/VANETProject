package vanetsim.simulations._nodes;

import inet.world.radio.ChannelControl;
import inet.world.traci.TraCIScenarioManagerLaunchd;

module Highway
{
    submodules:
        channelControl: ChannelControl {
            parameters:
                @display("p=256,128");
        }
        manager: TraCIScenarioManagerLaunchd {
            parameters:
                @display("p=512,128");
        }
}
