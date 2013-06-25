package net.bitmovin.libdash.mpd;

import java.util.Vector;

public interface IURLType extends IMPDElement {
	String  	GetSourceURL    ();
    String  	GetRange        ();
    ISegment    ToSegment       (Vector<IBaseUrl> baseurls);
}
