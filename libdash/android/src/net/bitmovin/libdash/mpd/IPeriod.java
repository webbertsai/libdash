package net.bitmovin.libdash.mpd;

import java.util.Vector;

public interface IPeriod extends IMPDElement {
	Vector<IBaseUrl>          GetBaseURLs             ();
    ISegmentBase              GetSegmentBase          ();
    ISegmentList              GetSegmentList          ();
    ISegmentTemplate          GetSegmentTemplate      ();
    Vector<IAdaptationSet>    GetAdaptationSets       ();
    Vector<ISubset>           GetSubsets              ();
    String 					  GetXlinkHref            ();
    String 					  GetXlinkActuate         ();
    String 					  GetId                   ();
    String 					  GetStart                ();
    String 					  GetDuration             ();
    boolean                   GetBitstreamSwitching   ();
}
