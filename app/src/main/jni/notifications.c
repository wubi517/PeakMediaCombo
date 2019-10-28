#include <jni.h>

//Links from MainActivity
JNIEXPORT jstring JNICALL Java_com_gold_kds517_peak_1new_MainActivity_getOne(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "cGVha20x");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_peak_1new_MainActivity_getTwo(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "cGVha20y");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_peak_1new_MainActivity_getThree(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "cGVha20z");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_peak_1new_MainActivity_getFour(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "aHR0cDovL3RoZXJhZGlvc2hhay5jby51ay9pcHR2L2luZGV4LnBocD9saWNlbmNlX2tleT1wZWFrbTE=");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_peak_1new_MainActivity_getFive(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "aHR0cDovL3RoZXJhZGlvc2hhay5jby51ay9pcHR2L2luZGV4LnBocD9saWNlbmNlX2tleT1wZWFrbTE=");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_peak_1new_MainActivity_getSix(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "aHR0cDovL3RoZXJhZGlvc2hhay5jby51ay9wZWFrbS9pY29uLnBuZw==");
}

JNIEXPORT jstring JNICALL Java_com_gold_kds517_peak_1new_MainActivity_getSeven(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "aHR0cDovL3RoZXJhZGlvc2hhay5jby51ay9wZWFrbTIvaWNvbi5wbmc=");
}

JNIEXPORT jstring JNICALL Java_com_gold_kds517_peak_1new_MainActivity_getEight(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "aHR0cDovL3RoZXJhZGlvc2hhay5jby51ay9wZWFrbTMvaWNvbi5wbmc=");
}