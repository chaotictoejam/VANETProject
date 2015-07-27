
package vanetsim.simulations.aodvvanet2;

import  vanetsim.simulations._nodes.RSU;
import  vanetsim.simulations._nodes.Car;

network AODVVANET2 extends vanetsim.simulations._nodes.AODVVANETScenario
{
    submodules:
        rsu[1]: RSU {
            @display("p=150,140;b=10,10,oval");
        }
}