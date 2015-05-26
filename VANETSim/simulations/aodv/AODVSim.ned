
package vanetsim.simulations.aodv;

import  vanetsim.simulations._nodes.RSU;
import  vanetsim.simulations._nodes.Car;
import inet.world.radio.ChannelControl;

network AODVSim extends vanetsim.simulations._nodes.Scenario
{
    submodules:
        rsu[1]: RSU {
            @display("p=150,140;b=10,10,oval");
        }
        channelControl: ChannelControl
        {
            parameters:
                @display("p=60,50");
        }
}