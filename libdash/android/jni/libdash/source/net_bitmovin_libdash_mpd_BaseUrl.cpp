#include "net_bitmovin_libdash_mpd_BaseUrl.h"

#include "mpd/BaseUrl.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::BaseUrl
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_mpd_BaseUrl_, method)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_BaseUrl_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_BaseUrl_)

CALL_METHOD_RETURN_STRING_PREFIX(GetUrl)
CALL_METHOD_RETURN_STRING_PREFIX(GetServiceLocation)
CALL_METHOD_RETURN_STRING_PREFIX(GetByteRange)

jobject Java_net_bitmovin_libdash_mpd_BaseUrl_ToMediaSegment(JNIEnv *env, jobject obj, jobject baseurls)
{
    typedef std::vector<dash::mpd::IBaseUrl*> t_vector;
    const t_vector &castResult(jni_helper::convertJArrayListToStdVector<dash::mpd::IBaseUrl>(env, obj));
    dash::mpd::IBaseUrl* thiz(jni_helper::getClassPtr<dash::mpd::IBaseUrl>(env, obj));
    dash::mpd::ISegment* result(thiz->ToMediaSegment(castResult));
    return jni_helper::convertCppInstanceToJObject(env, result, "net/bitmovin/libdash/mpd/Segment", 0);
}

// TODO: Java_net_bitmovin_libdash_mpd_BaseUrl_ToMediaSegment
