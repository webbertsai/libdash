package net.bitmovin.libdash.mpd;

public interface ISegment extends net.bitmovin.libdash.network.IDownloadableChunk {
	void    AbsoluteURI  (String uri);
    void    Host         (String host);
    void    Port         (int port);
    void    Path         (String path);
    void    Range        (String range);
    void    StartByte    (int startByte);
    void    EndByte      (int endByte);
    void    HasByteRange (boolean hasByteRange);
}
