
package vanetsim.simulations.aodv;

import org.car2x.veins.nodes.RSU;

network AODVSim extends org.car2x.veins.nodes.Scenario
{
    submodules:
        rsu[1]: RSU {
            @display("p=150,140;b=10,10,oval");
        }
}