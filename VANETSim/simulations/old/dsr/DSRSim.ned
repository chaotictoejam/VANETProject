package vanetsim.simulations.dsr;

import vanetsim.simulations._nodes.RSU;

network DSRSim extends vanetsim.simulations._nodes.Scenario
{
    submodules:
        rsu[1]: RSU {
            @display("p=150,140;b=10,10,oval");
        }
}