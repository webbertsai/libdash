package net.bitmovin.libdash.mpd;

public class Descriptor extends AbstractMPDElement implements IDescriptor {

	public Descriptor() {
	}

	public Descriptor(long cppThis) {
		super(cppThis);
	}

	@Override
	public native String GetSchemeIdUri();

	@Override
	public native String GetValue();

	@Override
	protected native long initialiseCppClass();

	@Override
	protected native void destoryCppClass();
	
    public native void    SetValue        (String value);
    public native void    SetSchemeIdUri  (String schemeIdUri);

}
