package net.bitmovin.libdash.mpd;

public class MultipleSegmentBase extends SegmentBase implements
		IMultipleSegmentBase {

	public MultipleSegmentBase() {
	}

	public MultipleSegmentBase(long cppThis) {
		super(cppThis);
	}

	@Override
	public native ISegmentTimeline GetSegmentTimeline();

	@Override
	public native IURLType GetBitstreamSwitching();

	@Override
	public native int GetDuration();

	@Override
	public native int GetStartNumber();
	
	public native void    SetSegmentTimeline      (SegmentTimeline segmentTimeline); // markus: CONTINUE work here
	public native void    SetBitstreamSwitching   (URLType bitstreamSwitching);
	public native void    SetDuration             (int duration);
	public native void    SetStartNumber          (int startNumber);


}
