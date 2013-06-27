package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.Vector;

import net.bitmovin.libdash.helper.CppClassInstance;
import net.bitmovin.libdash.xml.INode;

public abstract class AbstractMPDElement extends CppClassInstance implements
		IMPDElement {

	public AbstractMPDElement() {
	}

	public AbstractMPDElement(long cppThis) {
		super(cppThis);
	}

	@Override
	public native Vector<INode> GetAdditionalSubNodes();

	@Override
	public native TreeMap<String, String> GetRawAttributes();

}
