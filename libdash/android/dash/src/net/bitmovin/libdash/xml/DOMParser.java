package net.bitmovin.libdash.xml;

import net.bitmovin.libdash.helper.CppClassInstance;

public class DOMParser extends CppClassInstance {
	String url;

	public DOMParser(String url) {
		this.url = url;
	}
	
	public DOMParser(long cppThis) {
		super(cppThis);
	}

	@Override
	protected long initialiseCppClass() {
		return initialiseCppClass(this.url);
	}
	private native long initialiseCppClass(String url);

	@Override
	protected native void destoryCppClass();
	
	public native boolean   Parse       ();
	public native Node    	GetRootNode ();
	public native void    	Print       ();

}
