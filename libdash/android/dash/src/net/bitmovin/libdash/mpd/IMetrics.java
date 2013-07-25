package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

public interface IMetrics extends IMPDElement {
	ArrayList<IDescriptor>   GetReportings   ();
	ArrayList<IRange>        GetRanges       ();
    String                GetMetrics      ();
}
