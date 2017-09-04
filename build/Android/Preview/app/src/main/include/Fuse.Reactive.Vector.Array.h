// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct Vector__Array;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Vector.Array :2259
// {
struct Vector__Array_type : uType
{
    ::g::Fuse::IArray interface0;
};

Vector__Array_type* Vector__Array_typeof();
void Vector__Array__ctor__fn(Vector__Array* __this, uArray* args);
void Vector__Array__FuseIArrayget_Item_fn(Vector__Array* __this, int* index, uObject** __retval);
void Vector__Array__FuseIArrayget_Length_fn(Vector__Array* __this, int* __retval);
void Vector__Array__New1_fn(uArray* args, Vector__Array** __retval);
void Vector__Array__ToString_fn(Vector__Array* __this, uString** __retval);

struct Vector__Array : uObject
{
    uStrong<uArray*> _items;

    void ctor_(uArray* args);
    static Vector__Array* New1(uArray* args);
};
// }

}}} // ::g::Fuse::Reactive
