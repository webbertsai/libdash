package net.bitmovin.libdash.mpd;

import java.util.Vector;

public class Metrics extends AbstractMPDElement implements IMetrics {

	@Override
	public Vector<IDescriptor> GetReportings() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public Vector<IRange> GetRanges() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public String GetMetrics() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	protected long initialiseCppClass() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	protected void destoryCppClass() {
		// TODO Auto-generated method stub

	}
	
	public native void    AddReporting    (Descriptor reporting);
	public native void    AddRange        (Range range);
	public native void    SetMetrics      (String metrics);

}
