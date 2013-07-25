package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.ArrayList;

import net.bitmovin.libdash.xml.INode;

public class Metrics extends AbstractMPDElement implements IMetrics {

	Metrics() {
	}
	
	Metrics(long cppThis) {
		super(cppThis);
	}
	
	@Override
	public native ArrayList<IDescriptor> GetReportings();

	@Override
	public native ArrayList<IRange> GetRanges();

	@Override
	public native String GetMetrics();

	@Override
	protected native long initialiseCppClass();

	@Override
	protected native void destoryCppClass();
	
	public native void    AddReporting    (Descriptor reporting);
	public native void    AddRange        (Range range);
	public native void    SetMetrics      (String metrics);
	

	@Override
	public native ArrayList<INode> GetAdditionalSubNodes();

	@Override
	public native TreeMap<String, String> GetRawAttributes();

}
