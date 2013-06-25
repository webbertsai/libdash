package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

public interface IMPD extends IMPDElement, net.bitmovin.libdash.metrics.IDASHMetrics {
	ArrayList<IProgramInformation>  GetProgramInformations          ();
	ArrayList<IBaseUrl>             GetBaseUrls                     ();
    ArrayList<String>             	GetLocations                    ();
    ArrayList<IPeriod>              GetPeriods                      ();
    ArrayList<IMetrics>             GetMetrics                      ();
    String                        	GetId                           ();
    ArrayList<String>             	GetProfiles                     ();
    String                          GetType                         ();
    String                          GetAvailabilityStarttime        ();
    String                          GetAvailabilityEndtime          ();
    String                          GetMediaPresentationDuration    ();
    String                          GetMinimumUpdatePeriod          ();
    String                          GetMinBufferTime                ();
    String                          GetTimeShiftBufferDepth         ();
    String                          GetSuggestedPresentationDelay   ();
    String                          GetMaxSegmentDuration           ();
    String                          GetMaxSubsegmentDuration        ();
    IBaseUrl                        GetMPDPathBaseUrl               ();
    int                             GetFetchTime                    ();
}
