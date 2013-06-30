package net.bitmovin.libdash.mpd;

import java.util.Vector;

public class ContentComponent extends AbstractMPDElement implements
		IContentComponent {

	public ContentComponent() {
	}

	public ContentComponent(long cppThis) {
		super(cppThis);
	}

	@Override
	public native Vector<IDescriptor> GetAccessibility();
	@Override
	public native Vector<IDescriptor> GetRole();
	@Override
	public native Vector<IDescriptor> GetRating();
	@Override
	public native Vector<IDescriptor> GetViewpoint();
	@Override
	public native int GetId();
	@Override
	public native String GetLang();
	@Override
	public native String GetContentType();
	@Override
	public native String GetPar();
	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();
	
	public native void    AddAccessibity  (Descriptor accessibility);
	public native void    AddRole         (Descriptor role);
	public native void    AddRating       (Descriptor rating);
	public native void    AddViewpoint    (Descriptor viewpoint);
	public native void    SetId           (int id);
	public native void    SetLang         (String lang);
	public native void    SetContentType  (String contentType);
	public native void    SetPar          (String par);
}
