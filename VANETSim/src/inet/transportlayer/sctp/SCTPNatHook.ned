package vanetsim.inet.transportlayer.sctp;

import vanetsim.inet.common.IHook;


//
// SCTPNatHook module.
//
simple SCTPNatHook like IHook
{
    parameters:
        string interfaceTableModule;
        string networkProtocolModule;
        string routingTableModule;
        string natTableModule;
    gates:
        input in;
        output out;
}
