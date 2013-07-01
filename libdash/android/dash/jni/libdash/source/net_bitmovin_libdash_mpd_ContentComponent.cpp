#include "net_bitmovin_libdash_mpd_ContentComponent.h"

#include "mpd/ContentComponent.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::ContentComponent
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_mpd_ContentComponent_, method)
#define CALL_METHOD_RETURN_INT_PREFIX(method) CALL_METHOD_RETURN_INT(Java_net_bitmovin_libdash_mpd_ContentComponent_, method)
#define CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTRVECTOR(Java_net_bitmovin_libdash_mpd_ContentComponent_, method, cppClassType, javaClassType)

#define CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(method, cppNumberType, javaNumberType) CALL_METHOD_NUMBER_RETURN_VOID(Java_net_bitmovin_libdash_mpd_ContentComponent_, method, cppNumberType, javaNumberType)
#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_mpd_ContentComponent_, method)
#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_mpd_ContentComponent_, method, cppClassType)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_ContentComponent_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_ContentComponent_)

CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetAccessibility, dash::mpd::IDescriptor, "net/bitmovin/libdash/mpd/Descriptor");
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetRole, dash::mpd::IDescriptor, "net/bitmovin/libdash/mpd/Descriptor");
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetRating, dash::mpd::IDescriptor, "net/bitmovin/libdash/mpd/Descriptor");
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetViewpoint, dash::mpd::IDescriptor, "net/bitmovin/libdash/mpd/Descriptor");

CALL_METHOD_RETURN_INT_PREFIX(GetId)

CALL_METHOD_RETURN_STRING_PREFIX(GetLang)
CALL_METHOD_RETURN_STRING_PREFIX(GetContentType)
CALL_METHOD_RETURN_STRING_PREFIX(GetPar)

CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetId, uint32_t, jint)

CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetLang)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetContentType)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetPar)
