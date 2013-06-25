package net.bitmovin.libdash.mpd;

public interface ISegmentBase extends IMPDElement {
	IURLType    GetInitialization           ();
    IURLType    GetRepresentationIndex      ();
    int         GetTimescale                ();
    int         GetPresentationTimeOffset   ();
    String  	GetIndexRange               ();
    boolean     HasIndexRangeExact          ();
}
