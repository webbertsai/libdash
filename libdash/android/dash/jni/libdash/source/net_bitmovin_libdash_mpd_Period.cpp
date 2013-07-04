#include "net_bitmovin_libdash_mpd_Period.h"

#include "mpd/Period.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::Period
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_mpd_Period_, method)
#define CALL_METHOD_RETURN_BOOLEAN_PREFIX(method) CALL_METHOD_RETURN_BOOLEAN(Java_net_bitmovin_libdash_mpd_Period_, method)
#define CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTRVECTOR(Java_net_bitmovin_libdash_mpd_Period_, method, cppClassType, javaClassType)
#define CALL_METHOD_RETURN_OBJECTPTR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTR(Java_net_bitmovin_libdash_mpd_Period_, method, cppClassType, javaClassType)

#define CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(method, cppNumberType, javaNumberType) CALL_METHOD_NUMBER_RETURN_VOID(Java_net_bitmovin_libdash_mpd_Period_, method, cppNumberType, javaNumberType)
#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_mpd_Period_, method)
#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_mpd_Period_, method, cppClassType)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_Period_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_Period_)

CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetBaseURLs, dash::mpd::IBaseUrl, "net/bitmovin/libdash/mpd/BaseUrl")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetAdaptationSets, dash::mpd::IAdaptationSet, "net/bitmovin/libdash/mpd/AdaptationSet")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetSubsets, dash::mpd::ISubset, "net/bitmovin/libdash/mpd/Subset")

CALL_METHOD_RETURN_OBJECTPTR_PREFIX(GetSegmentBase, dash::mpd::ISegmentBase, "net/bitmovin/libdash/mpd/Segment")
CALL_METHOD_RETURN_OBJECTPTR_PREFIX(GetSegmentList, dash::mpd::ISegmentList, "net/bitmovin/libdash/mpd/SegmentList")
CALL_METHOD_RETURN_OBJECTPTR_PREFIX(GetSegmentTemplate, dash::mpd::ISegmentTemplate, "net/bitmovin/libdash/mpd/SegmentTemplate")

CALL_METHOD_RETURN_STRING_PREFIX(GetXlinkHref)
CALL_METHOD_RETURN_STRING_PREFIX(GetXlinkActuate)
CALL_METHOD_RETURN_STRING_PREFIX(GetId)
CALL_METHOD_RETURN_STRING_PREFIX(GetStart)
CALL_METHOD_RETURN_STRING_PREFIX(GetDuration)

CALL_METHOD_RETURN_BOOLEAN_PREFIX(GetBitstreamSwitching)

CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddBaseURL, dash::mpd::BaseUrl)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(SetSegmentBase, dash::mpd::SegmentBase)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(SetSegmentList, dash::mpd::SegmentList)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(SetSegmentTemplate, dash::mpd::SegmentTemplate)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddAdaptationSet, dash::mpd::AdaptationSet)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddSubset, dash::mpd::Subset)

CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetXlinkHref)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetXlinkActuate)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetId)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetStart)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetDuration)

CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetBitstreamSwitching, bool, jboolean)
