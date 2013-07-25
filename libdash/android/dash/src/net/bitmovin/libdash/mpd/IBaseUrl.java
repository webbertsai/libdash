package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

public interface IBaseUrl extends IMPDElement {
	String 		GetUrl               ();
    String 		GetServiceLocation   ();
    String 		GetByteRange         ();
    ISegment	ToMediaSegment      (ArrayList<IBaseUrl> baseurls);
}
