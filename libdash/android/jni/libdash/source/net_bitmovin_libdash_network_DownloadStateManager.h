/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_bitmovin_libdash_network_DownloadStateManager */

#ifndef _Included_net_bitmovin_libdash_network_DownloadStateManager
#define _Included_net_bitmovin_libdash_network_DownloadStateManager
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_bitmovin_libdash_network_DownloadStateManager
 * Method:    StateNative
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_bitmovin_libdash_network_DownloadStateManager_StateNative
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_network_DownloadStateManager
 * Method:    WaitState
 * Signature: (Lnet/bitmovin/libdash/network/DownloadState;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_network_DownloadStateManager_WaitState
  (JNIEnv *, jobject, jobject);

/*
 * Class:     net_bitmovin_libdash_network_DownloadStateManager
 * Method:    CheckAndWait
 * Signature: (Lnet/bitmovin/libdash/network/DownloadState;Lnet/bitmovin/libdash/network/DownloadState;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_network_DownloadStateManager_CheckAndWait
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     net_bitmovin_libdash_network_DownloadStateManager
 * Method:    CheckAndSet
 * Signature: (Lnet/bitmovin/libdash/network/DownloadState;Lnet/bitmovin/libdash/network/DownloadState;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_network_DownloadStateManager_CheckAndSet
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     net_bitmovin_libdash_network_DownloadStateManager
 * Method:    State
 * Signature: (Lnet/bitmovin/libdash/network/DownloadState;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_network_DownloadStateManager_State
  (JNIEnv *, jobject, jobject);

/*
 * Class:     net_bitmovin_libdash_network_DownloadStateManager
 * Method:    Attach
 * Signature: (Lnet/bitmovin/libdash/network/IDownloadObserver;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_network_DownloadStateManager_Attach
  (JNIEnv *, jobject, jobject);

/*
 * Class:     net_bitmovin_libdash_network_DownloadStateManager
 * Method:    Detach
 * Signature: (Lnet/bitmovin/libdash/network/IDownloadObserver;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_network_DownloadStateManager_Detach
  (JNIEnv *, jobject, jobject);

/*
 * Class:     net_bitmovin_libdash_network_DownloadStateManager
 * Method:    initialiseCppClass
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_bitmovin_libdash_network_DownloadStateManager_initialiseCppClass
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_network_DownloadStateManager
 * Method:    destoryCppClass
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_network_DownloadStateManager_destoryCppClass
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
