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
	
	/*public native void AddAdditionalSubNode    (INode node);
	public void AddRawAttributes        (TreeMap<String, String> attributes) {
		String keys[] = new String[attributes.size()];
		String values[] = new String[attributes.size()];
		
		int counter = 0;
		for(TreeMap.Entry<String, String> entry : attributes.entrySet()) {
			  String key = entry.getKey();
			  String value = entry.getValue();
			  
			  keys[counter] = key;
			  values[counter] = value;
			  
			  ++counter;
		}
		
		AddRawAttributesNative(keys, values);
	}
	public native void AddRawAttributesNative    (String keys[], String values[]);
	*/ // TODO: markus - not working
	

}
