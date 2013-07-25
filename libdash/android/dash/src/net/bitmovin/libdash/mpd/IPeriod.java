package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

public interface IPeriod extends IMPDElement {
	ArrayList<IBaseUrl>          GetBaseURLs             ();
    ISegmentBase              GetSegmentBase          ();
    ISegmentList              GetSegmentList          ();
    ISegmentTemplate          GetSegmentTemplate      ();
    ArrayList<IAdaptationSet>    GetAdaptationSets       ();
    ArrayList<ISubset>           GetSubsets              ();
    String 					  GetXlinkHref            ();
    String 					  GetXlinkActuate         ();
    String 					  GetId                   ();
    String 					  GetStart                ();
    String 					  GetDuration             ();
    boolean                   GetBitstreamSwitching   ();
}
