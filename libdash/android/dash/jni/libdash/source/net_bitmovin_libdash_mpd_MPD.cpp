#include "net_bitmovin_libdash_mpd_MPD.h"

#include "mpd/MPD.h"

#include <vector>


#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::MPD
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_mpd_MPD_, method)
#define CALL_METHOD_RETURN_INT_PREFIX(method) CALL_METHOD_RETURN_INT(Java_net_bitmovin_libdash_mpd_MPD_, method)
#define CALL_METHOD_RETURN_STRINGVECTOR_PREFIX(method) CALL_METHOD_RETURN_STRINGVECTOR(Java_net_bitmovin_libdash_mpd_MPD_, method)
#define CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTRVECTOR(Java_net_bitmovin_libdash_mpd_MPD_, method, cppClassType, javaClassType)
#define CALL_METHOD_RETURN_OBJECTPTR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTR(Java_net_bitmovin_libdash_mpd_MPD_, method, cppClassType, javaClassType)
#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_mpd_MPD_, method)
#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_mpd_MPD_, method, cppClassType)
#define CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(method, cppNumberType, javaNumberType) CALL_METHOD_NUMBER_RETURN_VOID(Java_net_bitmovin_libdash_mpd_MPD_, method, cppNumberType, javaNumberType)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_MPD_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_MPD_)

INHERT_ABSTRACTMPDELEMENT(Java_net_bitmovin_libdash_mpd_MPD_)

CALL_METHOD_RETURN_STRING_PREFIX(GetId)
CALL_METHOD_RETURN_STRING_PREFIX(GetType)
CALL_METHOD_RETURN_STRING_PREFIX(GetAvailabilityStarttime)
CALL_METHOD_RETURN_STRING_PREFIX(GetAvailabilityEndtime)
CALL_METHOD_RETURN_STRING_PREFIX(GetMediaPresentationDuration)
CALL_METHOD_RETURN_STRING_PREFIX(GetMinimumUpdatePeriod)
CALL_METHOD_RETURN_STRING_PREFIX(GetMinBufferTime)
CALL_METHOD_RETURN_STRING_PREFIX(GetTimeShiftBufferDepth)
CALL_METHOD_RETURN_STRING_PREFIX(GetSuggestedPresentationDelay)
CALL_METHOD_RETURN_STRING_PREFIX(GetMaxSegmentDuration)
CALL_METHOD_RETURN_STRING_PREFIX(GetMaxSubsegmentDuration)

CALL_METHOD_RETURN_INT_PREFIX(GetFetchTime)

CALL_METHOD_RETURN_STRINGVECTOR_PREFIX(GetProfiles)
CALL_METHOD_RETURN_STRINGVECTOR_PREFIX(GetLocations)

CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetProgramInformations, dash::mpd::IProgramInformation, "net/bitmovin/libdash/mpd/ProgramInformation")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetTCPConnectionList, dash::metrics::ITCPConnection, "net/bitmovin/libdash/metrics/TCPConnection")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetHTTPTransactionList, dash::metrics::IHTTPTransaction, "net/bitmovin/libdash/metrics/HTTPTransaction")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetBaseUrls, dash::mpd::IBaseUrl, "net/bitmovin/libdash/mpd/BaseUrl")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetPeriods, dash::mpd::IPeriod, "net/bitmovin/libdash/mpd/Period")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetMetrics, dash::mpd::IMetrics, "net/bitmovin/libdash/mpd/Metrics")

CALL_METHOD_RETURN_OBJECTPTR_PREFIX(GetMPDPathBaseUrl, dash::mpd::IBaseUrl, "net/bitmovin/libdash/mpd/BaseUrl")

CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddTCPConnection, dash::metrics::TCPConnection)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddHTTPTransaction, dash::metrics::HTTPTransaction)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddProgramInformation, dash::mpd::ProgramInformation)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddBaseUrl, dash::mpd::BaseUrl)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddPeriod, dash::mpd::Period)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddMetrics, dash::mpd::Metrics)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(SetMPDPathBaseUrl, dash::mpd::BaseUrl)

CALL_METHOD_STRING_RETURN_VOID_PREFIX(AddLocation)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetId)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetType)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetAvailabilityStarttime)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetAvailabilityEndtime)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetMediaPresentationDuration)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetMinimumUpdatePeriod)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetMinBufferTime)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetTimeShiftBufferDepth)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetSuggestedPresentationDelay)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetMaxSegmentDuration)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetMaxSubsegmentDuration)

CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetFetchTime, uint32_t, jint)
