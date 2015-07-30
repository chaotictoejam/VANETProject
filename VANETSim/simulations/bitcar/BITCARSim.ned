package vanetsim.simulations.bitcar;

import  vanetsim.simulations._nodes.RSU;
import  vanetsim.simulations._nodes.BITCARCar;

network BITCARSim extends vanetsim.simulations._nodes.BITCARScenario
{
    submodules:
        rsu[1]: RSU {
            @display("p=150,140;b=10,10,oval");
        }
}