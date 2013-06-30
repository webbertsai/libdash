#include "net_bitmovin_libdash_mpd_SegmentTemplate.h"

#include "mpd/SegmentTemplate.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::SegmentTemplate
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_mpd_SegmentTemplate_, method)

#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_mpd_SegmentTemplate_, method)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_SegmentTemplate_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_SegmentTemplate_)

CALL_METHOD_RETURN_STRING_PREFIX(Getmedia)
CALL_METHOD_RETURN_STRING_PREFIX(Getindex)
CALL_METHOD_RETURN_STRING_PREFIX(Getinitialization)
CALL_METHOD_RETURN_STRING_PREFIX(GetbitstreamSwitching)

#define CALL_METHOD_SPECIAL_ARGC3(method) \
jobject Java_net_bitmovin_libdash_mpd_SegmentTemplate_##method(JNIEnv *env, jobject obj, jobject arg0, jstring arg1, jint arg2) \
{\
    const std::vector<dash::mpd::IBaseUrl *> &arg0Cast(jni_helper::convertJArrayListToStdVector<dash::mpd::IBaseUrl>(env, arg0));\
    const std::string& arg1Cast(jni_helper::convertJStringToStdString(env, arg1));\
    const uint32_t arg2Cast(arg2);\
\
    dash::mpd::ISegment* result = jni_helper::getClassPtr<LOCAL_CLASS>(env, obj)->method(arg0Cast, arg1Cast, arg2Cast);\
\
    return jni_helper::createObject(env, result, "net/bitmovin/libdash/mpd/Segment");\
}

#define CALL_METHOD_SPECIAL_ARGC4(method) \
jobject Java_net_bitmovin_libdash_mpd_SegmentTemplate_##method(JNIEnv *env, jobject obj, jobject arg0, jstring arg1, jint arg2, jint arg3) \
{\
    const std::vector<dash::mpd::IBaseUrl *> &arg0Cast(jni_helper::convertJArrayListToStdVector<dash::mpd::IBaseUrl>(env, arg0));\
    const std::string& arg1Cast(jni_helper::convertJStringToStdString(env, arg1));\
    const uint32_t arg2Cast(arg2);\
    const uint32_t arg3Cast(arg3);\
\
    dash::mpd::ISegment* result = jni_helper::getClassPtr<LOCAL_CLASS>(env, obj)->method(arg0Cast, arg1Cast, arg2Cast, arg3Cast);\
\
    return jni_helper::createObject(env, result, "net/bitmovin/libdash/mpd/Segment");\
}

CALL_METHOD_SPECIAL_ARGC3(ToInitializationSegment)
CALL_METHOD_SPECIAL_ARGC3(ToBitstreamSwitchingSegment)

CALL_METHOD_SPECIAL_ARGC4(GetMediaSegmentFromNumber)
CALL_METHOD_SPECIAL_ARGC4(GetIndexSegmentFromNumber)
CALL_METHOD_SPECIAL_ARGC4(GetMediaSegmentFromTime)
CALL_METHOD_SPECIAL_ARGC4(GetIndexSegmentFromTime)

CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetMedia)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetIndex)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetInitialization)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetBitstreamSwitching)

