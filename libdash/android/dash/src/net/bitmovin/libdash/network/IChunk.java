package net.bitmovin.libdash.network;

public interface IChunk {
	String    											AbsoluteURI     ();
    String    											Host            ();
    int          										Port            ();
    String    											Path            ();
    String    											Range           ();
    int          										StartByte       ();
    int          										EndByte         ();
    boolean            									HasByteRange    ();
    net.bitmovin.libdash.metrics.HTTPTransactionType	GetType  		();
}
