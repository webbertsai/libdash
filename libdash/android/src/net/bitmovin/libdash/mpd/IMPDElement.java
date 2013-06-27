package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.Vector;

public interface IMPDElement {
	Vector<net.bitmovin.libdash.xml.INode>		GetAdditionalSubNodes	();
	TreeMap<String, String>							GetRawAttributes        ();
}
