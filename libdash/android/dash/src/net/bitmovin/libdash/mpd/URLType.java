package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.Vector;

import net.bitmovin.libdash.metrics.HTTPTransactionType;
import net.bitmovin.libdash.xml.INode;

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
	
	@Override
	public native Vector<INode> GetAdditionalSubNodes();
	@Override
	public native TreeMap<String, String> GetRawAttributes();

}
