// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Common/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct NameValuePair;}}

namespace g{
namespace Fuse{

// public sealed class NameValuePair :2588
// {
struct NameValuePair_type : uType
{
    ::g::Fuse::IObject interface0;
};

NameValuePair_type* NameValuePair_typeof();
void NameValuePair__ctor__fn(NameValuePair* __this, uString* name, uObject* value);
void NameValuePair__FuseIObjectContainsKey_fn(NameValuePair* __this, uString* key, bool* __retval);
void NameValuePair__FuseIObjectget_Item_fn(NameValuePair* __this, uString* key, uObject** __retval);
void NameValuePair__FuseIObjectget_Keys_fn(NameValuePair* __this, uArray** __retval);
void NameValuePair__get_Name_fn(NameValuePair* __this, uString** __retval);
void NameValuePair__set_Name_fn(NameValuePair* __this, uString* value);
void NameValuePair__New1_fn(uString* name, uObject* value, NameValuePair** __retval);
void NameValuePair__ObjectFromArray_fn(uObject* list, uObject** __retval);
void NameValuePair__ToString_fn(NameValuePair* __this, uString** __retval);
void NameValuePair__get_Value_fn(NameValuePair* __this, uObject** __retval);
void NameValuePair__set_Value_fn(NameValuePair* __this, uObject* value);

struct NameValuePair : uObject
{
    uStrong<uString*> _Name;
    uStrong<uObject*> _Value;

    void ctor_(uString* name, uObject* value);
    uString* Name();
    void Name(uString* value);
    uObject* Value();
    void Value(uObject* value);
    static NameValuePair* New1(uString* name, uObject* value);
    static uObject* ObjectFromArray(uObject* list);
};
// }

}} // ::g::Fuse
