package vanetsim.simulations.rbvtr;

import  vanetsim.simulations._nodes.RBVTRRSU;

network RBVTRSim extends vanetsim.simulations._nodes.RBVTRScenario
{
    submodules:
        rsu[1]: RBVTRRSU {
            @display("p=150,140;b=10,10,oval");
        }
}