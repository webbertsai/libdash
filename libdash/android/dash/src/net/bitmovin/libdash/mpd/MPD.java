package net.bitmovin.libdash.mpd;

import java.util.ArrayList;

import net.bitmovin.libdash.metrics.HTTPTransaction;
import net.bitmovin.libdash.metrics.IHTTPTransaction;
import net.bitmovin.libdash.metrics.ITCPConnection;
import net.bitmovin.libdash.metrics.TCPConnection;

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
	
	protected native void    AddTCPConnection        		 (TCPConnection tcpConn);
	protected native void    AddHTTPTransaction      		 (HTTPTransaction httpTransAct);

	protected native void    AddProgramInformation           (ProgramInformation programInformation);
	protected native void    AddBaseUrl                      (BaseUrl url);
	protected native void    AddLocation                     (String location);
	protected native void    AddPeriod                       (Period period);
	protected native void    AddMetrics                      (Metrics metrics);
	protected native void    SetId                           (String id);
	protected native void    SetProfiles                     (String profiles);
	protected native void    SetType                         (String type);
	protected native void    SetAvailabilityStarttime        (String availabilityStarttime);
	protected native void    SetAvailabilityEndtime          (String availabilityEndtime);
	protected native void    SetMediaPresentationDuration    (String mediaPresentationDuration);
	protected native void    SetMinimumUpdatePeriod          (String minimumUpdatePeriod);
	protected native void    SetMinBufferTime                (String minBufferTime);
	protected native void    SetTimeShiftBufferDepth         (String timeShiftBufferDepth);
	protected native void    SetSuggestedPresentationDelay   (String suggestedPresentationDelay);
	protected native void    SetMaxSegmentDuration           (String maxSegmentDuration);
	protected native void    SetMaxSubsegmentDuration        (String maxSubsegmentDuration);
	protected native void    SetMPDPathBaseUrl               (BaseUrl path);
	protected native void    SetFetchTime                    (int fetchTimeInSec);
}
