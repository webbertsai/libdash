package net.bitmovin.libdash.xml;

import java.util.ArrayList;

public class DOMHelper {

    public static native ArrayList<Node> GetElementByTagName      (Node root, String name, boolean selfContain);
    public static native ArrayList<Node> GetChildElementByTagName (Node root, String name);
    
}
