#include "net_bitmovin_libdash_mpd_SegmentTimeline.h"

#include "mpd/SegmentTimeline.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::SegmentTimeline
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTRVECTOR(Java_net_bitmovin_libdash_mpd_SegmentTimeline_, method, cppClassType, javaClassType)

#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_mpd_SegmentTimeline_, method, cppClassType)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_SegmentTimeline_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_SegmentTimeline_)

CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetTimelines, dash::mpd::ITimeline, "net/bitmovin/libdash/mpd/Timeline")

CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddTimeline, dash::mpd::Timeline)

