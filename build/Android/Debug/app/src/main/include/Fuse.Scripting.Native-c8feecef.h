// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.NativeMember.h>
namespace g{namespace Fuse{namespace Scripting{struct NativeProperty;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public class NativeProperty<T, TJSValue> :1425
// {
uType* NativeProperty_typeof();
void NativeProperty__ctor_1_fn(NativeProperty* __this, uString* name);
void NativeProperty__ctor_2_fn(NativeProperty* __this, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter);
void NativeProperty__ctor_3_fn(NativeProperty* __this, uString* name, void* value);
void NativeProperty__New2_fn(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter, NativeProperty** __retval);
void NativeProperty__New3_fn(uType* __type, uString* name, void* value, NativeProperty** __retval);

struct NativeProperty : ::g::Fuse::Scripting::NativeMember
{
    uStrong<uDelegate*> _getHandler;
    bool _isReadonly;
    uTField _readonlyValue() { return __type->Field(this, 4); }
    uStrong<uDelegate*> _setHandler;
    uStrong<uDelegate*> _valueConverter;

    void ctor_1(uString* name);
    void ctor_2(uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter);
    template<class TJSValue>
    void ctor_3(uString* name, TJSValue value) { NativeProperty__ctor_3_fn(this, name, uConstrain(__type->GetBase(NativeProperty_typeof())->T(1), value)); }
    static NativeProperty* New2(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter);
    template<class TJSValue>
    static NativeProperty* New3(uType* __type, uString* name, TJSValue value) { NativeProperty* __retval; return NativeProperty__New3_fn(__type, name, uConstrain(__type->T(1), value), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
