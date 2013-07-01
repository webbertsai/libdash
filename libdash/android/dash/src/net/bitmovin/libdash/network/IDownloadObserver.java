package net.bitmovin.libdash.network;

public interface IDownloadObserver {
	void OnDownloadRateChanged  (long bytesDownloaded);
    void OnDownloadStateChanged (DownloadState state);
}
