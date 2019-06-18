package com.android.jnihello;

public class NDKTools {
    static {
        System.loadLibrary("ndkdemotest-jni");
    }

    public static native String getStringFromJNI();
}
