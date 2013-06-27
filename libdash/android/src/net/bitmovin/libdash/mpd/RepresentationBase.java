package net.bitmovin.libdash.mpd;

import java.util.Vector;

public abstract class RepresentationBase extends AbstractMPDElement implements
		IRepresentationBase {

	public RepresentationBase() {
	}

	public RepresentationBase(long cppThis) {
		super(cppThis);
	}

	@Override
	public native Vector<IDescriptor> GetFramePacking();

	@Override
	public native Vector<IDescriptor> GetAudioChannelConfiguration();
	
	@Override
	public native Vector<IDescriptor> GetContentProtection();

	@Override
	public native Vector<String> GetProfiles();

	@Override
	public native int GetWidth();

	@Override
	public native int GetHeight();

	@Override
	public native String GetSar();

	@Override
	public native String GetFrameRate();

	@Override
	public native String GetAudioSamplingRate();

	@Override
	public native String GetMimeType();

	@Override
	public native Vector<String> GetSegmentProfiles();

	@Override
	public native Vector<String> GetCodecs();

	@Override
	public native double GetMaximumSAPPeriod();

	@Override
	public native byte GetStartWithSAP();

	@Override
	public native double GetMaxPlayoutRate();

	@Override
	public native boolean HasCodingDependency();

	@Override
	public native String GetScanType();

	public native void    AddFramePacking                 (Descriptor framePacking);
	public native void    AddAudioChannelConfiguration    (Descriptor audioChannelConfiguration);
	public native void    AddContentProtection            (Descriptor contentProtection);
	public native void    SetProfiles                     (String profiles);
	public native void    SetWidth                        (int width);
	public native void    SetHeight                       (int height);
	public native void    SetSar                          (String sar);
	public native void    SetFrameRate                    (String frameRate);
	public native void    SetAudioSamplingRate            (String audioSamplingRate);
	public native void    SetMimeType                     (String mimeType);
	public native void    SetSegmentProfiles              (String segmentProfiles);
	public native void    SetCodecs                       (String codecs);
	public native void    SetMaximumSAPPeriod             (double maximumSAPPeroid);
	public native void    SetStartWithSAP                 (byte startWithSAP);
	public native void    SetMaxPlayoutRate               (double maxPlayoutRate);
	public native void    SetCodingDependency             (boolean codingDependency);
	public native void    SetScanType                     (String scanType);

}
