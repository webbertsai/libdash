package net.bitmovin.libdash.metrics;

import java.util.Vector;

public interface IThroughputMeasurement {
	String      	StartOfPeriod			();
    long        	DurationOfPeriod        ();
    Vector<Integer>	ReceivedBytesPerTrace   ();
}
