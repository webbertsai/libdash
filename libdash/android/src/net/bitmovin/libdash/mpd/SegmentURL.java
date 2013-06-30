package net.bitmovin.libdash.mpd;

import java.util.Vector;

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
	public native ISegment ToMediaSegment(Vector<IBaseUrl> baseurls);
	@Override
	public native ISegment ToIndexSegment(Vector<IBaseUrl> baseurls);
	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();
	
	public native void    SetMediaURI     (String mediaURI);
	public native void    SetMediaRange   (String mediaRange);
	public native void    SetIndexURI     (String indexURI);
	public native void    SetIndexRange   (String indexRange);
	
}
