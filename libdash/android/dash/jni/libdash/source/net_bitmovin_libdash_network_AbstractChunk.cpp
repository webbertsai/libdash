#include "net_bitmovin_libdash_network_AbstractChunk.h"

#include "network/AbstractChunk.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::network::AbstractChunk
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(method, cppClassType, javaClassType) CALL_METHOD_RETURN_OBJECTPTRVECTOR(Java_net_bitmovin_libdash_network_AbstractChunk_, method, cppClassType, javaClassType)
#define CALL_METHOD_RETURN_VOID_PREFIX(method) CALL_METHOD_RETURN_VOID(Java_net_bitmovin_libdash_network_AbstractChunk_, method)
#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_network_AbstractChunk_, method, cppClassType)

CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetTCPConnectionList, dash::metrics::ITCPConnection, "net/bitmovin/libdash/network/TCPConnection")
CALL_METHOD_RETURN_OBJECTPTRVECTOR_PREFIX(GetHTTPTransactionList, dash::metrics::IHTTPTransaction, "net/bitmovin/libdash/network/HTTPTransaction")


jboolean Java_net_bitmovin_libdash_network_AbstractChunk_StartDownload__(JNIEnv *env, jobject obj)
{
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));
    if (classPtr == 0)
    {
        return 0;
    }
    const bool& result(classPtr->StartDownload());
    return result;
}


jboolean Java_net_bitmovin_libdash_network_AbstractChunk_StartDownload__Lnet_bitmovin_libdash_network_IConnection_2(JNIEnv *env, jobject obj, jobject work)
{
    LOCAL_CLASS* thiz(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));
    bool result(thiz->StartDownload(jni_helper::getClassPtr<dash::network::IConnection>(env, work)));
    return result;
}

CALL_METHOD_RETURN_VOID_PREFIX(AbortDownload)
CALL_METHOD_RETURN_VOID_PREFIX(NotifyDownloadRateChanged)

CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AttachDownloadObserver, dash::network::IDownloadObserver)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(DetachDownloadObserver, dash::network::IDownloadObserver)


// 0 --> copy back the content and free the elems buffer
// JNI_COMMIT --> copy back the content but do not free the elems buffer
#define CALL_METHOD_PEEK_OR_READ(method) \
jbyteArray Java_net_bitmovin_libdash_network_AbstractChunk_##method(JNIEnv *env, jobject obj, jint num) \
{\
    LOCAL_CLASS* thiz = jni_helper::getClassPtr<LOCAL_CLASS>(env, obj);\
    uint8_t *buffer(new uint8_t[num]);\
\
    int readCount(thiz->method(buffer, num));\
\
    jbyteArray result = env->NewByteArray(readCount);\
    jbyte *work = env->GetByteArrayElements(result, 0);\
\
    memcpy(work, buffer, readCount);\
\
    env->ReleaseByteArrayElements(result, work, 0);\
\
    return result;\
}

CALL_METHOD_PEEK_OR_READ(Read)
CALL_METHOD_PEEK_OR_READ(Peek)

