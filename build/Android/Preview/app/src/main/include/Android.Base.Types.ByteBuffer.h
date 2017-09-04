// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/targets/android/uno/base/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.JNI.h>
#include <android/log.h>
#include <jni.h>
#include <Uno.h>
namespace g{namespace Android{namespace Base{namespace Types{struct ByteBuffer;}}}}

namespace g{
namespace Android{
namespace Base{
namespace Types{

// public static extern class ByteBuffer :926
// {
uClassType* ByteBuffer_typeof();
void ByteBuffer__NewDirectByteBuffer_fn(uArray* data_, jobject* __retval);
void ByteBuffer__ValidDirectByteBuffer_fn(jobject* directByteBuffer_, bool* __retval);

struct ByteBuffer : uObject
{
    static jobject NewDirectByteBuffer(uArray* data_);
    static bool ValidDirectByteBuffer(jobject directByteBuffer_);
};
// }

}}}} // ::g::Android::Base::Types
