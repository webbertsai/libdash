package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.ArrayList;

import net.bitmovin.libdash.xml.INode;

public class ProgramInformation extends AbstractMPDElement implements
		IProgramInformation {

	@Override
	public native String GetTitle();

	@Override
	public native String GetSource();

	@Override
	public native String GetCopyright();
	
	@Override
	public native String GetLang();

	@Override
	public native String GetMoreInformationURL();

	@Override
	protected native long initialiseCppClass();

	@Override
	protected native void destoryCppClass();
	
	public native void    SetTitle                (String title);
	public native void    SetSource               (String source);
	public native void    SetCopyright            (String copyright);
	public native void    SetLang                 (String lang);
	public native void    SetMoreInformationURL   (String moreInformationURL);
	
	@Override
	public native ArrayList<INode> GetAdditionalSubNodes();
	@Override
	public native TreeMap<String, String> GetRawAttributes();

}
