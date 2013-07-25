package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.ArrayList;

import net.bitmovin.libdash.xml.INode;

public class SegmentTimeline extends AbstractMPDElement implements
		ISegmentTimeline {

	public SegmentTimeline() {
	}

	public SegmentTimeline(long cppThis) {
		super(cppThis);
	}

	@Override
	public native ArrayList<ITimeline> GetTimelines();
	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();
	
	public native void AddTimeline(Timeline timeline);
	
	@Override
	public native ArrayList<INode> GetAdditionalSubNodes();
	@Override
	public native TreeMap<String, String> GetRawAttributes();

}
