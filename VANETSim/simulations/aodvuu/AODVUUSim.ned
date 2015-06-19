
package vanetsim.simulations.aodvuu;

import  vanetsim.simulations._nodes.RSU;
import  vanetsim.simulations._nodes.Car;

network AODVUUSim extends vanetsim.simulations._nodes.Scenario
{
    submodules:
        rsu[1]: RSU {
            @display("p=150,140;b=10,10,oval");
        }
}