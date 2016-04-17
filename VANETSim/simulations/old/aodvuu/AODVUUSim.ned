
package vanetsim.simulations.old.aodvuu;

import  vanetsim.simulations.old._nodes.RSU;

network AODVUUSim extends vanetsim.simulations.old._nodes.Scenario
{
    submodules:
        rsu[1]: RSU {
            @display("p=150,140;b=10,10,oval");
        }
}