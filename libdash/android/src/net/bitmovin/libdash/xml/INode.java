package net.bitmovin.libdash.xml;

import java.util.Map;
import java.util.Vector;

public interface INode {
	Vector<INode>		GetNodes            ();
    Vector<String>		GetAttributeKeys    ();
    String				GetName             ();
    String              GetText             ();
    Map<String, String>	GetAttributes       ();
    int                 GetType             ();
    String              GetAttributeValue   (String key);
    boolean             HasAttribute        (String name);
    boolean             HasText             ();
}
