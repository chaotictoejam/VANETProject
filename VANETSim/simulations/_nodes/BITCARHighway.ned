package vanetsim.simulations._nodes;

import inet.world.radio.ChannelControl;
import vanetsim.vanetrouting.world.traci.bitcarTraCIScenarioManagerLaunchd;

module BITCARHighway
{
    submodules:
        channelControl: ChannelControl {
            parameters:
                @display("p=256,128");
        }
        manager: bitcarTraCIScenarioManagerLaunchd {
            parameters:
                @display("p=512,128");
        }
}
