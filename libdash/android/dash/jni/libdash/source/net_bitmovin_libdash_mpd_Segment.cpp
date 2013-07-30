#include "net_bitmovin_libdash_mpd_Segment.h"

#include "mpd/Segment.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::Segment
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_RETURN_VOID_PREFIX(method) CALL_METHOD_RETURN_VOID(Java_net_bitmovin_libdash_mpd_Segment_, method)
#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_mpd_Segment_, method, cppClassType)


CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_mpd_Segment_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_mpd_Segment_)

CALL_METHOD_RETURN_STRING_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, AbsoluteURI, __)
CALL_METHOD_RETURN_STRING_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, Host, __)
CALL_METHOD_RETURN_STRING_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, Path, __)
CALL_METHOD_RETURN_STRING_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, Range, __)

CALL_METHOD_RETURN_INT_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, Port, __)
CALL_METHOD_RETURN_INT_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, StartByte, __)
CALL_METHOD_RETURN_INT_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, EndByte, __)

CALL_METHOD_RETURN_BOOLEAN_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, HasByteRange, __)

CALL_METHOD_RETURN_INT(Java_net_bitmovin_libdash_mpd_Segment_, GetType)

CALL_METHOD_STRING_RETURN_VOID_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, AbsoluteURI, __Ljava_lang_String_2)
CALL_METHOD_STRING_RETURN_VOID_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, Host, __Ljava_lang_String_2)
CALL_METHOD_STRING_RETURN_VOID_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, Path, __Ljava_lang_String_2)
CALL_METHOD_STRING_RETURN_VOID_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, Range, __Ljava_lang_String_2)

CALL_METHOD_NUMBER_RETURN_VOID_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, Port, __I, size_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, StartByte, __I, size_t, jint)
CALL_METHOD_NUMBER_RETURN_VOID_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, EndByte, __I, size_t, jint)

CALL_METHOD_NUMBER_RETURN_VOID_SUFFIX(Java_net_bitmovin_libdash_mpd_Segment_, HasByteRange, __Z, bool, jboolean)


jboolean Java_net_bitmovin_libdash_mpd_Segment_StartDownload__(JNIEnv *env, jobject obj)
{
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));
    if (classPtr == 0)
    {
        LOGD("classPtr == 0");
        return false;
    }
    const bool& result(classPtr->StartDownload());
    return result;
}


jboolean Java_net_bitmovin_libdash_mpd_Segment_StartDownload__Lnet_bitmovin_libdash_network_IConnection_2(JNIEnv *env, jobject obj, jobject work)
{
    LOCAL_CLASS* thiz(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));
    bool result(thiz->StartDownload(jni_helper::getClassPtr<dash::network::IConnection>(env, work)));
    return result;
}

CALL_METHOD_RETURN_VOID_PREFIX(AbortDownload)

CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(AttachDownloadObserver, dash::network::IDownloadObserver)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(DetachDownloadObserver, dash::network::IDownloadObserver)


// 0 --> copy back the content and free the elems buffer
// JNI_COMMIT --> copy back the content but do not free the elems buffer
#define CALL_METHOD_PEEK_OR_READ(method) \
jbyteArray Java_net_bitmovin_libdash_mpd_Segment_##method(JNIEnv *env, jobject obj, jint num) \
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
