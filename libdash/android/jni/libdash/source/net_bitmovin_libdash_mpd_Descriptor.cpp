#include "net_bitmovin_libdash_mpd_Descriptor.h"

#include "mpd/Descriptor.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::Descriptor
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_mpd_Descriptor_, method)
#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_mpd_Descriptor_, method)

CALL_METHOD_RETURN_STRING_PREFIX(GetSchemeIdUri)
CALL_METHOD_RETURN_STRING_PREFIX(GetValue)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetValue)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetSchemeIdUri)
