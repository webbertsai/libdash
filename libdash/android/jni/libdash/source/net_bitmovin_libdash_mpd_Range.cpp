#include "net_bitmovin_libdash_mpd_Range.h"

#include "mpd/Range.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::Range
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_mpd_Range_, method)

#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_mpd_Range_, method)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_Range_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_Range_)

CALL_METHOD_RETURN_STRING_PREFIX(GetStarttime)
CALL_METHOD_RETURN_STRING_PREFIX(GetDuration)

CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetStarttime)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetDuration)
