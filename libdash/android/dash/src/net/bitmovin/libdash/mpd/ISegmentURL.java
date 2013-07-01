package net.bitmovin.libdash.mpd;

import java.util.Vector;

public interface ISegmentURL extends IMPDElement {
	String GetMediaURI     	();
    String GetMediaRange   	();
    String GetIndexURI     	();
    String GetIndexRange   	();
    ISegment ToMediaSegment (Vector<IBaseUrl> baseurls);
    ISegment ToIndexSegment (Vector<IBaseUrl> baseurls);
}
