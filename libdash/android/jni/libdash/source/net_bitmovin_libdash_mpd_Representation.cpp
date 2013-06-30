#include "net_bitmovin_libdash_mpd_Representation.h"

#include "mpd/Representation.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::Representation
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_mpd_Representation_, method)
#define CALL_METHOD_RETURN_INT_PREFIX(method) CALL_METHOD_RETURN_INT(Java_net_bitmovin_libdash_mpd_Representation_, method)
#define CALL_METHOD_RETURN_STRINGVECTOR_PREFIX(method) CALL_METHOD_RETURN_STRINGVECTOR(Java_net_bitmovin_libdash_mpd_Representation_, method)
#define CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTRVECTOR(Java_net_bitmovin_libdash_mpd_Representation_, method, cppClassType, javaClassType)
#define CALL_METHOD_RETURN_OBJECTPTR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTR(Java_net_bitmovin_libdash_mpd_Representation_, method, cppClassType, javaClassType)

#define CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(method, cppNumberType, javaNumberType) CALL_METHOD_NUMBER_RETURN_VOID(Java_net_bitmovin_libdash_mpd_Representation_, method, cppNumberType, javaNumberType)
#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_mpd_Representation_, method)
#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method, cppClassType)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_Representation_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_Representation_)

CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetBaseURLs, dash::mpd::IBaseUrl, "net/bitmovin/libdash/mpd/BaseUrl")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetSubRepresentations, dash::mpd::ISubRepresentation, "net/bitmovin/libdash/mpd/SubRepresentation")

CALL_METHOD_RETURN_OBJECTPTR_PREFIX(GetSegmentBase, dash::mpd::ISegmentBase, "net/bitmovin/libdash/mpd/SegmentBase")
CALL_METHOD_RETURN_OBJECTPTR_PREFIX(GetSegmentList, dash::mpd::ISegmentList, "net/bitmovin/libdash/mpd/SegmentList")
CALL_METHOD_RETURN_OBJECTPTR_PREFIX(GetSegmentTemplate, dash::mpd::ISegmentTemplate, "net/bitmovin/libdash/mpd/SegmentTemplate")

CALL_METHOD_RETURN_STRING_PREFIX(GetId)

CALL_METHOD_RETURN_INT_PREFIX(GetBandwidth)
CALL_METHOD_RETURN_INT_PREFIX(GetQualityRanking)

CALL_METHOD_RETURN_STRINGVECTOR_PREFIX(GetDependencyId)
CALL_METHOD_RETURN_STRINGVECTOR_PREFIX(GetMediaStreamStructureId)

CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddBaseURL, dash::mpd::BaseUrl)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddSubRepresentation, dash::mpd::SubRepresentation)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(SetSegmentBase, dash::mpd::SegmentBase)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(SetSegmentList, dash::mpd::SegmentList)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(SetSegmentTemplate, dash::mpd::SegmentTemplate)

CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetId)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetDependencyId)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetMediaStreamStructureId)

CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetBandwidth, uint32_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetQualityRanking, uint32_t, jint)
