package net.bitmovin.libdash.mpd;

import net.bitmovin.libdash.helper.CppClassInstance;


public abstract class AbstractMPDElement extends CppClassInstance implements
		IMPDElement {

	public AbstractMPDElement() {
	}

	public AbstractMPDElement(long cppThis) {
		super(cppThis);
	}
	
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
