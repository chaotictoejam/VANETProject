package vanetsim.simulations._nodes;

import inet.world.radio.ChannelControl;
import vanetsim.custom.vanetrouting.world.traci.v_TraCIScenarioManagerLaunchd;

module VANETHighway
{
    submodules:
        channelControl: ChannelControl {
            parameters:
                @display("p=256,128");
        }
        manager: v_TraCIScenarioManagerLaunchd {
            parameters:
                @display("p=512,128");
        }
}
