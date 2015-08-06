package vanetsim.simulations._nodes;

import inet.world.radio.ChannelControl;
import vanetsim.vanetrouting.world.traci.rbvtrTraCIScenarioManagerLaunchd;

module RBVTRHighway
{
    submodules:
        channelControl: ChannelControl {
            parameters:
                @display("p=256,128");
        }
        manager: rbvtrTraCIScenarioManagerLaunchd {
            parameters:
                @display("p=512,128");
        }
}
