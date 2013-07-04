package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.Vector;

import net.bitmovin.libdash.xml.INode;

public class Timeline extends AbstractMPDElement implements ITimeline {

	public Timeline() {
	}

	public Timeline(long cppThis) {
		super(cppThis);
	}

	@Override
	public native int GetStartTime();
	@Override
	public native int GetDuration();
	@Override
	public native int GetRepeatCount();
	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();
	
	public native void    SetStartTime    (int startTime);
	public native void    SetDuration     (int duration);
	public native void    SetRepeatCount  (int repeatCount);
	
	@Override
	public native Vector<INode> GetAdditionalSubNodes();
	@Override
	public native TreeMap<String, String> GetRawAttributes();

}
