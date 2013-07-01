package net.bitmovin.libdash.mpd;

import java.util.Vector;

public interface IMetrics extends IMPDElement {
	Vector<IDescriptor>   GetReportings   ();
    Vector<IRange>        GetRanges       ();
    String                GetMetrics      ();
}
