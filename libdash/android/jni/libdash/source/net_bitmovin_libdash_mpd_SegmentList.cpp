#include "net_bitmovin_libdash_mpd_SegmentList.h"

#include "mpd/SegmentList.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::SegmentList
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_mpd_SegmentList_, method)
#define CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTRVECTOR(Java_net_bitmovin_libdash_mpd_SegmentList_, method, cppClassType, javaClassType)

#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_mpd_SegmentList_, method)
#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_mpd_SegmentList_, method, cppClassType)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_SegmentList_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_SegmentList_)

CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetSegmentURLs, dash::mpd::ISegmentURL, "net/bitmovin/libdash/mpd/SegmentURL")

CALL_METHOD_RETURN_STRING_PREFIX(GetXlinkHref)
CALL_METHOD_RETURN_STRING_PREFIX(GetXlinkActuate)

CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddSegmentURL, dash::mpd::SegmentURL)

CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetXlinkHref)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetXlinkActuate)
