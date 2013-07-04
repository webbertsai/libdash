#include "net_bitmovin_libdash_mpd_RepresentationBase.h"

#include "mpd/RepresentationBase.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::IRepresentationBase
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_mpd_RepresentationBase_, method)
#define CALL_METHOD_RETURN_INT_PREFIX(method) CALL_METHOD_RETURN_INT(Java_net_bitmovin_libdash_mpd_RepresentationBase_, method)
#define CALL_METHOD_RETURN_BOOLEAN_PREFIX(method) CALL_METHOD_RETURN_BOOLEAN(Java_net_bitmovin_libdash_mpd_RepresentationBase_, method)
#define CALL_METHOD_RETURN_BYTE_PREFIX(method) CALL_METHOD_RETURN_BYTE(Java_net_bitmovin_libdash_mpd_RepresentationBase_, method)
#define CALL_METHOD_RETURN_DOUBLE_PREFIX(method) CALL_METHOD_RETURN_DOUBLE(Java_net_bitmovin_libdash_mpd_RepresentationBase_, method)
#define CALL_METHOD_RETURN_STRINGVECTOR_PREFIX(method) CALL_METHOD_RETURN_STRINGVECTOR(Java_net_bitmovin_libdash_mpd_RepresentationBase_, method)
#define CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTRVECTOR(Java_net_bitmovin_libdash_mpd_RepresentationBase_, method, cppClassType, javaClassType)
#define CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(method, cppNumberType, javaNumberType) CALL_METHOD_NUMBER_RETURN_VOID(Java_net_bitmovin_libdash_mpd_RepresentationBase_, method, cppNumberType, javaNumberType)
#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_mpd_RepresentationBase_, method)
#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_mpd_RepresentationBase_, method, cppClassType)

CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetFramePacking, dash::mpd::IDescriptor, "net/bitmovin/libdash/mpd/Descriptor")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetAudioChannelConfiguration, dash::mpd::IDescriptor, "net/bitmovin/libdash/mpd/Descriptor")
// CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetContentProtection, dash::mpd::IDescriptor, "net/bitmovin/libdash/mpd/Descriptor")

jobject Java_net_bitmovin_libdash_mpd_RepresentationBase_GetContentProtection(JNIEnv *env, jobject obj)
{
    dash::mpd::IRepresentationBase* classPtr(jni_helper::getClassPtr<dash::mpd::IRepresentationBase>(env, obj));
    LOGD("classPtr:%p", classPtr);
    if (classPtr == 0)
    {
        LOGD("classPtr == 0");
        return 0;
    }
    typedef std::vector<dash::mpd::IDescriptor*> t_vector;
    t_vector toCast(classPtr->GetContentProtection());
    LOGD("toCast->size():%d", toCast.size());

    return jni_helper::convertStdVectorToJavaArrayList<dash::mpd::IDescriptor>(env, "net/bitmovin/libdash/mpd/Descriptor", toCast);

}


CALL_METHOD_RETURN_INT_PREFIX(GetWidth)
CALL_METHOD_RETURN_INT_PREFIX(GetHeight)

CALL_METHOD_RETURN_STRING_PREFIX(GetSar)
CALL_METHOD_RETURN_STRING_PREFIX(GetFrameRate)
CALL_METHOD_RETURN_STRING_PREFIX(GetAudioSamplingRate)
CALL_METHOD_RETURN_STRING_PREFIX(GetMimeType)
CALL_METHOD_RETURN_STRING_PREFIX(GetScanType)

CALL_METHOD_RETURN_STRINGVECTOR_PREFIX(GetSegmentProfiles)
CALL_METHOD_RETURN_STRINGVECTOR_PREFIX(GetCodecs)

CALL_METHOD_RETURN_DOUBLE_PREFIX(GetMaximumSAPPeriod)
CALL_METHOD_RETURN_DOUBLE_PREFIX(GetMaxPlayoutRate)

CALL_METHOD_RETURN_BYTE_PREFIX(GetStartWithSAP)

CALL_METHOD_RETURN_BOOLEAN_PREFIX(HasCodingDependency)

#undef LOCAL_CLASS
#define LOCAL_CLASS dash::mpd::RepresentationBase

CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddFramePacking, dash::mpd::Descriptor)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddAudioChannelConfiguration, dash::mpd::Descriptor)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddContentProtection, dash::mpd::Descriptor)

CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetSar)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetFrameRate)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetAudioSamplingRate)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetMimeType)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetSegmentProfiles)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetCodecs)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetScanType)

CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetMaximumSAPPeriod, double, jdouble)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetMaxPlayoutRate, double, jdouble)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetStartWithSAP, uint8_t, jbyte)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetCodingDependency, bool, jboolean)


