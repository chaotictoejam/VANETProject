package vanetsim.simulations._nodes;

import inet.world.radio.ChannelControl;
import vanetsim.custom.vanetrouting.world.traci.aodvTraCIScenarioManagerLaunchd;

module VANETHighway
{
    submodules:
        channelControl: ChannelControl {
            parameters:
                @display("p=256,128");
        }
        manager: aodvTraCIScenarioManagerLaunchd {
            parameters:
                @display("p=512,128");
        }
}
