package vanetsim.simulations._nodes;

import inet.world.radio.ChannelControl;
import dissertation.world.traci.aodvTraCIScenarioManagerLaunchd;


module AODVVANETHighway
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
