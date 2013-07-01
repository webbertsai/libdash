package net.bitmovin.libdash.mpd;

public interface IProgramInformation extends IMPDElement {
	String GetTitle                ();
    String GetSource               ();
    String GetCopyright            ();
    String GetLang                 ();
    String GetMoreInformationURL   ();
}
