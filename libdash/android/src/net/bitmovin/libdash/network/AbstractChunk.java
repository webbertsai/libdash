package net.bitmovin.libdash.network;

import java.util.ArrayList;

import net.bitmovin.libdash.helper.CppClassInstance;
import net.bitmovin.libdash.metrics.IHTTPTransaction;
import net.bitmovin.libdash.metrics.ITCPConnection;

public abstract class AbstractChunk extends CppClassInstance implements
		IDownloadableChunk {

	public AbstractChunk() {
	}

	public AbstractChunk(long cppThis) {
		super(cppThis);
	}

	@Override
	public native ArrayList<ITCPConnection> GetTCPConnectionList();

	@Override
	public native ArrayList<IHTTPTransaction> GetHTTPTransactionList();

	@Override
	public native boolean StartDownload();

	@Override
	public native boolean StartDownload(IConnection connection);

	@Override
	public native void AbortDownload();
	
	@Override
	public native byte[] Read(int len);

	@Override
	public native byte[] Peek(int len);

	@Override
	public native void AttachDownloadObserver(IDownloadObserver observer);

	@Override
	public native void DetachDownloadObserver(IDownloadObserver observer);
	
	public native void NotifyDownloadRateChanged ();

}
