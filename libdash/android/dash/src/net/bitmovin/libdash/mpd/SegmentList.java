package net.bitmovin.libdash.mpd;

import java.util.Vector;

public class SegmentList extends MultipleSegmentBase implements ISegmentList {

	public SegmentList() {
	}

	public SegmentList(long cppThis) {
		super(cppThis);
	}

	@Override
	public native Vector<ISegmentURL> GetSegmentURLs();
	@Override
	public native String GetXlinkHref();
	@Override
	public native String GetXlinkActuate();

	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();
	
	public native void    AddSegmentURL   (SegmentURL segmetURL);
	public native void    SetXlinkHref    (String xlinkHref);
	public native void    SetXlinkActuate (String xlinkActuate);

}
