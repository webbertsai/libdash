#include "net_bitmovin_libdash_mpd_Timeline.h"

#include "mpd/Timeline.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::Timeline
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_INT_PREFIX(method) CALL_METHOD_RETURN_INT(Java_net_bitmovin_libdash_mpd_Timeline_, method)

#define CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(method, cppNumberType, javaNumberType) CALL_METHOD_NUMBER_RETURN_VOID(Java_net_bitmovin_libdash_mpd_Timeline_, method, cppNumberType, javaNumberType)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_Timeline_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_Timeline_)

CALL_METHOD_RETURN_INT_PREFIX(GetStartTime)
CALL_METHOD_RETURN_INT_PREFIX(GetDuration)
CALL_METHOD_RETURN_INT_PREFIX(GetRepeatCount)

CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetStartTime, uint32_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetDuration, uint32_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetRepeatCount, uint32_t, jint)

