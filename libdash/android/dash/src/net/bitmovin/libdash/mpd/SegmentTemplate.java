package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.ArrayList;

import net.bitmovin.libdash.xml.INode;

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
	public native ISegment ToInitializationSegment(ArrayList<IBaseUrl> baseurls, String representationID, int bandwidth);
	@Override
	public native ISegment ToBitstreamSwitchingSegment(ArrayList<IBaseUrl> baseurls, String representationID, int bandwidth);
	@Override
	public native ISegment GetMediaSegmentFromNumber(ArrayList<IBaseUrl> baseurls, String representationID, int bandwidth, int number);
	@Override
	public native ISegment GetIndexSegmentFromNumber(ArrayList<IBaseUrl> baseurls, String representationID, int bandwidth, int number);
	@Override
	public native ISegment GetMediaSegmentFromTime(ArrayList<IBaseUrl> baseurls, String representationID, int bandwidth, int time);
	@Override
	public native ISegment GetIndexSegmentFromTime(ArrayList<IBaseUrl> baseurls, String representationID, int bandwidth, int time);
	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();
	
	public native void    SetMedia                (String media);
	public native void    SetIndex                (String index);
	public native void    SetInitialization       (String initialization);
	public native void    SetBitstreamSwitching   (String bitstreamSwichting);
	
	@Override
	public native ArrayList<INode> GetAdditionalSubNodes();
	@Override
	public native TreeMap<String, String> GetRawAttributes();

}
