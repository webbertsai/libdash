#include "net_bitmovin_libdash_mpd_SegmentURL.h"

#include "mpd/SegmentURL.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::SegmentURL
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_mpd_SegmentURL_, method)

#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_mpd_SegmentURL_, method)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_SegmentURL_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_SegmentURL_)

CALL_METHOD_RETURN_STRING_PREFIX(GetMediaURI)
CALL_METHOD_RETURN_STRING_PREFIX(GetMediaRange)
CALL_METHOD_RETURN_STRING_PREFIX(GetIndexURI)
CALL_METHOD_RETURN_STRING_PREFIX(GetIndexRange)


jobject Java_net_bitmovin_libdash_mpd_SegmentURL_ToMediaSegment(JNIEnv *env, jobject obj, jobject arg0)
{
    const std::vector<dash::mpd::IBaseUrl *>& baseurls(jni_helper::convertJArrayListToStdVector<dash::mpd::IBaseUrl>(env, arg0));
    dash::mpd::ISegment* result(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj)->ToMediaSegment(baseurls));
    return jni_helper::createObject(env, dynamic_cast<dash::mpd::Segment*>(result), "net/bitmovin/libdash/mpd/Segment");
}


jobject Java_net_bitmovin_libdash_mpd_SegmentURL_ToIndexSegment(JNIEnv *env, jobject obj, jobject arg0)
{
    const std::vector<dash::mpd::IBaseUrl *>& baseurls(jni_helper::convertJArrayListToStdVector<dash::mpd::IBaseUrl>(env, arg0));
    dash::mpd::ISegment* result(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj)->ToIndexSegment(baseurls));
    return jni_helper::createObject(env, result, "net/bitmovin/libdash/mpd/Segment");
}

CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetMediaURI)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetMediaRange)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetIndexURI)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetIndexRange)
