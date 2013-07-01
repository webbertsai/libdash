#include "net_bitmovin_libdash_mpd_Metrics.h"

#include "mpd/Metrics.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::Metrics
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method)
#define CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTRVECTOR(Java_net_bitmovin_libdash_mpd_Metrics_, method, cppClassType, javaClassType)

#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_mpd_Metrics_, method)
#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_mpd_Metrics_, method, cppClassType)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_Metrics_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_Metrics_)

CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetReportings, dash::mpd::IDescriptor, "net/bitmovin/libdash/mpd/Descriptor")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetRanges, dash::mpd::IRange, "net/bitmovin/libdash/mpd/Range")

CALL_METHOD_RETURN_STRING_PREFIX(GetMetrics)

CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddReporting, dash::mpd::Descriptor)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddRange, dash::mpd::Range)

CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetMetrics)

