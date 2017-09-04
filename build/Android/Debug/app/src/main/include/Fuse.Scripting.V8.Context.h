// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Scripting.V8/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Context.h>
#include <include/V8Simple.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Function;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// public sealed extern class Context :95
// {
::g::Fuse::Scripting::Context_type* Context_typeof();
void Context__Dispose_fn(Context* __this);
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval);
void Context__ThrowPendingExceptions_fn(Context* __this);

struct Context : ::g::Fuse::Scripting::Context
{
    uStrong< ::g::Uno::Exception*> _cachedException;
    ::JSContext* _context;
    uStrong<uDelegate*> _errorHandler;
    uStrong< ::g::Fuse::Scripting::V8::Function*> _instanceOf;
    int _vmDepth;

    void ThrowPendingExceptions();
};
// }

}}}} // ::g::Fuse::Scripting::V8
