// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Scripting.V8/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ScriptException;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal static extern class ScriptException :1269
// {
uClassType* ScriptException_typeof();
void ScriptException__Release_fn(::JSContext** context, ::JSScriptException** e);

struct ScriptException : uObject
{
    static void Release(::JSContext* context, ::JSScriptException* e);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
