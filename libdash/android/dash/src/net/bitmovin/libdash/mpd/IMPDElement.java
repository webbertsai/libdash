package net.bitmovin.libdash.mpd;

import java.util.ArrayList;
import java.util.TreeMap;

import net.bitmovin.libdash.xml.INode;

public interface IMPDElement {
	ArrayList<INode>		GetAdditionalSubNodes	();
	TreeMap<String, String>							GetRawAttributes        ();
}
