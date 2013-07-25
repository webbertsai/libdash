package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

public interface ISegmentTemplate extends IMultipleSegmentBase {
	String Getmedia                    	 ();
    String Getindex                    	 ();
    String Getinitialization           	 ();
    String GetbitstreamSwitching       	 ();
    ISegment ToInitializationSegment     (ArrayList<IBaseUrl>baseurls, String representationID, int bandwidth);
    ISegment ToBitstreamSwitchingSegment (ArrayList<IBaseUrl>baseurls, String representationID, int bandwidth);
    ISegment GetMediaSegmentFromNumber   (ArrayList<IBaseUrl>baseurls, String representationID, int bandwidth, int number);
    ISegment GetIndexSegmentFromNumber   (ArrayList<IBaseUrl>baseurls, String representationID, int bandwidth, int number);
    ISegment GetMediaSegmentFromTime     (ArrayList<IBaseUrl>baseurls, String representationID, int bandwidth, int time);
    ISegment GetIndexSegmentFromTime     (ArrayList<IBaseUrl>baseurls, String representationID, int bandwidth, int time);
}
