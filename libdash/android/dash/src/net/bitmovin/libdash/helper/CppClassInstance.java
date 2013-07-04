package net.bitmovin.libdash.helper;

import android.util.Log;

public abstract class CppClassInstance {
	private static final String TAG = "CppClassInstance";
	
	public long cppThis = 0;
	
	public CppClassInstance() {
		this.cppThis = initialiseCppClass();
		
		Log.d(TAG, "CppClassInstance() cppThis:" + cppThis);
	}
	
	protected CppClassInstance(long cppThis) {
		Log.d(TAG, "CppClassInstance(long) cppThis:" + cppThis);
		
		this.cppThis = cppThis;
		if (cppThis == 0)
		{
			Log.e(TAG, "cpp-dependend-class got constructed with nullptr! cppThis == " + cppThis);
		}
	}
	
	public void destroy() {
		if (this.cppThis == 0) {
			Log.w(TAG, "class already destroyed.");
			return;
		}
		destoryCppClass();
	}
	
	protected abstract long initialiseCppClass();
	protected abstract void destoryCppClass();
}
