package net.bitmovin.libdash.sample.test;

import android.util.Log;
import net.bitmovin.libdash.DASHManager;
import net.bitmovin.libdash.mpd.IMPD;
import junit.framework.TestCase;

public class DashTest extends TestCase {
	private static final String TAG = "DashTest";

	public DashTest() {
		super("net.bitmovin.libdash.DASHManager");
	}
	
	public void testDASHManager() {
		DASHManager toTest = new DASHManager();
		
		IMPD mpd = toTest.Open("http://www-itec.uni-klu.ac.at/ftp/datasets/mmsys12/BigBuckBunny/bunny_2s_480p_only/bunny_Desktop.mpd");
		
		Log.d(TAG, "mpd.GetId():" + mpd.GetId());
		Log.d(TAG, "mpd.GetType():" + mpd.GetType());
		Log.d(TAG, "mpd.GetAvailabilityStarttime():" + mpd.GetAvailabilityStarttime());
		Log.d(TAG, "mpd.GetAvailabilityEndtime():" + mpd.GetAvailabilityEndtime());
		Log.d(TAG, "mpd.GetMediaPresentationDuration():" + mpd.GetMediaPresentationDuration());
		Log.d(TAG, "mpd.GetFetchTime():" + mpd.GetFetchTime());
		Log.d(TAG, "mpd.GetProfiles():" + mpd.GetProfiles());
		
		toTest.destroy();
	}
	
	static {
		System.loadLibrary("dash");
	}

}
