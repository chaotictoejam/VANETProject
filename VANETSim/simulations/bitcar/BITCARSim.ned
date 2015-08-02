package vanetsim.simulations.bitcar;

import vanetsim.simulations._nodes.BITCARRSU;


network BITCARSim extends vanetsim.simulations._nodes.BITCARScenario
{
    submodules:
        rsu[1]: BITCARRSU {
            @display("p=150,140;b=10,10,oval");
        }
}
