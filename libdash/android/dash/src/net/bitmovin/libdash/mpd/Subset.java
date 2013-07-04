package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.Vector;

import net.bitmovin.libdash.xml.INode;

public class Subset extends AbstractMPDElement implements ISubset {

	public Subset() {
	}

	public Subset(long cppThis) {
		super(cppThis);
	}

	@Override
	public native Vector<Integer> Contains();
	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();
	
	public native void SetSubset(String subset);
	
	@Override
	public native Vector<INode> GetAdditionalSubNodes();
	@Override
	public native TreeMap<String, String> GetRawAttributes();
}
