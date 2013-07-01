package net.bitmovin.libdash.network;

import net.bitmovin.libdash.helper.CppClassInstance;

public class DownloadStateManager extends CppClassInstance {

	public DownloadStateManager() {
	}

	public DownloadStateManager(long cppThis) {
		super(cppThis);
	}
	
	public DownloadState   		  State           () {
		return DownloadState.values()[StateNative()];
	}
	public native int   		  StateNative     ();
	public native void            WaitState       (DownloadState state);
	public native void            CheckAndWait    (DownloadState check, DownloadState wait);
	public native void            CheckAndSet     (DownloadState check, DownloadState set);
	public native void            State           (DownloadState state);
	public native void            Attach          (IDownloadObserver observer);
	public native void            Detach          (IDownloadObserver observer);

	@Override
	protected native long initialiseCppClass();

	@Override
	protected native void destoryCppClass();
}
