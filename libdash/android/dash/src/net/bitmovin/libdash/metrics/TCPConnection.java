package net.bitmovin.libdash.metrics;

import net.bitmovin.libdash.helper.CppClassInstance;

public class TCPConnection extends CppClassInstance implements ITCPConnection {

	public TCPConnection() {
	}

	public TCPConnection(long cppThis) {
		super(cppThis);
	}

	@Override
	public native int TCPId();

	@Override
	public native String DestinationAddress();

	@Override
	public native String ConnectionOpenedTime();

	@Override
	public native String ConnectionClosedTime();

	@Override
	public native long ConnectionTime();

	@Override
	protected native long initialiseCppClass();

	@Override
	protected native void destoryCppClass();
	
	public native void    SetTCPId                (int tcpId);
	public native void    SetDestinationAddress   (String destAddress);
	public native void    SetConnectionOpenedTime (String tOpen);
	public native void    SetConnectionClosedTime (String tClose);
	public native void    SetConnectionTime       (long tConnect);

}
