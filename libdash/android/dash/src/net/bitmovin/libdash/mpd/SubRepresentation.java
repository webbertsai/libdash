package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.ArrayList;

import net.bitmovin.libdash.xml.INode;

public class SubRepresentation extends RepresentationBase implements
		ISubRepresentation {

	public SubRepresentation() {
	}

	public SubRepresentation(long cppThis) {
		super(cppThis);
	}

	@Override
	public native int GetLevel();
	@Override
	public native ArrayList<Integer> GetDependencyLevel();
	@Override
	public native int GetBandWidth();
	@Override
	public native ArrayList<String> GetContentComponent();
	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();
	
	public native void    SetLevel                    (int level);
	public native void    SetDependencyLevel          (String dependencyLevel);
	public native void    SetBandWidth                (int bandWidth);
	public native void    SetContentComponent         (String contentComponent);
	
	@Override
	public native ArrayList<INode> GetAdditionalSubNodes();
	@Override
	public native TreeMap<String, String> GetRawAttributes();
}
