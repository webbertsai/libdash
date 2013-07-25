package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.ArrayList;

import net.bitmovin.libdash.xml.INode;

public class SegmentURL extends AbstractMPDElement implements ISegmentURL {

	public SegmentURL() {
	}

	public SegmentURL(long cppThis) {
		super(cppThis);
	}

	@Override
	public native String GetMediaURI();
	@Override
	public native String GetMediaRange();
	@Override
	public native String GetIndexURI();
	@Override
	public native String GetIndexRange();
	@Override
	public native ISegment ToMediaSegment(ArrayList<IBaseUrl> baseurls);
	@Override
	public native ISegment ToIndexSegment(ArrayList<IBaseUrl> baseurls);
	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();
	
	public native void    SetMediaURI     (String mediaURI);
	public native void    SetMediaRange   (String mediaRange);
	public native void    SetIndexURI     (String indexURI);
	public native void    SetIndexRange   (String indexRange);
	
	@Override
	public native ArrayList<INode> GetAdditionalSubNodes();
	@Override
	public native TreeMap<String, String> GetRawAttributes();
	
}
