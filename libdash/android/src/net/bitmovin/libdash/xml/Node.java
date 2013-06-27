package net.bitmovin.libdash.xml;

import java.util.Map;
import java.util.Vector;

import net.bitmovin.libdash.helper.CppClassInstance;
import net.bitmovin.libdash.mpd.MPD;

public class Node extends CppClassInstance implements INode {

	public Node() {
	}

	public Node(long cppThis) {
		super(cppThis);
	}

	@Override
	public native Vector<INode> GetNodes();
	@Override
	public native Vector<String> GetAttributeKeys();
	@Override
	public native String GetName();
	@Override
	public native String GetText();
	@Override
	public native Map<String, String> GetAttributes();
	@Override
	public native int GetType();
	@Override
	public native String GetAttributeValue(String key);
	@Override
	public native boolean HasAttribute(String name);
	@Override
	public native boolean HasText();
	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();
	
	public native void                                        SetType             (int type);
	public native void                                        AddSubNode          (Node node);
	public native void                                        SetName             (String name);
	public native void                                        AddAttribute        (String key, String value);
	public native void                                        SetText             (String text);
	public native MPD                              			  ToMPD               ();
	public native void                                        SetMPDPath          (String path);
}
