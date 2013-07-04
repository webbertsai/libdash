package net.bitmovin.libdash.mpd;

import java.util.TreeMap;
import java.util.Vector;

import net.bitmovin.libdash.xml.INode;

public class Representation extends RepresentationBase implements
		IRepresentation {

	public Representation() {
	}

	public Representation(long cppThis) {
		super(cppThis);
	}

	@Override
	public native Vector<IBaseUrl> GetBaseURLs();
	@Override
	public native Vector<ISubRepresentation> GetSubRepresentations();
	@Override
	public native ISegmentBase GetSegmentBase();
	@Override
	public native ISegmentList GetSegmentList();
	@Override
	public native ISegmentTemplate GetSegmentTemplate();
	@Override
	public native String GetId();
	@Override
	public native int GetBandwidth();
	@Override
	public native int GetQualityRanking();
	@Override
	public native Vector<String> GetDependencyId();
	@Override
	public native Vector<String> GetMediaStreamStructureId();
	@Override
	protected native long initialiseCppClass();
	@Override
	protected native void destoryCppClass();
	
	public native void    AddBaseURL                  (BaseUrl baseURL);
	public native void    AddSubRepresentation        (SubRepresentation subRepresentation);
	public native void    SetSegmentBase              (SegmentBase segmentBase);
	public native void    SetSegmentList              (SegmentList segmentList);
	public native void    SetSegmentTemplate          (SegmentTemplate segmentTemplate);
	public native void    SetId                       (String id);
	public native void    SetBandwidth                (int bandwidth);
	public native void    SetQualityRanking           (int qualityRanking);
	public native void    SetDependencyId             (String dependencyId);
	public native void    SetMediaStreamStructureId   (String mediaStreamStructureId);
	
	@Override
	public native Vector<INode> GetAdditionalSubNodes();
	@Override
	public native TreeMap<String, String> GetRawAttributes();
}
