/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_bitmovin_libdash_mpd_Metrics */

#ifndef _Included_net_bitmovin_libdash_mpd_Metrics
#define _Included_net_bitmovin_libdash_mpd_Metrics
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_bitmovin_libdash_mpd_Metrics
 * Method:    GetReportings
 * Signature: ()Ljava/util/Vector;
 */
JNIEXPORT jobject JNICALL Java_net_bitmovin_libdash_mpd_Metrics_GetReportings
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_Metrics
 * Method:    GetRanges
 * Signature: ()Ljava/util/Vector;
 */
JNIEXPORT jobject JNICALL Java_net_bitmovin_libdash_mpd_Metrics_GetRanges
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_Metrics
 * Method:    GetMetrics
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_bitmovin_libdash_mpd_Metrics_GetMetrics
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_Metrics
 * Method:    initialiseCppClass
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_bitmovin_libdash_mpd_Metrics_initialiseCppClass
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_Metrics
 * Method:    destoryCppClass
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_mpd_Metrics_destoryCppClass
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_Metrics
 * Method:    AddReporting
 * Signature: (Lnet/bitmovin/libdash/mpd/Descriptor;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_mpd_Metrics_AddReporting
  (JNIEnv *, jobject, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_Metrics
 * Method:    AddRange
 * Signature: (Lnet/bitmovin/libdash/mpd/Range;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_mpd_Metrics_AddRange
  (JNIEnv *, jobject, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_Metrics
 * Method:    SetMetrics
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_mpd_Metrics_SetMetrics
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
