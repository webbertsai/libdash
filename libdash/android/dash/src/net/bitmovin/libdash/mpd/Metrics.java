package net.bitmovin.libdash.mpd;

import java.util.Vector;

public class Metrics extends AbstractMPDElement implements IMetrics {

	Metrics() {
	}
	
	Metrics(long cppThis) {
		super(cppThis);
	}
	
	@Override
	public native Vector<IDescriptor> GetReportings();

	@Override
	public native Vector<IRange> GetRanges();

	@Override
	public native String GetMetrics();

	@Override
	protected native long initialiseCppClass();

	@Override
	protected native void destoryCppClass();
	
	public native void    AddReporting    (Descriptor reporting);
	public native void    AddRange        (Range range);
	public native void    SetMetrics      (String metrics);

}
