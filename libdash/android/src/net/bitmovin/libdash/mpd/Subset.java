package net.bitmovin.libdash.mpd;

import java.util.Vector;

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
}
