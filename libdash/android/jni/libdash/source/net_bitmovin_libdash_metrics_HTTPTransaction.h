/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_bitmovin_libdash_metrics_HTTPTransaction */

#ifndef _Included_net_bitmovin_libdash_metrics_HTTPTransaction
#define _Included_net_bitmovin_libdash_metrics_HTTPTransaction
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    TCPId
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_TCPId
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    TypeNative
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_TypeNative
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    OriginalUrl
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_OriginalUrl
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    ActualUrl
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_ActualUrl
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    Range
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_Range
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    RequestSentTime
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_RequestSentTime
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    ResponseReceivedTime
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_ResponseReceivedTime
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    ResponseCode
 * Signature: ()S
 */
JNIEXPORT jshort JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_ResponseCode
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    Interval
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_Interval
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    ThroughputTrace
 * Signature: ()Ljava/util/Vector;
 */
JNIEXPORT jobject JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_ThroughputTrace
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    HTTPHeader
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_HTTPHeader
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    SetTCPId
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_SetTCPId
  (JNIEnv *, jobject, jint);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    SetType
 * Signature: (Lnet/bitmovin/libdash/metrics/HTTPTransactionType;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_SetType
  (JNIEnv *, jobject, jobject);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    SetOriginalUrl
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_SetOriginalUrl
  (JNIEnv *, jobject, jstring);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    SetActualUrl
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_SetActualUrl
  (JNIEnv *, jobject, jstring);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    SetRange
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_SetRange
  (JNIEnv *, jobject, jstring);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    SetRequestSentTime
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_SetRequestSentTime
  (JNIEnv *, jobject, jstring);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    SetResponseReceivedTime
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_SetResponseReceivedTime
  (JNIEnv *, jobject, jstring);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    SetResponseCode
 * Signature: (S)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_SetResponseCode
  (JNIEnv *, jobject, jshort);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    SetInterval
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_SetInterval
  (JNIEnv *, jobject, jint);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    AddThroughputMeasurement
 * Signature: (Lnet/bitmovin/libdash/metrics/ThroughputMeasurement;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_AddThroughputMeasurement
  (JNIEnv *, jobject, jobject);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    AddHTTPHeaderLine
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_AddHTTPHeaderLine
  (JNIEnv *, jobject, jstring);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    initialiseCppClass
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_initialiseCppClass
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_metrics_HTTPTransaction
 * Method:    destoryCppClass
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_metrics_HTTPTransaction_destoryCppClass
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
