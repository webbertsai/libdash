#include "net_bitmovin_libdash_network_DownloadStateManager.h"

#include "network/DownloadStateManager.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::network::DownloadStateManager
#endif

#include "jni_helper.hpp"

#define CALL_METHOD_ENUM_RETURN_VOID_PREFIX(method, cppEnumType) CALL_METHOD_ENUM_RETURN_VOID(Java_net_bitmovin_libdash_network_DownloadStateManager_, method, cppEnumType)
#define CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(method, cppClassType) CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_network_DownloadStateManager_, method, cppClassType)

jint Java_net_bitmovin_libdash_network_DownloadStateManager_StateNative(JNIEnv *env, jobject obj)
{
    return jni_helper::getClassPtr<LOCAL_CLASS>(env, obj)->State();
}

CALL_METHOD_ENUM_RETURN_VOID_PREFIX(WaitState, dash::network::DownloadState)
CALL_METHOD_ENUM_RETURN_VOID_PREFIX(State, dash::network::DownloadState)

CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(Attach, dash::network::IDownloadObserver)
CALL_METHOD_OBJECT_RETURN_VOID_PREFIX(Detach, dash::network::IDownloadObserver)

void Java_net_bitmovin_libdash_network_DownloadStateManager_CheckAndWait(JNIEnv *env, jobject obj, jobject arg0, jobject arg1)
{
    int arg0Cast(jni_helper::convertJEnumToInt(env, arg0));
    int arg1Cast(jni_helper::convertJEnumToInt(env, arg1));
    jni_helper::getClassPtr<LOCAL_CLASS>(env, obj)->CheckAndWait((dash::network::DownloadState)arg0Cast, (dash::network::DownloadState)arg1Cast);
}

void Java_net_bitmovin_libdash_network_DownloadStateManager_CheckAndSet(JNIEnv *env, jobject obj, jobject arg0, jobject arg1)
{
    int arg0Cast(jni_helper::convertJEnumToInt(env, arg0));
    int arg1Cast(jni_helper::convertJEnumToInt(env, arg1));
    jni_helper::getClassPtr<LOCAL_CLASS>(env, obj)->CheckAndSet((dash::network::DownloadState)arg0Cast, (dash::network::DownloadState)arg1Cast);
}
