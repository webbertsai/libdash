package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.ArrayList;

import net.bitmovin.libdash.xml.INode;


public class BaseUrl extends AbstractMPDElement implements IBaseUrl {

	public BaseUrl() {
	}

	public BaseUrl(long cppThis) {
		super(cppThis);
	}

	@Override
	public native String GetUrl();

	@Override
	public native String GetServiceLocation();

	@Override
	public native String GetByteRange();

	@Override
	public native ISegment ToMediaSegment(ArrayList<IBaseUrl> baseurls);

	@Override
	protected native long initialiseCppClass();

	@Override
	protected native void destoryCppClass();
	
	public native void    SetUrl              (String url);
	public native void    SetServiceLocation  (String serviceLocation);
	public native void    SetByteRange        (String byteRange);

	@Override
	public native ArrayList<INode> GetAdditionalSubNodes();

	@Override
	public native TreeMap<String, String> GetRawAttributes();
}
