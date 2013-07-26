package net.bitmovin.libdash.sample.test;

import java.util.ArrayList;

import android.util.Log;
import net.bitmovin.libdash.DASHManager;
import net.bitmovin.libdash.mpd.IAdaptationSet;
import net.bitmovin.libdash.mpd.IBaseUrl;
import net.bitmovin.libdash.mpd.IMPD;
import net.bitmovin.libdash.mpd.IPeriod;
import net.bitmovin.libdash.mpd.IRepresentation;
import net.bitmovin.libdash.mpd.ISegment;
import net.bitmovin.libdash.mpd.ISegmentBase;
import net.bitmovin.libdash.mpd.ISegmentList;
import net.bitmovin.libdash.mpd.ISegmentURL;
import junit.framework.TestCase;

public class DashTest extends TestCase {
	private static final String TAG = "DashTest";

	public DashTest() {
		super("net.bitmovin.libdash.DASHManager");
	}
	
	public void testDASHManager() {
		DASHManager toTest = new DASHManager();
		IMPD mpd = toTest.Open("http://www-itec.uni-klu.ac.at/ftp/datasets/mmsys12/BigBuckBunny/bunny_2s_480p_only/bunny_Desktop.mpd");
		
		Log.d(TAG, "GetProgramInformations:" + mpd.GetProgramInformations          ());
		Log.d(TAG, "GetBaseUrls:" + mpd.GetBaseUrls                     ());
		Log.d(TAG, "GetLocations:" + mpd.GetLocations                    ());
		Log.d(TAG, "GetPeriods:" + mpd.GetPeriods                      ());
		Log.d(TAG, "GetMetrics:" + mpd.GetMetrics                      ());
		Log.d(TAG, "GetId:" + mpd.GetId                           ());
		Log.d(TAG, "GetProfiles:" + mpd.GetProfiles                     ());
		Log.d(TAG, "GetType:" + mpd.GetType                         ());
		Log.d(TAG, "GetAvailabilityStarttime:" + mpd.GetAvailabilityStarttime        ());
		Log.d(TAG, "GetAvailabilityEndtime:" + mpd.GetAvailabilityEndtime          ());
		Log.d(TAG, "GetMediaPresentationDuration:" + mpd.GetMediaPresentationDuration    ());
		Log.d(TAG, "GetMinimumUpdatePeriod:" + mpd.GetMinimumUpdatePeriod          ());
		Log.d(TAG, "GetMinBufferTime:" + mpd.GetMinBufferTime                ());
		Log.d(TAG, "GetTimeShiftBufferDepth:" + mpd.GetTimeShiftBufferDepth         ());
		Log.d(TAG, "GetSuggestedPresentationDelay:" + mpd.GetSuggestedPresentationDelay   ());
		Log.d(TAG, "GetMaxSegmentDuration:" + mpd.GetMaxSegmentDuration           ());
		Log.d(TAG, "GetMaxSubsegmentDuration:" + mpd.GetMaxSubsegmentDuration        ());
		Log.d(TAG, "GetMPDPathBaseUrl:" + mpd.GetMPDPathBaseUrl				 ());
		Log.d(TAG, "GetFetchTime:" + mpd.GetFetchTime					 ());
		
		Log.d(TAG, "GetRawAttributes:" + mpd.GetRawAttributes());
		Log.d(TAG, "GetAdditionalSubNodes:" + mpd.GetAdditionalSubNodes());
	
		ArrayList<IPeriod> toCheck = mpd.GetPeriods();
		
		IPeriod period = toCheck.get(0);
		Log.d(TAG, "GetBaseURLs:" + period.GetBaseURLs             ());
		Log.d(TAG, "GetSegmentBase:" + period.GetSegmentBase          ());
		Log.d(TAG, "GetSegmentList:" + period.GetSegmentList          ());
		Log.d(TAG, "GetSegmentTemplate:" + period.GetSegmentTemplate      ());
		Log.d(TAG, "GetAdaptationSets:" + period.GetAdaptationSets       ());
		Log.d(TAG, "GetSubsets:" + period.GetSubsets              ());
		Log.d(TAG, "GetXlinkHref:" + period.GetXlinkHref            ());
		Log.d(TAG, "GetXlinkActuate:" + period.GetXlinkActuate         ());
		Log.d(TAG, "GetId:" + period.GetId                   ());
		Log.d(TAG, "GetStart:" + period.GetStart                ());
		Log.d(TAG, "GetDuration:" + period.GetDuration             ());
		Log.d(TAG, "GetBitstreamSwitching:" + period.GetBitstreamSwitching   ());
		
		IAdaptationSet adaptationSet = period.GetAdaptationSets().get(0);
		
		Log.d(TAG, "GetAccessibility:" + adaptationSet.GetAccessibility                ());
		Log.d(TAG, "GetRole:" + adaptationSet.GetRole                         ());
		Log.d(TAG, "GetRating:" + adaptationSet.GetRating                       ());
		Log.d(TAG, "GetViewpoint:" + adaptationSet.GetViewpoint                    ());
		Log.d(TAG, "GetContentComponent:" + adaptationSet.GetContentComponent             ());
		Log.d(TAG, "GetBaseURLs:" + adaptationSet.GetBaseURLs                     ());
		Log.d(TAG, "GetSegmentBase:" + adaptationSet.GetSegmentBase                  ());
		Log.d(TAG, "GetSegmentList:" + adaptationSet.GetSegmentList                  ());
		Log.d(TAG, "GetSegmentTemplate:" + adaptationSet.GetSegmentTemplate              ());
		Log.d(TAG, "GetRepresentation:" + adaptationSet.GetRepresentation               ());
		Log.d(TAG, "GetXlinkHref:" + adaptationSet.GetXlinkHref                    ());
		Log.d(TAG, "GetXlinkActuate:" + adaptationSet.GetXlinkActuate                 ());
		Log.d(TAG, "GetId:" + adaptationSet.GetId                           ());
		Log.d(TAG, "GetGroup:" + adaptationSet.GetGroup                        ());
		Log.d(TAG, "GetLang:" + adaptationSet.GetLang                         ());
		Log.d(TAG, "GetContentType:" + adaptationSet.GetContentType                  ());
		Log.d(TAG, "GetPar:" + adaptationSet.GetPar                          ());
		Log.d(TAG, "GetMinBandwidth:" + adaptationSet.GetMinBandwidth                 ());
		Log.d(TAG, "GetMaxBandwidth:" + adaptationSet.GetMaxBandwidth                 ());
		Log.d(TAG, "GetMinWidth:" + adaptationSet.GetMinWidth                     ());
		Log.d(TAG, "GetMaxWidth:" + adaptationSet.GetMaxWidth                     ());
		Log.d(TAG, "GetMinHeight:" + adaptationSet.GetMinHeight                    ());
		Log.d(TAG, "GetMaxHeight:" + adaptationSet.GetMaxHeight                    ());
		Log.d(TAG, "GetMinFramerate:" + adaptationSet.GetMinFramerate                 ());
		Log.d(TAG, "GetMaxFramerate:" + adaptationSet.GetMaxFramerate                 ());
		Log.d(TAG, "SegmentAlignmentIsbooleanValue:" + adaptationSet.SegmentAlignmentIsBoolValue  ());
		Log.d(TAG, "HasSegmentAlignment:" + adaptationSet.HasSegmentAlignment             ());
		Log.d(TAG, "GetSegmentAligment:" + adaptationSet.GetSegmentAligment              ());
		Log.d(TAG, "SubsegmentAlignmentIsbooleanValue:" + adaptationSet.SubsegmentAlignmentIsBoolValue ());
		Log.d(TAG, "HasSubsegmentAlignment:" + adaptationSet.HasSubsegmentAlignment          ());
		Log.d(TAG, "GetSubsegmentAlignment:" + adaptationSet.GetSubsegmentAlignment          ());
		Log.d(TAG, "GetSubsegmentStartsWithSAP:" + adaptationSet.GetSubsegmentStartsWithSAP      ());
		Log.d(TAG, "GetBitstreamSwitching:" + adaptationSet.GetBitstreamSwitching           ());
		
		IRepresentation representation = adaptationSet.GetRepresentation().get(0);
		
		Log.d(TAG, "GetBaseURLs:" + representation.GetBaseURLs                 ());
		Log.d(TAG, "GetSubRepresentations:" + representation.GetSubRepresentations       ());
		Log.d(TAG, "GetSegmentBase:" + representation.GetSegmentBase              ());
		Log.d(TAG, "GetSegmentList:" + representation.GetSegmentList              ());
		Log.d(TAG, "GetSegmentTemplate:" + representation.GetSegmentTemplate          ());
		Log.d(TAG, "GetId:" + representation.GetId                       ());
		Log.d(TAG, "GetBandwidth:" + representation.GetBandwidth                ());
		Log.d(TAG, "GetQualityRanking:" + representation.GetQualityRanking           ());
		Log.d(TAG, "GetDependencyId:" + representation.GetDependencyId             ());
		Log.d(TAG, "GetMediaStreamStructureId:" + representation.GetMediaStreamStructureId   ());
		
		Log.d(TAG, "GetFramePacking:" + representation.GetFramePacking                 ());
		Log.d(TAG, "GetAudioChannelConfiguration:" + representation.GetAudioChannelConfiguration    ());
		Log.d(TAG, "GetContentProtection:" + representation.GetContentProtection            ());
		Log.d(TAG, "GetProfiles:" + representation.GetProfiles                     ());
		Log.d(TAG, "GetWidth:" + representation.GetWidth                        ());
		Log.d(TAG, "GetHeight:" + representation.GetHeight                       ());
		Log.d(TAG, "GetSar:" + representation.GetSar                          ());
		Log.d(TAG, "GetFrameRate:" + representation.GetFrameRate                    ());
		Log.d(TAG, "GetAudioSamplingRate:" + representation.GetAudioSamplingRate            ());
		Log.d(TAG, "GetMimeType:" + representation.GetMimeType                     ());
		Log.d(TAG, "GetSegmentProfiles:" + representation.GetSegmentProfiles              ());
		Log.d(TAG, "GetCodecs:" + representation.GetCodecs                       ());
		Log.d(TAG, "GetMaximumSAPPeriod:" + representation.GetMaximumSAPPeriod             ());
		Log.d(TAG, "GetStartWithSAP:" + representation.GetStartWithSAP                 ());
		Log.d(TAG, "GetMaxPlayoutRate:" + representation.GetMaxPlayoutRate               ());
		Log.d(TAG, "HasCodingDependency:" + representation.HasCodingDependency             ());
		Log.d(TAG, "GetScanType:" + representation.GetScanType                     ());
		
		ArrayList<IBaseUrl> baseUrl = mpd.GetBaseUrls();
		Log.d(TAG, "baseUrl:" + baseUrl);
		ISegmentBase segmentBase = representation.GetSegmentBase();
		Log.d(TAG, "segmentBase:" + segmentBase);
		ISegmentList segmentList = representation.GetSegmentList();
		Log.d(TAG, "segmentList:" + segmentList);
		ArrayList<ISegmentURL> segmentUrls = segmentList.GetSegmentURLs();
		Log.d(TAG, "segmentUrls:" + segmentUrls);
		Log.d(TAG, "segmentUrls.get(0):" + segmentUrls.get(0));
		ISegment segment = segmentUrls.get(0).ToMediaSegment(baseUrl);
		Log.d(TAG, "segment:" + segment);
		// Log.d(TAG, "segment.StartDownload():" + segment.StartDownload());
			
		toTest.destroy();
	}
	
	static {
		System.loadLibrary("dash");
	}

}
