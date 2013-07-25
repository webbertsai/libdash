package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.ArrayList;

import net.bitmovin.libdash.xml.INode;

public class SegmentList extends MultipleSegmentBase implements ISegmentList {

	public SegmentList() {
	}

	public SegmentList(long cppThis) {
		super(cppThis);
	}

	@Override
	public native ArrayList<ISegmentURL> GetSegmentURLs();
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

	@Override
	public native ArrayList<INode> GetAdditionalSubNodes();
	@Override
	public native TreeMap<String, String> GetRawAttributes();
}
