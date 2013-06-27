package net.bitmovin.libdash.mpd;

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

}
