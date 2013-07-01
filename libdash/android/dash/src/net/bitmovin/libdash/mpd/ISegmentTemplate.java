package net.bitmovin.libdash.mpd;

import java.util.Vector;

public interface ISegmentTemplate extends IMultipleSegmentBase {
	String Getmedia                    	 ();
    String Getindex                    	 ();
    String Getinitialization           	 ();
    String GetbitstreamSwitching       	 ();
    ISegment ToInitializationSegment     (Vector<IBaseUrl>baseurls, String representationID, int bandwidth);
    ISegment ToBitstreamSwitchingSegment (Vector<IBaseUrl>baseurls, String representationID, int bandwidth);
    ISegment GetMediaSegmentFromNumber   (Vector<IBaseUrl>baseurls, String representationID, int bandwidth, int number);
    ISegment GetIndexSegmentFromNumber   (Vector<IBaseUrl>baseurls, String representationID, int bandwidth, int number);
    ISegment GetMediaSegmentFromTime     (Vector<IBaseUrl>baseurls, String representationID, int bandwidth, int time);
    ISegment GetIndexSegmentFromTime     (Vector<IBaseUrl>baseurls, String representationID, int bandwidth, int time);
}
