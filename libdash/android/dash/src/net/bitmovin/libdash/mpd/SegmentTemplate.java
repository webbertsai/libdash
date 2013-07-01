package net.bitmovin.libdash.mpd;

import java.util.Vector;

public class SegmentTemplate extends MultipleSegmentBase implements
		ISegmentTemplate {

	public SegmentTemplate() {
	}

	public SegmentTemplate(long cppThis) {
		super(cppThis);
	}

	@Override
	public native String Getmedia();
	@Override
	public native String Getindex();
	@Override
	public native String Getinitialization();
	@Override
	public native String GetbitstreamSwitching();
	@Override
	public native ISegment ToInitializationSegment(Vector<IBaseUrl> baseurls, String representationID, int bandwidth);
	@Override
	public native ISegment ToBitstreamSwitchingSegment(Vector<IBaseUrl> baseurls, String representationID, int bandwidth);
	@Override
	public native ISegment GetMediaSegmentFromNumber(Vector<IBaseUrl> baseurls, String representationID, int bandwidth, int number);
	@Override
	public native ISegment GetIndexSegmentFromNumber(Vector<IBaseUrl> baseurls, String representationID, int bandwidth, int number);
	@Override
	public native ISegment GetMediaSegmentFromTime(Vector<IBaseUrl> baseurls, String representationID, int bandwidth, int time);
	@Override
	public native ISegment GetIndexSegmentFromTime(Vector<IBaseUrl> baseurls, String representationID, int bandwidth, int time);
	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();
	
	public native void    SetMedia                (String media);
	public native void    SetIndex                (String index);
	public native void    SetInitialization       (String initialization);
	public native void    SetBitstreamSwitching   (String bitstreamSwichting);

}
