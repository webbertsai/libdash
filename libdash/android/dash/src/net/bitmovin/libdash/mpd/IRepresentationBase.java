package net.bitmovin.libdash.mpd;

import java.util.Vector;

public interface IRepresentationBase {

	Vector<IDescriptor>   	GetFramePacking                 ();
	Vector<IDescriptor>   	GetAudioChannelConfiguration    ();
    Vector<IDescriptor>   	GetContentProtection            ();
    Vector<String>     		GetProfiles                     ();
    int                     GetWidth                        ();
    int                     GetHeight                       ();
    String                  GetSar                          ();
    String                  GetFrameRate                    ();
    String                  GetAudioSamplingRate            ();
    String                  GetMimeType                     ();
    Vector<String>     		GetSegmentProfiles              ();
    Vector<String>     		GetCodecs                       ();
    double                  GetMaximumSAPPeriod             ();
    byte                    GetStartWithSAP                 ();
    double                  GetMaxPlayoutRate               ();
    boolean                 HasCodingDependency             ();
    String                  GetScanType                     ();
	
}
