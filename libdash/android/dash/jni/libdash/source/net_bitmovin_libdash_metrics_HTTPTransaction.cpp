#include "net_bitmovin_libdash_metrics_HTTPTransaction.h"

#include "metrics/HTTPTransaction.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::metrics::HTTPTransaction
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_STRING_PREFIX(method) CALL_METHOD_RETURN_STRING(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method)
#define CALL_METHOD_RETURN_INT_PREFIX(method) CALL_METHOD_RETURN_INT(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method)
#define CALL_METHOD_RETURN_SHORT_PREFIX(method) CALL_METHOD_RETURN_SHORT(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method)
#define CALL_METHOD_RETURN_LONG_PREFIX(method) CALL_METHOD_RETURN_LONG(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method)
#define CALL_METHOD_RETURN_STRINGVECTOR_PREFIX(method) CALL_METHOD_RETURN_STRINGVECTOR(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method)
#define CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTRVECTOR(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method, cppClassType, javaClassType)
#define CALL_METHOD_RETURN_OBJECTPTR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTR(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method, cppClassType, javaClassType)

#define CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(method, cppNumberType, javaNumberType) CALL_METHOD_NUMBER_RETURN_VOID(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method, cppNumberType, javaNumberType)
#define CALL_METHOD_ENUM_RETURN_VOID_PREFIX(method, cppEnumType) CALL_METHOD_ENUM_RETURN_VOID(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method, cppEnumType)
#define CALL_METHOD_STRING_RETURN_VOID_PREFIX(method) CALL_METHOD_STRING_RETURN_VOID(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method)
#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_metrics_HTTPTransaction_, method, cppClassType)

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_metrics_HTTPTransaction_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_metrics_HTTPTransaction_)

CALL_METHOD_RETURN_INT_PREFIX(TCPId)

jint Java_net_bitmovin_libdash_metrics_HTTPTransaction_TypeNative(JNIEnv *env, jobject obj)
{
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));
    if (classPtr == 0)
    {
        return -1;
    }
    const int result(classPtr->Type());
    return result;
}

CALL_METHOD_RETURN_STRING_PREFIX(OriginalUrl)
CALL_METHOD_RETURN_STRING_PREFIX(ActualUrl)
CALL_METHOD_RETURN_STRING_PREFIX(Range)
CALL_METHOD_RETURN_STRING_PREFIX(RequestSentTime)
CALL_METHOD_RETURN_STRING_PREFIX(ResponseReceivedTime)
CALL_METHOD_RETURN_STRING_PREFIX(HTTPHeader)

CALL_METHOD_RETURN_SHORT_PREFIX(ResponseCode)

CALL_METHOD_RETURN_LONG_PREFIX(Interval)

CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(ThroughputTrace, dash::metrics::IThroughputMeasurement, "net/bitmovin/libdash/metrics/ThroughputMeasurement")

CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetTCPId, uint32_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetResponseCode, uint16_t, jshort)
CALL_METHOD_NUMBER_RETURN_VOID_PREFIX(SetInterval, uint64_t, jlong)

CALL_METHOD_ENUM_RETURN_VOID_PREFIX(SetType, dash::metrics::HTTPTransactionType)

CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetOriginalUrl)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetActualUrl)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetRange)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetRequestSentTime)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(SetResponseReceivedTime)
CALL_METHOD_STRING_RETURN_VOID_PREFIX(AddHTTPHeaderLine)

CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AddThroughputMeasurement, dash::metrics::ThroughputMeasurement)
