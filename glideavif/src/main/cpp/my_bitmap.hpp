#ifndef __MY_BITMAP_HPP__
#define __MY_BITMAP_HPP__

#include <vector>
#include <jni.h>
#include <android/bitmap.h>

class MyBitmap {
    JNIEnv *env;
    jobject jbitmap;
    AndroidBitmapInfo info;

public:
    MyBitmap(JNIEnv *env, int width, int height);

    void Load(const std::vector<uint8_t> &rgbaList);

    jobject Bitmap() { return jbitmap; }
};

#endif
