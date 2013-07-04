/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_bitmovin_libdash_mpd_SegmentURL */

#ifndef _Included_net_bitmovin_libdash_mpd_SegmentURL
#define _Included_net_bitmovin_libdash_mpd_SegmentURL
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_bitmovin_libdash_mpd_SegmentURL
 * Method:    GetMediaURI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_bitmovin_libdash_mpd_SegmentURL_GetMediaURI
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_SegmentURL
 * Method:    GetMediaRange
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_bitmovin_libdash_mpd_SegmentURL_GetMediaRange
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_SegmentURL
 * Method:    GetIndexURI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_bitmovin_libdash_mpd_SegmentURL_GetIndexURI
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_SegmentURL
 * Method:    GetIndexRange
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_bitmovin_libdash_mpd_SegmentURL_GetIndexRange
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_SegmentURL
 * Method:    ToMediaSegment
 * Signature: (Ljava/util/Vector;)Lnet/bitmovin/libdash/mpd/ISegment;
 */
JNIEXPORT jobject JNICALL Java_net_bitmovin_libdash_mpd_SegmentURL_ToMediaSegment
  (JNIEnv *, jobject, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_SegmentURL
 * Method:    ToIndexSegment
 * Signature: (Ljava/util/Vector;)Lnet/bitmovin/libdash/mpd/ISegment;
 */
JNIEXPORT jobject JNICALL Java_net_bitmovin_libdash_mpd_SegmentURL_ToIndexSegment
  (JNIEnv *, jobject, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_SegmentURL
 * Method:    initialiseCppClass
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_bitmovin_libdash_mpd_SegmentURL_initialiseCppClass
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_SegmentURL
 * Method:    destoryCppClass
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_mpd_SegmentURL_destoryCppClass
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_SegmentURL
 * Method:    SetMediaURI
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_mpd_SegmentURL_SetMediaURI
  (JNIEnv *, jobject, jstring);

/*
 * Class:     net_bitmovin_libdash_mpd_SegmentURL
 * Method:    SetMediaRange
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_mpd_SegmentURL_SetMediaRange
  (JNIEnv *, jobject, jstring);

/*
 * Class:     net_bitmovin_libdash_mpd_SegmentURL
 * Method:    SetIndexURI
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_mpd_SegmentURL_SetIndexURI
  (JNIEnv *, jobject, jstring);

/*
 * Class:     net_bitmovin_libdash_mpd_SegmentURL
 * Method:    SetIndexRange
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_bitmovin_libdash_mpd_SegmentURL_SetIndexRange
  (JNIEnv *, jobject, jstring);

/*
 * Class:     net_bitmovin_libdash_mpd_SegmentURL
 * Method:    GetAdditionalSubNodes
 * Signature: ()Ljava/util/Vector;
 */
JNIEXPORT jobject JNICALL Java_net_bitmovin_libdash_mpd_SegmentURL_GetAdditionalSubNodes
  (JNIEnv *, jobject);

/*
 * Class:     net_bitmovin_libdash_mpd_SegmentURL
 * Method:    GetRawAttributes
 * Signature: ()Ljava/util/TreeMap;
 */
JNIEXPORT jobject JNICALL Java_net_bitmovin_libdash_mpd_SegmentURL_GetRawAttributes
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
