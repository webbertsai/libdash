package net.bitmovin.libdash.mpd;

import java.util.Vector;

import net.bitmovin.libdash.metrics.HTTPTransactionType;

public class URLType extends AbstractMPDElement implements IURLType {

	URLType() {
	}
	
	URLType(long cppThis) {
		super(cppThis);
	}
	
	@Override
	public native String GetSourceURL();

	@Override
	public native String GetRange();

	@Override
	public native ISegment ToSegment(Vector<IBaseUrl> baseurls);

	@Override
	protected native long initialiseCppClass();

	@Override
	protected native void destoryCppClass();
	
	public native void    SetSourceURL    (String sourceURL);
	public native void    SetRange        (String range);
	public native void    SetType         (HTTPTransactionType type);

}
