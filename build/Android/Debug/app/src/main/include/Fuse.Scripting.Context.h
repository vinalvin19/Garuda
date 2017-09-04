// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public interfacemodifiers class Context :83
// {
struct Context_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Fuse::Scripting::Context*);
    void(*fp_Evaluate)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**);
};

Context_type* Context_typeof();
void Context__get_Dispatcher_fn(Context* __this, uObject** __retval);
void Context__Invoke_fn(Context* __this, uDelegate* action);
void Context__NewArray_fn(Context* __this, uArray* values, ::g::Fuse::Scripting::Array** __retval);
void Context__NewObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval);
void Context__get_Observable_fn(Context* __this, ::g::Fuse::Scripting::Function** __retval);
void Context__ParseJson_fn(Context* __this, uString* json, uObject** __retval);
void Context__Unwrap_fn(Context* __this, uObject* obj, uObject** __retval);
void Context__Wrap_fn(Context* __this, uObject* obj, uObject** __retval);

struct Context : uObject
{
    uStrong< ::g::Fuse::Scripting::Function*> _newArray;
    uStrong< ::g::Fuse::Scripting::Function*> _newObject;
    uStrong< ::g::Fuse::Scripting::Function*> _parseJson;
    uStrong<uObject*> _worker;

    uObject* Dispatcher();
    void Dispose() { (((Context_type*)__type)->fp_Dispose)(this); }
    uObject* Evaluate(uString* fileName, uString* code) { uObject* __retval; return (((Context_type*)__type)->fp_Evaluate)(this, fileName, code, &__retval), __retval; }
    void Invoke(uDelegate* action);
    ::g::Fuse::Scripting::Array* NewArray(uArray* values);
    ::g::Fuse::Scripting::Object* NewObject();
    ::g::Fuse::Scripting::Function* Observable();
    uObject* ParseJson(uString* json);
    uObject* Unwrap(uObject* obj);
    uObject* Wrap(uObject* obj);
};
// }

}}} // ::g::Fuse::Scripting
