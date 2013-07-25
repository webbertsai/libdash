package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

public interface IContentComponent extends IMPDElement {
	ArrayList<IDescriptor> GetAccessibility    ();
	ArrayList<IDescriptor> GetRole             ();
	ArrayList<IDescriptor> GetRating           ();
	ArrayList<IDescriptor> GetViewpoint        ();
    int					GetId               ();
    String              GetLang             ();
    String              GetContentType      ();
    String              GetPar              ();
}
