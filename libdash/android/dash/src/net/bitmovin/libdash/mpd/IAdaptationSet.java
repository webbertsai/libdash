package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

public interface IAdaptationSet extends IRepresentationBase {
	ArrayList<IDescriptor>       GetAccessibility                ();
	ArrayList<IDescriptor>       GetRole                         ();
    ArrayList<IDescriptor>       GetRating                       ();
    ArrayList<IDescriptor>       GetViewpoint                    ();
    ArrayList<IContentComponent> GetContentComponent             ();
    ArrayList<IBaseUrl>          GetBaseURLs                     ();
    ISegmentBase              GetSegmentBase                  ();
    ISegmentList              GetSegmentList                  ();
    ISegmentTemplate          GetSegmentTemplate              ();
    ArrayList<IRepresentation>   GetRepresentation               ();
    String                    GetXlinkHref                    ();
    String                    GetXlinkActuate                 ();
    int                       GetId                           ();
    int                       GetGroup                        ();
    String                    GetLang                         ();
    String                    GetContentType                  ();
    String                    GetPar                          ();
    int                       GetMinBandwidth                 ();
    int                       GetMaxBandwidth                 ();
    int                       GetMinWidth                     ();
    int                       GetMaxWidth                     ();
    int                       GetMinHeight                    ();
    int                       GetMaxHeight                    ();
    String                    GetMinFramerate                 ();
    String                    GetMaxFramerate                 ();
    boolean                   SegmentAlignmentIsBoolValue  ();
    boolean                   HasSegmentAlignment             ();
    int                       GetSegmentAligment              ();
    boolean                   SubsegmentAlignmentIsBoolValue ();
    boolean                   HasSubsegmentAlignment          ();
    int                       GetSubsegmentAlignment          ();
    byte                   	  GetSubsegmentStartsWithSAP      ();
    boolean                   GetBitstreamSwitching           ();
}
