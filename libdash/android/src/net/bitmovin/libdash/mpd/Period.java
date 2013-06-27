package net.bitmovin.libdash.mpd;

import java.util.Vector;

public class Period extends AbstractMPDElement implements IPeriod {

	@Override
	public native Vector<IBaseUrl> GetBaseURLs();

	@Override
	public native ISegmentBase GetSegmentBase();

	@Override
	public native ISegmentList GetSegmentList();

	@Override
	public native ISegmentTemplate GetSegmentTemplate();

	@Override
	public native Vector<IAdaptationSet> GetAdaptationSets();

	@Override
	public native Vector<ISubset> GetSubsets();

	@Override
	public native String GetXlinkHref();

	@Override
	public native String GetXlinkActuate();

	@Override
	public native String GetId();

	@Override
	public native String GetStart();

	@Override
	public native String GetDuration();

	@Override
	public native boolean GetBitstreamSwitching();

	@Override
	protected native long initialiseCppClass();

	@Override
	protected native void destoryCppClass();
	
	public native void    AddBaseURL                  (BaseUrl baseURL);
	public native void    SetSegmentBase              (SegmentBase segmentBase);
	public native void    SetSegmentList              (SegmentList segmentList);
	public native void    SetSegmentTemplate          (SegmentTemplate segmentTemplate);
	public native void    AddAdaptationSet            (AdaptationSet AdaptationSet);
	public native void    AddSubset                   (Subset subset);
	public native void    SetXlinkHref                (String xlinkHref);
	public native void    SetXlinkActuate             (String xlinkActuate);
	public native void    SetId                       (String id);
	public native void    SetStart                    (String start);
	public native void    SetDuration                 (String duration);
	public native void    SetBitstreamSwitching       (boolean value);

}
