package net.bitmovin.libdash.metrics;

import java.util.Vector;

import net.bitmovin.libdash.helper.CppClassInstance;

public class ThroughputMeasurement extends CppClassInstance implements
		IThroughputMeasurement {

	public ThroughputMeasurement() {
	}

	public ThroughputMeasurement(long cppThis) {
		super(cppThis);
	}

	@Override
	public native String StartOfPeriod();

	@Override
	public native long DurationOfPeriod();

	@Override
	public native Vector<Integer> ReceivedBytesPerTrace();

	@Override
	protected native long initialiseCppClass();

	@Override
	protected native void destoryCppClass();
	
	public native void    SetStartOfPeriod        (String startOfPeriod);
	public native void    SetDurationOfPeriod     (long duration);
	public native void    AddReceivedBytes        (int numberOfBytes);

}
