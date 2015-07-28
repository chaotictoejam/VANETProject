
package vanetsim.simulations.aodvvanet;

import  vanetsim.simulations._nodes.RSU;
import  vanetsim.simulations._nodes.Car;

network AODVVANET extends vanetsim.simulations._nodes.AODVVANETScenario
{
    submodules:
        rsu[1]: RSU {
            @display("p=150,140;b=10,10,oval");
        }
}