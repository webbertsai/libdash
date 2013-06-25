package net.bitmovin.libdash.metrics;

public interface ITCPConnection {
	int     TCPId                   ();
    String  DestinationAddress      ();
    String  ConnectionOpenedTime    ();
    String  ConnectionClosedTime    ();
    long    ConnectionTime          ();
}
