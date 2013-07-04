package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.Vector;

import net.bitmovin.libdash.xml.INode;

public class AdaptationSet extends RepresentationBase implements IAdaptationSet {

	public AdaptationSet() {
	}

	public AdaptationSet(long cppThis) {
		super(cppThis);
	}

	@Override
	public native Vector<IDescriptor> GetAccessibility();
	@Override
	public native Vector<IDescriptor> GetRole();
	@Override
	public native Vector<IDescriptor> GetRating();
	@Override
	public native Vector<IDescriptor> GetViewpoint();
	@Override
	public native Vector<IContentComponent> GetContentComponent();
	@Override
	public native Vector<IBaseUrl> GetBaseURLs();
	@Override
	public native ISegmentBase GetSegmentBase();
	@Override
	public native ISegmentList GetSegmentList();
	@Override
	public native ISegmentTemplate GetSegmentTemplate();
	@Override
	public native Vector<IRepresentation> GetRepresentation();
	@Override
	public native String GetXlinkHref();
	@Override
	public native String GetXlinkActuate();
	@Override
	public native int GetId();
	@Override
	public native int GetGroup();
	@Override
	public native String GetLang();
	@Override
	public native String GetContentType();
	@Override
	public native String GetPar();
	@Override
	public native int GetMinBandwidth();
	@Override
	public native int GetMaxBandwidth();
	@Override
	public native int GetMinWidth();
	@Override
	public native int GetMaxWidth();
	@Override
	public native int GetMinHeight();
	@Override
	public native int GetMaxHeight();
	@Override
	public native String GetMinFramerate();
	@Override
	public native String GetMaxFramerate();
	@Override
	public native boolean SegmentAlignmentIsBoolValue();
	@Override
	public native boolean HasSegmentAlignment();
	@Override
	public native int GetSegmentAligment();
	@Override
	public native boolean SubsegmentAlignmentIsBoolValue();
	@Override
	public native boolean HasSubsegmentAlignment();
	@Override
	public native int GetSubsegmentAlignment();
	@Override
	public native byte GetSubsegmentStartsWithSAP();
	@Override
	public native boolean GetBitstreamSwitching();
	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();
	
	public native void    AddAccessibity              (Descriptor accessibility);
	public native void    AddRole                     (Descriptor role);
	public native void    AddRating                   (Descriptor rating);
	public native void    AddViewpoint                (Descriptor viewpoint);
	public native void    AddContentComponent         (ContentComponent contentComponent);
	public native void    AddBaseURL                  (BaseUrl baseURL);
	public native void    SetSegmentBase              (SegmentBase segmentBase);
	public native void    SetSegmentList              (SegmentList segmentList);
	public native void    SetSegmentTemplate          (SegmentTemplate segmentTemplate);
	public native void    AddRepresentation           (Representation representation);
	public native void    SetXlinkHref                (String xlinkHref);
	public native void    SetXlinkActuate             (String xlinkActuate);
	public native void    SetId                       (int id);
	public native void    SetGroup                    (int group);
	public native void    SetLang                     (String lang);
	public native void    SetContentType              (String contentType);
	public native void    SetPar                      (String par);
	public native void    SetMinBandwidth             (int minBandwidth);
	public native void    SetMaxBandwidth             (int maxBandwidth);
	public native void    SetMinWidth                 (int minWidth);
	public native void    SetMaxWidth                 (int maxWidth);
	public native void    SetMinHeight                (int minHeight);
	public native void    SetMaxHeight                (int maxHeight);
	public native void    SetMinFramerate             (String minFramerate);
	public native void    SetMaxFramerate             (String maxFramerate);
	public native void    SetSegmentAlignment         (String segmentAlignment);
	public native void    SetSubsegmentAlignment      (String subsegmentAlignment);
	public native void    SetSubsegmentStartsWithSAP  (byte subsegmentStartsWithSAP);
	public native void    SetBitstreamSwitching       (boolean value);

	@Override
	public native Vector<INode> GetAdditionalSubNodes();

	@Override
	public native TreeMap<String, String> GetRawAttributes();
}
