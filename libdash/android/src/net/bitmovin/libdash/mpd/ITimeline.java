package net.bitmovin.libdash.mpd;

public interface ITimeline extends IMPDElement {
	int GetStartTime    ();
    int GetDuration     ();
    int GetRepeatCount  ();
}
