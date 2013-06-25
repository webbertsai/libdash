package net.bitmovin.libdash.mpd;

import java.util.Vector;

public interface IBaseUrl extends IMPDElement {
	String 		GetUrl               ();
    String 		GetServiceLocation   ();
    String 		GetByteRange         ();
    ISegment	ToMediaSegment      (Vector<IBaseUrl> baseurls);
}
