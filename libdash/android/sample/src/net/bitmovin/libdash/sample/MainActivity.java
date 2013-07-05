package net.bitmovin.libdash.sample;

import java.util.ArrayList;
import java.util.TreeMap;
import java.util.Vector;

import net.bitmovin.libdash.DASHManager;
import net.bitmovin.libdash.mpd.IAdaptationSet;
import net.bitmovin.libdash.mpd.IBaseUrl;
import net.bitmovin.libdash.mpd.IContentComponent;
import net.bitmovin.libdash.mpd.IDescriptor;
import net.bitmovin.libdash.mpd.IMPD;
import net.bitmovin.libdash.mpd.IMetrics;
import net.bitmovin.libdash.mpd.IPeriod;
import net.bitmovin.libdash.mpd.IProgramInformation;
import net.bitmovin.libdash.mpd.IRepresentation;
import net.bitmovin.libdash.mpd.ISegmentBase;
import net.bitmovin.libdash.mpd.ISegmentList;
import net.bitmovin.libdash.mpd.ISegmentTemplate;
import net.bitmovin.libdash.mpd.ISubRepresentation;
import net.bitmovin.libdash.mpd.ISubset;
import net.bitmovin.libdash.mpd.Period;
import android.os.Bundle;
import android.util.Log;
import android.app.Activity;

public class MainActivity extends Activity {
	private static final String TAG = "MainActivity";

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);	

	}

	
	static {
		System.loadLibrary("dash");
	}

}
