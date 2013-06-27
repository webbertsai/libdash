package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

import net.bitmovin.libdash.metrics.IHTTPTransaction;
import net.bitmovin.libdash.metrics.ITCPConnection;

public class MPD extends AbstractMPDElement implements IMPD {

	public MPD() {
	}

	public MPD(long cppThis) {
		super(cppThis);
	}

	@Override
	public native ArrayList<ITCPConnection> GetTCPConnectionList();

	@Override
	public native ArrayList<IHTTPTransaction> GetHTTPTransactionList();

	@Override
	public native ArrayList<IProgramInformation> GetProgramInformations();
	
	@Override
	public native ArrayList<IBaseUrl> GetBaseUrls();

	@Override
	public native ArrayList<String> GetLocations();

	@Override
	public native ArrayList<IPeriod> GetPeriods();

	@Override
	public native ArrayList<IMetrics> GetMetrics();

	@Override
	public native String GetId();

	@Override
	public native ArrayList<String> GetProfiles();

	@Override
	public native String GetType();

	@Override
	public native String GetAvailabilityStarttime();

	@Override
	public native String GetAvailabilityEndtime();

	@Override
	public native String GetMediaPresentationDuration();

	@Override
	public native String GetMinimumUpdatePeriod();

	@Override
	public native String GetMinBufferTime();

	@Override
	public native String GetTimeShiftBufferDepth();

	@Override
	public native String GetSuggestedPresentationDelay();

	@Override
	public native String GetMaxSegmentDuration();

	@Override
	public native String GetMaxSubsegmentDuration();

	@Override
	public native IBaseUrl GetMPDPathBaseUrl();

	@Override
	public native int GetFetchTime();

	@Override
	protected native long initialiseCppClass();
	
	@Override
	protected native void destoryCppClass();
}
