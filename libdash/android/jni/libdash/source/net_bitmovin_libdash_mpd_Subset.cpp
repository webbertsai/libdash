#include "net_bitmovin_libdash_metrics_HTTPTransaction.h"

#include "mpd/Subset.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::Subset
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_INTVECTOR_PREFIX(method, cppNativeType) CALL_METHOD_RETURN_INTVECTOR(Java_net_bitmovin_libdash_mpd_Subset_, method, cppNativeType)

#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_mpd_Subset_, method)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_Subset_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_Subset_)

CALL_METHOD_RETURN_INTVECTOR_PREFIX(Contains, uint32_t)

CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetSubset)

