#include "net_bitmovin_libdash_mpd_SegmentBase.h"

#include "mpd/SegmentBase.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::SegmentBase
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method)
#define CALL_METHOD_RETURN_INT_PREFIX(method) CALL_METHOD_RETURN_INT(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method)
#define CALL_METHOD_RETURN_BOOLEAN_PREFIX(method) CALL_METHOD_RETURN_BOOLEAN(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method)
#define CALL_METHOD_RETURN_OBJECTPTR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTR(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method, cppClassType, javaClassType)

#define CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(method, cppNumberType, javaNumberType) CALL_METHOD_NUMBER_RETURN_VOID(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method, cppNumberType, javaNumberType)
#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method)
#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method, cppClassType)


CALL_METHOD_RETURN_OBJECTPTR_PREFIX(GetInitialization, dash::mpd::IURLType, "net/bitmovin/libdash/mpd/URLType");
CALL_METHOD_RETURN_OBJECTPTR_PREFIX(GetRepresentationIndex, dash::mpd::IURLType, "net/bitmovin/libdash/mpd/URLType");

CALL_METHOD_RETURN_INT_PREFIX(GetTimescale)
CALL_METHOD_RETURN_INT_PREFIX(GetPresentationTimeOffset)

CALL_METHOD_RETURN_STRING_PREFIX(GetIndexRange)

CALL_METHOD_RETURN_BOOLEAN_PREFIX(HasIndexRangeExact)

CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(SetInitialization, dash::mpd::URLType)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(SetRepresentationIndex, dash::mpd::URLType)

CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetTimescale, uint32_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetPresentationTimeOffset, uint32_t, jint)

CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetIndexRange)

CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetIndexRangeExact, bool, jboolean)
