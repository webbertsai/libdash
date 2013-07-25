package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

public interface IURLType extends IMPDElement {
	String  	GetSourceURL    ();
    String  	GetRange        ();
    ISegment    ToSegment       (ArrayList<IBaseUrl> baseurls);
}
