package vanetsim.simulations.old.dsr;

import vanetsim.simulations.old._nodes.RSU;

network DSRSim extends vanetsim.simulations.old._nodes.Scenario
{
    submodules:
        rsu[1]: RSU {
            @display("p=150,140;b=10,10,oval");
        }
}