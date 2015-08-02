
package vanetsim.simulations.aodvvanet;

import vanetsim.simulations._nodes.AODVVANETRSU;

network AODVVANET extends vanetsim.simulations._nodes.AODVVANETScenario
{
    submodules:
        rsu[1]: AODVVANETRSU {
            @display("p=150,140;b=10,10,oval");
        }
}
