package net.bitmovin.libdash.sample;

import android.os.Bundle;
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
