package net.bitmovin.libdash.mpd;

import java.util.Vector;

public interface ISegmentTimeline extends IMPDElement {
	Vector<ITimeline>   GetTimelines ();
}
