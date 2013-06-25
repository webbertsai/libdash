package net.bitmovin.libdash.mpd;

import java.util.Map;
import java.util.Vector;

public interface IMPDElement {
	Vector<net.bitmovin.libdash.xml.INode>		GetAdditionalSubNodes	();
    Map<String, String>							GetRawAttributes        ();
}
