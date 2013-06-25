package net.bitmovin.libdash.mpd;

import java.util.Vector;

public interface ISubRepresentation extends IRepresentationBase {
	int               GetLevel            ();
    Vector<Integer>   GetDependencyLevel  ();
    int               GetBandWidth        ();
    Vector<String>    GetContentComponent ();
}
