package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

public interface ISubRepresentation extends IRepresentationBase {
	int               GetLevel            ();
    ArrayList<Integer>   GetDependencyLevel  ();
    int               GetBandWidth        ();
    ArrayList<String>    GetContentComponent ();
}
