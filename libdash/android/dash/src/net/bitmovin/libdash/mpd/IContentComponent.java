package net.bitmovin.libdash.mpd;

import java.util.Vector;

public interface IContentComponent extends IMPDElement {
	Vector<IDescriptor> GetAccessibility    ();
    Vector<IDescriptor> GetRole             ();
    Vector<IDescriptor> GetRating           ();
    Vector<IDescriptor> GetViewpoint        ();
    int					GetId               ();
    String              GetLang             ();
    String              GetContentType      ();
    String              GetPar              ();
}
