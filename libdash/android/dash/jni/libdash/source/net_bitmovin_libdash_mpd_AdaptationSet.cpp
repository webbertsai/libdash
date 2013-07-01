#include "net_bitmovin_libdash_mpd_AdaptationSet.h"

#include "mpd/AdaptationSet.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::AdaptationSet
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_mpd_AdaptationSet_, method)
#define CALL_METHOD_RETURN_INT_PREFIX(method) CALL_METHOD_RETURN_INT(Java_net_bitmovin_libdash_mpd_AdaptationSet_, method)
#define CALL_METHOD_RETURN_BYTE_PREFIX(method) CALL_METHOD_RETURN_BYTE(Java_net_bitmovin_libdash_mpd_AdaptationSet_, method)
#define CALL_METHOD_RETURN_BOOLEAN_PREFIX(method) CALL_METHOD_RETURN_BOOLEAN(Java_net_bitmovin_libdash_mpd_AdaptationSet_, method)
#define CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTRVECTOR(Java_net_bitmovin_libdash_mpd_AdaptationSet_, method, cppClassType, javaClassType)
#define CALL_METHOD_RETURN_OBJECTPTR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTR(Java_net_bitmovin_libdash_mpd_AdaptationSet_, method, cppClassType, javaClassType)

#define CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(method, cppNumberType, javaNumberType) CALL_METHOD_NUMBER_RETURN_VOID(Java_net_bitmovin_libdash_mpd_AdaptationSet_, method, cppNumberType, javaNumberType)
#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_mpd_AdaptationSet_, method)
#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_mpd_AdaptationSet_, method, cppClassType)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_AdaptationSet_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_AdaptationSet_)

CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetAccessibility, dash::mpd::IDescriptor, "net/bitmovin/libdash/mpd/Descriptor")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetRole, dash::mpd::IDescriptor, "net/bitmovin/libdash/mpd/Descriptor")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetRating, dash::mpd::IDescriptor, "net/bitmovin/libdash/mpd/Descriptor")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetViewpoint, dash::mpd::IDescriptor, "net/bitmovin/libdash/mpd/Descriptor")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetContentComponent, dash::mpd::IContentComponent, "net/bitmovin/libdash/mpd/ContentComponent")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetBaseURLs, dash::mpd::IBaseUrl, "net/bitmovin/libdash/mpd/BaseUrl")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetRepresentation, dash::mpd::IRepresentation, "net/bitmovin/libdash/mpd/Representation")

CALL_METHOD_RETURN_OBJECTPTR_PREFIX(GetSegmentBase, dash::mpd::ISegmentBase, "net/bitmovin/libdash/mpd/Segment")
CALL_METHOD_RETURN_OBJECTPTR_PREFIX(GetSegmentList, dash::mpd::ISegmentList, "net/bitmovin/libdash/mpd/SegmentList")
CALL_METHOD_RETURN_OBJECTPTR_PREFIX(GetSegmentTemplate, dash::mpd::ISegmentTemplate, "net/bitmovin/libdash/mpd/SegmentTemplate")

CALL_METHOD_RETURN_STRING_PREFIX(GetXlinkHref)
CALL_METHOD_RETURN_STRING_PREFIX(GetXlinkActuate)
CALL_METHOD_RETURN_STRING_PREFIX(GetLang)
CALL_METHOD_RETURN_STRING_PREFIX(GetContentType)
CALL_METHOD_RETURN_STRING_PREFIX(GetPar)
CALL_METHOD_RETURN_STRING_PREFIX(GetMinFramerate)
CALL_METHOD_RETURN_STRING_PREFIX(GetMaxFramerate)

CALL_METHOD_RETURN_INT_PREFIX(GetId)
CALL_METHOD_RETURN_INT_PREFIX(GetGroup)
CALL_METHOD_RETURN_INT_PREFIX(GetMinBandwidth)
CALL_METHOD_RETURN_INT_PREFIX(GetMaxBandwidth)
CALL_METHOD_RETURN_INT_PREFIX(GetMinWidth)
CALL_METHOD_RETURN_INT_PREFIX(GetMaxWidth)
CALL_METHOD_RETURN_INT_PREFIX(GetMinHeight)
CALL_METHOD_RETURN_INT_PREFIX(GetMaxHeight)
CALL_METHOD_RETURN_INT_PREFIX(GetSegmentAligment)
CALL_METHOD_RETURN_INT_PREFIX(GetSubsegmentAlignment)

CALL_METHOD_RETURN_BOOLEAN_PREFIX(SegmentAlignmentIsBoolValue)
CALL_METHOD_RETURN_BOOLEAN_PREFIX(HasSegmentAlignment)
CALL_METHOD_RETURN_BOOLEAN_PREFIX(SubsegmentAlignmentIsBoolValue)
CALL_METHOD_RETURN_BOOLEAN_PREFIX(HasSubsegmentAlignment)
CALL_METHOD_RETURN_BOOLEAN_PREFIX(GetBitstreamSwitching)

CALL_METHOD_RETURN_BYTE_PREFIX(GetSubsegmentStartsWithSAP)

CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddAccessibity, dash::mpd::Descriptor)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddRole, dash::mpd::Descriptor)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddRating, dash::mpd::Descriptor)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddViewpoint, dash::mpd::Descriptor)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddContentComponent, dash::mpd::ContentComponent)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddBaseURL, dash::mpd::BaseUrl)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(SetSegmentBase, dash::mpd::SegmentBase)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(SetSegmentList, dash::mpd::SegmentList)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(SetSegmentTemplate, dash::mpd::SegmentTemplate)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddRepresentation, dash::mpd::Representation)

CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetXlinkHref)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetXlinkActuate)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetLang)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetContentType)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetPar)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetMinFramerate)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetMaxFramerate)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetSegmentAlignment)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetSubsegmentAlignment)

CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetId, uint32_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetGroup, uint32_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetMinBandwidth, uint32_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetMaxBandwidth, uint32_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetMinWidth, uint32_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetMaxWidth, uint32_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetMinHeight, uint32_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetMaxHeight, uint32_t, jint)

CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetSubsegmentStartsWithSAP, uint8_t, jbyte)

CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetBitstreamSwitching, bool, jboolean)
