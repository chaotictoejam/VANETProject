
package vanetsim.simulations.aodv.aodvvanetrouting;

import vanetsim.simulations._nodes.AODVVANETROUTERSU;


network AODVVANETROUTE extends vanetsim.simulations._nodes.AODVVANETROUTEScenario
{
    submodules:
        rsu[1]: AODVVANETROUTERSU {
            @display("p=150,140;b=10,10,oval");
        }
}
