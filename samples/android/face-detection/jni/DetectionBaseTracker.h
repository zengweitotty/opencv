/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_opencv_samples_fd_DetectionBaseTracker */

#ifndef _Included_org_opencv_samples_fd_DetectionBaseTracker
#define _Included_org_opencv_samples_fd_DetectionBaseTracker
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_opencv_samples_fd_DetectionBaseTracker
 * Method:    nativeCreateObject
 * Signature: (Ljava/lang/String;F)J
 */
JNIEXPORT jlong JNICALL Java_org_opencv_samples_fd_DetectionBaseTracker_nativeCreateObject
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     org_opencv_samples_fd_DetectionBaseTracker
 * Method:    nativeDestroyObject
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_opencv_samples_fd_DetectionBaseTracker_nativeDestroyObject
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_opencv_samples_fd_DetectionBaseTracker
 * Method:    nativeStart
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_opencv_samples_fd_DetectionBaseTracker_nativeStart
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_opencv_samples_fd_DetectionBaseTracker
 * Method:    nativeStop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_opencv_samples_fd_DetectionBaseTracker_nativeStop
  (JNIEnv *, jclass, jlong);

  /*
   * Class:     org_opencv_samples_fd_DetectionBaseTracker
   * Method:    nativeSetFaceSize
   * Signature: (JI)V
   */
  JNIEXPORT void JNICALL Java_org_opencv_samples_fd_DetectionBaseTracker_nativeSetFaceSize
  (JNIEnv *, jclass, jlong, jint);
   
/*
 * Class:     org_opencv_samples_fd_DetectionBaseTracker
 * Method:    nativeDetect
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_opencv_samples_fd_DetectionBaseTracker_nativeDetect
  (JNIEnv *, jclass, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif