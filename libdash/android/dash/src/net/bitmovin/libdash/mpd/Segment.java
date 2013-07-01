package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

import net.bitmovin.libdash.metrics.HTTPTransactionType;
import net.bitmovin.libdash.network.AbstractChunk;

public class Segment extends AbstractChunk implements ISegment {

	public Segment() {
	}

	public Segment(long cppThis) {
		super(cppThis);
	}

	@Override
	public native String AbsoluteURI();
	@Override
	public native String Host();
	@Override
	public native int Port();
	@Override
	public native String Path();
	@Override
	public native String Range();
	@Override
	public native int StartByte();
	@Override
	public native int EndByte();
	@Override
	public native boolean HasByteRange();
	@Override
	public HTTPTransactionType GetType()
	{
		return HTTPTransactionType.values()[GetTypeNative()];
	}
	public native int GetTypeNative();
	
	@Override
	public native void AbsoluteURI(String uri);
	@Override
	public native void Host(String host);
	@Override
	public native void Port(int port);
	@Override
	public native void Path(String path);
	@Override
	public native void Range(String range);
	@Override
	public native void StartByte(int startByte);
	@Override
	public native void EndByte(int endByte);
	@Override
	public native void HasByteRange(boolean hasByteRange);
	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();
	
	public native boolean Init(ArrayList<IBaseUrl> baseurls, String uri, String range, HTTPTransactionType type);
}
