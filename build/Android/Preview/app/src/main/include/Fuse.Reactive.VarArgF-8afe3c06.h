// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction__Argument;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// protected sealed class VarArgFunction.Argument :2095
// {
uType* VarArgFunction__Argument_typeof();
void VarArgFunction__Argument__ctor__fn(VarArgFunction__Argument* __this);
void VarArgFunction__Argument__Dispose_fn(VarArgFunction__Argument* __this);
void VarArgFunction__Argument__get_HasValue_fn(VarArgFunction__Argument* __this, bool* __retval);
void VarArgFunction__Argument__set_HasValue_fn(VarArgFunction__Argument* __this, bool* value);
void VarArgFunction__Argument__New1_fn(VarArgFunction__Argument** __retval);
void VarArgFunction__Argument__get_Value_fn(VarArgFunction__Argument* __this, uObject** __retval);
void VarArgFunction__Argument__set_Value_fn(VarArgFunction__Argument* __this, uObject* value);

struct VarArgFunction__Argument : uObject
{
    uStrong<uObject*> Subscription;
    bool _HasValue;
    uStrong<uObject*> _Value;

    void ctor_();
    void Dispose();
    bool HasValue();
    void HasValue(bool value);
    uObject* Value();
    void Value(uObject* value);
    static VarArgFunction__Argument* New1();
};
// }

}}} // ::g::Fuse::Reactive
