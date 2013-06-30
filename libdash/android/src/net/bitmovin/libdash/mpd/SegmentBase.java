package net.bitmovin.libdash.mpd;

public abstract class SegmentBase extends AbstractMPDElement implements ISegmentBase {

	public SegmentBase() {
	}

	public SegmentBase(long cppThis) {
		super(cppThis);
	}

	@Override
	public native IURLType GetInitialization();

	@Override
	public native IURLType GetRepresentationIndex();

	@Override
	public native int GetTimescale();

	@Override
	public native int GetPresentationTimeOffset();

	@Override
	public native String GetIndexRange();

	@Override
	public native boolean HasIndexRangeExact();

	public native void    SetInitialization           (URLType initialization);
	public native void    SetRepresentationIndex      (URLType representationIndex);
	public native void    SetTimescale                (int timescale);
	public native void    SetPresentationTimeOffset   (int presentationTimeOffset);
	public native void    SetIndexRange               (String indexRange);
	public native void    SetIndexRangeExact          (boolean indexRangeExact);

}
