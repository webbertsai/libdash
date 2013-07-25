package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

public interface ISegmentURL extends IMPDElement {
	String GetMediaURI     	();
    String GetMediaRange   	();
    String GetIndexURI     	();
    String GetIndexRange   	();
    ISegment ToMediaSegment (ArrayList<IBaseUrl> baseurls);
    ISegment ToIndexSegment (ArrayList<IBaseUrl> baseurls);
}
