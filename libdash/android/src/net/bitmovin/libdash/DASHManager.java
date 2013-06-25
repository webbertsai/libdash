package net.bitmovin.libdash;

import net.bitmovin.libdash.helper.CppClassInstance;
import net.bitmovin.libdash.mpd.IMPD;

public class DASHManager extends CppClassInstance implements IDASHManager {

	@Override
	public native IMPD Open(String path);

	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();

}
