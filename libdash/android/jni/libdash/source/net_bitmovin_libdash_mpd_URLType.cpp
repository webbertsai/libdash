#include "net_bitmovin_libdash_mpd_URLType.h"

#include "mpd/URLType.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::URLType
#endif

#include "jni_helper.hpp"


#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_mpd_URLType_, method)
#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_mpd_URLType_, method)
#define CALL_METHOD_ENUM_RETURN_VOID_PREFIX(method, cppEnumType) CALL_METHOD_ENUM_RETURN_VOID(Java_net_bitmovin_libdash_mpd_URLType_, method, cppEnumType)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_URLType_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_URLType_)

CALL_METHOD_RETURN_STRING_PREFIX(GetSourceURL)
CALL_METHOD_RETURN_STRING_PREFIX(GetRange)

jobject Java_net_bitmovin_libdash_mpd_URLType_ToSegment(JNIEnv *env, jobject obj, jobject baseurls)
{
    const std::vector<dash::mpd::IBaseUrl*> &cast(jni_helper::convertJArrayListToStdVector<dash::mpd::IBaseUrl>(env, baseurls));
    const dash::mpd::ISegment *result(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj)->ToSegment(cast));
    return jni_helper::createObject<dash::mpd::ISegment>(env, result, "net/bitmovin/libdash/mpd/URLType");
}

CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetSourceURL)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetRange)

CALL_METHOD_ENUM_RETURN_VOID_PREFIX(SetType, dash::metrics::HTTPTransactionType)
