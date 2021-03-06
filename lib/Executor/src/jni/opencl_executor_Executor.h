/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class opencl_executor_Executor */

#ifndef _Included_opencl_executor_Executor
#define _Included_opencl_executor_Executor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     opencl_executor_Executor
 * Method:    nativeMatrixMultiply
 * Signature: ([F[F[FIII)V
 */
JNIEXPORT void JNICALL Java_opencl_executor_Executor_nativeMatrixMultiply
  (JNIEnv *, jclass, jfloatArray, jfloatArray, jfloatArray, jint, jint, jint);

/*
 * Class:     opencl_executor_Executor
 * Method:    execute
 * Signature: (Lopencl/executor/Kernel;IIIIII[Lopencl/executor/KernelArg;)D
 */
JNIEXPORT jdouble JNICALL Java_opencl_executor_Executor_execute
  (JNIEnv *, jclass, jobject, jint, jint, jint, jint, jint, jint, jobjectArray);

/*
 * Class:     opencl_executor_Executor
 * Method:    benchmark
 * Signature: (Lopencl/executor/Kernel;IIIIII[Lopencl/executor/KernelArg;ID)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_opencl_executor_Executor_benchmark
  (JNIEnv *, jclass, jobject, jint, jint, jint, jint, jint, jint, jobjectArray, jint, jdouble);

/*
 * Class:     opencl_executor_Executor
 * Method:    evaluate
 * Signature: (Lopencl/executor/Kernel;IIIIII[Lopencl/executor/KernelArg;ID)D
 */
JNIEXPORT jdouble JNICALL Java_opencl_executor_Executor_evaluate
  (JNIEnv *, jclass, jobject, jint, jint, jint, jint, jint, jint, jobjectArray, jint, jdouble);

/*
 * Class:     opencl_executor_Executor
 * Method:    init
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_opencl_executor_Executor_init
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     opencl_executor_Executor
 * Method:    getDeviceLocalMemSize
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_opencl_executor_Executor_getDeviceLocalMemSize
  (JNIEnv *, jclass);

/*
 * Class:     opencl_executor_Executor
 * Method:    getDeviceGlobalMemSize
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_opencl_executor_Executor_getDeviceGlobalMemSize
  (JNIEnv *, jclass);

/*
 * Class:     opencl_executor_Executor
 * Method:    getDeviceMaxMemAllocSize
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_opencl_executor_Executor_getDeviceMaxMemAllocSize
  (JNIEnv *, jclass);

/*
 * Class:     opencl_executor_Executor
 * Method:    getDeviceMaxWorkGroupSize
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_opencl_executor_Executor_getDeviceMaxWorkGroupSize
  (JNIEnv *, jclass);

/*
 * Class:     opencl_executor_Executor
 * Method:    supportsDouble
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_opencl_executor_Executor_supportsDouble
  (JNIEnv *, jclass);

/*
 * Class:     opencl_executor_Executor
 * Method:    getPlatformName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_opencl_executor_Executor_getPlatformName
  (JNIEnv *, jclass);

/*
 * Class:     opencl_executor_Executor
 * Method:    getDeviceName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_opencl_executor_Executor_getDeviceName
  (JNIEnv *, jclass);

/*
 * Class:     opencl_executor_Executor
 * Method:    getDeviceType
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_opencl_executor_Executor_getDeviceType
  (JNIEnv *, jclass);

/*
 * Class:     opencl_executor_Executor
 * Method:    shutdown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_opencl_executor_Executor_shutdown
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
