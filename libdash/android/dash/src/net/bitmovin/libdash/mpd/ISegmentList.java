package net.bitmovin.libdash.mpd;

import java.util.Vector;

public interface ISegmentList extends IMultipleSegmentBase {
	Vector<ISegmentURL>   GetSegmentURLs  ();
    String                GetXlinkHref    ();
    String                GetXlinkActuate ();
}
