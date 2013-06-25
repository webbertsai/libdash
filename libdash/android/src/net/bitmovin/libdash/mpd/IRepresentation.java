package net.bitmovin.libdash.mpd;

import java.util.Vector;

public interface IRepresentation extends IRepresentationBase {
	Vector<IBaseUrl>              GetBaseURLs                 ();
    Vector<ISubRepresentation>    GetSubRepresentations       ();
    ISegmentBase                  GetSegmentBase              ();
    ISegmentList                  GetSegmentList              ();
    ISegmentTemplate              GetSegmentTemplate          ();
    String                        GetId                       ();
    int                           GetBandwidth                ();
    int                           GetQualityRanking           ();
    Vector<String>             	  GetDependencyId             ();
    Vector<String>                GetMediaStreamStructureId   ();
}
