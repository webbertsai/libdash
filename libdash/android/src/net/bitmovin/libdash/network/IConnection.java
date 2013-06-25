package net.bitmovin.libdash.network;

import net.bitmovin.libdash.metrics.IDASHMetrics;

public interface IConnection extends IDASHMetrics {
	int Read (byte [] data, int len, IChunk chunk);
    int Peek (byte [] data, int len, IChunk chunk);
}
