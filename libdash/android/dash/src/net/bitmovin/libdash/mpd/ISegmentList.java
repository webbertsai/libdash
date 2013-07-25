package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

public interface ISegmentList extends IMultipleSegmentBase {
	ArrayList<ISegmentURL>   GetSegmentURLs  ();
    String                GetXlinkHref    ();
    String                GetXlinkActuate ();
}
