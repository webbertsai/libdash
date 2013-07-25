package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

public interface ISegmentTimeline extends IMPDElement {
	ArrayList<ITimeline>   GetTimelines ();
}
