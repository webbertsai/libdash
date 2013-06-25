package net.bitmovin.libdash.network;

public interface IDownloadableChunk extends IChunk, net.bitmovin.libdash.metrics.IDASHMetrics {
	boolean	StartDownload       	();
    boolean	StartDownload        	(IConnection connection);
    void    AbortDownload           ();
    int     Read                    (byte [] data, int len);
    int     Peek                    (byte [] data, int len);
    void    AttachDownloadObserver  (IDownloadObserver observer);
    void    DetachDownloadObserver  (IDownloadObserver observer);
}
