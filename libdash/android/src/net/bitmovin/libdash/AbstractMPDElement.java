package net.bitmovin.libdash;

import java.util.Map;
import java.util.Vector;

import net.bitmovin.libdash.helper.CppClassInstance;
import net.bitmovin.libdash.mpd.IMPDElement;
import net.bitmovin.libdash.xml.INode;

public abstract class AbstractMPDElement extends CppClassInstance implements
		IMPDElement {

	public AbstractMPDElement() {
	}

	public AbstractMPDElement(long cppThis) {
		super(cppThis);
	}

	@Override
	public Vector<INode> GetAdditionalSubNodes() {
		return null;
	}

	@Override
	public Map<String, String> GetRawAttributes() {
		return null;
	}

}
