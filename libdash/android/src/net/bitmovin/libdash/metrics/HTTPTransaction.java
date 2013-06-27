package net.bitmovin.libdash.metrics;

import java.util.Vector;

import net.bitmovin.libdash.helper.CppClassInstance;

public class HTTPTransaction extends CppClassInstance implements
		IHTTPTransaction {

	public HTTPTransaction() {
	}

	public HTTPTransaction(long cppThis) {
		super(cppThis);
	}

	@Override
	public native int TCPId();

	@Override
	public HTTPTransactionType Type() {
		return HTTPTransactionType.values()[TypeNative()];
	}
	private native int TypeNative();

	@Override
	public native String OriginalUrl();

	@Override
	public native String ActualUrl();

	@Override
	public native String Range();

	@Override
	public native String RequestSentTime();

	@Override
	public native String ResponseReceivedTime();

	@Override
	public native short ResponseCode();
	@Override
	public native long Interval();
	@Override
	public native Vector<IThroughputMeasurement> ThroughputTrace();

	@Override
	public native String HTTPHeader();
	
	public native void    SetTCPId                    (int tcpId);
	public native void    SetType                     (HTTPTransactionType type);
	public native void    SetOriginalUrl              (String origUrl);
	public native void    SetActualUrl                (String actUrl);
	public native void    SetRange                    (String range);
	public native void    SetRequestSentTime          (String tRequest);
	public native void    SetResponseReceivedTime     (String tResponse);
	public native void    SetResponseCode             (short respCode);
	public native void    SetInterval                 (int interval);
	public native void    AddThroughputMeasurement    (ThroughputMeasurement throuputEntry);
	public native void    AddHTTPHeaderLine           (String headerLine);
	
	@Override
	protected native long initialiseCppClass();

	@Override
	protected native void destoryCppClass();
}
