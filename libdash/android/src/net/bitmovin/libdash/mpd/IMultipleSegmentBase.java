package net.bitmovin.libdash.mpd;

public interface IMultipleSegmentBase extends ISegmentBase {
	ISegmentTimeline     GetSegmentTimeline      ();
    IURLType             GetBitstreamSwitching   ();
    int                  GetDuration             ();
    int                  GetStartNumber          ();
}
