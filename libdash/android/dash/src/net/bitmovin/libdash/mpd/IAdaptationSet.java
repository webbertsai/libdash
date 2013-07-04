package net.bitmovin.libdash.mpd;

import java.util.Vector;

public interface IAdaptationSet extends IRepresentationBase {
	Vector<IDescriptor>       GetAccessibility                ();
    Vector<IDescriptor>       GetRole                         ();
    Vector<IDescriptor>       GetRating                       ();
    Vector<IDescriptor>       GetViewpoint                    ();
    Vector<IContentComponent> GetContentComponent             ();
    Vector<IBaseUrl>          GetBaseURLs                     ();
    ISegmentBase              GetSegmentBase                  ();
    ISegmentList              GetSegmentList                  ();
    ISegmentTemplate          GetSegmentTemplate              ();
    Vector<IRepresentation>   GetRepresentation               ();
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
