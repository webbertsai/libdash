package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

public interface IRepresentation extends IRepresentationBase {
	ArrayList<IBaseUrl>              GetBaseURLs                 ();
	ArrayList<ISubRepresentation>    GetSubRepresentations       ();
    ISegmentBase                  GetSegmentBase              ();
    ISegmentList                  GetSegmentList              ();
    ISegmentTemplate              GetSegmentTemplate          ();
    String                        GetId                       ();
    int                           GetBandwidth                ();
    int                           GetQualityRanking           ();
    ArrayList<String>             	  GetDependencyId             ();
    ArrayList<String>                GetMediaStreamStructureId   ();
}
