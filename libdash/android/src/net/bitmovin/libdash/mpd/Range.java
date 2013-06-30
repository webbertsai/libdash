package net.bitmovin.libdash.mpd;

import net.bitmovin.libdash.helper.CppClassInstance;

public class Range extends CppClassInstance implements IRange {

	public Range() {
	}
	
	public Range(long cppThis) {
		super(cppThis);
	}

	@Override
	public native String GetStarttime();
	@Override
	public native String GetDuration();
	
	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();

	public native void    SetStarttime    (String start);
	public native void    SetDuration     (String duration);

}

	