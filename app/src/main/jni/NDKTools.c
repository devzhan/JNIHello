//
// Created by zhanxiuwen on 2019-06-18.
//

#include "com_android_jnihello_NDKTools.h"
JNIEXPORT jstring JNICALL Java_com_android_jnihello_NDKTools_getStringFromJNI
  (JNIEnv *env, jobject object){
         return (*env)->NewStringUTF(env,"Hellow World，这是隔壁老李头的NDK的第一行代码");

  }