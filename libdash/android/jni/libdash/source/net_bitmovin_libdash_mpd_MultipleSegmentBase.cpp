#include "net_bitmovin_libdash_mpd_MultipleSegmentBase.h"

#include "mpd/MultipleSegmentBase.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::MultipleSegmentBase
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_INT_PREFIX(method) CALL_METHOD_RETURN_INT(Java_net_bitmovin_libdash_mpd_MultipleSegmentBase_, method)
#define CALL_METHOD_RETURN_OBJECTPTR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTR(Java_net_bitmovin_libdash_mpd_MultipleSegmentBase_, method, cppClassType, javaClassType)

#define CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(method, cppNumberType, javaNumberType) CALL_METHOD_NUMBER_RETURN_VOID(Java_net_bitmovin_libdash_mpd_MultipleSegmentBase_, method, cppNumberType, javaNumberType)
#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_mpd_MultipleSegmentBase_, method, cppClassType)

CALL_METHOD_RETURN_OBJECTPTR_PREFIX(GetSegmentTimeline, dash::mpd::ISegmentTimeline, "net/bitmovin/libdash/mpd/SegmentTimeline")
CALL_METHOD_RETURN_OBJECTPTR_PREFIX(GetBitstreamSwitching, dash::mpd::IURLType, "net/bitmovin/libdash/mpd/URLType")

CALL_METHOD_RETURN_INT_PREFIX(GetDuration)
CALL_METHOD_RETURN_INT_PREFIX(GetStartNumber)

CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(SetSegmentTimeline, dash::mpd::SegmentTimeline)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(SetBitstreamSwitching, dash::mpd::URLType)

CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetDuration, uint32_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetStartNumber, uint32_t, jint)
